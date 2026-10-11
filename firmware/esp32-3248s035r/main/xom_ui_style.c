#include "xom_ui_style.h"

#include "xomcodingui_gen.h"

const lv_font_t * xom_ui_font_body(void)
{
    return be_medium_12;
}

const lv_font_t * xom_ui_font_title(void)
{
    return be_semibold_14;
}

const lv_font_t * xom_ui_font_button(void)
{
    return be_medium_12;
}

const lv_font_t * xom_ui_font_small(void)
{
    return be_medium_11;
}

void xom_ui_style_label(lv_obj_t * label, const lv_font_t * font, uint32_t color)
{
    if (label == NULL) return;
    lv_obj_set_style_text_font(label, font != NULL ? font : xom_ui_font_body(), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(label, lv_color_hex(color), LV_PART_MAIN | LV_STATE_DEFAULT);
}

void xom_ui_style_button(lv_obj_t * button, uint32_t bg, uint32_t border)
{
    if (button == NULL) return;
    lv_obj_set_style_bg_color(button, lv_color_hex(bg), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(button, LV_OPA_COVER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(button, lv_color_hex(border), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(button, border == 0 ? 0 : 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(button, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void xom_ui_style_card(lv_obj_t * obj)
{
    if (obj == NULL) return;
    lv_obj_set_style_bg_color(obj, lv_color_hex(XOM_UI_COLOR_CARD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(obj, lv_color_hex(XOM_UI_COLOR_BORDER), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void xom_ui_style_toast(lv_obj_t * label)
{
    if (label == NULL) return;
    lv_obj_set_style_bg_color(label, lv_color_hex(XOM_UI_COLOR_CARD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(label, LV_OPA_90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(label, lv_color_hex(XOM_UI_COLOR_BORDER), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(label, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(label, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(label, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(label, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(label, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(label, 7, LV_PART_MAIN | LV_STATE_DEFAULT);
    xom_ui_style_label(label, xom_ui_font_body(), XOM_UI_COLOR_TEXT);
}
