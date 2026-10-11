#pragma once

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

#define XOM_UI_COLOR_BG      0x0b111b
#define XOM_UI_COLOR_CARD    0x172332
#define XOM_UI_COLOR_BORDER  0x29394d
#define XOM_UI_COLOR_PRIMARY 0xa52a26
#define XOM_UI_COLOR_TEXT    0xffffff
#define XOM_UI_COLOR_MUTED   0x94a3b8

const lv_font_t * xom_ui_font_body(void);
const lv_font_t * xom_ui_font_title(void);
const lv_font_t * xom_ui_font_button(void);
const lv_font_t * xom_ui_font_small(void);

void xom_ui_style_label(lv_obj_t * label, const lv_font_t * font, uint32_t color);
void xom_ui_style_button(lv_obj_t * button, uint32_t bg, uint32_t border);
void xom_ui_style_card(lv_obj_t * obj);
void xom_ui_style_toast(lv_obj_t * label);

#ifdef __cplusplus
}
#endif
