#include "xom_firmware.h"
#include "esp_check.h"
#include "esp_heap_caps.h"
#include "esp_log.h"
#include "esp_lvgl_port.h"
#include "board_esp32_3248s035r.h"
#include "ui_navigation.h"
#include "xom_settings.h"
#include "xom_touch.h"
#include "xom_wifi.h"
#include "xom_wifi_ui.h"
#include "xom_time.h"
#include "xom_weather.h"
#include "xom_time_ui.h"
#include "xom_weather_ui.h"
#include "xomcodingui.h"
#include "xomcodingui_gen.h"

static const char * TAG = "xom_fw";

static void xom_firmware_wifi_status_cb(bool connected, void * user_data)
{
    (void)user_data;
    xom_weather_wifi_status_changed(connected);
}

static void xom_firmware_wifi_autostart(void)
{
    xom_settings_t cfg;
    if (xom_settings_load(&cfg) != ESP_OK) {
        xom_settings_defaults(&cfg);
    }
    if (!cfg.wifi_enabled) {
        xom_wifi_set_enabled(false);
        ESP_LOGI(TAG, "Wi-Fi disabled by settings");
        return;
    }
    if (xom_wifi_set_enabled(true) != ESP_OK) {
        ESP_LOGW(TAG, "Wi-Fi enable failed");
        return;
    }
    if (cfg.ssid[0] != '\0') {
        ESP_LOGI(TAG, "Wi-Fi autoconnect to saved SSID");
        xom_wifi_connect(cfg.ssid, cfg.password);
    }
}

esp_err_t xom_firmware_start(void)
{
    xom_board_display_t bd;
    esp_err_t err = xom_board_display_start(&bd);
    if (err != ESP_OK) return err;
    if (bd.touch_indev != NULL) lv_indev_set_mode(bd.touch_indev, LV_INDEV_MODE_TIMER);
    xomcodingui_init(NULL);
    xom_wifi_ui_init();
    xom_time_ui_init();
    xom_weather_ui_init();
    ESP_ERROR_CHECK(ui_navigation_init(bd.display, bd.touch_indev, XOM_SCREEN_HOME));
    ESP_ERROR_CHECK(xom_settings_init());
    xom_touch_init(bd.touch_indev);
    ESP_ERROR_CHECK(xom_wifi_init());
    ESP_ERROR_CHECK(xom_time_init());
    ESP_ERROR_CHECK(xom_weather_init());
    ESP_ERROR_CHECK(xom_wifi_set_status_callback(xom_firmware_wifi_status_cb, NULL));
    xom_firmware_wifi_autostart();
    return ESP_OK;
}
