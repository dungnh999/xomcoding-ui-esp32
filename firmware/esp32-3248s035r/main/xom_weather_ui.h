#pragma once
#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif
void xom_weather_ui_init(void);
void xom_weather_ui_attach(lv_obj_t *screen, int id);
#ifdef __cplusplus
}
#endif
