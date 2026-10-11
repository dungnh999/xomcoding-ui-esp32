#include "lvgl_firmware.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_err.h"
#include "esp_log.h"
#include "lvgl.h"

#include "hw_port.h"
#include "screens/home/home_landscape_gen.h"
#include "screens/home/home_portrait_gen.h"
#include "xomcodingui.h"
#include "xomcodingui_gen.h"

static const char * TAG = "xom_lvgl";

esp_err_t xom_lvgl_firmware_start(void)
{
    xom_hw_port_t port = {0};

    lv_init();

    esp_err_t err = xom_hw_port_init(&port);
    if(err != ESP_OK) {
        return err;
    }

    if(port.hor_res == 0 || port.ver_res == 0) {
        ESP_LOGE(TAG, "Invalid display resolution from hardware port");
        return ESP_ERR_INVALID_STATE;
    }

    const bool landscape = port.orientation == XOM_HW_ORIENTATION_LANDSCAPE;
    xomcodingui_set_target(landscape ? XOMCODINGUI_TARGET_LANDSCAPE : XOMCODINGUI_TARGET_PORTRAIT);
    xomcodingui_init(NULL);

    lv_obj_t * home = landscape ? home_landscape_create() : home_portrait_create();
    if(home == NULL) {
        ESP_LOGE(TAG, "Home screen creation failed");
        return ESP_ERR_INVALID_STATE;
    }

    lv_screen_load(home);
    ESP_LOGI(TAG, "Loaded %s demo UI (%ux%u)", landscape ? "landscape" : "portrait",
             (unsigned)port.hor_res, (unsigned)port.ver_res);

    while(true) {
        lv_timer_handler();
        vTaskDelay(pdMS_TO_TICKS(5));
    }
}
