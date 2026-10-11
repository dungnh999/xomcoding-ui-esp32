#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    XOM_HW_ORIENTATION_PORTRAIT = 0,
    XOM_HW_ORIENTATION_LANDSCAPE,
} xom_hw_orientation_t;

typedef struct {
    uint16_t hor_res;
    uint16_t ver_res;
    xom_hw_orientation_t orientation;
    bool has_touch;
} xom_hw_port_t;

/*
 * Board-specific implementation point.
 *
 * This function must initialize LCD, backlight, optional touch, and register
 * LVGL display/input callbacks before returning ESP_OK.
 */
esp_err_t xom_hw_port_init(xom_hw_port_t * out_port);

#ifdef __cplusplus
}
#endif
