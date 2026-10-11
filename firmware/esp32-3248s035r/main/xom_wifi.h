#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Wi-Fi station manager.
 *
 * Event driven: no blocking loops, no LVGL calls from ESP event handlers. All
 * state is published through a mutex-protected snapshot that the UI polls from
 * an LVGL timer.
 */

#define XOM_WIFI_MAX_SCAN   16
#define XOM_WIFI_SCAN_FETCH 24
#define XOM_WIFI_SSID_MAX   33
#define XOM_WIFI_IP_MAX     16

typedef enum {
    XOM_WIFI_STATE_DISABLED = 0,
    XOM_WIFI_STATE_IDLE,
    XOM_WIFI_STATE_SCANNING,
    XOM_WIFI_STATE_CONNECTING,
    XOM_WIFI_STATE_CONNECTED,
    XOM_WIFI_STATE_DISCONNECTED,
    XOM_WIFI_STATE_FAILED,
} xom_wifi_state_t;

typedef struct {
    xom_wifi_state_t state;
    bool enabled;
    bool have_ip;
    bool retrying;
    char ssid[XOM_WIFI_SSID_MAX];
    char ip[XOM_WIFI_IP_MAX];
    char netmask[XOM_WIFI_IP_MAX];
    char gateway[XOM_WIFI_IP_MAX];
    char dns[XOM_WIFI_IP_MAX];
    int8_t rssi;
    uint8_t mac[6];
    int last_reason;
} xom_wifi_status_t;

typedef struct {
    char ssid[XOM_WIFI_SSID_MAX];
    int8_t rssi;
    uint8_t auth;    /* wifi_auth_mode_t */
    uint8_t channel;
} xom_wifi_ap_t;

typedef void (*xom_wifi_status_cb_t)(bool connected, void * user_data);

typedef struct {
    bool scanning;
    bool done;
    bool failed;
    uint16_t count;
    uint32_t epoch;  /* increments on every completed scan */
} xom_wifi_scan_state_t;

/* Initialize netif/event loop/Wi-Fi once. Safe to call more than once. */
esp_err_t xom_wifi_init(void);

/* Enable (bring the station up; no connection) or disable the station. */
esp_err_t xom_wifi_set_enabled(bool enabled);
bool xom_wifi_is_enabled(void);

/* Start a non-blocking scan. Returns an error if a scan is already running. */
esp_err_t xom_wifi_scan_start(void);

/* Remember the AP the user picked (used by the password screen). */
esp_err_t xom_wifi_select(const xom_wifi_ap_t * ap);
bool xom_wifi_get_selected(xom_wifi_ap_t * out);

/* Connect using explicit credentials, or the currently selected AP. */
esp_err_t xom_wifi_connect(const char * ssid, const char * password);
esp_err_t xom_wifi_connect_selected(const char * password);

/* Snapshots (thread-safe copies). */
void xom_wifi_get_status(xom_wifi_status_t * out);
void xom_wifi_get_scan_state(xom_wifi_scan_state_t * out);
int xom_wifi_get_scan_results(xom_wifi_ap_t * out, int max);
esp_err_t xom_wifi_set_status_callback(xom_wifi_status_cb_t cb, void * user_data);

bool xom_wifi_auth_is_open(uint8_t auth);
bool xom_wifi_is_credential_error(int reason);
const char * xom_wifi_auth_label(uint8_t auth);
const char * xom_wifi_state_label(xom_wifi_state_t state);

#ifdef __cplusplus
}
#endif
