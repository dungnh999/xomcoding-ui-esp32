#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "esp_err.h"
#include "esp_lcd_touch.h"
#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Touch debug / calibration for the XPT2046 resistive panel.
 *
 * Raw ADC mode is required for calibration: the XPT2046 ESP-IDF driver is
 * configured with CONFIG_XPT2046_CONVERT_ADC_TO_COORDS disabled so that
 * esp_lcd_touch_get_data() reports the 12-bit panel samples (0..4095). This
 * module converts those raw samples to screen pixels through
 * xom_touch_process_coordinates() which is registered as the touch
 * `process_coordinates` callback.
 */

/* Serial logging of press / release / move events. Toggle to 0 to silence. */
#ifndef XOM_TOUCH_DEBUG
#define XOM_TOUCH_DEBUG 1
#endif

/* Run the on-screen 4-corner + center validation calibration wizard when needed. */
#ifndef XOM_TOUCH_CALIBRATION_WIZARD
#define XOM_TOUCH_CALIBRATION_WIZARD 1
#endif

/* Fixed-panel fallback used until real calibration data is supplied. */
#define XOM_TOUCH_RAW_LIMIT 4095

typedef struct {
    uint16_t raw_min_x;
    uint16_t raw_max_x;
    uint16_t raw_min_y;
    uint16_t raw_max_y;
    bool swap_xy;
    bool invert_x;
    bool invert_y;
    bool calibrated;
} xom_touch_calibration_t;

/* Register LVGL input debug hooks and (optionally) the calibration wizard. */
void xom_touch_init(lv_indev_t * indev);

/* `process_coordinates` callback: raw ADC -> calibrated screen pixels. */
void xom_touch_process_coordinates(esp_lcd_touch_handle_t tp,
                                   uint16_t * x, uint16_t * y,
                                   uint16_t * strength,
                                   uint8_t * point_num,
                                   uint8_t max_point_num);

const xom_touch_calibration_t * xom_touch_get_calibration(void);
void xom_touch_set_calibration(const xom_touch_calibration_t * calibration);
void xom_touch_start_calibration(void);

/* Last raw ADC sample seen by the touch pipeline. Returns false until the
 * panel has reported at least one sample. Used by the navigation logger to
 * tell a coordinate/orientation error apart from a hit-region error. */
bool xom_touch_get_last_raw(uint16_t * raw_x, uint16_t * raw_y);

/* Compute a calibration from 4 raw corner samples: TL, TR, BL, BR. */
bool xom_touch_compute_calibration(const uint16_t corners[4][2],
                                   xom_touch_calibration_t * out);

/* Log raw min/max and event counters collected since boot / last reset. */
void xom_touch_log_stats(void);

#ifdef __cplusplus
}
#endif
