#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

#define XOM_SETTINGS_SSID_MAX 33
#define XOM_SETTINGS_PASS_MAX 65
#define XOM_SETTINGS_IP_MAX   16
#define XOM_SETTINGS_CITY_MAX 48
#define XOM_SETTINGS_TZ_MAX   32
#define XOM_SETTINGS_NTP_MAX  64

#define XOM_SETTINGS_SCHEMA_VERSION 3

typedef enum {
    XOM_SETTINGS_IP_DHCP = 0,
    XOM_SETTINGS_IP_STATIC = 1,
} xom_settings_ip_mode_t;

typedef enum {
    XOM_SETTINGS_TEMP_C = 0,
    XOM_SETTINGS_TEMP_F = 1,
} xom_settings_temp_unit_t;

typedef struct {
    uint8_t schema_version;
    bool wifi_enabled;
    bool auto_reconnect;
    char ssid[XOM_SETTINGS_SSID_MAX];
    char password[XOM_SETTINGS_PASS_MAX];
    uint8_t ip_mode;
    char ip[XOM_SETTINGS_IP_MAX];
    char netmask[XOM_SETTINGS_IP_MAX];
    char gateway[XOM_SETTINGS_IP_MAX];
    char dns[XOM_SETTINGS_IP_MAX];
    /* weather */
    char weather_city[XOM_SETTINGS_CITY_MAX];
    float weather_lat;
    float weather_lon;
    uint8_t temp_unit; /* 0 C, 1 F */
    uint32_t weather_refresh_sec;
    /* time */
    char timezone[XOM_SETTINGS_TZ_MAX];
    char ntp_server[XOM_SETTINGS_NTP_MAX];
    bool ntp_enabled;
    bool time_24h;
} xom_settings_t;

esp_err_t xom_settings_init(void);
void xom_settings_defaults(xom_settings_t * out);
esp_err_t xom_settings_load(xom_settings_t * out);
esp_err_t xom_settings_save(const xom_settings_t * in);

#ifdef __cplusplus
}
#endif
