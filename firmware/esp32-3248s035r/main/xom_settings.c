#include "xom_settings.h"
#include "nvs.h"
#include "nvs_flash.h"
#include "esp_log.h"
#include "esp_check.h"
#include <string.h>

static const char * TAG = "xom_settings";
#define XOM_SETTINGS_NVS_NAMESPACE "xomcfg"
#define KEY_SCHEMA "schema"
#define KEY_WIFI_EN "wifi_en"
#define KEY_AUTO "auto"
#define KEY_SSID "ssid"
#define KEY_PASS "pass"
#define KEY_IP_MODE "ipmode"
#define KEY_IP "ip"
#define KEY_MASK "mask"
#define KEY_GW "gw"
#define KEY_DNS "dns"
#define KEY_W_CITY "wcity"
#define KEY_W_LAT "wlat"
#define KEY_W_LON "wlon"
#define KEY_T_UNIT "tunit"
#define KEY_W_REF "wref"
#define KEY_TZ "tz"
#define KEY_NTP "ntp"
#define KEY_NTP_EN "ntpen"
#define KEY_24H "time24"

static bool s_nvs_ready;

esp_err_t xom_settings_init(void)
{
    if (s_nvs_ready) return ESP_OK;
    esp_err_t err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) {
        ESP_LOGW(TAG, "NVS requires re-init (%s)", esp_err_to_name(err));
        ESP_RETURN_ON_ERROR(nvs_flash_erase(), TAG, "nvs erase failed");
        err = nvs_flash_init();
    }
    ESP_RETURN_ON_ERROR(err, TAG, "nvs_flash_init failed");
    s_nvs_ready = true;
    return ESP_OK;
}

void xom_settings_defaults(xom_settings_t * out)
{
    if (!out) return;
    memset(out, 0, sizeof(*out));
    out->schema_version = XOM_SETTINGS_SCHEMA_VERSION;
    out->wifi_enabled = true;
    out->auto_reconnect = true;
    out->ip_mode = XOM_SETTINGS_IP_DHCP;
    strncpy(out->weather_city, "Hà Nội", sizeof(out->weather_city)-1);
    out->weather_lat = 21.0278f;
    out->weather_lon = 105.8342f;
    out->temp_unit = XOM_SETTINGS_TEMP_C;
    out->weather_refresh_sec = 1800; /* 30 min */
    strncpy(out->timezone, "Asia/Ho_Chi_Minh", sizeof(out->timezone)-1);
    strncpy(out->ntp_server, "pool.ntp.org", sizeof(out->ntp_server)-1);
    out->ntp_enabled = true;
    out->time_24h = true;
}

static void load_str(nvs_handle_t h, const char *k, char *d, size_t ds)
{
    size_t len = ds;
    if (nvs_get_str(h,k,d,&len) != ESP_OK) d[0]='\0';
}

esp_err_t xom_settings_load(xom_settings_t * out)
{
    if (!out) return ESP_ERR_INVALID_ARG;
    xom_settings_defaults(out);
    esp_err_t err = xom_settings_init();
    if (err != ESP_OK) return err;
    nvs_handle_t h;
    err = nvs_open(XOM_SETTINGS_NVS_NAMESPACE, NVS_READONLY, &h);
    if (err == ESP_ERR_NVS_NOT_FOUND) return ESP_OK;
    if (err != ESP_OK) { ESP_LOGW(TAG,"nvs_open(ro) %s", esp_err_to_name(err)); return err; }
    uint8_t schema=0; if (nvs_get_u8(h,KEY_SCHEMA,&schema)==ESP_OK && schema>XOM_SETTINGS_SCHEMA_VERSION) ESP_LOGW(TAG,"schema newer v%u>fw%u", schema, (unsigned)XOM_SETTINGS_SCHEMA_VERSION);
    uint8_t u8=0; if (nvs_get_u8(h,KEY_WIFI_EN,&u8)==ESP_OK) out->wifi_enabled=u8!=0; if (nvs_get_u8(h,KEY_AUTO,&u8)==ESP_OK) out->auto_reconnect=u8!=0; if (nvs_get_u8(h,KEY_IP_MODE,&u8)==ESP_OK) out->ip_mode=u8; if (nvs_get_u8(h,KEY_T_UNIT,&u8)==ESP_OK) out->temp_unit=u8; if (nvs_get_u8(h,KEY_NTP_EN,&u8)==ESP_OK) out->ntp_enabled=u8!=0; if (nvs_get_u8(h,KEY_24H,&u8)==ESP_OK) out->time_24h=u8!=0;
    load_str(h,KEY_SSID,out->ssid,sizeof(out->ssid)); load_str(h,KEY_PASS,out->password,sizeof(out->password)); load_str(h,KEY_IP,out->ip,sizeof(out->ip)); load_str(h,KEY_MASK,out->netmask,sizeof(out->netmask)); load_str(h,KEY_GW,out->gateway,sizeof(out->gateway)); load_str(h,KEY_DNS,out->dns,sizeof(out->dns)); load_str(h,KEY_W_CITY,out->weather_city,sizeof(out->weather_city));
    load_str(h,KEY_TZ,out->timezone,sizeof(out->timezone)); if (out->timezone[0]=='\0') strncpy(out->timezone, "Asia/Ho_Chi_Minh", sizeof(out->timezone)-1);
    load_str(h,KEY_NTP,out->ntp_server,sizeof(out->ntp_server)); if (out->ntp_server[0]=='\0') strncpy(out->ntp_server, "pool.ntp.org", sizeof(out->ntp_server)-1);
    int32_t v=0; if (nvs_get_i32(h,"wlat",&v)==ESP_OK) out->weather_lat=(float)v/100000.0f; if (nvs_get_i32(h,"wlon",&v)==ESP_OK) out->weather_lon=(float)v/100000.0f;
    uint32_t v32=0; if (nvs_get_u32(h,KEY_W_REF,&v32)==ESP_OK) out->weather_refresh_sec=v32;
    nvs_close(h);
    return ESP_OK;
}

esp_err_t xom_settings_save(const xom_settings_t * in)
{
    if (!in) return ESP_ERR_INVALID_ARG;
    esp_err_t err = xom_settings_init();
    if (err != ESP_OK) return err;

    nvs_handle_t h;
    err = nvs_open(XOM_SETTINGS_NVS_NAMESPACE, NVS_READWRITE, &h);
    if (err != ESP_OK) return err;

    int32_t la=(int32_t)(in->weather_lat*100000.0f), lo=(int32_t)(in->weather_lon*100000.0f);

    err = nvs_set_u8(h, KEY_SCHEMA, XOM_SETTINGS_SCHEMA_VERSION);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_WIFI_EN, in->wifi_enabled ? 1 : 0);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_AUTO, in->auto_reconnect ? 1 : 0);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_IP_MODE, in->ip_mode);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_T_UNIT, in->temp_unit);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_NTP_EN, in->ntp_enabled ? 1 : 0);
    if (err == ESP_OK) err = nvs_set_u8(h, KEY_24H, in->time_24h ? 1 : 0);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_SSID, in->ssid);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_PASS, in->password);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_IP, in->ip);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_MASK, in->netmask);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_GW, in->gateway);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_DNS, in->dns);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_W_CITY, in->weather_city);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_TZ, in->timezone);
    if (err == ESP_OK) err = nvs_set_str(h, KEY_NTP, in->ntp_server);
    if (err == ESP_OK) err = nvs_set_i32(h, KEY_W_LAT, la);
    if (err == ESP_OK) err = nvs_set_i32(h, KEY_W_LON, lo);
    if (err == ESP_OK) err = nvs_set_u32(h, KEY_W_REF, in->weather_refresh_sec);
    if (err == ESP_OK) err = nvs_commit(h);
    nvs_close(h);
    return err;
}
