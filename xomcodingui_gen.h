/**
 * @file xomcodingui_gen.h
 */

#ifndef LVGL_PRO_XOMCODINGUI_GEN_H
#define LVGL_PRO_XOMCODINGUI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
    #include "lvgl_private.h"
#else
    #include "lvgl/lvgl.h"
    #include "lvgl/lvgl_private.h"
#endif

#if defined(LV_USE_XML) && LV_USE_XML
    #include "lv_xml/lv_xml.h"
#endif



/* Prototypes for target functions, needed by responsive const definitions */

void xomcodingui_set_target(uint32_t target);
uint32_t xomcodingui_get_target(void);
bool xomcodingui_check_target(uint32_t target);

/*********************
 *      DEFINES
 *********************/

#define XOMCODINGUI_TARGET_UNDEFINED  (0 << 1)
#define XOMCODINGUI_TARGET_PORTRAIT   (1 << 1)
#define XOMCODINGUI_TARGET_LANDSCAPE  (1 << 2)
#define XOMCODINGUI_TARGET_ALL        0x0FFFFFFF

/* By default compile for all targets, allowing to switch to any targets at runtime */
#ifndef XOMCODINGUI_COMPILE_TARGET
#define XOMCODINGUI_COMPILE_TARGET XOMCODINGUI_TARGET_ALL
#endif

#define XOMCODINGUI_CHECK_COMPILE_TARGET(target) (XOMCODINGUI_COMPILE_TARGET & (target) ? 1 : 0)

#ifndef LV_XML_EVAL_STRING_BUF_SIZE
    #define LV_XML_EVAL_STRING_BUF_SIZE 256
#endif

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

extern lv_style_t meter_track;
extern lv_style_t meter_cpu;
extern lv_style_t meter_ram;
extern lv_style_t meter_flash;
extern lv_style_t meter_knob_hidden;

/*----------------
 * Fonts
 *----------------*/

/* Targets: any */
extern lv_font_t * be_regular_10;
extern lv_font_t * be_regular_12;
extern lv_font_t * be_regular_14;
extern lv_font_t * be_regular_16;
extern lv_font_t * be_regular_20;
extern lv_font_t * be_medium_10;
extern lv_font_t * be_medium_11;
extern lv_font_t * be_medium_12;
extern lv_font_t * be_medium_14;
extern lv_font_t * be_semibold_12;
extern lv_font_t * be_semibold_14;
extern lv_font_t * be_semibold_16;
extern lv_font_t * be_semibold_20;


/*----------------
 * Images
 *----------------*/

/* Targets: any */
extern const void * xom_boot_logo;
extern const void * xom_boot_logo_landscape;
extern const void * boot_bg;
extern const void * boot_icon_wifi;
extern const void * boot_icon_weather;
extern const void * boot_icon_nas;
extern const void * home_icon_cpu;
extern const void * home_icon_ram;
extern const void * home_icon_storage;
extern const void * home_icon_network;
extern const void * weather_sun;
extern const void * weather_cloud_sun;
extern const void * weather_cloudy;
extern const void * weather_cloud;
extern const void * weather_moon;
extern const void * weather_cloud_moon;
extern const void * weather_partly_night;
extern const void * weather_night_clear;
extern const void * weather_rain;
extern const void * weather_heavy_rain;
extern const void * weather_storm;
extern const void * weather_snow;
extern const void * weather_heavy_snow;
extern const void * weather_fog;
extern const void * weather_haze;
extern const void * weather_wind;
extern const void * weather_hot;
extern const void * weather_cold;
extern const void * weather_unknown;
extern const void * forecast_sun;
extern const void * forecast_cloud;
extern const void * forecast_cloudy;
extern const void * forecast_cloudy_64;
extern const void * forecast_cloud_sun;
extern const void * forecast_rain;
extern const void * forecast_heavy_rain;
extern const void * forecast_storm;
extern const void * forecast_moon;
extern const void * forecast_cloud_moon;
extern const void * forecast_snow;
extern const void * forecast_fog;
extern const void * weather_metric_rain;
extern const void * weather_metric_rain_chance;
extern const void * weather_metric_wind;
extern const void * weather_metric_humidity;
extern const void * weather_metric_temperature;
extern const void * weather_metric_uv;
extern const void * system_chip;
extern const void * system_psram;
extern const void * system_temp;
extern const void * system_uptime;
extern const void * nas_icon;
extern const void * nas_disk;
extern const void * network_router;
extern const void * network_signal;
extern const void * network_dns;
extern const void * network_globe;
extern const void * network_upload;
extern const void * network_download;
extern const void * ui_back;
extern const void * ui_next;
extern const void * ui_settings;
extern const void * ui_location;
extern const void * ui_clock;
extern const void * ui_battery;
extern const void * status_ok;
extern const void * status_warning;
extern const void * status_offline;
extern const void * weather_bg_sunny;
extern const void * weather_bg_cloudy;
extern const void * weather_bg_rain;
extern const void * weather_bg_storm;
extern const void * weather_bg_night_clear;
extern const void * weather_bg_fog;
extern const void * home_icon_cpu_18;
extern const void * home_icon_cpu_24;
extern const void * home_icon_cpu_28;
extern const void * home_icon_cpu_32;
extern const void * home_icon_ram_18;
extern const void * home_icon_ram_24;
extern const void * home_icon_ram_28;
extern const void * home_icon_ram_32;
extern const void * home_icon_storage_18;
extern const void * home_icon_storage_24;
extern const void * home_icon_storage_28;
extern const void * home_icon_storage_32;
extern const void * system_chip_18;
extern const void * system_chip_24;
extern const void * system_chip_28;
extern const void * system_chip_32;
extern const void * system_psram_18;
extern const void * system_psram_24;
extern const void * system_psram_28;
extern const void * system_psram_32;
extern const void * system_temp_18;
extern const void * system_temp_24;
extern const void * system_temp_28;
extern const void * system_temp_32;
extern const void * system_uptime_18;
extern const void * system_uptime_24;
extern const void * system_uptime_28;
extern const void * system_uptime_32;
extern const void * boot_icon_nas_24;
extern const void * boot_icon_nas_28;
extern const void * boot_icon_weather_24;
extern const void * boot_icon_weather_28;
extern const void * boot_icon_wifi_24;
extern const void * boot_icon_wifi_28;
extern const void * home_battery_18;
extern const void * home_battery_24;
extern const void * home_battery_28;
extern const void * home_battery_32;
extern const void * home_download_18;
extern const void * home_download_24;
extern const void * home_download_28;
extern const void * home_download_32;
extern const void * home_icon_flash_18;
extern const void * home_icon_flash_24;
extern const void * home_icon_flash_28;
extern const void * home_icon_flash_32;
extern const void * home_icon_nas_18;
extern const void * home_icon_nas_24;
extern const void * home_icon_nas_28;
extern const void * home_icon_nas_32;
extern const void * home_icon_network_18;
extern const void * home_icon_network_24;
extern const void * home_icon_network_28;
extern const void * home_icon_network_32;
extern const void * home_upload_18;
extern const void * home_upload_24;
extern const void * home_upload_28;
extern const void * home_upload_32;
extern const void * nav_back_18;
extern const void * nav_back_24;
extern const void * nav_back_28;
extern const void * nav_back_32;
extern const void * nav_clock_18;
extern const void * nav_clock_24;
extern const void * nav_clock_28;
extern const void * nav_clock_32;
extern const void * nav_location_18;
extern const void * nav_location_24;
extern const void * nav_location_28;
extern const void * nav_location_32;
extern const void * nav_next_18;
extern const void * nav_next_24;
extern const void * nav_next_28;
extern const void * nav_next_32;
extern const void * nav_settings_18;
extern const void * nav_settings_24;
extern const void * nav_settings_28;
extern const void * nav_settings_32;
extern const void * network_dns_18;
extern const void * network_dns_24;
extern const void * network_dns_28;
extern const void * network_dns_32;
extern const void * network_globe_18;
extern const void * network_globe_24;
extern const void * network_globe_28;
extern const void * network_globe_32;
extern const void * network_router_18;
extern const void * network_router_24;
extern const void * network_router_28;
extern const void * network_router_32;
extern const void * network_signal_18;
extern const void * network_signal_24;
extern const void * network_signal_28;
extern const void * network_signal_32;
extern const void * status_offline_18;
extern const void * status_offline_24;
extern const void * status_offline_28;
extern const void * status_offline_32;
extern const void * status_ok_18;
extern const void * status_ok_24;
extern const void * status_ok_28;
extern const void * status_ok_32;
extern const void * status_warning_18;
extern const void * status_warning_24;
extern const void * status_warning_28;
extern const void * status_warning_32;
extern const void * storage_disk_18;
extern const void * storage_disk_24;
extern const void * storage_disk_28;
extern const void * storage_disk_32;
extern const void * weather_cloud_24;
extern const void * weather_cloud_32;
extern const void * weather_cloud_64;
extern const void * weather_cloud_moon_24;
extern const void * weather_cloud_moon_32;
extern const void * weather_cloud_moon_64;
extern const void * weather_cloud_sun_24;
extern const void * weather_cloud_sun_32;
extern const void * weather_cloud_sun_64;
extern const void * weather_cloudy_24;
extern const void * weather_cloudy_32;
extern const void * weather_cloudy_64;
extern const void * weather_cold_24;
extern const void * weather_cold_32;
extern const void * weather_cold_64;
extern const void * weather_fog_24;
extern const void * weather_fog_32;
extern const void * weather_fog_64;
extern const void * weather_haze_24;
extern const void * weather_haze_32;
extern const void * weather_haze_64;
extern const void * weather_heavy_rain_24;
extern const void * weather_heavy_rain_32;
extern const void * weather_heavy_rain_64;
extern const void * weather_heavy_snow_24;
extern const void * weather_heavy_snow_32;
extern const void * weather_heavy_snow_64;
extern const void * weather_hot_24;
extern const void * weather_hot_32;
extern const void * weather_hot_64;
extern const void * weather_humidity_24;
extern const void * weather_humidity_32;
extern const void * weather_humidity_64;
extern const void * weather_moon_24;
extern const void * weather_moon_32;
extern const void * weather_moon_64;
extern const void * weather_night_clear_24;
extern const void * weather_night_clear_32;
extern const void * weather_night_clear_64;
extern const void * weather_partly_night_24;
extern const void * weather_partly_night_32;
extern const void * weather_partly_night_64;
extern const void * weather_rain_24;
extern const void * weather_rain_32;
extern const void * weather_rain_64;
extern const void * weather_rain_chance_24;
extern const void * weather_rain_chance_32;
extern const void * weather_rain_chance_64;
extern const void * weather_snow_24;
extern const void * weather_snow_32;
extern const void * weather_snow_64;
extern const void * weather_storm_24;
extern const void * weather_storm_32;
extern const void * weather_storm_64;
extern const void * weather_sun_24;
extern const void * weather_sun_32;
extern const void * weather_sun_64;
extern const void * weather_temperature_24;
extern const void * weather_temperature_32;
extern const void * weather_temperature_64;
extern const void * weather_unknown_24;
extern const void * weather_unknown_32;
extern const void * weather_unknown_64;
extern const void * weather_uv_24;
extern const void * weather_uv_32;
extern const void * weather_uv_64;
extern const void * weather_wind_24;
extern const void * weather_wind_32;
extern const void * weather_wind_64;

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void xomcodingui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "screens/ai/quota_landscape_gen.h"
#include "screens/ai/quota_portrait_gen.h"
#include "screens/boot/boot_landscape_gen.h"
#include "screens/boot/boot_portrait_gen.h"
#include "screens/home/home_landscape_gen.h"
#include "screens/home/home_portrait_gen.h"
#include "screens/nas/nas_landscape_gen.h"
#include "screens/nas/nas_portrait_gen.h"
#include "screens/network/diagnostics_landscape_gen.h"
#include "screens/network/diagnostics_portrait_gen.h"
#include "screens/network/network_landscape_gen.h"
#include "screens/network/network_portrait_gen.h"
#include "screens/notifications/detail_landscape_gen.h"
#include "screens/notifications/detail_portrait_gen.h"
#include "screens/notifications/notifications_landscape_gen.h"
#include "screens/notifications/notifications_portrait_gen.h"
#include "screens/settings/api_config_landscape_gen.h"
#include "screens/settings/api_config_portrait_gen.h"
#include "screens/settings/change_pin_landscape_gen.h"
#include "screens/settings/change_pin_portrait_gen.h"
#include "screens/settings/data_landscape_gen.h"
#include "screens/settings/data_portrait_gen.h"
#include "screens/settings/datetime_landscape_gen.h"
#include "screens/settings/datetime_portrait_gen.h"
#include "screens/settings/device_landscape_gen.h"
#include "screens/settings/device_portrait_gen.h"
#include "screens/settings/display_landscape_gen.h"
#include "screens/settings/display_portrait_gen.h"
#include "screens/settings/display_timeout_landscape_gen.h"
#include "screens/settings/display_timeout_portrait_gen.h"
#include "screens/settings/factory_reset_landscape_gen.h"
#include "screens/settings/factory_reset_portrait_gen.h"
#include "screens/settings/nas_config_landscape_gen.h"
#include "screens/settings/nas_config_portrait_gen.h"
#include "screens/settings/ota_landscape_gen.h"
#include "screens/settings/ota_portrait_gen.h"
#include "screens/settings/ota_progress_landscape_gen.h"
#include "screens/settings/ota_progress_portrait_gen.h"
#include "screens/settings/restart_confirm_landscape_gen.h"
#include "screens/settings/restart_confirm_portrait_gen.h"
#include "screens/settings/security_landscape_gen.h"
#include "screens/settings/security_portrait_gen.h"
#include "screens/settings/settings_landscape_gen.h"
#include "screens/settings/settings_portrait_gen.h"
#include "screens/settings/sync_config_landscape_gen.h"
#include "screens/settings/sync_config_portrait_gen.h"
#include "screens/settings/sync_interval_landscape_gen.h"
#include "screens/settings/sync_interval_portrait_gen.h"
#include "screens/settings/timezone_select_landscape_gen.h"
#include "screens/settings/timezone_select_portrait_gen.h"
#include "screens/settings/weather_config_landscape_gen.h"
#include "screens/settings/weather_config_portrait_gen.h"
#include "screens/settings/weather_interval_landscape_gen.h"
#include "screens/settings/weather_interval_portrait_gen.h"
#include "screens/settings/wifi_landscape_gen.h"
#include "screens/settings/wifi_password_landscape_gen.h"
#include "screens/settings/wifi_password_portrait_gen.h"
#include "screens/settings/wifi_portrait_gen.h"
#include "screens/settings/wifi_scan_landscape_gen.h"
#include "screens/settings/wifi_scan_portrait_gen.h"
#include "screens/settings/wifi_static_ip_landscape_gen.h"
#include "screens/settings/wifi_static_ip_portrait_gen.h"
#include "screens/states/empty_landscape_gen.h"
#include "screens/states/empty_portrait_gen.h"
#include "screens/states/loading_landscape_gen.h"
#include "screens/states/loading_portrait_gen.h"
#include "screens/states/offline_landscape_gen.h"
#include "screens/states/offline_portrait_gen.h"
#include "screens/system/logs_landscape_gen.h"
#include "screens/system/logs_portrait_gen.h"
#include "screens/system/system_landscape_gen.h"
#include "screens/system/system_portrait_gen.h"
#include "screens/weather/forecast_landscape_gen.h"
#include "screens/weather/forecast_portrait_gen.h"
#include "screens/weather/weather_landscape_gen.h"
#include "screens/weather/weather_portrait_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LVGL_PRO_XOMCODINGUI_GEN_H*/