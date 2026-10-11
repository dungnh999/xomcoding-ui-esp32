/**
 * @file xomcodingui_gen.c
 */

/*********************
 *      INCLUDES
 *********************/

#include "xomcodingui_gen.h"

#if defined(LV_USE_XML) && LV_USE_XML
#endif /* LV_USE_XML */

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void check_font(lv_font_t ** font, const char * name);

/**********************
 *  STATIC VARIABLES
 **********************/

static uint32_t xomcodingui_target = XOMCODINGUI_TARGET_ALL;

/*----------------
 * Translations
 *----------------*/

#ifndef LV_EDITOR_PREVIEW
    static const char * translation_languages[] = {"en", "de", NULL};
    static const char * translation_tags[] = {"dog", "cat", "house", NULL};
    static const char * translation_texts[] = {
        "This is a dog", "Das ist ein Hund", /* dog */
        "A curious little cat", "Eine neugierige kleine Katze", /* cat */
        "The house is cozy and warm", "Das Haus ist gemütlich und warm", /* house */
    };
#endif

/**********************
 *  GLOBAL VARIABLES
 **********************/

/*--------------------
 *  Permanent screens
 *-------------------*/

/*----------------
 * Fonts
 *----------------*/

lv_font_t * be_regular_10;
extern lv_font_t be_regular_10_data;
lv_font_t * be_regular_12;
extern lv_font_t be_regular_12_data;
lv_font_t * be_regular_14;
extern lv_font_t be_regular_14_data;
lv_font_t * be_regular_16;
extern lv_font_t be_regular_16_data;
lv_font_t * be_regular_20;
extern lv_font_t be_regular_20_data;
lv_font_t * be_medium_10;
extern lv_font_t be_medium_10_data;
lv_font_t * be_medium_11;
extern lv_font_t be_medium_11_data;
lv_font_t * be_medium_12;
extern lv_font_t be_medium_12_data;
lv_font_t * be_medium_14;
extern lv_font_t be_medium_14_data;
lv_font_t * be_semibold_12;
extern lv_font_t be_semibold_12_data;
lv_font_t * be_semibold_14;
extern lv_font_t be_semibold_14_data;
lv_font_t * be_semibold_16;
extern lv_font_t be_semibold_16_data;
lv_font_t * be_semibold_20;
extern lv_font_t be_semibold_20_data;

/*----------------
 * Images
 *----------------*/

/* Targets: any */
const void * xom_boot_logo = NULL;
extern const void * xom_boot_logo_data;
const void * xom_boot_logo_landscape = NULL;
extern const void * xom_boot_logo_landscape_data;
const void * boot_bg = NULL;
extern const void * boot_bg_data;
const void * boot_icon_wifi = NULL;
extern const void * boot_icon_wifi_data;
const void * boot_icon_weather = NULL;
extern const void * boot_icon_weather_data;
const void * boot_icon_nas = NULL;
extern const void * boot_icon_nas_data;
const void * home_icon_cpu = NULL;
extern const void * home_icon_cpu_data;
const void * home_icon_ram = NULL;
extern const void * home_icon_ram_data;
const void * home_icon_storage = NULL;
extern const void * home_icon_storage_data;
const void * home_icon_network = NULL;
extern const void * home_icon_network_data;
const void * weather_sun = NULL;
extern const void * weather_sun_data;
const void * weather_cloud_sun = NULL;
extern const void * weather_cloud_sun_data;
const void * weather_cloudy = NULL;
extern const void * weather_cloudy_data;
const void * weather_cloud = NULL;
extern const void * weather_cloud_data;
const void * weather_moon = NULL;
extern const void * weather_moon_data;
const void * weather_cloud_moon = NULL;
extern const void * weather_cloud_moon_data;
const void * weather_partly_night = NULL;
extern const void * weather_partly_night_data;
const void * weather_night_clear = NULL;
extern const void * weather_night_clear_data;
const void * weather_rain = NULL;
extern const void * weather_rain_data;
const void * weather_heavy_rain = NULL;
extern const void * weather_heavy_rain_data;
const void * weather_storm = NULL;
extern const void * weather_storm_data;
const void * weather_snow = NULL;
extern const void * weather_snow_data;
const void * weather_heavy_snow = NULL;
extern const void * weather_heavy_snow_data;
const void * weather_fog = NULL;
extern const void * weather_fog_data;
const void * weather_haze = NULL;
extern const void * weather_haze_data;
const void * weather_wind = NULL;
extern const void * weather_wind_data;
const void * weather_hot = NULL;
extern const void * weather_hot_data;
const void * weather_cold = NULL;
extern const void * weather_cold_data;
const void * weather_unknown = NULL;
extern const void * weather_unknown_data;
const void * forecast_sun = NULL;
extern const void * forecast_sun_data;
const void * forecast_cloud = NULL;
extern const void * forecast_cloud_data;
const void * forecast_cloudy = NULL;
extern const void * forecast_cloudy_data;
const void * forecast_cloudy_64 = NULL;
extern const void * forecast_cloudy_64_data;
const void * forecast_cloud_sun = NULL;
extern const void * forecast_cloud_sun_data;
const void * forecast_rain = NULL;
extern const void * forecast_rain_data;
const void * forecast_heavy_rain = NULL;
extern const void * forecast_heavy_rain_data;
const void * forecast_storm = NULL;
extern const void * forecast_storm_data;
const void * forecast_moon = NULL;
extern const void * forecast_moon_data;
const void * forecast_cloud_moon = NULL;
extern const void * forecast_cloud_moon_data;
const void * forecast_snow = NULL;
extern const void * forecast_snow_data;
const void * forecast_fog = NULL;
extern const void * forecast_fog_data;
const void * weather_metric_rain = NULL;
extern const void * weather_metric_rain_data;
const void * weather_metric_rain_chance = NULL;
extern const void * weather_metric_rain_chance_data;
const void * weather_metric_wind = NULL;
extern const void * weather_metric_wind_data;
const void * weather_metric_humidity = NULL;
extern const void * weather_metric_humidity_data;
const void * weather_metric_temperature = NULL;
extern const void * weather_metric_temperature_data;
const void * weather_metric_uv = NULL;
extern const void * weather_metric_uv_data;
const void * system_chip = NULL;
extern const void * system_chip_data;
const void * system_psram = NULL;
extern const void * system_psram_data;
const void * system_temp = NULL;
extern const void * system_temp_data;
const void * system_uptime = NULL;
extern const void * system_uptime_data;
const void * nas_icon = NULL;
extern const void * nas_icon_data;
const void * nas_disk = NULL;
extern const void * nas_disk_data;
const void * network_router = NULL;
extern const void * network_router_data;
const void * network_signal = NULL;
extern const void * network_signal_data;
const void * network_dns = NULL;
extern const void * network_dns_data;
const void * network_globe = NULL;
extern const void * network_globe_data;
const void * network_upload = NULL;
extern const void * network_upload_data;
const void * network_download = NULL;
extern const void * network_download_data;
const void * ui_back = NULL;
extern const void * ui_back_data;
const void * ui_next = NULL;
extern const void * ui_next_data;
const void * ui_settings = NULL;
extern const void * ui_settings_data;
const void * ui_location = NULL;
extern const void * ui_location_data;
const void * ui_clock = NULL;
extern const void * ui_clock_data;
const void * ui_battery = NULL;
extern const void * ui_battery_data;
const void * status_ok = NULL;
extern const void * status_ok_data;
const void * status_warning = NULL;
extern const void * status_warning_data;
const void * status_offline = NULL;
extern const void * status_offline_data;
const void * weather_bg_sunny = NULL;
extern const void * weather_bg_sunny_data;
const void * weather_bg_cloudy = NULL;
extern const void * weather_bg_cloudy_data;
const void * weather_bg_rain = NULL;
extern const void * weather_bg_rain_data;
const void * weather_bg_storm = NULL;
extern const void * weather_bg_storm_data;
const void * weather_bg_night_clear = NULL;
extern const void * weather_bg_night_clear_data;
const void * weather_bg_fog = NULL;
extern const void * weather_bg_fog_data;
const void * home_icon_cpu_18 = NULL;
extern const void * home_icon_cpu_18_data;
const void * home_icon_cpu_24 = NULL;
extern const void * home_icon_cpu_24_data;
const void * home_icon_cpu_28 = NULL;
extern const void * home_icon_cpu_28_data;
const void * home_icon_cpu_32 = NULL;
extern const void * home_icon_cpu_32_data;
const void * home_icon_ram_18 = NULL;
extern const void * home_icon_ram_18_data;
const void * home_icon_ram_24 = NULL;
extern const void * home_icon_ram_24_data;
const void * home_icon_ram_28 = NULL;
extern const void * home_icon_ram_28_data;
const void * home_icon_ram_32 = NULL;
extern const void * home_icon_ram_32_data;
const void * home_icon_storage_18 = NULL;
extern const void * home_icon_storage_18_data;
const void * home_icon_storage_24 = NULL;
extern const void * home_icon_storage_24_data;
const void * home_icon_storage_28 = NULL;
extern const void * home_icon_storage_28_data;
const void * home_icon_storage_32 = NULL;
extern const void * home_icon_storage_32_data;
const void * system_chip_18 = NULL;
extern const void * system_chip_18_data;
const void * system_chip_24 = NULL;
extern const void * system_chip_24_data;
const void * system_chip_28 = NULL;
extern const void * system_chip_28_data;
const void * system_chip_32 = NULL;
extern const void * system_chip_32_data;
const void * system_psram_18 = NULL;
extern const void * system_psram_18_data;
const void * system_psram_24 = NULL;
extern const void * system_psram_24_data;
const void * system_psram_28 = NULL;
extern const void * system_psram_28_data;
const void * system_psram_32 = NULL;
extern const void * system_psram_32_data;
const void * system_temp_18 = NULL;
extern const void * system_temp_18_data;
const void * system_temp_24 = NULL;
extern const void * system_temp_24_data;
const void * system_temp_28 = NULL;
extern const void * system_temp_28_data;
const void * system_temp_32 = NULL;
extern const void * system_temp_32_data;
const void * system_uptime_18 = NULL;
extern const void * system_uptime_18_data;
const void * system_uptime_24 = NULL;
extern const void * system_uptime_24_data;
const void * system_uptime_28 = NULL;
extern const void * system_uptime_28_data;
const void * system_uptime_32 = NULL;
extern const void * system_uptime_32_data;
const void * boot_icon_nas_24 = NULL;
extern const void * boot_icon_nas_24_data;
const void * boot_icon_nas_28 = NULL;
extern const void * boot_icon_nas_28_data;
const void * boot_icon_weather_24 = NULL;
extern const void * boot_icon_weather_24_data;
const void * boot_icon_weather_28 = NULL;
extern const void * boot_icon_weather_28_data;
const void * boot_icon_wifi_24 = NULL;
extern const void * boot_icon_wifi_24_data;
const void * boot_icon_wifi_28 = NULL;
extern const void * boot_icon_wifi_28_data;
const void * home_battery_18 = NULL;
extern const void * home_battery_18_data;
const void * home_battery_24 = NULL;
extern const void * home_battery_24_data;
const void * home_battery_28 = NULL;
extern const void * home_battery_28_data;
const void * home_battery_32 = NULL;
extern const void * home_battery_32_data;
const void * home_download_18 = NULL;
extern const void * home_download_18_data;
const void * home_download_24 = NULL;
extern const void * home_download_24_data;
const void * home_download_28 = NULL;
extern const void * home_download_28_data;
const void * home_download_32 = NULL;
extern const void * home_download_32_data;
const void * home_icon_flash_18 = NULL;
extern const void * home_icon_flash_18_data;
const void * home_icon_flash_24 = NULL;
extern const void * home_icon_flash_24_data;
const void * home_icon_flash_28 = NULL;
extern const void * home_icon_flash_28_data;
const void * home_icon_flash_32 = NULL;
extern const void * home_icon_flash_32_data;
const void * home_icon_nas_18 = NULL;
extern const void * home_icon_nas_18_data;
const void * home_icon_nas_24 = NULL;
extern const void * home_icon_nas_24_data;
const void * home_icon_nas_28 = NULL;
extern const void * home_icon_nas_28_data;
const void * home_icon_nas_32 = NULL;
extern const void * home_icon_nas_32_data;
const void * home_icon_network_18 = NULL;
extern const void * home_icon_network_18_data;
const void * home_icon_network_24 = NULL;
extern const void * home_icon_network_24_data;
const void * home_icon_network_28 = NULL;
extern const void * home_icon_network_28_data;
const void * home_icon_network_32 = NULL;
extern const void * home_icon_network_32_data;
const void * home_upload_18 = NULL;
extern const void * home_upload_18_data;
const void * home_upload_24 = NULL;
extern const void * home_upload_24_data;
const void * home_upload_28 = NULL;
extern const void * home_upload_28_data;
const void * home_upload_32 = NULL;
extern const void * home_upload_32_data;
const void * nav_back_18 = NULL;
extern const void * nav_back_18_data;
const void * nav_back_24 = NULL;
extern const void * nav_back_24_data;
const void * nav_back_28 = NULL;
extern const void * nav_back_28_data;
const void * nav_back_32 = NULL;
extern const void * nav_back_32_data;
const void * nav_clock_18 = NULL;
extern const void * nav_clock_18_data;
const void * nav_clock_24 = NULL;
extern const void * nav_clock_24_data;
const void * nav_clock_28 = NULL;
extern const void * nav_clock_28_data;
const void * nav_clock_32 = NULL;
extern const void * nav_clock_32_data;
const void * nav_location_18 = NULL;
extern const void * nav_location_18_data;
const void * nav_location_24 = NULL;
extern const void * nav_location_24_data;
const void * nav_location_28 = NULL;
extern const void * nav_location_28_data;
const void * nav_location_32 = NULL;
extern const void * nav_location_32_data;
const void * nav_next_18 = NULL;
extern const void * nav_next_18_data;
const void * nav_next_24 = NULL;
extern const void * nav_next_24_data;
const void * nav_next_28 = NULL;
extern const void * nav_next_28_data;
const void * nav_next_32 = NULL;
extern const void * nav_next_32_data;
const void * nav_settings_18 = NULL;
extern const void * nav_settings_18_data;
const void * nav_settings_24 = NULL;
extern const void * nav_settings_24_data;
const void * nav_settings_28 = NULL;
extern const void * nav_settings_28_data;
const void * nav_settings_32 = NULL;
extern const void * nav_settings_32_data;
const void * network_dns_18 = NULL;
extern const void * network_dns_18_data;
const void * network_dns_24 = NULL;
extern const void * network_dns_24_data;
const void * network_dns_28 = NULL;
extern const void * network_dns_28_data;
const void * network_dns_32 = NULL;
extern const void * network_dns_32_data;
const void * network_globe_18 = NULL;
extern const void * network_globe_18_data;
const void * network_globe_24 = NULL;
extern const void * network_globe_24_data;
const void * network_globe_28 = NULL;
extern const void * network_globe_28_data;
const void * network_globe_32 = NULL;
extern const void * network_globe_32_data;
const void * network_router_18 = NULL;
extern const void * network_router_18_data;
const void * network_router_24 = NULL;
extern const void * network_router_24_data;
const void * network_router_28 = NULL;
extern const void * network_router_28_data;
const void * network_router_32 = NULL;
extern const void * network_router_32_data;
const void * network_signal_18 = NULL;
extern const void * network_signal_18_data;
const void * network_signal_24 = NULL;
extern const void * network_signal_24_data;
const void * network_signal_28 = NULL;
extern const void * network_signal_28_data;
const void * network_signal_32 = NULL;
extern const void * network_signal_32_data;
const void * status_offline_18 = NULL;
extern const void * status_offline_18_data;
const void * status_offline_24 = NULL;
extern const void * status_offline_24_data;
const void * status_offline_28 = NULL;
extern const void * status_offline_28_data;
const void * status_offline_32 = NULL;
extern const void * status_offline_32_data;
const void * status_ok_18 = NULL;
extern const void * status_ok_18_data;
const void * status_ok_24 = NULL;
extern const void * status_ok_24_data;
const void * status_ok_28 = NULL;
extern const void * status_ok_28_data;
const void * status_ok_32 = NULL;
extern const void * status_ok_32_data;
const void * status_warning_18 = NULL;
extern const void * status_warning_18_data;
const void * status_warning_24 = NULL;
extern const void * status_warning_24_data;
const void * status_warning_28 = NULL;
extern const void * status_warning_28_data;
const void * status_warning_32 = NULL;
extern const void * status_warning_32_data;
const void * storage_disk_18 = NULL;
extern const void * storage_disk_18_data;
const void * storage_disk_24 = NULL;
extern const void * storage_disk_24_data;
const void * storage_disk_28 = NULL;
extern const void * storage_disk_28_data;
const void * storage_disk_32 = NULL;
extern const void * storage_disk_32_data;
const void * weather_cloud_24 = NULL;
extern const void * weather_cloud_24_data;
const void * weather_cloud_32 = NULL;
extern const void * weather_cloud_32_data;
const void * weather_cloud_64 = NULL;
extern const void * weather_cloud_64_data;
const void * weather_cloud_moon_24 = NULL;
extern const void * weather_cloud_moon_24_data;
const void * weather_cloud_moon_32 = NULL;
extern const void * weather_cloud_moon_32_data;
const void * weather_cloud_moon_64 = NULL;
extern const void * weather_cloud_moon_64_data;
const void * weather_cloud_sun_24 = NULL;
extern const void * weather_cloud_sun_24_data;
const void * weather_cloud_sun_32 = NULL;
extern const void * weather_cloud_sun_32_data;
const void * weather_cloud_sun_64 = NULL;
extern const void * weather_cloud_sun_64_data;
const void * weather_cloudy_24 = NULL;
extern const void * weather_cloudy_24_data;
const void * weather_cloudy_32 = NULL;
extern const void * weather_cloudy_32_data;
const void * weather_cloudy_64 = NULL;
extern const void * weather_cloudy_64_data;
const void * weather_cold_24 = NULL;
extern const void * weather_cold_24_data;
const void * weather_cold_32 = NULL;
extern const void * weather_cold_32_data;
const void * weather_cold_64 = NULL;
extern const void * weather_cold_64_data;
const void * weather_fog_24 = NULL;
extern const void * weather_fog_24_data;
const void * weather_fog_32 = NULL;
extern const void * weather_fog_32_data;
const void * weather_fog_64 = NULL;
extern const void * weather_fog_64_data;
const void * weather_haze_24 = NULL;
extern const void * weather_haze_24_data;
const void * weather_haze_32 = NULL;
extern const void * weather_haze_32_data;
const void * weather_haze_64 = NULL;
extern const void * weather_haze_64_data;
const void * weather_heavy_rain_24 = NULL;
extern const void * weather_heavy_rain_24_data;
const void * weather_heavy_rain_32 = NULL;
extern const void * weather_heavy_rain_32_data;
const void * weather_heavy_rain_64 = NULL;
extern const void * weather_heavy_rain_64_data;
const void * weather_heavy_snow_24 = NULL;
extern const void * weather_heavy_snow_24_data;
const void * weather_heavy_snow_32 = NULL;
extern const void * weather_heavy_snow_32_data;
const void * weather_heavy_snow_64 = NULL;
extern const void * weather_heavy_snow_64_data;
const void * weather_hot_24 = NULL;
extern const void * weather_hot_24_data;
const void * weather_hot_32 = NULL;
extern const void * weather_hot_32_data;
const void * weather_hot_64 = NULL;
extern const void * weather_hot_64_data;
const void * weather_humidity_24 = NULL;
extern const void * weather_humidity_24_data;
const void * weather_humidity_32 = NULL;
extern const void * weather_humidity_32_data;
const void * weather_humidity_64 = NULL;
extern const void * weather_humidity_64_data;
const void * weather_moon_24 = NULL;
extern const void * weather_moon_24_data;
const void * weather_moon_32 = NULL;
extern const void * weather_moon_32_data;
const void * weather_moon_64 = NULL;
extern const void * weather_moon_64_data;
const void * weather_night_clear_24 = NULL;
extern const void * weather_night_clear_24_data;
const void * weather_night_clear_32 = NULL;
extern const void * weather_night_clear_32_data;
const void * weather_night_clear_64 = NULL;
extern const void * weather_night_clear_64_data;
const void * weather_partly_night_24 = NULL;
extern const void * weather_partly_night_24_data;
const void * weather_partly_night_32 = NULL;
extern const void * weather_partly_night_32_data;
const void * weather_partly_night_64 = NULL;
extern const void * weather_partly_night_64_data;
const void * weather_rain_24 = NULL;
extern const void * weather_rain_24_data;
const void * weather_rain_32 = NULL;
extern const void * weather_rain_32_data;
const void * weather_rain_64 = NULL;
extern const void * weather_rain_64_data;
const void * weather_rain_chance_24 = NULL;
extern const void * weather_rain_chance_24_data;
const void * weather_rain_chance_32 = NULL;
extern const void * weather_rain_chance_32_data;
const void * weather_rain_chance_64 = NULL;
extern const void * weather_rain_chance_64_data;
const void * weather_snow_24 = NULL;
extern const void * weather_snow_24_data;
const void * weather_snow_32 = NULL;
extern const void * weather_snow_32_data;
const void * weather_snow_64 = NULL;
extern const void * weather_snow_64_data;
const void * weather_storm_24 = NULL;
extern const void * weather_storm_24_data;
const void * weather_storm_32 = NULL;
extern const void * weather_storm_32_data;
const void * weather_storm_64 = NULL;
extern const void * weather_storm_64_data;
const void * weather_sun_24 = NULL;
extern const void * weather_sun_24_data;
const void * weather_sun_32 = NULL;
extern const void * weather_sun_32_data;
const void * weather_sun_64 = NULL;
extern const void * weather_sun_64_data;
const void * weather_temperature_24 = NULL;
extern const void * weather_temperature_24_data;
const void * weather_temperature_32 = NULL;
extern const void * weather_temperature_32_data;
const void * weather_temperature_64 = NULL;
extern const void * weather_temperature_64_data;
const void * weather_unknown_24 = NULL;
extern const void * weather_unknown_24_data;
const void * weather_unknown_32 = NULL;
extern const void * weather_unknown_32_data;
const void * weather_unknown_64 = NULL;
extern const void * weather_unknown_64_data;
const void * weather_uv_24 = NULL;
extern const void * weather_uv_24_data;
const void * weather_uv_32 = NULL;
extern const void * weather_uv_32_data;
const void * weather_uv_64 = NULL;
extern const void * weather_uv_64_data;
const void * weather_wind_24 = NULL;
extern const void * weather_wind_24_data;
const void * weather_wind_32 = NULL;
extern const void * weather_wind_32_data;
const void * weather_wind_64 = NULL;
extern const void * weather_wind_64_data;

/*----------------
 * Global styles
 *----------------*/

lv_style_t meter_track;
lv_style_t meter_cpu;
lv_style_t meter_ram;
lv_style_t meter_flash;
lv_style_t meter_knob_hidden;

/*----------------
 * Subjects
 *----------------*/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void xomcodingui_init_gen(const char * asset_path)
{

    /*----------------
     * Fonts
     *----------------*/

    /* Targets: any */

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        if (!be_regular_10) {
            /* be_regular_10 */
            /* get font 'be_regular_10' from a C array */
            be_regular_10 = &be_regular_10_data;

        }
        if (!be_regular_12) {
            /* be_regular_12 */
            /* get font 'be_regular_12' from a C array */
            be_regular_12 = &be_regular_12_data;

        }
        if (!be_regular_14) {
            /* be_regular_14 */
            /* get font 'be_regular_14' from a C array */
            be_regular_14 = &be_regular_14_data;

        }
        if (!be_regular_16) {
            /* be_regular_16 */
            /* get font 'be_regular_16' from a C array */
            be_regular_16 = &be_regular_16_data;

        }
        if (!be_regular_20) {
            /* be_regular_20 */
            /* get font 'be_regular_20' from a C array */
            be_regular_20 = &be_regular_20_data;

        }
        if (!be_medium_10) {
            /* be_medium_10 */
            /* get font 'be_medium_10' from a C array */
            be_medium_10 = &be_medium_10_data;

        }
        if (!be_medium_11) {
            /* be_medium_11 */
            /* get font 'be_medium_11' from a C array */
            be_medium_11 = &be_medium_11_data;

        }
        if (!be_medium_12) {
            /* be_medium_12 */
            /* get font 'be_medium_12' from a C array */
            be_medium_12 = &be_medium_12_data;

        }
        if (!be_medium_14) {
            /* be_medium_14 */
            /* get font 'be_medium_14' from a C array */
            be_medium_14 = &be_medium_14_data;

        }
        if (!be_semibold_12) {
            /* be_semibold_12 */
            /* get font 'be_semibold_12' from a C array */
            be_semibold_12 = &be_semibold_12_data;

        }
        if (!be_semibold_14) {
            /* be_semibold_14 */
            /* get font 'be_semibold_14' from a C array */
            be_semibold_14 = &be_semibold_14_data;

        }
        if (!be_semibold_16) {
            /* be_semibold_16 */
            /* get font 'be_semibold_16' from a C array */
            be_semibold_16 = &be_semibold_16_data;

        }
        if (!be_semibold_20) {
            /* be_semibold_20 */
            /* get font 'be_semibold_20' from a C array */
            be_semibold_20 = &be_semibold_20_data;

        }
    }
    #endif

    /*----------------
     * Images
     *----------------*/

    /* Targets: any */
    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        /* xom_boot_logo */
        if (!xom_boot_logo) {
            xom_boot_logo = &xom_boot_logo_data;
        }
        /* xom_boot_logo_landscape */
        if (!xom_boot_logo_landscape) {
            xom_boot_logo_landscape = &xom_boot_logo_landscape_data;
        }
        /* boot_bg */
        if (!boot_bg) {
            boot_bg = &boot_bg_data;
        }
        /* boot_icon_wifi */
        if (!boot_icon_wifi) {
            boot_icon_wifi = &boot_icon_wifi_data;
        }
        /* boot_icon_weather */
        if (!boot_icon_weather) {
            boot_icon_weather = &boot_icon_weather_data;
        }
        /* boot_icon_nas */
        if (!boot_icon_nas) {
            boot_icon_nas = &boot_icon_nas_data;
        }
        /* home_icon_cpu */
        if (!home_icon_cpu) {
            home_icon_cpu = &home_icon_cpu_data;
        }
        /* home_icon_ram */
        if (!home_icon_ram) {
            home_icon_ram = &home_icon_ram_data;
        }
        /* home_icon_storage */
        if (!home_icon_storage) {
            home_icon_storage = &home_icon_storage_data;
        }
        /* home_icon_network */
        if (!home_icon_network) {
            home_icon_network = &home_icon_network_data;
        }
        /* weather_sun */
        if (!weather_sun) {
            weather_sun = &weather_sun_data;
        }
        /* weather_cloud_sun */
        if (!weather_cloud_sun) {
            weather_cloud_sun = &weather_cloud_sun_data;
        }
        /* weather_cloudy */
        if (!weather_cloudy) {
            weather_cloudy = &weather_cloudy_data;
        }
        /* weather_cloud */
        if (!weather_cloud) {
            weather_cloud = &weather_cloud_data;
        }
        /* weather_moon */
        if (!weather_moon) {
            weather_moon = &weather_moon_data;
        }
        /* weather_cloud_moon */
        if (!weather_cloud_moon) {
            weather_cloud_moon = &weather_cloud_moon_data;
        }
        /* weather_partly_night */
        if (!weather_partly_night) {
            weather_partly_night = &weather_partly_night_data;
        }
        /* weather_night_clear */
        if (!weather_night_clear) {
            weather_night_clear = &weather_night_clear_data;
        }
        /* weather_rain */
        if (!weather_rain) {
            weather_rain = &weather_rain_data;
        }
        /* weather_heavy_rain */
        if (!weather_heavy_rain) {
            weather_heavy_rain = &weather_heavy_rain_data;
        }
        /* weather_storm */
        if (!weather_storm) {
            weather_storm = &weather_storm_data;
        }
        /* weather_snow */
        if (!weather_snow) {
            weather_snow = &weather_snow_data;
        }
        /* weather_heavy_snow */
        if (!weather_heavy_snow) {
            weather_heavy_snow = &weather_heavy_snow_data;
        }
        /* weather_fog */
        if (!weather_fog) {
            weather_fog = &weather_fog_data;
        }
        /* weather_haze */
        if (!weather_haze) {
            weather_haze = &weather_haze_data;
        }
        /* weather_wind */
        if (!weather_wind) {
            weather_wind = &weather_wind_data;
        }
        /* weather_hot */
        if (!weather_hot) {
            weather_hot = &weather_hot_data;
        }
        /* weather_cold */
        if (!weather_cold) {
            weather_cold = &weather_cold_data;
        }
        /* weather_unknown */
        if (!weather_unknown) {
            weather_unknown = &weather_unknown_data;
        }
        /* forecast_sun */
        if (!forecast_sun) {
            forecast_sun = &forecast_sun_data;
        }
        /* forecast_cloud */
        if (!forecast_cloud) {
            forecast_cloud = &forecast_cloud_data;
        }
        /* forecast_cloudy */
        if (!forecast_cloudy) {
            forecast_cloudy = &forecast_cloudy_data;
        }
        /* forecast_cloudy_64 */
        if (!forecast_cloudy_64) {
            forecast_cloudy_64 = &forecast_cloudy_64_data;
        }
        /* forecast_cloud_sun */
        if (!forecast_cloud_sun) {
            forecast_cloud_sun = &forecast_cloud_sun_data;
        }
        /* forecast_rain */
        if (!forecast_rain) {
            forecast_rain = &forecast_rain_data;
        }
        /* forecast_heavy_rain */
        if (!forecast_heavy_rain) {
            forecast_heavy_rain = &forecast_heavy_rain_data;
        }
        /* forecast_storm */
        if (!forecast_storm) {
            forecast_storm = &forecast_storm_data;
        }
        /* forecast_moon */
        if (!forecast_moon) {
            forecast_moon = &forecast_moon_data;
        }
        /* forecast_cloud_moon */
        if (!forecast_cloud_moon) {
            forecast_cloud_moon = &forecast_cloud_moon_data;
        }
        /* forecast_snow */
        if (!forecast_snow) {
            forecast_snow = &forecast_snow_data;
        }
        /* forecast_fog */
        if (!forecast_fog) {
            forecast_fog = &forecast_fog_data;
        }
        /* weather_metric_rain */
        if (!weather_metric_rain) {
            weather_metric_rain = &weather_metric_rain_data;
        }
        /* weather_metric_rain_chance */
        if (!weather_metric_rain_chance) {
            weather_metric_rain_chance = &weather_metric_rain_chance_data;
        }
        /* weather_metric_wind */
        if (!weather_metric_wind) {
            weather_metric_wind = &weather_metric_wind_data;
        }
        /* weather_metric_humidity */
        if (!weather_metric_humidity) {
            weather_metric_humidity = &weather_metric_humidity_data;
        }
        /* weather_metric_temperature */
        if (!weather_metric_temperature) {
            weather_metric_temperature = &weather_metric_temperature_data;
        }
        /* weather_metric_uv */
        if (!weather_metric_uv) {
            weather_metric_uv = &weather_metric_uv_data;
        }
        /* system_chip */
        if (!system_chip) {
            system_chip = &system_chip_data;
        }
        /* system_psram */
        if (!system_psram) {
            system_psram = &system_psram_data;
        }
        /* system_temp */
        if (!system_temp) {
            system_temp = &system_temp_data;
        }
        /* system_uptime */
        if (!system_uptime) {
            system_uptime = &system_uptime_data;
        }
        /* nas_icon */
        if (!nas_icon) {
            nas_icon = &nas_icon_data;
        }
        /* nas_disk */
        if (!nas_disk) {
            nas_disk = &nas_disk_data;
        }
        /* network_router */
        if (!network_router) {
            network_router = &network_router_data;
        }
        /* network_signal */
        if (!network_signal) {
            network_signal = &network_signal_data;
        }
        /* network_dns */
        if (!network_dns) {
            network_dns = &network_dns_data;
        }
        /* network_globe */
        if (!network_globe) {
            network_globe = &network_globe_data;
        }
        /* network_upload */
        if (!network_upload) {
            network_upload = &network_upload_data;
        }
        /* network_download */
        if (!network_download) {
            network_download = &network_download_data;
        }
        /* ui_back */
        if (!ui_back) {
            ui_back = &ui_back_data;
        }
        /* ui_next */
        if (!ui_next) {
            ui_next = &ui_next_data;
        }
        /* ui_settings */
        if (!ui_settings) {
            ui_settings = &ui_settings_data;
        }
        /* ui_location */
        if (!ui_location) {
            ui_location = &ui_location_data;
        }
        /* ui_clock */
        if (!ui_clock) {
            ui_clock = &ui_clock_data;
        }
        /* ui_battery */
        if (!ui_battery) {
            ui_battery = &ui_battery_data;
        }
        /* status_ok */
        if (!status_ok) {
            status_ok = &status_ok_data;
        }
        /* status_warning */
        if (!status_warning) {
            status_warning = &status_warning_data;
        }
        /* status_offline */
        if (!status_offline) {
            status_offline = &status_offline_data;
        }
        /* weather_bg_sunny */
        if (!weather_bg_sunny) {
            weather_bg_sunny = &weather_bg_sunny_data;
        }
        /* weather_bg_cloudy */
        if (!weather_bg_cloudy) {
            weather_bg_cloudy = &weather_bg_cloudy_data;
        }
        /* weather_bg_rain */
        if (!weather_bg_rain) {
            weather_bg_rain = &weather_bg_rain_data;
        }
        /* weather_bg_storm */
        if (!weather_bg_storm) {
            weather_bg_storm = &weather_bg_storm_data;
        }
        /* weather_bg_night_clear */
        if (!weather_bg_night_clear) {
            weather_bg_night_clear = &weather_bg_night_clear_data;
        }
        /* weather_bg_fog */
        if (!weather_bg_fog) {
            weather_bg_fog = &weather_bg_fog_data;
        }
        /* home_icon_cpu_18 */
        if (!home_icon_cpu_18) {
            home_icon_cpu_18 = &home_icon_cpu_18_data;
        }
        /* home_icon_cpu_24 */
        if (!home_icon_cpu_24) {
            home_icon_cpu_24 = &home_icon_cpu_24_data;
        }
        /* home_icon_cpu_28 */
        if (!home_icon_cpu_28) {
            home_icon_cpu_28 = &home_icon_cpu_28_data;
        }
        /* home_icon_cpu_32 */
        if (!home_icon_cpu_32) {
            home_icon_cpu_32 = &home_icon_cpu_32_data;
        }
        /* home_icon_ram_18 */
        if (!home_icon_ram_18) {
            home_icon_ram_18 = &home_icon_ram_18_data;
        }
        /* home_icon_ram_24 */
        if (!home_icon_ram_24) {
            home_icon_ram_24 = &home_icon_ram_24_data;
        }
        /* home_icon_ram_28 */
        if (!home_icon_ram_28) {
            home_icon_ram_28 = &home_icon_ram_28_data;
        }
        /* home_icon_ram_32 */
        if (!home_icon_ram_32) {
            home_icon_ram_32 = &home_icon_ram_32_data;
        }
        /* home_icon_storage_18 */
        if (!home_icon_storage_18) {
            home_icon_storage_18 = &home_icon_storage_18_data;
        }
        /* home_icon_storage_24 */
        if (!home_icon_storage_24) {
            home_icon_storage_24 = &home_icon_storage_24_data;
        }
        /* home_icon_storage_28 */
        if (!home_icon_storage_28) {
            home_icon_storage_28 = &home_icon_storage_28_data;
        }
        /* home_icon_storage_32 */
        if (!home_icon_storage_32) {
            home_icon_storage_32 = &home_icon_storage_32_data;
        }
        /* system_chip_18 */
        if (!system_chip_18) {
            system_chip_18 = &system_chip_18_data;
        }
        /* system_chip_24 */
        if (!system_chip_24) {
            system_chip_24 = &system_chip_24_data;
        }
        /* system_chip_28 */
        if (!system_chip_28) {
            system_chip_28 = &system_chip_28_data;
        }
        /* system_chip_32 */
        if (!system_chip_32) {
            system_chip_32 = &system_chip_32_data;
        }
        /* system_psram_18 */
        if (!system_psram_18) {
            system_psram_18 = &system_psram_18_data;
        }
        /* system_psram_24 */
        if (!system_psram_24) {
            system_psram_24 = &system_psram_24_data;
        }
        /* system_psram_28 */
        if (!system_psram_28) {
            system_psram_28 = &system_psram_28_data;
        }
        /* system_psram_32 */
        if (!system_psram_32) {
            system_psram_32 = &system_psram_32_data;
        }
        /* system_temp_18 */
        if (!system_temp_18) {
            system_temp_18 = &system_temp_18_data;
        }
        /* system_temp_24 */
        if (!system_temp_24) {
            system_temp_24 = &system_temp_24_data;
        }
        /* system_temp_28 */
        if (!system_temp_28) {
            system_temp_28 = &system_temp_28_data;
        }
        /* system_temp_32 */
        if (!system_temp_32) {
            system_temp_32 = &system_temp_32_data;
        }
        /* system_uptime_18 */
        if (!system_uptime_18) {
            system_uptime_18 = &system_uptime_18_data;
        }
        /* system_uptime_24 */
        if (!system_uptime_24) {
            system_uptime_24 = &system_uptime_24_data;
        }
        /* system_uptime_28 */
        if (!system_uptime_28) {
            system_uptime_28 = &system_uptime_28_data;
        }
        /* system_uptime_32 */
        if (!system_uptime_32) {
            system_uptime_32 = &system_uptime_32_data;
        }
        /* boot_icon_nas_24 */
        if (!boot_icon_nas_24) {
            boot_icon_nas_24 = &boot_icon_nas_24_data;
        }
        /* boot_icon_nas_28 */
        if (!boot_icon_nas_28) {
            boot_icon_nas_28 = &boot_icon_nas_28_data;
        }
        /* boot_icon_weather_24 */
        if (!boot_icon_weather_24) {
            boot_icon_weather_24 = &boot_icon_weather_24_data;
        }
        /* boot_icon_weather_28 */
        if (!boot_icon_weather_28) {
            boot_icon_weather_28 = &boot_icon_weather_28_data;
        }
        /* boot_icon_wifi_24 */
        if (!boot_icon_wifi_24) {
            boot_icon_wifi_24 = &boot_icon_wifi_24_data;
        }
        /* boot_icon_wifi_28 */
        if (!boot_icon_wifi_28) {
            boot_icon_wifi_28 = &boot_icon_wifi_28_data;
        }
        /* home_battery_18 */
        if (!home_battery_18) {
            home_battery_18 = &home_battery_18_data;
        }
        /* home_battery_24 */
        if (!home_battery_24) {
            home_battery_24 = &home_battery_24_data;
        }
        /* home_battery_28 */
        if (!home_battery_28) {
            home_battery_28 = &home_battery_28_data;
        }
        /* home_battery_32 */
        if (!home_battery_32) {
            home_battery_32 = &home_battery_32_data;
        }
        /* home_download_18 */
        if (!home_download_18) {
            home_download_18 = &home_download_18_data;
        }
        /* home_download_24 */
        if (!home_download_24) {
            home_download_24 = &home_download_24_data;
        }
        /* home_download_28 */
        if (!home_download_28) {
            home_download_28 = &home_download_28_data;
        }
        /* home_download_32 */
        if (!home_download_32) {
            home_download_32 = &home_download_32_data;
        }
        /* home_icon_flash_18 */
        if (!home_icon_flash_18) {
            home_icon_flash_18 = &home_icon_flash_18_data;
        }
        /* home_icon_flash_24 */
        if (!home_icon_flash_24) {
            home_icon_flash_24 = &home_icon_flash_24_data;
        }
        /* home_icon_flash_28 */
        if (!home_icon_flash_28) {
            home_icon_flash_28 = &home_icon_flash_28_data;
        }
        /* home_icon_flash_32 */
        if (!home_icon_flash_32) {
            home_icon_flash_32 = &home_icon_flash_32_data;
        }
        /* home_icon_nas_18 */
        if (!home_icon_nas_18) {
            home_icon_nas_18 = &home_icon_nas_18_data;
        }
        /* home_icon_nas_24 */
        if (!home_icon_nas_24) {
            home_icon_nas_24 = &home_icon_nas_24_data;
        }
        /* home_icon_nas_28 */
        if (!home_icon_nas_28) {
            home_icon_nas_28 = &home_icon_nas_28_data;
        }
        /* home_icon_nas_32 */
        if (!home_icon_nas_32) {
            home_icon_nas_32 = &home_icon_nas_32_data;
        }
        /* home_icon_network_18 */
        if (!home_icon_network_18) {
            home_icon_network_18 = &home_icon_network_18_data;
        }
        /* home_icon_network_24 */
        if (!home_icon_network_24) {
            home_icon_network_24 = &home_icon_network_24_data;
        }
        /* home_icon_network_28 */
        if (!home_icon_network_28) {
            home_icon_network_28 = &home_icon_network_28_data;
        }
        /* home_icon_network_32 */
        if (!home_icon_network_32) {
            home_icon_network_32 = &home_icon_network_32_data;
        }
        /* home_upload_18 */
        if (!home_upload_18) {
            home_upload_18 = &home_upload_18_data;
        }
        /* home_upload_24 */
        if (!home_upload_24) {
            home_upload_24 = &home_upload_24_data;
        }
        /* home_upload_28 */
        if (!home_upload_28) {
            home_upload_28 = &home_upload_28_data;
        }
        /* home_upload_32 */
        if (!home_upload_32) {
            home_upload_32 = &home_upload_32_data;
        }
        /* nav_back_18 */
        if (!nav_back_18) {
            nav_back_18 = &nav_back_18_data;
        }
        /* nav_back_24 */
        if (!nav_back_24) {
            nav_back_24 = &nav_back_24_data;
        }
        /* nav_back_28 */
        if (!nav_back_28) {
            nav_back_28 = &nav_back_28_data;
        }
        /* nav_back_32 */
        if (!nav_back_32) {
            nav_back_32 = &nav_back_32_data;
        }
        /* nav_clock_18 */
        if (!nav_clock_18) {
            nav_clock_18 = &nav_clock_18_data;
        }
        /* nav_clock_24 */
        if (!nav_clock_24) {
            nav_clock_24 = &nav_clock_24_data;
        }
        /* nav_clock_28 */
        if (!nav_clock_28) {
            nav_clock_28 = &nav_clock_28_data;
        }
        /* nav_clock_32 */
        if (!nav_clock_32) {
            nav_clock_32 = &nav_clock_32_data;
        }
        /* nav_location_18 */
        if (!nav_location_18) {
            nav_location_18 = &nav_location_18_data;
        }
        /* nav_location_24 */
        if (!nav_location_24) {
            nav_location_24 = &nav_location_24_data;
        }
        /* nav_location_28 */
        if (!nav_location_28) {
            nav_location_28 = &nav_location_28_data;
        }
        /* nav_location_32 */
        if (!nav_location_32) {
            nav_location_32 = &nav_location_32_data;
        }
        /* nav_next_18 */
        if (!nav_next_18) {
            nav_next_18 = &nav_next_18_data;
        }
        /* nav_next_24 */
        if (!nav_next_24) {
            nav_next_24 = &nav_next_24_data;
        }
        /* nav_next_28 */
        if (!nav_next_28) {
            nav_next_28 = &nav_next_28_data;
        }
        /* nav_next_32 */
        if (!nav_next_32) {
            nav_next_32 = &nav_next_32_data;
        }
        /* nav_settings_18 */
        if (!nav_settings_18) {
            nav_settings_18 = &nav_settings_18_data;
        }
        /* nav_settings_24 */
        if (!nav_settings_24) {
            nav_settings_24 = &nav_settings_24_data;
        }
        /* nav_settings_28 */
        if (!nav_settings_28) {
            nav_settings_28 = &nav_settings_28_data;
        }
        /* nav_settings_32 */
        if (!nav_settings_32) {
            nav_settings_32 = &nav_settings_32_data;
        }
        /* network_dns_18 */
        if (!network_dns_18) {
            network_dns_18 = &network_dns_18_data;
        }
        /* network_dns_24 */
        if (!network_dns_24) {
            network_dns_24 = &network_dns_24_data;
        }
        /* network_dns_28 */
        if (!network_dns_28) {
            network_dns_28 = &network_dns_28_data;
        }
        /* network_dns_32 */
        if (!network_dns_32) {
            network_dns_32 = &network_dns_32_data;
        }
        /* network_globe_18 */
        if (!network_globe_18) {
            network_globe_18 = &network_globe_18_data;
        }
        /* network_globe_24 */
        if (!network_globe_24) {
            network_globe_24 = &network_globe_24_data;
        }
        /* network_globe_28 */
        if (!network_globe_28) {
            network_globe_28 = &network_globe_28_data;
        }
        /* network_globe_32 */
        if (!network_globe_32) {
            network_globe_32 = &network_globe_32_data;
        }
        /* network_router_18 */
        if (!network_router_18) {
            network_router_18 = &network_router_18_data;
        }
        /* network_router_24 */
        if (!network_router_24) {
            network_router_24 = &network_router_24_data;
        }
        /* network_router_28 */
        if (!network_router_28) {
            network_router_28 = &network_router_28_data;
        }
        /* network_router_32 */
        if (!network_router_32) {
            network_router_32 = &network_router_32_data;
        }
        /* network_signal_18 */
        if (!network_signal_18) {
            network_signal_18 = &network_signal_18_data;
        }
        /* network_signal_24 */
        if (!network_signal_24) {
            network_signal_24 = &network_signal_24_data;
        }
        /* network_signal_28 */
        if (!network_signal_28) {
            network_signal_28 = &network_signal_28_data;
        }
        /* network_signal_32 */
        if (!network_signal_32) {
            network_signal_32 = &network_signal_32_data;
        }
        /* status_offline_18 */
        if (!status_offline_18) {
            status_offline_18 = &status_offline_18_data;
        }
        /* status_offline_24 */
        if (!status_offline_24) {
            status_offline_24 = &status_offline_24_data;
        }
        /* status_offline_28 */
        if (!status_offline_28) {
            status_offline_28 = &status_offline_28_data;
        }
        /* status_offline_32 */
        if (!status_offline_32) {
            status_offline_32 = &status_offline_32_data;
        }
        /* status_ok_18 */
        if (!status_ok_18) {
            status_ok_18 = &status_ok_18_data;
        }
        /* status_ok_24 */
        if (!status_ok_24) {
            status_ok_24 = &status_ok_24_data;
        }
        /* status_ok_28 */
        if (!status_ok_28) {
            status_ok_28 = &status_ok_28_data;
        }
        /* status_ok_32 */
        if (!status_ok_32) {
            status_ok_32 = &status_ok_32_data;
        }
        /* status_warning_18 */
        if (!status_warning_18) {
            status_warning_18 = &status_warning_18_data;
        }
        /* status_warning_24 */
        if (!status_warning_24) {
            status_warning_24 = &status_warning_24_data;
        }
        /* status_warning_28 */
        if (!status_warning_28) {
            status_warning_28 = &status_warning_28_data;
        }
        /* status_warning_32 */
        if (!status_warning_32) {
            status_warning_32 = &status_warning_32_data;
        }
        /* storage_disk_18 */
        if (!storage_disk_18) {
            storage_disk_18 = &storage_disk_18_data;
        }
        /* storage_disk_24 */
        if (!storage_disk_24) {
            storage_disk_24 = &storage_disk_24_data;
        }
        /* storage_disk_28 */
        if (!storage_disk_28) {
            storage_disk_28 = &storage_disk_28_data;
        }
        /* storage_disk_32 */
        if (!storage_disk_32) {
            storage_disk_32 = &storage_disk_32_data;
        }
        /* weather_cloud_24 */
        if (!weather_cloud_24) {
            weather_cloud_24 = &weather_cloud_24_data;
        }
        /* weather_cloud_32 */
        if (!weather_cloud_32) {
            weather_cloud_32 = &weather_cloud_32_data;
        }
        /* weather_cloud_64 */
        if (!weather_cloud_64) {
            weather_cloud_64 = &weather_cloud_64_data;
        }
        /* weather_cloud_moon_24 */
        if (!weather_cloud_moon_24) {
            weather_cloud_moon_24 = &weather_cloud_moon_24_data;
        }
        /* weather_cloud_moon_32 */
        if (!weather_cloud_moon_32) {
            weather_cloud_moon_32 = &weather_cloud_moon_32_data;
        }
        /* weather_cloud_moon_64 */
        if (!weather_cloud_moon_64) {
            weather_cloud_moon_64 = &weather_cloud_moon_64_data;
        }
        /* weather_cloud_sun_24 */
        if (!weather_cloud_sun_24) {
            weather_cloud_sun_24 = &weather_cloud_sun_24_data;
        }
        /* weather_cloud_sun_32 */
        if (!weather_cloud_sun_32) {
            weather_cloud_sun_32 = &weather_cloud_sun_32_data;
        }
        /* weather_cloud_sun_64 */
        if (!weather_cloud_sun_64) {
            weather_cloud_sun_64 = &weather_cloud_sun_64_data;
        }
        /* weather_cloudy_24 */
        if (!weather_cloudy_24) {
            weather_cloudy_24 = &weather_cloudy_24_data;
        }
        /* weather_cloudy_32 */
        if (!weather_cloudy_32) {
            weather_cloudy_32 = &weather_cloudy_32_data;
        }
        /* weather_cloudy_64 */
        if (!weather_cloudy_64) {
            weather_cloudy_64 = &weather_cloudy_64_data;
        }
        /* weather_cold_24 */
        if (!weather_cold_24) {
            weather_cold_24 = &weather_cold_24_data;
        }
        /* weather_cold_32 */
        if (!weather_cold_32) {
            weather_cold_32 = &weather_cold_32_data;
        }
        /* weather_cold_64 */
        if (!weather_cold_64) {
            weather_cold_64 = &weather_cold_64_data;
        }
        /* weather_fog_24 */
        if (!weather_fog_24) {
            weather_fog_24 = &weather_fog_24_data;
        }
        /* weather_fog_32 */
        if (!weather_fog_32) {
            weather_fog_32 = &weather_fog_32_data;
        }
        /* weather_fog_64 */
        if (!weather_fog_64) {
            weather_fog_64 = &weather_fog_64_data;
        }
        /* weather_haze_24 */
        if (!weather_haze_24) {
            weather_haze_24 = &weather_haze_24_data;
        }
        /* weather_haze_32 */
        if (!weather_haze_32) {
            weather_haze_32 = &weather_haze_32_data;
        }
        /* weather_haze_64 */
        if (!weather_haze_64) {
            weather_haze_64 = &weather_haze_64_data;
        }
        /* weather_heavy_rain_24 */
        if (!weather_heavy_rain_24) {
            weather_heavy_rain_24 = &weather_heavy_rain_24_data;
        }
        /* weather_heavy_rain_32 */
        if (!weather_heavy_rain_32) {
            weather_heavy_rain_32 = &weather_heavy_rain_32_data;
        }
        /* weather_heavy_rain_64 */
        if (!weather_heavy_rain_64) {
            weather_heavy_rain_64 = &weather_heavy_rain_64_data;
        }
        /* weather_heavy_snow_24 */
        if (!weather_heavy_snow_24) {
            weather_heavy_snow_24 = &weather_heavy_snow_24_data;
        }
        /* weather_heavy_snow_32 */
        if (!weather_heavy_snow_32) {
            weather_heavy_snow_32 = &weather_heavy_snow_32_data;
        }
        /* weather_heavy_snow_64 */
        if (!weather_heavy_snow_64) {
            weather_heavy_snow_64 = &weather_heavy_snow_64_data;
        }
        /* weather_hot_24 */
        if (!weather_hot_24) {
            weather_hot_24 = &weather_hot_24_data;
        }
        /* weather_hot_32 */
        if (!weather_hot_32) {
            weather_hot_32 = &weather_hot_32_data;
        }
        /* weather_hot_64 */
        if (!weather_hot_64) {
            weather_hot_64 = &weather_hot_64_data;
        }
        /* weather_humidity_24 */
        if (!weather_humidity_24) {
            weather_humidity_24 = &weather_humidity_24_data;
        }
        /* weather_humidity_32 */
        if (!weather_humidity_32) {
            weather_humidity_32 = &weather_humidity_32_data;
        }
        /* weather_humidity_64 */
        if (!weather_humidity_64) {
            weather_humidity_64 = &weather_humidity_64_data;
        }
        /* weather_moon_24 */
        if (!weather_moon_24) {
            weather_moon_24 = &weather_moon_24_data;
        }
        /* weather_moon_32 */
        if (!weather_moon_32) {
            weather_moon_32 = &weather_moon_32_data;
        }
        /* weather_moon_64 */
        if (!weather_moon_64) {
            weather_moon_64 = &weather_moon_64_data;
        }
        /* weather_night_clear_24 */
        if (!weather_night_clear_24) {
            weather_night_clear_24 = &weather_night_clear_24_data;
        }
        /* weather_night_clear_32 */
        if (!weather_night_clear_32) {
            weather_night_clear_32 = &weather_night_clear_32_data;
        }
        /* weather_night_clear_64 */
        if (!weather_night_clear_64) {
            weather_night_clear_64 = &weather_night_clear_64_data;
        }
        /* weather_partly_night_24 */
        if (!weather_partly_night_24) {
            weather_partly_night_24 = &weather_partly_night_24_data;
        }
        /* weather_partly_night_32 */
        if (!weather_partly_night_32) {
            weather_partly_night_32 = &weather_partly_night_32_data;
        }
        /* weather_partly_night_64 */
        if (!weather_partly_night_64) {
            weather_partly_night_64 = &weather_partly_night_64_data;
        }
        /* weather_rain_24 */
        if (!weather_rain_24) {
            weather_rain_24 = &weather_rain_24_data;
        }
        /* weather_rain_32 */
        if (!weather_rain_32) {
            weather_rain_32 = &weather_rain_32_data;
        }
        /* weather_rain_64 */
        if (!weather_rain_64) {
            weather_rain_64 = &weather_rain_64_data;
        }
        /* weather_rain_chance_24 */
        if (!weather_rain_chance_24) {
            weather_rain_chance_24 = &weather_rain_chance_24_data;
        }
        /* weather_rain_chance_32 */
        if (!weather_rain_chance_32) {
            weather_rain_chance_32 = &weather_rain_chance_32_data;
        }
        /* weather_rain_chance_64 */
        if (!weather_rain_chance_64) {
            weather_rain_chance_64 = &weather_rain_chance_64_data;
        }
        /* weather_snow_24 */
        if (!weather_snow_24) {
            weather_snow_24 = &weather_snow_24_data;
        }
        /* weather_snow_32 */
        if (!weather_snow_32) {
            weather_snow_32 = &weather_snow_32_data;
        }
        /* weather_snow_64 */
        if (!weather_snow_64) {
            weather_snow_64 = &weather_snow_64_data;
        }
        /* weather_storm_24 */
        if (!weather_storm_24) {
            weather_storm_24 = &weather_storm_24_data;
        }
        /* weather_storm_32 */
        if (!weather_storm_32) {
            weather_storm_32 = &weather_storm_32_data;
        }
        /* weather_storm_64 */
        if (!weather_storm_64) {
            weather_storm_64 = &weather_storm_64_data;
        }
        /* weather_sun_24 */
        if (!weather_sun_24) {
            weather_sun_24 = &weather_sun_24_data;
        }
        /* weather_sun_32 */
        if (!weather_sun_32) {
            weather_sun_32 = &weather_sun_32_data;
        }
        /* weather_sun_64 */
        if (!weather_sun_64) {
            weather_sun_64 = &weather_sun_64_data;
        }
        /* weather_temperature_24 */
        if (!weather_temperature_24) {
            weather_temperature_24 = &weather_temperature_24_data;
        }
        /* weather_temperature_32 */
        if (!weather_temperature_32) {
            weather_temperature_32 = &weather_temperature_32_data;
        }
        /* weather_temperature_64 */
        if (!weather_temperature_64) {
            weather_temperature_64 = &weather_temperature_64_data;
        }
        /* weather_unknown_24 */
        if (!weather_unknown_24) {
            weather_unknown_24 = &weather_unknown_24_data;
        }
        /* weather_unknown_32 */
        if (!weather_unknown_32) {
            weather_unknown_32 = &weather_unknown_32_data;
        }
        /* weather_unknown_64 */
        if (!weather_unknown_64) {
            weather_unknown_64 = &weather_unknown_64_data;
        }
        /* weather_uv_24 */
        if (!weather_uv_24) {
            weather_uv_24 = &weather_uv_24_data;
        }
        /* weather_uv_32 */
        if (!weather_uv_32) {
            weather_uv_32 = &weather_uv_32_data;
        }
        /* weather_uv_64 */
        if (!weather_uv_64) {
            weather_uv_64 = &weather_uv_64_data;
        }
        /* weather_wind_24 */
        if (!weather_wind_24) {
            weather_wind_24 = &weather_wind_24_data;
        }
        /* weather_wind_32 */
        if (!weather_wind_32) {
            weather_wind_32 = &weather_wind_32_data;
        }
        /* weather_wind_64 */
        if (!weather_wind_64) {
            weather_wind_64 = &weather_wind_64_data;
        }
    }
    #endif

    /*----------------
     * Global styles
     *----------------*/

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&meter_track);
        lv_style_init(&meter_cpu);
        lv_style_init(&meter_ram);
        lv_style_init(&meter_flash);
        lv_style_init(&meter_knob_hidden);

        lv_style_set_arc_color(&meter_track, lv_color_hex(0x2b384b));
        lv_style_set_arc_width(&meter_track, 7);
        lv_style_set_arc_rounded(&meter_track, true);
        lv_style_set_bg_opa(&meter_track, (255 * 0 / 100));
        lv_style_set_border_width(&meter_track, 0);
        lv_style_set_pad_all(&meter_track, 0);
        lv_style_set_arc_color(&meter_cpu, lv_color_hex(0xff4b4b));
        lv_style_set_arc_width(&meter_cpu, 7);
        lv_style_set_arc_rounded(&meter_cpu, true);
        lv_style_set_arc_color(&meter_ram, lv_color_hex(0x1ea0ff));
        lv_style_set_arc_width(&meter_ram, 7);
        lv_style_set_arc_rounded(&meter_ram, true);
        lv_style_set_arc_color(&meter_flash, lv_color_hex(0xf5b942));
        lv_style_set_arc_width(&meter_flash, 7);
        lv_style_set_arc_rounded(&meter_flash, true);
        lv_style_set_bg_opa(&meter_knob_hidden, (255 * 0 / 100));
        lv_style_set_border_width(&meter_knob_hidden, 0);
        lv_style_set_pad_all(&meter_knob_hidden, 0);

        style_inited = true;
    }

    /*----------------
     * Subjects
     *----------------*/
    /*----------------
     * Translations
     *----------------*/

    #ifndef LV_EDITOR_PREVIEW
        lv_translation_add_static(translation_languages, translation_tags, translation_texts);
        lv_translation_set_language(translation_languages[0]);
    #endif

#if defined(LV_USE_XML) && LV_USE_XML
    /* Register widgets */

    /* Check all fonts / default if needed. This prevents fonts that are used in one target but
       defined in another from causing assertion failures during rendering of the Preview. */
    check_font(&be_regular_10, "be_regular_10");
    check_font(&be_regular_12, "be_regular_12");
    check_font(&be_regular_14, "be_regular_14");
    check_font(&be_regular_16, "be_regular_16");
    check_font(&be_regular_20, "be_regular_20");
    check_font(&be_medium_10, "be_medium_10");
    check_font(&be_medium_11, "be_medium_11");
    check_font(&be_medium_12, "be_medium_12");
    check_font(&be_medium_14, "be_medium_14");
    check_font(&be_semibold_12, "be_semibold_12");
    check_font(&be_semibold_14, "be_semibold_14");
    check_font(&be_semibold_16, "be_semibold_16");
    check_font(&be_semibold_20, "be_semibold_20");

    /* Register fonts */
    lv_xml_register_font(NULL, "be_regular_10", be_regular_10);
    lv_xml_register_font(NULL, "be_regular_12", be_regular_12);
    lv_xml_register_font(NULL, "be_regular_14", be_regular_14);
    lv_xml_register_font(NULL, "be_regular_16", be_regular_16);
    lv_xml_register_font(NULL, "be_regular_20", be_regular_20);
    lv_xml_register_font(NULL, "be_medium_10", be_medium_10);
    lv_xml_register_font(NULL, "be_medium_11", be_medium_11);
    lv_xml_register_font(NULL, "be_medium_12", be_medium_12);
    lv_xml_register_font(NULL, "be_medium_14", be_medium_14);
    lv_xml_register_font(NULL, "be_semibold_12", be_semibold_12);
    lv_xml_register_font(NULL, "be_semibold_14", be_semibold_14);
    lv_xml_register_font(NULL, "be_semibold_16", be_semibold_16);
    lv_xml_register_font(NULL, "be_semibold_20", be_semibold_20);

    /* Register subjects */

    /* Register callbacks */
#endif

    /* Register all the global assets so that they won't be created again when globals.xml is parsed.
     * While running in the editor skip this step to update the preview when the XML changes */
#if defined(LV_USE_XML) && LV_USE_XML && !defined(LV_EDITOR_PREVIEW)
    /* Register images */
    lv_xml_register_image(NULL, "xom_boot_logo", xom_boot_logo);
    lv_xml_register_image(NULL, "xom_boot_logo_landscape", xom_boot_logo_landscape);
    lv_xml_register_image(NULL, "boot_bg", boot_bg);
    lv_xml_register_image(NULL, "boot_icon_wifi", boot_icon_wifi);
    lv_xml_register_image(NULL, "boot_icon_weather", boot_icon_weather);
    lv_xml_register_image(NULL, "boot_icon_nas", boot_icon_nas);
    lv_xml_register_image(NULL, "home_icon_cpu", home_icon_cpu);
    lv_xml_register_image(NULL, "home_icon_ram", home_icon_ram);
    lv_xml_register_image(NULL, "home_icon_storage", home_icon_storage);
    lv_xml_register_image(NULL, "home_icon_network", home_icon_network);
    lv_xml_register_image(NULL, "weather_sun", weather_sun);
    lv_xml_register_image(NULL, "weather_cloud_sun", weather_cloud_sun);
    lv_xml_register_image(NULL, "weather_cloudy", weather_cloudy);
    lv_xml_register_image(NULL, "weather_cloud", weather_cloud);
    lv_xml_register_image(NULL, "weather_moon", weather_moon);
    lv_xml_register_image(NULL, "weather_cloud_moon", weather_cloud_moon);
    lv_xml_register_image(NULL, "weather_partly_night", weather_partly_night);
    lv_xml_register_image(NULL, "weather_night_clear", weather_night_clear);
    lv_xml_register_image(NULL, "weather_rain", weather_rain);
    lv_xml_register_image(NULL, "weather_heavy_rain", weather_heavy_rain);
    lv_xml_register_image(NULL, "weather_storm", weather_storm);
    lv_xml_register_image(NULL, "weather_snow", weather_snow);
    lv_xml_register_image(NULL, "weather_heavy_snow", weather_heavy_snow);
    lv_xml_register_image(NULL, "weather_fog", weather_fog);
    lv_xml_register_image(NULL, "weather_haze", weather_haze);
    lv_xml_register_image(NULL, "weather_wind", weather_wind);
    lv_xml_register_image(NULL, "weather_hot", weather_hot);
    lv_xml_register_image(NULL, "weather_cold", weather_cold);
    lv_xml_register_image(NULL, "weather_unknown", weather_unknown);
    lv_xml_register_image(NULL, "forecast_sun", forecast_sun);
    lv_xml_register_image(NULL, "forecast_cloud", forecast_cloud);
    lv_xml_register_image(NULL, "forecast_cloudy", forecast_cloudy);
    lv_xml_register_image(NULL, "forecast_cloudy_64", forecast_cloudy_64);
    lv_xml_register_image(NULL, "forecast_cloud_sun", forecast_cloud_sun);
    lv_xml_register_image(NULL, "forecast_rain", forecast_rain);
    lv_xml_register_image(NULL, "forecast_heavy_rain", forecast_heavy_rain);
    lv_xml_register_image(NULL, "forecast_storm", forecast_storm);
    lv_xml_register_image(NULL, "forecast_moon", forecast_moon);
    lv_xml_register_image(NULL, "forecast_cloud_moon", forecast_cloud_moon);
    lv_xml_register_image(NULL, "forecast_snow", forecast_snow);
    lv_xml_register_image(NULL, "forecast_fog", forecast_fog);
    lv_xml_register_image(NULL, "weather_metric_rain", weather_metric_rain);
    lv_xml_register_image(NULL, "weather_metric_rain_chance", weather_metric_rain_chance);
    lv_xml_register_image(NULL, "weather_metric_wind", weather_metric_wind);
    lv_xml_register_image(NULL, "weather_metric_humidity", weather_metric_humidity);
    lv_xml_register_image(NULL, "weather_metric_temperature", weather_metric_temperature);
    lv_xml_register_image(NULL, "weather_metric_uv", weather_metric_uv);
    lv_xml_register_image(NULL, "system_chip", system_chip);
    lv_xml_register_image(NULL, "system_psram", system_psram);
    lv_xml_register_image(NULL, "system_temp", system_temp);
    lv_xml_register_image(NULL, "system_uptime", system_uptime);
    lv_xml_register_image(NULL, "nas_icon", nas_icon);
    lv_xml_register_image(NULL, "nas_disk", nas_disk);
    lv_xml_register_image(NULL, "network_router", network_router);
    lv_xml_register_image(NULL, "network_signal", network_signal);
    lv_xml_register_image(NULL, "network_dns", network_dns);
    lv_xml_register_image(NULL, "network_globe", network_globe);
    lv_xml_register_image(NULL, "network_upload", network_upload);
    lv_xml_register_image(NULL, "network_download", network_download);
    lv_xml_register_image(NULL, "ui_back", ui_back);
    lv_xml_register_image(NULL, "ui_next", ui_next);
    lv_xml_register_image(NULL, "ui_settings", ui_settings);
    lv_xml_register_image(NULL, "ui_location", ui_location);
    lv_xml_register_image(NULL, "ui_clock", ui_clock);
    lv_xml_register_image(NULL, "ui_battery", ui_battery);
    lv_xml_register_image(NULL, "status_ok", status_ok);
    lv_xml_register_image(NULL, "status_warning", status_warning);
    lv_xml_register_image(NULL, "status_offline", status_offline);
    lv_xml_register_image(NULL, "weather_bg_sunny", weather_bg_sunny);
    lv_xml_register_image(NULL, "weather_bg_cloudy", weather_bg_cloudy);
    lv_xml_register_image(NULL, "weather_bg_rain", weather_bg_rain);
    lv_xml_register_image(NULL, "weather_bg_storm", weather_bg_storm);
    lv_xml_register_image(NULL, "weather_bg_night_clear", weather_bg_night_clear);
    lv_xml_register_image(NULL, "weather_bg_fog", weather_bg_fog);
    lv_xml_register_image(NULL, "home_icon_cpu_18", home_icon_cpu_18);
    lv_xml_register_image(NULL, "home_icon_cpu_24", home_icon_cpu_24);
    lv_xml_register_image(NULL, "home_icon_cpu_28", home_icon_cpu_28);
    lv_xml_register_image(NULL, "home_icon_cpu_32", home_icon_cpu_32);
    lv_xml_register_image(NULL, "home_icon_ram_18", home_icon_ram_18);
    lv_xml_register_image(NULL, "home_icon_ram_24", home_icon_ram_24);
    lv_xml_register_image(NULL, "home_icon_ram_28", home_icon_ram_28);
    lv_xml_register_image(NULL, "home_icon_ram_32", home_icon_ram_32);
    lv_xml_register_image(NULL, "home_icon_storage_18", home_icon_storage_18);
    lv_xml_register_image(NULL, "home_icon_storage_24", home_icon_storage_24);
    lv_xml_register_image(NULL, "home_icon_storage_28", home_icon_storage_28);
    lv_xml_register_image(NULL, "home_icon_storage_32", home_icon_storage_32);
    lv_xml_register_image(NULL, "system_chip_18", system_chip_18);
    lv_xml_register_image(NULL, "system_chip_24", system_chip_24);
    lv_xml_register_image(NULL, "system_chip_28", system_chip_28);
    lv_xml_register_image(NULL, "system_chip_32", system_chip_32);
    lv_xml_register_image(NULL, "system_psram_18", system_psram_18);
    lv_xml_register_image(NULL, "system_psram_24", system_psram_24);
    lv_xml_register_image(NULL, "system_psram_28", system_psram_28);
    lv_xml_register_image(NULL, "system_psram_32", system_psram_32);
    lv_xml_register_image(NULL, "system_temp_18", system_temp_18);
    lv_xml_register_image(NULL, "system_temp_24", system_temp_24);
    lv_xml_register_image(NULL, "system_temp_28", system_temp_28);
    lv_xml_register_image(NULL, "system_temp_32", system_temp_32);
    lv_xml_register_image(NULL, "system_uptime_18", system_uptime_18);
    lv_xml_register_image(NULL, "system_uptime_24", system_uptime_24);
    lv_xml_register_image(NULL, "system_uptime_28", system_uptime_28);
    lv_xml_register_image(NULL, "system_uptime_32", system_uptime_32);
    lv_xml_register_image(NULL, "boot_icon_nas_24", boot_icon_nas_24);
    lv_xml_register_image(NULL, "boot_icon_nas_28", boot_icon_nas_28);
    lv_xml_register_image(NULL, "boot_icon_weather_24", boot_icon_weather_24);
    lv_xml_register_image(NULL, "boot_icon_weather_28", boot_icon_weather_28);
    lv_xml_register_image(NULL, "boot_icon_wifi_24", boot_icon_wifi_24);
    lv_xml_register_image(NULL, "boot_icon_wifi_28", boot_icon_wifi_28);
    lv_xml_register_image(NULL, "home_battery_18", home_battery_18);
    lv_xml_register_image(NULL, "home_battery_24", home_battery_24);
    lv_xml_register_image(NULL, "home_battery_28", home_battery_28);
    lv_xml_register_image(NULL, "home_battery_32", home_battery_32);
    lv_xml_register_image(NULL, "home_download_18", home_download_18);
    lv_xml_register_image(NULL, "home_download_24", home_download_24);
    lv_xml_register_image(NULL, "home_download_28", home_download_28);
    lv_xml_register_image(NULL, "home_download_32", home_download_32);
    lv_xml_register_image(NULL, "home_icon_flash_18", home_icon_flash_18);
    lv_xml_register_image(NULL, "home_icon_flash_24", home_icon_flash_24);
    lv_xml_register_image(NULL, "home_icon_flash_28", home_icon_flash_28);
    lv_xml_register_image(NULL, "home_icon_flash_32", home_icon_flash_32);
    lv_xml_register_image(NULL, "home_icon_nas_18", home_icon_nas_18);
    lv_xml_register_image(NULL, "home_icon_nas_24", home_icon_nas_24);
    lv_xml_register_image(NULL, "home_icon_nas_28", home_icon_nas_28);
    lv_xml_register_image(NULL, "home_icon_nas_32", home_icon_nas_32);
    lv_xml_register_image(NULL, "home_icon_network_18", home_icon_network_18);
    lv_xml_register_image(NULL, "home_icon_network_24", home_icon_network_24);
    lv_xml_register_image(NULL, "home_icon_network_28", home_icon_network_28);
    lv_xml_register_image(NULL, "home_icon_network_32", home_icon_network_32);
    lv_xml_register_image(NULL, "home_upload_18", home_upload_18);
    lv_xml_register_image(NULL, "home_upload_24", home_upload_24);
    lv_xml_register_image(NULL, "home_upload_28", home_upload_28);
    lv_xml_register_image(NULL, "home_upload_32", home_upload_32);
    lv_xml_register_image(NULL, "nav_back_18", nav_back_18);
    lv_xml_register_image(NULL, "nav_back_24", nav_back_24);
    lv_xml_register_image(NULL, "nav_back_28", nav_back_28);
    lv_xml_register_image(NULL, "nav_back_32", nav_back_32);
    lv_xml_register_image(NULL, "nav_clock_18", nav_clock_18);
    lv_xml_register_image(NULL, "nav_clock_24", nav_clock_24);
    lv_xml_register_image(NULL, "nav_clock_28", nav_clock_28);
    lv_xml_register_image(NULL, "nav_clock_32", nav_clock_32);
    lv_xml_register_image(NULL, "nav_location_18", nav_location_18);
    lv_xml_register_image(NULL, "nav_location_24", nav_location_24);
    lv_xml_register_image(NULL, "nav_location_28", nav_location_28);
    lv_xml_register_image(NULL, "nav_location_32", nav_location_32);
    lv_xml_register_image(NULL, "nav_next_18", nav_next_18);
    lv_xml_register_image(NULL, "nav_next_24", nav_next_24);
    lv_xml_register_image(NULL, "nav_next_28", nav_next_28);
    lv_xml_register_image(NULL, "nav_next_32", nav_next_32);
    lv_xml_register_image(NULL, "nav_settings_18", nav_settings_18);
    lv_xml_register_image(NULL, "nav_settings_24", nav_settings_24);
    lv_xml_register_image(NULL, "nav_settings_28", nav_settings_28);
    lv_xml_register_image(NULL, "nav_settings_32", nav_settings_32);
    lv_xml_register_image(NULL, "network_dns_18", network_dns_18);
    lv_xml_register_image(NULL, "network_dns_24", network_dns_24);
    lv_xml_register_image(NULL, "network_dns_28", network_dns_28);
    lv_xml_register_image(NULL, "network_dns_32", network_dns_32);
    lv_xml_register_image(NULL, "network_globe_18", network_globe_18);
    lv_xml_register_image(NULL, "network_globe_24", network_globe_24);
    lv_xml_register_image(NULL, "network_globe_28", network_globe_28);
    lv_xml_register_image(NULL, "network_globe_32", network_globe_32);
    lv_xml_register_image(NULL, "network_router_18", network_router_18);
    lv_xml_register_image(NULL, "network_router_24", network_router_24);
    lv_xml_register_image(NULL, "network_router_28", network_router_28);
    lv_xml_register_image(NULL, "network_router_32", network_router_32);
    lv_xml_register_image(NULL, "network_signal_18", network_signal_18);
    lv_xml_register_image(NULL, "network_signal_24", network_signal_24);
    lv_xml_register_image(NULL, "network_signal_28", network_signal_28);
    lv_xml_register_image(NULL, "network_signal_32", network_signal_32);
    lv_xml_register_image(NULL, "status_offline_18", status_offline_18);
    lv_xml_register_image(NULL, "status_offline_24", status_offline_24);
    lv_xml_register_image(NULL, "status_offline_28", status_offline_28);
    lv_xml_register_image(NULL, "status_offline_32", status_offline_32);
    lv_xml_register_image(NULL, "status_ok_18", status_ok_18);
    lv_xml_register_image(NULL, "status_ok_24", status_ok_24);
    lv_xml_register_image(NULL, "status_ok_28", status_ok_28);
    lv_xml_register_image(NULL, "status_ok_32", status_ok_32);
    lv_xml_register_image(NULL, "status_warning_18", status_warning_18);
    lv_xml_register_image(NULL, "status_warning_24", status_warning_24);
    lv_xml_register_image(NULL, "status_warning_28", status_warning_28);
    lv_xml_register_image(NULL, "status_warning_32", status_warning_32);
    lv_xml_register_image(NULL, "storage_disk_18", storage_disk_18);
    lv_xml_register_image(NULL, "storage_disk_24", storage_disk_24);
    lv_xml_register_image(NULL, "storage_disk_28", storage_disk_28);
    lv_xml_register_image(NULL, "storage_disk_32", storage_disk_32);
    lv_xml_register_image(NULL, "weather_cloud_24", weather_cloud_24);
    lv_xml_register_image(NULL, "weather_cloud_32", weather_cloud_32);
    lv_xml_register_image(NULL, "weather_cloud_64", weather_cloud_64);
    lv_xml_register_image(NULL, "weather_cloud_moon_24", weather_cloud_moon_24);
    lv_xml_register_image(NULL, "weather_cloud_moon_32", weather_cloud_moon_32);
    lv_xml_register_image(NULL, "weather_cloud_moon_64", weather_cloud_moon_64);
    lv_xml_register_image(NULL, "weather_cloud_sun_24", weather_cloud_sun_24);
    lv_xml_register_image(NULL, "weather_cloud_sun_32", weather_cloud_sun_32);
    lv_xml_register_image(NULL, "weather_cloud_sun_64", weather_cloud_sun_64);
    lv_xml_register_image(NULL, "weather_cloudy_24", weather_cloudy_24);
    lv_xml_register_image(NULL, "weather_cloudy_32", weather_cloudy_32);
    lv_xml_register_image(NULL, "weather_cloudy_64", weather_cloudy_64);
    lv_xml_register_image(NULL, "weather_cold_24", weather_cold_24);
    lv_xml_register_image(NULL, "weather_cold_32", weather_cold_32);
    lv_xml_register_image(NULL, "weather_cold_64", weather_cold_64);
    lv_xml_register_image(NULL, "weather_fog_24", weather_fog_24);
    lv_xml_register_image(NULL, "weather_fog_32", weather_fog_32);
    lv_xml_register_image(NULL, "weather_fog_64", weather_fog_64);
    lv_xml_register_image(NULL, "weather_haze_24", weather_haze_24);
    lv_xml_register_image(NULL, "weather_haze_32", weather_haze_32);
    lv_xml_register_image(NULL, "weather_haze_64", weather_haze_64);
    lv_xml_register_image(NULL, "weather_heavy_rain_24", weather_heavy_rain_24);
    lv_xml_register_image(NULL, "weather_heavy_rain_32", weather_heavy_rain_32);
    lv_xml_register_image(NULL, "weather_heavy_rain_64", weather_heavy_rain_64);
    lv_xml_register_image(NULL, "weather_heavy_snow_24", weather_heavy_snow_24);
    lv_xml_register_image(NULL, "weather_heavy_snow_32", weather_heavy_snow_32);
    lv_xml_register_image(NULL, "weather_heavy_snow_64", weather_heavy_snow_64);
    lv_xml_register_image(NULL, "weather_hot_24", weather_hot_24);
    lv_xml_register_image(NULL, "weather_hot_32", weather_hot_32);
    lv_xml_register_image(NULL, "weather_hot_64", weather_hot_64);
    lv_xml_register_image(NULL, "weather_humidity_24", weather_humidity_24);
    lv_xml_register_image(NULL, "weather_humidity_32", weather_humidity_32);
    lv_xml_register_image(NULL, "weather_humidity_64", weather_humidity_64);
    lv_xml_register_image(NULL, "weather_moon_24", weather_moon_24);
    lv_xml_register_image(NULL, "weather_moon_32", weather_moon_32);
    lv_xml_register_image(NULL, "weather_moon_64", weather_moon_64);
    lv_xml_register_image(NULL, "weather_night_clear_24", weather_night_clear_24);
    lv_xml_register_image(NULL, "weather_night_clear_32", weather_night_clear_32);
    lv_xml_register_image(NULL, "weather_night_clear_64", weather_night_clear_64);
    lv_xml_register_image(NULL, "weather_partly_night_24", weather_partly_night_24);
    lv_xml_register_image(NULL, "weather_partly_night_32", weather_partly_night_32);
    lv_xml_register_image(NULL, "weather_partly_night_64", weather_partly_night_64);
    lv_xml_register_image(NULL, "weather_rain_24", weather_rain_24);
    lv_xml_register_image(NULL, "weather_rain_32", weather_rain_32);
    lv_xml_register_image(NULL, "weather_rain_64", weather_rain_64);
    lv_xml_register_image(NULL, "weather_rain_chance_24", weather_rain_chance_24);
    lv_xml_register_image(NULL, "weather_rain_chance_32", weather_rain_chance_32);
    lv_xml_register_image(NULL, "weather_rain_chance_64", weather_rain_chance_64);
    lv_xml_register_image(NULL, "weather_snow_24", weather_snow_24);
    lv_xml_register_image(NULL, "weather_snow_32", weather_snow_32);
    lv_xml_register_image(NULL, "weather_snow_64", weather_snow_64);
    lv_xml_register_image(NULL, "weather_storm_24", weather_storm_24);
    lv_xml_register_image(NULL, "weather_storm_32", weather_storm_32);
    lv_xml_register_image(NULL, "weather_storm_64", weather_storm_64);
    lv_xml_register_image(NULL, "weather_sun_24", weather_sun_24);
    lv_xml_register_image(NULL, "weather_sun_32", weather_sun_32);
    lv_xml_register_image(NULL, "weather_sun_64", weather_sun_64);
    lv_xml_register_image(NULL, "weather_temperature_24", weather_temperature_24);
    lv_xml_register_image(NULL, "weather_temperature_32", weather_temperature_32);
    lv_xml_register_image(NULL, "weather_temperature_64", weather_temperature_64);
    lv_xml_register_image(NULL, "weather_unknown_24", weather_unknown_24);
    lv_xml_register_image(NULL, "weather_unknown_32", weather_unknown_32);
    lv_xml_register_image(NULL, "weather_unknown_64", weather_unknown_64);
    lv_xml_register_image(NULL, "weather_uv_24", weather_uv_24);
    lv_xml_register_image(NULL, "weather_uv_32", weather_uv_32);
    lv_xml_register_image(NULL, "weather_uv_64", weather_uv_64);
    lv_xml_register_image(NULL, "weather_wind_24", weather_wind_24);
    lv_xml_register_image(NULL, "weather_wind_32", weather_wind_32);
    lv_xml_register_image(NULL, "weather_wind_64", weather_wind_64);
#endif

#if !defined(LV_USE_XML) || LV_USE_XML == 0
    /*--------------------
     *  Permanent screens
     *-------------------*/
    /* If XML is enabled it's assumed that the permanent screens are created
     * manually from XML using lv_xml_create() */
#endif
}

void xomcodingui_set_target(uint32_t target)
{
    xomcodingui_target = target;
}

uint32_t xomcodingui_get_target(void)
{
    return xomcodingui_target;
}

bool xomcodingui_check_target(uint32_t target)
{
    return (xomcodingui_target & target) ? true : false;
}

/* Callbacks */

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void check_font(lv_font_t ** font, const char * name)
{
    if (!(*font)) {
        *font = (lv_font_t *)LV_FONT_DEFAULT;
        LV_LOG_WARN("font `%s` was not set. Using `LV_FONT_DEFAULT` instead", name);
    }
}