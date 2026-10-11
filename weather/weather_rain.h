
#ifndef XOM_WEATHER_RAIN_H
#define XOM_WEATHER_RAIN_H

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

void weather_rain_start(lv_obj_t * screen);
void weather_rain_stop(void);

#ifdef __cplusplus
}
#endif

#endif
