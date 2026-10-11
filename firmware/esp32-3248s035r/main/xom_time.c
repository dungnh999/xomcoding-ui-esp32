
#include "xom_time.h"
#include "xom_settings.h"
#include "xom_wifi.h"

#include "esp_err.h"
#include "esp_log.h"
#include "esp_sntp.h"
#include "esp_timer.h"

#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include "freertos/task.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <time.h>

static const char *TAG = "xom_time";

#define DEFAULT_TIMEZONE "Asia/Ho_Chi_Minh"
#define DEFAULT_NTP_SERVER "pool.ntp.org"

#define MIN_VALID_YEAR 2024

#define NTP_TIMEOUT_MS 30000
#define NTP_RETRY_DELAY_MS 10000
#define NTP_WORKER_PERIOD_MS 1000

#define NTP_WORKER_STACK 4096
#define NTP_WORKER_PRIORITY 4

#define NTP_SERVER_COUNT 3

static SemaphoreHandle_t s_lock = NULL;
static TaskHandle_t s_worker = NULL;

static xom_time_status_t s_st;

static bool s_inited = false;
static bool s_worker_stop = false;

static bool s_sntp_running = false;
static bool s_synced_once = false;

static bool s_restart_requested = false;
static bool s_force_refresh = false;

static uint32_t s_attempt_started_ms = 0;
static uint32_t s_next_retry_ms = 0;

static unsigned int s_server_index = 0;

/*
 * IMPORTANT:
 * Keep server name storage alive while SNTP is running.
 */
static char s_active_server[128];

static void time_lock(void)
{
    if (s_lock != NULL) {
        xSemaphoreTake(s_lock, portMAX_DELAY);
    }
}

static void time_unlock(void)
{
    if (s_lock != NULL) {
        xSemaphoreGive(s_lock);
    }
}

static uint32_t uptime_ms(void)
{
    return (uint32_t)(esp_timer_get_time() / 1000ULL);
}

static bool deadline_reached(uint32_t now, uint32_t deadline)
{
    return (int32_t)(now - deadline) >= 0;
}

static bool wifi_ready(void)
{
    xom_wifi_status_t wifi = {0};

    xom_wifi_get_status(&wifi);

    return wifi.state == XOM_WIFI_STATE_CONNECTED &&
           wifi.have_ip &&
           wifi.ip[0] != '\0';
}

static bool valid_system_time(time_t now)
{
    struct tm utc = {0};

    if (gmtime_r(&now, &utc) == NULL) {
        return false;
    }

    return utc.tm_year + 1900 >= MIN_VALID_YEAR;
}

const char *xom_time_posix_tz(const char *timezone)
{
    if (timezone == NULL ||
        timezone[0] == '\0' ||
        strcmp(timezone, "Asia/Ho_Chi_Minh") == 0) {
        return "ICT-7";
    }

    if (strcmp(timezone, "Asia/Bangkok") == 0) {
        return "ICT-7";
    }

    if (strcmp(timezone, "Asia/Singapore") == 0) {
        return "SGT-8";
    }

    if (strcmp(timezone, "Asia/Tokyo") == 0) {
        return "JST-9";
    }

    if (strcmp(timezone, "UTC") == 0) {
        return "UTC0";
    }

    return NULL;
}

/*
 * Caller must hold s_lock.
 */
static esp_err_t apply_tz_locked(const char *timezone)
{
    const char *posix = xom_time_posix_tz(timezone);

    if (posix == NULL) {
        return ESP_ERR_INVALID_ARG;
    }

    if (setenv("TZ", posix, 1) != 0) {
        return ESP_FAIL;
    }

    tzset();

    const char *selected =
        timezone != NULL && timezone[0] != '\0'
            ? timezone
            : DEFAULT_TIMEZONE;

    snprintf(
        s_st.timezone,
        sizeof(s_st.timezone),
        "%s",
        selected
    );

    ESP_LOGI(
        TAG,
        "Timezone applied: %s (%s)",
        s_st.timezone,
        posix
    );

    return ESP_OK;
}

/*
 * Caller must hold s_lock.
 */
static void update_status_locked(void)
{
    time_t now = time(NULL);
    struct tm local_tm = {0};

    if (localtime_r(&now, &local_tm) == NULL) {
        return;
    }

    s_st.epoch = now;
    s_st.tm_local = local_tm;

    bool valid = valid_system_time(now);

    /*
     * Only claim successful synchronization after
     * the SNTP callback has been received.
     */
    s_st.synced = s_synced_once && valid;

    if (s_st.synced) {
        s_st.state = XOM_TIME_SYNCED;

        strftime(
            s_st.iso8601,
            sizeof(s_st.iso8601),
            "%H:%M:%S %Y-%m-%d",
            &local_tm
        );
    } else {
        snprintf(
            s_st.iso8601,
            sizeof(s_st.iso8601),
            "%s",
            "--:--:--"
        );
    }
}

static void sntp_sync_cb(struct timeval *tv)
{
    (void)tv;

    char formatted[sizeof(s_st.iso8601)] = {0};

    time_lock();

    s_synced_once = true;
    s_st.state = XOM_TIME_SYNCED;
    s_st.last_sync_us = esp_timer_get_time();

    update_status_locked();

    snprintf(
        formatted,
        sizeof(formatted),
        "%s",
        s_st.iso8601
    );

    time_unlock();

    ESP_LOGI(
        TAG,
        "SNTP synced successfully, local=%s",
        formatted
    );
}

static void stop_sntp(void)
{
    if (!s_sntp_running) {
        return;
    }

    esp_sntp_stop();
    s_sntp_running = false;

    ESP_LOGI(TAG, "SNTP stopped");
}

static void choose_server(unsigned int index)
{
    char configured[sizeof(s_st.ntp_server)] = {0};

    time_lock();

    snprintf(
        configured,
        sizeof(configured),
        "%s",
        s_st.ntp_server
    );

    time_unlock();

    const char *server = DEFAULT_NTP_SERVER;

    switch (index % NTP_SERVER_COUNT) {
        case 0:
            server = configured[0] != '\0'
                ? configured
                : DEFAULT_NTP_SERVER;
            break;

        case 1:
            server = "time.google.com";
            break;

        case 2:
            server = "time.cloudflare.com";
            break;

        default:
            break;
    }

    snprintf(
        s_active_server,
        sizeof(s_active_server),
        "%s",
        server
    );
}

/*
 * Called from dedicated FreeRTOS worker.
 * Never called directly from LVGL.
 */
static void start_sntp_attempt(void)
{
    if (!wifi_ready()) {
        return;
    }

    bool enabled;

    time_lock();
    enabled = s_st.ntp_enabled;
    time_unlock();

    if (!enabled) {
        return;
    }

    stop_sntp();

    choose_server(s_server_index);

    /*
     * Use one server slot to avoid relying on
     * CONFIG_LWIP_SNTP_MAX_SERVERS > 1.
     */
    esp_sntp_setoperatingmode(SNTP_OPMODE_POLL);

    esp_sntp_setservername(
        0,
        s_active_server
    );

    esp_sntp_set_time_sync_notification_cb(
        sntp_sync_cb
    );

    uint32_t now = uptime_ms();

    time_lock();

    s_attempt_started_ms = now;

    if (!s_synced_once) {
        s_st.state = XOM_TIME_SYNCING;
    }

    time_unlock();

    ESP_LOGI(
        TAG,
        "SNTP attempt started: server=%s",
        s_active_server
    );

    esp_sntp_init();
    s_sntp_running = true;
}

static void handle_sntp_timeout(uint32_t now)
{
    bool synced;

    time_lock();

    synced = s_synced_once;

    if (!synced) {
        s_st.state = XOM_TIME_ERROR;
    }

    time_unlock();

    ESP_LOGW(
        TAG,
        "SNTP timeout after %u ms, server=%s",
        (unsigned)NTP_TIMEOUT_MS,
        s_active_server
    );

    stop_sntp();

    s_server_index =
        (s_server_index + 1) % NTP_SERVER_COUNT;

    s_next_retry_ms = now + NTP_RETRY_DELAY_MS;

    ESP_LOGI(
        TAG,
        "Next SNTP retry in %u ms",
        (unsigned)NTP_RETRY_DELAY_MS
    );
}

static void ntp_worker(void *arg)
{
    (void)arg;

    ESP_LOGI(TAG, "SNTP worker started");

    while (true) {
        bool enabled;
        bool restart;
        bool force;
        bool synced;
        bool stopping;

        uint32_t now = uptime_ms();

        time_lock();

        stopping = s_worker_stop;

        enabled = s_st.ntp_enabled;
        restart = s_restart_requested;
        force = s_force_refresh;
        synced = s_synced_once;

        if (restart || force) {
            s_restart_requested = false;
            s_force_refresh = false;
        }

        update_status_locked();

        time_unlock();

        if (stopping) {
            break;
        }

        if (!enabled) {
            if (s_sntp_running) {
                stop_sntp();
            }

            vTaskDelay(
                pdMS_TO_TICKS(NTP_WORKER_PERIOD_MS)
            );

            continue;
        }

        if (!wifi_ready()) {
            /*
             * Keep valid synchronized time while offline.
             */
            if (s_sntp_running) {
                stop_sntp();
            }

            /*
             * Allow immediate retry when Wi-Fi returns.
             */
            s_next_retry_ms = 0;

            vTaskDelay(
                pdMS_TO_TICKS(NTP_WORKER_PERIOD_MS)
            );

            continue;
        }

        if (restart || force) {
            /*
             * User explicitly requested a refresh or
             * changed settings.
             */
            stop_sntp();

            s_server_index = 0;
            s_next_retry_ms = 0;

            start_sntp_attempt();
        } else if (!s_sntp_running) {
            if (s_next_retry_ms == 0 ||
                deadline_reached(now, s_next_retry_ms)) {

                s_next_retry_ms = 0;

                start_sntp_attempt();
            }
        } else if (!synced) {
            uint32_t elapsed =
                now - s_attempt_started_ms;

            if (elapsed >= NTP_TIMEOUT_MS) {
                handle_sntp_timeout(now);
            }
        }

        vTaskDelay(
            pdMS_TO_TICKS(NTP_WORKER_PERIOD_MS)
        );
    }

    stop_sntp();

    ESP_LOGI(TAG, "SNTP worker stopped");

    time_lock();
    s_worker = NULL;
    time_unlock();

    vTaskDelete(NULL);
}

esp_err_t xom_time_init(void)
{
    if (s_inited) {
        return ESP_OK;
    }

    s_lock = xSemaphoreCreateMutex();

    if (s_lock == NULL) {
        return ESP_ERR_NO_MEM;
    }

    memset(&s_st, 0, sizeof(s_st));

    xom_settings_t cfg = {0};

    esp_err_t err = xom_settings_load(&cfg);

    if (err != ESP_OK) {
        ESP_LOGW(
            TAG,
            "Settings load failed: %s",
            esp_err_to_name(err)
        );

        snprintf(
            cfg.timezone,
            sizeof(cfg.timezone),
            "%s",
            DEFAULT_TIMEZONE
        );

        snprintf(
            cfg.ntp_server,
            sizeof(cfg.ntp_server),
            "%s",
            DEFAULT_NTP_SERVER
        );

        cfg.ntp_enabled = true;
    }

    if (cfg.timezone[0] == '\0') {
        snprintf(
            cfg.timezone,
            sizeof(cfg.timezone),
            "%s",
            DEFAULT_TIMEZONE
        );
    }

    if (cfg.ntp_server[0] == '\0') {
        snprintf(
            cfg.ntp_server,
            sizeof(cfg.ntp_server),
            "%s",
            DEFAULT_NTP_SERVER
        );
    }

    time_lock();

    s_st.state = XOM_TIME_UNSYNCED;

    err = apply_tz_locked(cfg.timezone);

    if (err != ESP_OK) {
        err = apply_tz_locked(DEFAULT_TIMEZONE);
    }

    snprintf(
        s_st.ntp_server,
        sizeof(s_st.ntp_server),
        "%s",
        cfg.ntp_server
    );

    s_st.ntp_enabled = cfg.ntp_enabled;

    s_sntp_running = false;
    s_synced_once = false;

    s_restart_requested = false;
    s_force_refresh = false;
    s_worker_stop = false;

    s_attempt_started_ms = 0;
    s_next_retry_ms = 0;
    s_server_index = 0;

    update_status_locked();

    time_unlock();

    if (err != ESP_OK) {
        vSemaphoreDelete(s_lock);
        s_lock = NULL;
        return err;
    }

    s_inited = true;

    BaseType_t created = xTaskCreate(
        ntp_worker,
        "xom_ntp",
        NTP_WORKER_STACK,
        NULL,
        NTP_WORKER_PRIORITY,
        &s_worker
    );

    if (created != pdPASS) {
        s_inited = false;
        s_worker = NULL;

        vSemaphoreDelete(s_lock);
        s_lock = NULL;

        ESP_LOGE(TAG, "Cannot create NTP worker");

        return ESP_ERR_NO_MEM;
    }

    ESP_LOGI(
        TAG,
        "Time manager ready, NTP=%s, TZ=%s",
        cfg.ntp_enabled ? "enabled" : "disabled",
        s_st.timezone
    );

    return ESP_OK;
}

void xom_time_deinit(void)
{
    if (!s_inited) {
        return;
    }

    /*
     * Ask the worker to stop.
     * Avoid deleting its mutex while it may be using it.
     */
    time_lock();
    s_worker_stop = true;
    time_unlock();

    for (int i = 0; i < 100; i++) {
        time_lock();
        bool stopped = (s_worker == NULL);
        time_unlock();

        if (stopped) {
            break;
        }

        vTaskDelay(pdMS_TO_TICKS(10));
    }

    time_lock();
    bool stopped = (s_worker == NULL);
    time_unlock();

    if (!stopped) {
        ESP_LOGW(
            TAG,
            "NTP worker still stopping; keeping mutex alive"
        );
        return;
    }

    s_inited = false;

    if (s_lock != NULL) {
        vSemaphoreDelete(s_lock);
        s_lock = NULL;
    }

    ESP_LOGI(TAG, "Time manager deinitialized");
}

void xom_time_get_status(xom_time_status_t *out)
{
    if (out == NULL) {
        return;
    }

    if (!s_inited) {
        memset(out, 0, sizeof(*out));
        out->state = XOM_TIME_UNSYNCED;
        return;
    }

    time_lock();

    update_status_locked();
    *out = s_st;

    time_unlock();
}

esp_err_t xom_time_apply_settings(
    const char *timezone,
    const char *ntp_server,
    bool ntp_enabled
)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    if (ntp_server == NULL ||
        ntp_server[0] == '\0') {
        return ESP_ERR_INVALID_ARG;
    }

    if (xom_time_posix_tz(timezone) == NULL) {
        return ESP_ERR_INVALID_ARG;
    }

    time_lock();

    esp_err_t err = apply_tz_locked(timezone);

    if (err == ESP_OK) {
        snprintf(
            s_st.ntp_server,
            sizeof(s_st.ntp_server),
            "%s",
            ntp_server
        );

        s_st.ntp_enabled = ntp_enabled;

        s_restart_requested = true;

        if (!s_synced_once) {
            s_st.state = ntp_enabled
                ? XOM_TIME_SYNCING
                : XOM_TIME_UNSYNCED;
        }

        update_status_locked();
    }

    time_unlock();

    if (err == ESP_OK) {
        ESP_LOGI(
            TAG,
            "Time settings changed, restart queued"
        );
    }

    return err;
}

esp_err_t xom_time_refresh_now(void)
{
    if (!s_inited) {
        return ESP_ERR_INVALID_STATE;
    }

    if (!wifi_ready()) {
        ESP_LOGW(
            TAG,
            "Cannot sync: Wi-Fi has no IP"
        );
        return ESP_ERR_INVALID_STATE;
    }

    time_lock();

    bool enabled = s_st.ntp_enabled;

    if (enabled) {
        s_force_refresh = true;

        if (!s_synced_once) {
            s_st.state = XOM_TIME_SYNCING;
        }
    }

    time_unlock();

    if (!enabled) {
        ESP_LOGW(TAG, "NTP is disabled");
        return ESP_ERR_INVALID_STATE;
    }

    ESP_LOGI(
        TAG,
        "Manual SNTP refresh queued"
    );

    return ESP_OK;
}

const char *xom_time_state_label(
    xom_time_state_t state
)
{
    switch (state) {
        case XOM_TIME_SYNCED:
            return "Đã đồng bộ";

        case XOM_TIME_SYNCING:
            return "Đang đồng bộ...";

        case XOM_TIME_ERROR:
            return "Lỗi đồng bộ";

        case XOM_TIME_UNSYNCED:
        default:
            return "Chưa đồng bộ";
    }
}
