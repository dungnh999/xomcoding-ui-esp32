#pragma once

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    XOM_UI_FEEDBACK_IDLE = 0,
    XOM_UI_FEEDBACK_SAVING,
    XOM_UI_FEEDBACK_SUCCESS,
    XOM_UI_FEEDBACK_ERROR,
} xom_ui_feedback_state_t;

void xom_ui_feedback_set(lv_obj_t * screen, lv_obj_t * button, xom_ui_feedback_state_t state, const char * message);
void xom_ui_feedback_clear(lv_obj_t * screen, lv_obj_t * button);

#ifdef __cplusplus
}
#endif
