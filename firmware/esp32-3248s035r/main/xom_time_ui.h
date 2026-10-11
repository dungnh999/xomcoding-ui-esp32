#pragma once
#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif
void xom_time_ui_init(void);
void xom_time_ui_attach(lv_obj_t *screen, int id);
#ifdef __cplusplus
}
#endif
