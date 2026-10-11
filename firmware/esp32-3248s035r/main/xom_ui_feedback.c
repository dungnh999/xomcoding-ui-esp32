#include "xom_ui_feedback.h"

#include "xom_ui_style.h"

#include <string.h>

#define FB_NAME "xom_save_feedback"
#define FB_HIDE_MS 2200

static lv_timer_t * s_hide_timer;
static lv_obj_t * s_hide_box;

static void hide_timer_cb(lv_timer_t * timer)
{
    (void)timer;
    if (s_hide_box != NULL) lv_obj_add_flag(s_hide_box, LV_OBJ_FLAG_HIDDEN);
    s_hide_timer = NULL;
    s_hide_box = NULL;
}

static void feedback_delete_cb(lv_event_t * event)
{
    lv_obj_t * obj = lv_event_get_target(event);
    if (obj == s_hide_box) {
        if (s_hide_timer != NULL) lv_timer_delete(s_hide_timer);
        s_hide_timer = NULL;
        s_hide_box = NULL;
    }
}

static void cancel_hide_timer(void)
{
    if (s_hide_timer != NULL) lv_timer_delete(s_hide_timer);
    s_hide_timer = NULL;
    s_hide_box = NULL;
}

static lv_obj_t * find_feedback(lv_obj_t * screen)
{
    return screen != NULL ? lv_obj_find_by_name(screen, FB_NAME) : NULL;
}

static lv_obj_t * ensure_feedback(lv_obj_t * screen)
{
    lv_obj_t * box = find_feedback(screen);
    if (box != NULL) return box;

    box = lv_obj_create(screen);
    lv_obj_set_name_static(box, FB_NAME);
    lv_obj_set_pos(box, 12, 404);
    lv_obj_set_size(box, 296, 26);
    xom_ui_style_card(box);
    lv_obj_set_style_radius(box, 8, 0);
    lv_obj_set_style_pad_left(box, 9, 0);
    lv_obj_set_style_pad_right(box, 9, 0);
    lv_obj_set_style_pad_top(box, 4, 0);
    lv_obj_set_style_pad_bottom(box, 0, 0);
    lv_obj_remove_flag(box, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_event_cb(box, feedback_delete_cb, LV_EVENT_DELETE, NULL);

    lv_obj_t * label = lv_label_create(box);
    lv_obj_set_name_static(label, "xom_save_feedback_label");
    lv_obj_set_size(label, 278, 18);
    lv_obj_set_pos(label, 0, 0);
    lv_label_set_long_mode(label, LV_LABEL_LONG_DOT);
    xom_ui_style_label(label, xom_ui_font_body(), XOM_UI_COLOR_MUTED);
    lv_obj_add_flag(box, LV_OBJ_FLAG_HIDDEN);
    return box;
}

void xom_ui_feedback_set(lv_obj_t * screen, lv_obj_t * button, xom_ui_feedback_state_t state, const char * message)
{
    if (screen == NULL) return;
    lv_obj_t * box = ensure_feedback(screen);
    lv_obj_t * label = lv_obj_find_by_name(box, "xom_save_feedback_label");
    cancel_hide_timer();

    uint32_t bg = 0x121f2d;
    uint32_t border = 0x29394d;
    uint32_t text = 0x94a3b8;
    if (state == XOM_UI_FEEDBACK_SAVING) { border = 0x38bdf8; text = 0xe2e8f0; }
    else if (state == XOM_UI_FEEDBACK_SUCCESS) { border = 0x34d399; text = 0x34d399; }
    else if (state == XOM_UI_FEEDBACK_ERROR) { border = 0xf87171; text = 0xfca5a5; }

    lv_obj_set_style_bg_color(box, lv_color_hex(bg), 0);
    lv_obj_set_style_bg_opa(box, LV_OPA_COVER, 0);
    lv_obj_set_style_border_color(box, lv_color_hex(border), 0);
    if (label != NULL) {
        lv_obj_set_style_text_color(label, lv_color_hex(text), 0);
        lv_obj_set_style_text_font(label, xom_ui_font_body(), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_label_set_text(label, message != NULL ? message : "");
    }
    if (state == XOM_UI_FEEDBACK_IDLE) lv_obj_add_flag(box, LV_OBJ_FLAG_HIDDEN);
    else lv_obj_remove_flag(box, LV_OBJ_FLAG_HIDDEN);

    if (button != NULL) {
        if (state == XOM_UI_FEEDBACK_SAVING) lv_obj_add_state(button, LV_STATE_DISABLED);
        else lv_obj_remove_state(button, LV_STATE_DISABLED);
    }

    if (state == XOM_UI_FEEDBACK_SUCCESS || state == XOM_UI_FEEDBACK_ERROR) {
        s_hide_box = box;
        s_hide_timer = lv_timer_create(hide_timer_cb, FB_HIDE_MS, NULL);
        lv_timer_set_repeat_count(s_hide_timer, 1);
    }
}

void xom_ui_feedback_clear(lv_obj_t * screen, lv_obj_t * button)
{
    lv_obj_t * box = find_feedback(screen);
    cancel_hide_timer();
    if (box != NULL) lv_obj_add_flag(box, LV_OBJ_FLAG_HIDDEN);
    if (button != NULL) lv_obj_remove_state(button, LV_STATE_DISABLED);
}
