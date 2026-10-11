
#include "xom_wifi.h"

#include <stdlib.h>
#include <string.h>

#include "esp_check.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_netif.h"
#include "esp_timer.h"
#include "esp_wifi.h"

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"

static const char *TAG = "xom_wifi";

#define CONNECT_TIMEOUT_US (20ULL * 1000000ULL)
#define BACKOFF_MIN_MS 1000
#define BACKOFF_MAX_MS 16000
#define MAX_RETRY 5

static SemaphoreHandle_t s_lock;
static bool s_inited;
static bool s_started;

static esp_netif_t *s_netif;
static esp_event_handler_instance_t s_wifi_evt;
static esp_event_handler_instance_t s_ip_evt;

static esp_timer_handle_t s_timeout_timer;
static esp_timer_handle_t s_backoff_timer;

static xom_wifi_status_t s_status;
static xom_wifi_ap_t s_scan[XOM_WIFI_MAX_SCAN];

static uint16_t s_scan_count;
static bool s_scanning;
static bool s_scan_done;
static bool s_scan_failed;
static bool s_scan_pending;
static uint32_t s_scan_epoch;

static xom_wifi_ap_t s_selected;
static bool s_selected_valid;

static char s_creds_ssid[XOM_WIFI_SSID_MAX];
static char s_creds_pass[64];
static bool s_have_config;

static int s_generation;
static int s_retry_count;
static int s_scheduled_generation;

static bool s_abort_attempt;

/*
 * New:
 * When switching APs, wait for DISCONNECTED before
 * configuring and connecting to the new AP.
 */
static bool s_switch_pending;

static xom_wifi_ap_t s_scratch[XOM_WIFI_MAX_SCAN];

static xom_wifi_status_cb_t s_status_cb;
static void *s_status_cb_user;

static void lock(void)
{
    xSemaphoreTake(s_lock, portMAX_DELAY);
}

static void unlock(void)
{
    xSemaphoreGive(s_lock);
}

static esp_err_t do_scan(void);
static esp_err_t connect_current_config(void);

static void notify_status(bool connected)
{
    xom_wifi_status_cb_t cb = s_status_cb;

    if (cb != NULL) {
        cb(connected, s_status_cb_user);
    }
}

static void stop_attempt_timers(void)
{
    if (s_timeout_timer != NULL) {
        esp_timer_stop(s_timeout_timer);
    }

    if (s_backoff_timer != NULL) {
        esp_timer_stop(s_backoff_timer);
    }
}

static void start_attempt_timeout(void)
{
    if (s_timeout_timer == NULL) {
        return;
    }

    esp_timer_stop(s_timeout_timer);

    esp_err_t err = esp_timer_start_once(
        s_timeout_timer,
        CONNECT_TIMEOUT_US
    );

    if (err != ESP_OK) {
        ESP_LOGW(
            TAG,
            "start connection timeout failed: %s",
            esp_err_to_name(err)
        );
    }
}

static void fill_ip_info(void)
{
    if (s_netif == NULL) {
        return;
    }

    char ip[XOM_WIFI_IP_MAX] = {0};
    char mask[XOM_WIFI_IP_MAX] = {0};
    char gw[XOM_WIFI_IP_MAX] = {0};
    char dns[XOM_WIFI_IP_MAX] = {0};

    esp_netif_ip_info_t info = {0};

    if (esp_netif_get_ip_info(s_netif, &info) == ESP_OK) {
        esp_ip4addr_ntoa(
            &info.ip,
            ip,
            sizeof(ip)
        );

        esp_ip4addr_ntoa(
            &info.netmask,
            mask,
            sizeof(mask)
        );

        esp_ip4addr_ntoa(
            &info.gw,
            gw,
            sizeof(gw)
        );
    }

    esp_netif_dns_info_t dns_info = {0};

    esp_err_t dns_err = esp_netif_get_dns_info(
        s_netif,
        ESP_NETIF_DNS_MAIN,
        &dns_info
    );

    if (dns_err == ESP_OK &&
        dns_info.ip.type == ESP_IPADDR_TYPE_V4) {

        esp_ip4addr_ntoa(
            &dns_info.ip.u_addr.ip4,
            dns,
            sizeof(dns)
        );
    } else {
        ESP_LOGW(
            TAG,
            "DNS read failed or non-IPv4 DNS: %s",
            esp_err_to_name(dns_err)
        );
    }

    ESP_LOGI(
        TAG,
        "NETWORK IP=%s GATEWAY=%s DNS=%s",
        ip,
        gw,
        dns[0] != '\0' ? dns : "(unavailable)"
    );

    int8_t rssi = 0;
    wifi_ap_record_t ap = {0};

    if (esp_wifi_sta_get_ap_info(&ap) == ESP_OK) {
        rssi = ap.rssi;
    }

    lock();

    snprintf(
        s_status.ip,
        sizeof(s_status.ip),
        "%s",
        ip
    );

    snprintf(
        s_status.netmask,
        sizeof(s_status.netmask),
        "%s",
        mask
    );

    snprintf(
        s_status.gateway,
        sizeof(s_status.gateway),
        "%s",
        gw
    );

    snprintf(
        s_status.dns,
        sizeof(s_status.dns),
        "%s",
        dns
    );

    s_status.rssi = rssi;

    unlock();
}

/*
 * Shared connection starter.
 *
 * Used:
 * - on first connection
 * - after the old AP disconnects
 * - on explicit network changes
 *
 * Does not modify credentials.
 */
static esp_err_t connect_current_config(void)
{
    wifi_config_t cfg = {0};
    char ssid[XOM_WIFI_SSID_MAX] = {0};
    char password[64] = {0};

    lock();

    bool enabled = s_status.enabled;
    bool have_config = s_have_config;

    snprintf(
        ssid,
        sizeof(ssid),
        "%s",
        s_creds_ssid
    );

    snprintf(
        password,
        sizeof(password),
        "%s",
        s_creds_pass
    );

    unlock();

    if (!enabled || !have_config || ssid[0] == '\0') {
        return ESP_ERR_INVALID_STATE;
    }

    strncpy(
        (char *)cfg.sta.ssid,
        ssid,
        sizeof(cfg.sta.ssid) - 1
    );

    strncpy(
        (char *)cfg.sta.password,
        password,
        sizeof(cfg.sta.password) - 1
    );

    /*
     * Keep compatibility with WPA2 and WPA3 APs.
     * PMF remains optional for mixed-mode networks.
     */
    cfg.sta.threshold.authmode = WIFI_AUTH_WPA2_PSK;
    cfg.sta.pmf_cfg.capable = true;
    cfg.sta.pmf_cfg.required = false;
    cfg.sta.scan_method = WIFI_ALL_CHANNEL_SCAN;

    esp_err_t err = esp_wifi_set_config(
        WIFI_IF_STA,
        &cfg
    );

    if (err != ESP_OK) {
        ESP_LOGE(
            TAG,
            "set_config failed: %s",
            esp_err_to_name(err)
        );

        lock();
        s_status.state = XOM_WIFI_STATE_FAILED;
        s_status.retrying = false;
        unlock();

        return err;
    }

    ESP_LOGI(
        TAG,
        "connecting to %s",
        ssid
    );

    err = esp_wifi_connect();

    if (err == ESP_ERR_WIFI_CONN) {
        /*
         * Driver may already be connecting.
         * Leave the active attempt running.
         */
        ESP_LOGW(
            TAG,
            "Wi-Fi driver already has connection attempt"
        );

        err = ESP_OK;
    }

    if (err != ESP_OK) {
        ESP_LOGE(
            TAG,
            "esp_wifi_connect failed: %s",
            esp_err_to_name(err)
        );

        lock();
        s_status.state = XOM_WIFI_STATE_FAILED;
        s_status.retrying = false;
        unlock();

        return err;
    }

    lock();

    s_status.state = XOM_WIFI_STATE_CONNECTING;
    s_status.retrying = false;

    unlock();

    start_attempt_timeout();

    return ESP_OK;
}

static void schedule_backoff(int retry_index)
{
    if (s_backoff_timer == NULL) {
        return;
    }

    if (retry_index < 1) {
        retry_index = 1;
    }

    int delay_ms = BACKOFF_MIN_MS;

    for (int i = 1; i < retry_index; i++) {
        if (delay_ms >= BACKOFF_MAX_MS) {
            break;
        }

        delay_ms *= 2;
    }

    if (delay_ms > BACKOFF_MAX_MS) {
        delay_ms = BACKOFF_MAX_MS;
    }

    lock();
    s_scheduled_generation = s_generation;
    unlock();

    esp_timer_stop(s_backoff_timer);

    esp_err_t err = esp_timer_start_once(
        s_backoff_timer,
        (uint64_t)delay_ms * 1000ULL
    );

    if (err != ESP_OK) {
        ESP_LOGE(
            TAG,
            "backoff timer failed: %s",
            esp_err_to_name(err)
        );
        return;
    }

    ESP_LOGI(
        TAG,
        "retry %d/%d in %d ms",
        retry_index,
        MAX_RETRY,
        delay_ms
    );
}

static void backoff_cb(void *arg)
{
    (void)arg;

    bool go;

    lock();

    go = s_status.enabled &&
         s_have_config &&
         !s_switch_pending &&
         s_scheduled_generation == s_generation &&
         !s_status.have_ip;

    if (go) {
        s_status.state = XOM_WIFI_STATE_CONNECTING;
    }

    unlock();

    if (!go) {
        return;
    }

    /*
     * Retry existing Wi-Fi configuration.
     * No need to call set_config again.
     */
    esp_err_t err = esp_wifi_connect();

    if (err == ESP_OK || err == ESP_ERR_WIFI_CONN) {
        start_attempt_timeout();
        return;
    }

    ESP_LOGW(
        TAG,
        "retry esp_wifi_connect failed: %s",
        esp_err_to_name(err)
    );

    /*
     * Avoid leaving UI forever in CONNECTING
     * when the driver rejected the operation.
     */
    lock();
    s_status.state = XOM_WIFI_STATE_FAILED;
    s_status.retrying = false;
    unlock();
}

static void timeout_cb(void *arg)
{
    (void)arg;

    bool abort_now = false;

    lock();

    if (s_status.enabled &&
        s_status.state == XOM_WIFI_STATE_CONNECTING &&
        !s_switch_pending) {

        s_abort_attempt = true;
        abort_now = true;
    }

    unlock();

    if (!abort_now) {
        return;
    }

    ESP_LOGW(
        TAG,
        "Wi-Fi connect timeout, aborting attempt"
    );

    esp_err_t err = esp_wifi_disconnect();

    if (err != ESP_OK) {
        ESP_LOGW(
            TAG,
            "timeout disconnect failed: %s",
            esp_err_to_name(err)
        );

        lock();
        s_abort_attempt = false;
        unlock();
    }
}

static void handle_disconnected(int reason)
{
    if (s_timeout_timer != NULL) {
        esp_timer_stop(s_timeout_timer);
    }

    bool enabled;
    bool have_config;
    bool abort_attempt;
    bool switching;

    lock();

    enabled = s_status.enabled;
    have_config = s_have_config;
    abort_attempt = s_abort_attempt;
    switching = s_switch_pending;

    s_abort_attempt = false;

    s_status.have_ip = false;
    s_status.rssi = 0;

    s_status.ip[0] = '\0';
    s_status.netmask[0] = '\0';
    s_status.gateway[0] = '\0';
    s_status.dns[0] = '\0';

    s_status.last_reason = reason;

    /*
     * Switching networks is a deliberate disconnect.
     * Do NOT run normal reconnect/backoff handling here.
     */
    if (switching) {
        s_switch_pending = false;
        s_status.state = XOM_WIFI_STATE_CONNECTING;
        s_status.retrying = false;
        s_retry_count = 0;

        unlock();

        ESP_LOGI(
            TAG,
            "previous AP disconnected; connecting selected AP"
        );

        notify_status(false);

        esp_err_t err = connect_current_config();

        if (err != ESP_OK) {
            ESP_LOGE(
                TAG,
                "network switch failed: %s",
                esp_err_to_name(err)
            );
        }

        return;
    }

    if (!enabled) {
        s_status.state = XOM_WIFI_STATE_DISABLED;
        s_status.retrying = false;
        s_retry_count = 0;

        unlock();

        notify_status(false);
        return;
    }

    if (!have_config) {
        s_status.state = XOM_WIFI_STATE_IDLE;
        s_status.retrying = false;
        s_retry_count = 0;

        unlock();

        notify_status(false);
        return;
    }

    /*
     * Do not interpret every ASSOC_LEAVE as
     * a permanent user-requested disconnect.
     *
     * Explicit network switching and Wi-Fi off
     * are already handled above.
     */

    if (!abort_attempt &&
        reason == WIFI_REASON_NO_AP_FOUND_W_COMPATIBLE_SECURITY) {

        s_status.state = XOM_WIFI_STATE_FAILED;
        s_status.retrying = false;
        s_retry_count = 0;

        unlock();

        notify_status(false);

        ESP_LOGW(
            TAG,
            "AP security incompatible, reason=%d",
            reason
        );

        return;
    }

    if (!abort_attempt &&
        xom_wifi_is_credential_error(reason)) {

        s_status.state = XOM_WIFI_STATE_FAILED;
        s_status.retrying = false;
        s_retry_count = 0;

        unlock();

        notify_status(false);

        ESP_LOGW(
            TAG,
            "credential error, reason=%d",
            reason
        );

        return;
    }

    if (s_retry_count < MAX_RETRY) {
        s_retry_count++;

        int retry = s_retry_count;

        s_status.state = XOM_WIFI_STATE_DISCONNECTED;
        s_status.retrying = true;

        unlock();

        notify_status(false);

        ESP_LOGW(
            TAG,
            "disconnected reason=%d, retry=%d/%d",
            reason,
            retry,
            MAX_RETRY
        );

        schedule_backoff(retry);

        return;
    }

    s_status.state = XOM_WIFI_STATE_FAILED;
    s_status.retrying = false;
    s_retry_count = 0;

    unlock();

    notify_status(false);

    ESP_LOGW(
        TAG,
        "Wi-Fi retries exhausted, reason=%d",
        reason
    );
}

static void handle_scan_done(void)
{
    uint16_t ap_num = 0;

    esp_wifi_scan_get_ap_num(&ap_num);

    uint16_t fetch = ap_num;

    if (fetch > XOM_WIFI_SCAN_FETCH) {
        fetch = XOM_WIFI_SCAN_FETCH;
    }

    int kept = 0;

    if (fetch > 0) {
        wifi_ap_record_t *recs = malloc(
            sizeof(wifi_ap_record_t) * fetch
        );

        if (recs != NULL) {
            uint16_t n = fetch;

            if (esp_wifi_scan_get_ap_records(
                    &n,
                    recs
                ) == ESP_OK) {

                for (uint16_t i = 0; i < n; i++) {
                    if (recs[i].ssid[0] == '\0') {
                        continue;
                    }

                    int found = -1;

                    for (int k = 0; k < kept; k++) {
                        if (strncmp(
                                s_scratch[k].ssid,
                                (const char *)recs[i].ssid,
                                XOM_WIFI_SSID_MAX - 1
                            ) == 0) {

                            found = k;
                            break;
                        }
                    }

                    if (found >= 0) {
                        if (recs[i].rssi >
                            s_scratch[found].rssi) {

                            s_scratch[found].rssi =
                                recs[i].rssi;

                            s_scratch[found].auth =
                                recs[i].authmode;

                            s_scratch[found].channel =
                                recs[i].primary;
                        }
                    } else if (kept < XOM_WIFI_MAX_SCAN) {
                        strncpy(
                            s_scratch[kept].ssid,
                            (const char *)recs[i].ssid,
                            XOM_WIFI_SSID_MAX - 1
                        );

                        s_scratch[kept].ssid[
                            XOM_WIFI_SSID_MAX - 1
                        ] = '\0';

                        s_scratch[kept].rssi =
                            recs[i].rssi;

                        s_scratch[kept].auth =
                            recs[i].authmode;

                        s_scratch[kept].channel =
                            recs[i].primary;

                        kept++;
                    }
                }
            }

            free(recs);
        } else {
            esp_wifi_clear_ap_list();

            ESP_LOGW(
                TAG,
                "scan allocation failed"
            );
        }
    }

    /*
     * Selection sort, strongest RSSI first.
     */
    for (int i = 0; i < kept; i++) {
        int best = i;

        for (int k = i + 1; k < kept; k++) {
            if (s_scratch[k].rssi >
                s_scratch[best].rssi) {

                best = k;
            }
        }

        if (best != i) {
            xom_wifi_ap_t tmp = s_scratch[i];

            s_scratch[i] = s_scratch[best];
            s_scratch[best] = tmp;
        }
    }

    lock();

    memcpy(
        s_scan,
        s_scratch,
        sizeof(xom_wifi_ap_t) * (size_t)kept
    );

    s_scan_count = (uint16_t)kept;
    s_scanning = false;
    s_scan_done = true;
    s_scan_failed = false;
    s_scan_epoch++;

    if (!s_status.have_ip &&
        s_status.state != XOM_WIFI_STATE_CONNECTING) {

        s_status.state = s_status.enabled
            ? XOM_WIFI_STATE_IDLE
            : XOM_WIFI_STATE_DISABLED;
    }

    unlock();

    ESP_LOGI(
        TAG,
        "scan done: %u networks (%u found)",
        (unsigned)kept,
        (unsigned)ap_num
    );
}

static void wifi_event_handler(
    void *arg,
    esp_event_base_t base,
    int32_t id,
    void *data
)
{
    (void)arg;
    (void)base;

    switch (id) {
        case WIFI_EVENT_STA_START: {
            lock();

            if (s_status.state !=
                XOM_WIFI_STATE_CONNECTING) {

                s_status.state = s_status.enabled
                    ? XOM_WIFI_STATE_IDLE
                    : XOM_WIFI_STATE_DISABLED;
            }

            bool scan_pending = s_scan_pending;
            s_scan_pending = false;

            unlock();

            if (scan_pending) {
                do_scan();
            }

            break;
        }

        case WIFI_EVENT_STA_CONNECTED:
            lock();

            s_status.state = XOM_WIFI_STATE_CONNECTING;

            unlock();
            break;

        case WIFI_EVENT_STA_DISCONNECTED: {
            wifi_event_sta_disconnected_t *evt =
                (wifi_event_sta_disconnected_t *)data;

            handle_disconnected(evt->reason);

            break;
        }

        case WIFI_EVENT_SCAN_DONE:
            handle_scan_done();
            break;

        default:
            break;
    }
}

static void ip_event_handler(
    void *arg,
    esp_event_base_t base,
    int32_t id,
    void *data
)
{
    (void)arg;
    (void)base;
    (void)data;

    if (id != IP_EVENT_STA_GOT_IP) {
        return;
    }

    if (s_timeout_timer != NULL) {
        esp_timer_stop(s_timeout_timer);
    }

    if (s_backoff_timer != NULL) {
        esp_timer_stop(s_backoff_timer);
    }

    lock();

    s_status.have_ip = true;
    s_status.state = XOM_WIFI_STATE_CONNECTED;
    s_status.retrying = false;

    s_retry_count = 0;
    s_abort_attempt = false;
    s_switch_pending = false;

    unlock();

    fill_ip_info();

    notify_status(true);

    ESP_LOGI(
        TAG,
        "connected, got IP (state=CONNECTED)"
    );
}

static esp_err_t ensure_started(void)
{
    if (s_started) {
        return ESP_OK;
    }

    esp_err_t err = esp_wifi_start();

    if (err != ESP_OK) {
        ESP_LOGE(
            TAG,
            "esp_wifi_start failed: %s",
            esp_err_to_name(err)
        );

        return err;
    }

    s_started = true;

    uint8_t mac[6] = {0};

    if (esp_wifi_get_mac(
            WIFI_IF_STA,
            mac
        ) == ESP_OK) {

        lock();

        memcpy(
            s_status.mac,
            mac,
            sizeof(mac)
        );

        unlock();
    }

    return ESP_OK;
}

static esp_err_t do_connect(
    const char *ssid,
    const char *password
)
{
    if (ssid == NULL || ssid[0] == '\0') {
        return ESP_ERR_INVALID_ARG;
    }

    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    esp_err_t err = ensure_started();

    if (err != ESP_OK) {
        return err;
    }

    /*
     * Take the previous state BEFORE updating it.
     */
    lock();

    bool was_connected = s_status.have_ip;

    bool was_connecting =
        s_status.state == XOM_WIFI_STATE_CONNECTING;

    s_generation++;
    s_retry_count = 0;
    s_abort_attempt = false;

    s_status.enabled = true;

    snprintf(
        s_creds_ssid,
        sizeof(s_creds_ssid),
        "%s",
        ssid
    );

    snprintf(
        s_creds_pass,
        sizeof(s_creds_pass),
        "%s",
        password != NULL ? password : ""
    );

    s_have_config = true;

    snprintf(
        s_status.ssid,
        sizeof(s_status.ssid),
        "%s",
        ssid
    );

    s_status.state = XOM_WIFI_STATE_CONNECTING;
    s_status.retrying = false;
    s_status.last_reason = 0;

    /*
     * Defer the new connection until the previous
     * connection has actually disconnected.
     */
    bool need_disconnect =
        was_connected ||
        was_connecting ||
        s_switch_pending;

    s_switch_pending = need_disconnect;

    unlock();

    stop_attempt_timers();

    ESP_LOGI(
        TAG,
        "connect requested: SSID=%s switch=%d",
        ssid,
        (int)need_disconnect
    );

    if (need_disconnect) {
        /*
         * Do not call esp_wifi_connect immediately.
         * WIFI_EVENT_STA_DISCONNECTED will start it.
         */
        err = esp_wifi_disconnect();

        if (err == ESP_OK) {
            ESP_LOGI(
                TAG,
                "waiting for old AP to disconnect"
            );

            return ESP_OK;
        }

        ESP_LOGW(
            TAG,
            "disconnect returned %s; trying direct connect",
            esp_err_to_name(err)
        );

        lock();
        s_switch_pending = false;
        unlock();
    }

    return connect_current_config();
}

esp_err_t xom_wifi_init(void)
{
    if (s_inited) {
        return ESP_OK;
    }

    s_lock = xSemaphoreCreateMutex();

    if (s_lock == NULL) {
        return ESP_ERR_NO_MEM;
    }

    ESP_RETURN_ON_ERROR(
        esp_netif_init(),
        TAG,
        "esp_netif_init failed"
    );

    esp_err_t err =
        esp_event_loop_create_default();

    if (err != ESP_OK &&
        err != ESP_ERR_INVALID_STATE) {

        ESP_LOGE(
            TAG,
            "event loop create failed: %s",
            esp_err_to_name(err)
        );

        return err;
    }

    s_netif = esp_netif_create_default_wifi_sta();

    if (s_netif == NULL) {
        ESP_LOGE(
            TAG,
            "create_default_wifi_sta failed"
        );

        return ESP_FAIL;
    }

    wifi_init_config_t wcfg =
        WIFI_INIT_CONFIG_DEFAULT();

    ESP_RETURN_ON_ERROR(
        esp_wifi_init(&wcfg),
        TAG,
        "esp_wifi_init failed"
    );

    ESP_RETURN_ON_ERROR(
        esp_event_handler_instance_register(
            WIFI_EVENT,
            ESP_EVENT_ANY_ID,
            wifi_event_handler,
            NULL,
            &s_wifi_evt
        ),
        TAG,
        "register wifi handler failed"
    );

    ESP_RETURN_ON_ERROR(
        esp_event_handler_instance_register(
            IP_EVENT,
            IP_EVENT_STA_GOT_IP,
            ip_event_handler,
            NULL,
            &s_ip_evt
        ),
        TAG,
        "register IP handler failed"
    );

    ESP_RETURN_ON_ERROR(
        esp_wifi_set_storage(WIFI_STORAGE_RAM),
        TAG,
        "set_storage failed"
    );

    ESP_RETURN_ON_ERROR(
        esp_wifi_set_mode(WIFI_MODE_STA),
        TAG,
        "set_mode failed"
    );

    const esp_timer_create_args_t timeout_args = {
        .callback = timeout_cb,
        .name = "wifi_timeout",
    };

    ESP_RETURN_ON_ERROR(
        esp_timer_create(
            &timeout_args,
            &s_timeout_timer
        ),
        TAG,
        "create timeout timer failed"
    );

    const esp_timer_create_args_t backoff_args = {
        .callback = backoff_cb,
        .name = "wifi_backoff",
    };

    ESP_RETURN_ON_ERROR(
        esp_timer_create(
            &backoff_args,
            &s_backoff_timer
        ),
        TAG,
        "create backoff timer failed"
    );

    lock();

    memset(
        &s_status,
        0,
        sizeof(s_status)
    );

    s_status.state = XOM_WIFI_STATE_DISABLED;

    s_switch_pending = false;
    s_abort_attempt = false;

    unlock();

    s_inited = true;

    ESP_LOGI(
        TAG,
        "Wi-Fi manager ready"
    );

    return ESP_OK;
}

esp_err_t xom_wifi_set_enabled(bool enabled)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    if (enabled) {
        lock();
        s_status.enabled = true;
        unlock();

        esp_err_t err = ensure_started();

        if (err != ESP_OK) {
            return err;
        }

        lock();

        if (s_status.state ==
            XOM_WIFI_STATE_DISABLED) {

            s_status.state = XOM_WIFI_STATE_IDLE;
        }

        unlock();

        ESP_LOGI(TAG, "Wi-Fi enabled");

        return ESP_OK;
    }

    lock();

    s_generation++;
    s_abort_attempt = false;
    s_switch_pending = false;

    s_status.enabled = false;
    s_status.state = XOM_WIFI_STATE_DISABLED;

    s_status.have_ip = false;
    s_status.retrying = false;
    s_status.rssi = 0;

    s_status.ip[0] = '\0';
    s_status.netmask[0] = '\0';
    s_status.gateway[0] = '\0';
    s_status.dns[0] = '\0';

    s_retry_count = 0;

    unlock();

    stop_attempt_timers();

    if (s_started) {
        esp_wifi_disconnect();
        esp_wifi_stop();

        s_started = false;
    }

    notify_status(false);

    ESP_LOGI(TAG, "Wi-Fi disabled");

    return ESP_OK;
}

bool xom_wifi_is_enabled(void)
{
    if (!s_inited) {
        return false;
    }

    lock();
    bool enabled = s_status.enabled;
    unlock();

    return enabled;
}

static esp_err_t do_scan(void)
{
    wifi_scan_config_t cfg = {0};

    cfg.show_hidden = false;

    esp_err_t err = esp_wifi_scan_start(
        &cfg,
        false
    );

    if (err != ESP_OK) {
        lock();

        s_scanning = false;
        s_scan_failed = true;
        s_scan_done = true;
        s_scan_epoch++;

        unlock();

        ESP_LOGW(
            TAG,
            "scan start failed: %s",
            esp_err_to_name(err)
        );
    }

    return err;
}

esp_err_t xom_wifi_scan_start(void)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    lock();

    bool busy = s_scanning;

    if (!busy) {
        s_scanning = true;
        s_scan_done = false;
        s_scan_failed = false;
    }

    bool enabled = s_status.enabled;

    unlock();

    if (busy) {
        return ESP_ERR_INVALID_STATE;
    }

    /*
     * If Wi-Fi is disabled, turn it on and
     * defer the scan until STA_START.
     */
    if (!enabled) {
        lock();
        s_scan_pending = true;
        unlock();

        esp_err_t err =
            xom_wifi_set_enabled(true);

        if (err != ESP_OK) {
            lock();

            s_scan_pending = false;
            s_scanning = false;
            s_scan_failed = true;
            s_scan_done = true;
            s_scan_epoch++;

            unlock();

            ESP_LOGW(
                TAG,
                "cannot scan: %s",
                esp_err_to_name(err)
            );
        }

        return err;
    }

    return do_scan();
}

esp_err_t xom_wifi_select(const xom_wifi_ap_t *ap)
{
    if (ap == NULL || !s_inited) {
        return ESP_ERR_INVALID_ARG;
    }

    lock();

    s_selected = *ap;
    s_selected_valid = true;

    unlock();

    return ESP_OK;
}

bool xom_wifi_get_selected(xom_wifi_ap_t *out)
{
    if (out == NULL || !s_inited) {
        return false;
    }

    lock();

    bool valid = s_selected_valid;

    if (valid) {
        *out = s_selected;
    }

    unlock();

    return valid;
}

esp_err_t xom_wifi_connect(
    const char *ssid,
    const char *password
)
{
    return do_connect(ssid, password);
}

esp_err_t xom_wifi_connect_selected(
    const char *password
)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    xom_wifi_ap_t ap = {0};
    bool valid;

    lock();

    valid = s_selected_valid;

    if (valid) {
        ap = s_selected;
    }

    unlock();

    if (!valid) {
        return ESP_ERR_INVALID_STATE;
    }

    return do_connect(ap.ssid, password);
}

void xom_wifi_get_status(xom_wifi_status_t *out)
{
    if (out == NULL) {
        return;
    }

    if (!s_inited) {
        memset(out, 0, sizeof(*out));
        out->state = XOM_WIFI_STATE_DISABLED;
        return;
    }

    lock();
    *out = s_status;
    unlock();
}

void xom_wifi_get_scan_state(
    xom_wifi_scan_state_t *out
)
{
    if (out == NULL) {
        return;
    }

    if (!s_inited) {
        memset(out, 0, sizeof(*out));
        return;
    }

    lock();

    out->scanning = s_scanning;
    out->done = s_scan_done;
    out->failed = s_scan_failed;
    out->count = s_scan_count;
    out->epoch = s_scan_epoch;

    unlock();
}

int xom_wifi_get_scan_results(
    xom_wifi_ap_t *out,
    int max
)
{
    if (out == NULL ||
        max <= 0 ||
        !s_inited) {

        return 0;
    }

    lock();

    int n = s_scan_count;

    if (n > max) {
        n = max;
    }

    memcpy(
        out,
        s_scan,
        sizeof(xom_wifi_ap_t) * (size_t)n
    );

    unlock();

    return n;
}

esp_err_t xom_wifi_set_status_callback(
    xom_wifi_status_cb_t cb,
    void *user_data
)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    s_status_cb = cb;
    s_status_cb_user = user_data;

    return ESP_OK;
}

bool xom_wifi_auth_is_open(uint8_t auth)
{
    return auth == WIFI_AUTH_OPEN;
}

bool xom_wifi_is_credential_error(int reason)
{
    return reason == WIFI_REASON_AUTH_FAIL ||
           reason == WIFI_REASON_4WAY_HANDSHAKE_TIMEOUT ||
           reason == WIFI_REASON_HANDSHAKE_TIMEOUT ||
           reason == WIFI_REASON_AUTH_EXPIRE;
}

const char *xom_wifi_auth_label(uint8_t auth)
{
    switch (auth) {
        case WIFI_AUTH_OPEN:
            return "Mở";

        case WIFI_AUTH_WEP:
            return "WEP";

        case WIFI_AUTH_WPA_PSK:
            return "WPA";

        case WIFI_AUTH_WPA2_PSK:
            return "WPA2";

        case WIFI_AUTH_WPA_WPA2_PSK:
            return "WPA/WPA2";

        case WIFI_AUTH_WPA3_PSK:
            return "WPA3";

        case WIFI_AUTH_WPA2_WPA3_PSK:
            return "WPA2/WPA3";

        default:
            return "Bảo mật";
    }
}

const char *xom_wifi_state_label(
    xom_wifi_state_t state
)
{
    switch (state) {
        case XOM_WIFI_STATE_DISABLED:
            return "Đã tắt";

        case XOM_WIFI_STATE_IDLE:
            return "Chưa kết nối";

        case XOM_WIFI_STATE_SCANNING:
            return "Đang quét";

        case XOM_WIFI_STATE_CONNECTING:
            return "Đang kết nối";

        case XOM_WIFI_STATE_CONNECTED:
            return "Đã kết nối";

        case XOM_WIFI_STATE_DISCONNECTED:
            return "Mất kết nối";

        case XOM_WIFI_STATE_FAILED:
            return "Kết nối thất bại";

        default:
            return "Không rõ";
    }
}
