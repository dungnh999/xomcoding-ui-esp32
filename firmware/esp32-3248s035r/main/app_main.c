#include "esp_err.h"
#include "esp_log.h"

#include "xom_firmware.h"

static const char * TAG = "xom_app";

void app_main(void)
{
    esp_err_t err = xom_firmware_start();
    if(err != ESP_OK) {
        ESP_LOGE(TAG, "Firmware start failed: %s", esp_err_to_name(err));
    }
}
