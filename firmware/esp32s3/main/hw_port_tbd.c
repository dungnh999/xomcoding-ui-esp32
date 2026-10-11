#include "hw_port.h"

#include "esp_err.h"
#include "esp_log.h"

static const char * TAG = "xom_hw_tbd";

esp_err_t xom_hw_port_init(xom_hw_port_t * out_port)
{
    if(out_port != NULL) {
        out_port->hor_res = 0;
        out_port->ver_res = 0;
        out_port->orientation = XOM_HW_ORIENTATION_PORTRAIT;
        out_port->has_touch = false;
    }

    ESP_LOGE(TAG, "Board, LCD, touch, and GPIO mapping are not identified yet");
    ESP_LOGE(TAG, "Provide a board model or vendor BSP before enabling hardware drivers");
    return ESP_ERR_NOT_SUPPORTED;
}
