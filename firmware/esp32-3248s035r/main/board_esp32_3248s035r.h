#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "esp_err.h"
#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

#define XOM_LCD_H_RES 320
#define XOM_LCD_V_RES 480

typedef struct {
    lv_display_t * display;
    lv_indev_t * touch_indev;
    uint16_t hor_res;
    uint16_t ver_res;
    bool has_touch;
} xom_board_display_t;

esp_err_t xom_board_display_start(xom_board_display_t * out_display);

#ifdef __cplusplus
}
#endif
