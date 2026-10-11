#include "xom_widgets.h"

#include <stdio.h>
#include <string.h>

#include "esp_log.h"
#include "lvgl.h"

#include "xom_ui_style.h"

static const char * TAG = "xom_widgets";

/* Accent / segmented-control palette shared with the generated design. */
#define XOM_ACCENT       0xa52a26
#define XOM_SEG_ON_BG    0xa52a26
#define XOM_SEG_ON_TEXT  0xffffff
#define XOM_SEG_OFF_BG   0x233247
#define XOM_SEG_OFF_TEXT 0x94a3b8
#define XOM_TABBAR_BG    0x172332

#define XOM_TOAST_MS 1500

static lv_obj_t * s_toast;
static lv_timer_t * s_toast_timer;

static void toast_timeout_cb(lv_timer_t * timer)
{
    (void)timer;
    if (s_toast != NULL) {
        lv_obj_delete(s_toast);
        s_toast = NULL;
    }
    /* One-shot timer (repeat_count == 1) deletes itself after this returns. */
    s_toast_timer = NULL;
}

void xom_demo_toast(const char * msg)
{
    if (s_toast != NULL) {
        lv_obj_delete(s_toast);
        s_toast = NULL;
    }
    if (s_toast_timer != NULL) {
        lv_timer_delete(s_toast_timer);
        s_toast_timer = NULL;
    }

    s_toast = lv_label_create(lv_layer_top());
    lv_label_set_text(s_toast, msg != NULL ? msg : "DEMO");
    lv_label_set_long_mode(s_toast, LV_LABEL_LONG_DOT);
    lv_obj_set_width(s_toast, 280);
    xom_ui_style_toast(s_toast);
    lv_obj_remove_flag(s_toast, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_align(s_toast, LV_ALIGN_TOP_MID, 0, 62);
    lv_obj_move_foreground(s_toast);

    s_toast_timer = lv_timer_create(toast_timeout_cb, XOM_TOAST_MS, NULL);
    lv_timer_set_repeat_count(s_toast_timer, 1);
}

static lv_obj_t * find_by_name(lv_obj_t * root, const char * name)
{
    if (root == NULL || name == NULL) {
        return NULL;
    }
    const char * own = lv_obj_get_name(root);
    if (own != NULL && strcmp(own, name) == 0) {
        return root;
    }
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(root, i++)) != NULL) {
        lv_obj_t * hit = find_by_name(child, name);
        if (hit != NULL) {
            return hit;
        }
    }
    return NULL;
}

static void set_button_label_color(lv_obj_t * btn, uint32_t hex)
{
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(btn, i++)) != NULL) {
        if (lv_obj_check_type(child, &lv_label_class)) {
            lv_obj_set_style_text_color(child, lv_color_hex(hex), 0);
        }
    }
}

/* Returns a non-zero id for buttons that form a mutually-exclusive segment. */
static int segment_group(const char * name)
{
    if (name == NULL) {
        return 0;
    }
    if (strcmp(name, "weather_cfg_celsius") == 0 ||
        strcmp(name, "weather_cfg_fahrenheit") == 0) {
        return 1;
    }
    if (strcmp(name, "nas_config_http") == 0 ||
        strcmp(name, "nas_config_https") == 0) {
        return 2;
    }
    if (strcmp(name, "datetime_format_12h") == 0 ||
        strcmp(name, "datetime_format_24h") == 0) {
        return 3;
    }
    if (strcmp(name, "btn_theme_dark") == 0 ||
        strcmp(name, "btn_theme_light") == 0) {
        return 4;
    }
    if (strcmp(name, "btn_ip_dhcp") == 0 ||
        strcmp(name, "btn_ip_static") == 0) {
        return 5;
    }
    if (strcmp(name, "btn_display_timeout_never") == 0 ||
        strcmp(name, "btn_display_timeout_30s") == 0 ||
        strcmp(name, "btn_display_timeout_1m") == 0 ||
        strcmp(name, "btn_display_timeout_5m") == 0 ||
        strcmp(name, "btn_display_timeout_10m") == 0) {
        return 6;
    }
    if (strcmp(name, "btn_weather_interval_5m") == 0 ||
        strcmp(name, "btn_weather_interval_15m") == 0 ||
        strcmp(name, "btn_weather_interval_30m") == 0 ||
        strcmp(name, "btn_weather_interval_60m") == 0) {
        return 7;
    }
    if (strcmp(name, "api_config_auth_none") == 0 ||
        strcmp(name, "api_config_auth_key") == 0 ||
        strcmp(name, "api_config_auth_bearer") == 0) {
        return 8;
    }
    return 0;
}

/* Recolour the clicked segment and reset its siblings under the same parent. */
static void apply_segment_selection(lv_obj_t * selected, int group)
{
    lv_obj_t * parent = lv_obj_get_parent(selected);
    if (parent == NULL) {
        return;
    }
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(parent, i++)) != NULL) {
        if (!lv_obj_check_type(child, &lv_button_class)) {
            continue;
        }
        if (segment_group(lv_obj_get_name(child)) != group) {
            continue;
        }
        bool on = (child == selected);
        lv_obj_set_style_bg_color(child, lv_color_hex(on ? XOM_SEG_ON_BG : XOM_SEG_OFF_BG), 0);
        lv_obj_set_style_bg_opa(child, LV_OPA_COVER, 0);
        set_button_label_color(child, on ? XOM_SEG_ON_TEXT : XOM_SEG_OFF_TEXT);
        if (on) {
            lv_obj_add_state(child, LV_STATE_CHECKED);
        } else {
            lv_obj_remove_state(child, LV_STATE_CHECKED);
        }
    }
}

static void tabview_apply_style(lv_obj_t * tv)
{
    uint32_t count = lv_tabview_get_tab_count(tv);
    uint32_t active = lv_tabview_get_tab_active(tv);
    for (uint32_t i = 0; i < count; i++) {
        lv_obj_t * btn = lv_tabview_get_tab_button(tv, (int32_t)i);
        if (btn == NULL) {
            continue;
        }
        bool on = (i == active);
        uint32_t bg = on ? XOM_ACCENT : XOM_TABBAR_BG;
        uint32_t fg = on ? XOM_SEG_ON_TEXT : XOM_SEG_OFF_TEXT;
        lv_obj_set_style_bg_color(btn, lv_color_hex(bg), 0);
        lv_obj_set_style_bg_opa(btn, LV_OPA_COVER, 0);
        lv_obj_set_style_border_width(btn, 0, 0);
        lv_obj_set_style_radius(btn, 7, 0);
        lv_obj_t * lbl = lv_obj_get_child_by_type(btn, 0, &lv_label_class);
        if (lbl != NULL) {
            lv_obj_set_style_text_color(lbl, lv_color_hex(fg), 0);
        }
    }
}

static void switch_value_cb(lv_event_t * event)
{
    lv_obj_t * obj = lv_event_get_target(event);
    const char * name = lv_obj_get_name(obj);
    bool on = lv_obj_has_state(obj, LV_STATE_CHECKED);

    ESP_LOGI(TAG, "%s %s -> %s", lv_obj_check_type(obj, &lv_checkbox_class) ? "CHECKBOX" : "SWITCH",
             name != NULL ? name : "?", on ? "ON" : "OFF");

    if (name != NULL && strstr(name, "show_wifi_password") != NULL) {
        lv_obj_t * ta = find_by_name(lv_obj_get_screen(obj), "input_wifi_password");
        if (ta != NULL) {
            lv_textarea_set_password_mode(ta, !on);
            ESP_LOGI(TAG, "wifi password display -> %s", on ? "visible" : "masked");
        }
    }
}

static void slider_value_cb(lv_event_t * event)
{
    lv_obj_t * slider = lv_event_get_target(event);
    int32_t value = lv_slider_get_value(slider);
    const char * name = lv_obj_get_name(slider);

    lv_obj_t * label = find_by_name(lv_obj_get_screen(slider), "label_brightness_value");
    if (label != NULL) {
        lv_label_set_text_fmt(label, "%d%%", (int)value);
    }
    ESP_LOGI(TAG, "SLIDER %s = %d", name != NULL ? name : "?", (int)value);
}

static void tabview_value_cb(lv_event_t * event)
{
    lv_obj_t * tv = lv_event_get_target(event);
    tabview_apply_style(tv);
    ESP_LOGI(TAG, "TABVIEW %s active=%u",
             lv_obj_get_name(tv) != NULL ? lv_obj_get_name(tv) : "?",
             (unsigned)lv_tabview_get_tab_active(tv));
}

static void button_clicked_cb(lv_event_t * event)
{
    lv_obj_t * btn = lv_event_get_target(event);
    const char * name = lv_obj_get_name(btn);

    int group = segment_group(name);
    if (group != 0) {
        apply_segment_selection(btn, group);
    }

    /*
     * Buttons marked USER_1 are owned by a real feature module (e.g. Wi-Fi).
     * Segment styling still applies above, but the DEMO toast must not fire.
     */
    if (lv_obj_has_flag(btn, LV_OBJ_FLAG_USER_1)) {
        return;
    }

    lv_obj_t * label = lv_obj_get_child_by_type(btn, 0, &lv_label_class);
    const char * text = label != NULL ? lv_label_get_text(label) : NULL;
    if (text == NULL || text[0] == '\0') {
        text = name != NULL ? name : "button";
    }

    char msg[64];
    snprintf(msg, sizeof(msg), "DEMO: %s", text);
    xom_demo_toast(msg);
    ESP_LOGI(TAG, "BUTTON %s tap (demo)", name != NULL ? name : "?");
}

static void textarea_setup(lv_obj_t * ta)
{
    const char * name = lv_obj_get_name(ta);
    if (name == NULL) {
        return;
    }
    if (strstr(name, "password") != NULL || strstr(name, "pin") != NULL ||
        strstr(name, "token") != NULL) {
        lv_textarea_set_password_mode(ta, true);
    }
}

static void walk(lv_obj_t * obj, bool in_tabview)
{
    if (obj == NULL) {
        return;
    }

    bool is_tabview = lv_obj_check_type(obj, &lv_tabview_class);
    bool child_in_tabview = in_tabview || is_tabview;

    if (lv_obj_check_type(obj, &lv_switch_class) ||
        lv_obj_check_type(obj, &lv_checkbox_class)) {
        lv_obj_add_event_cb(obj, switch_value_cb, LV_EVENT_VALUE_CHANGED, NULL);
    } else if (lv_obj_check_type(obj, &lv_slider_class)) {
        lv_obj_add_event_cb(obj, slider_value_cb, LV_EVENT_VALUE_CHANGED, NULL);
    } else if (is_tabview) {
        tabview_apply_style(obj);
        lv_obj_add_event_cb(obj, tabview_value_cb, LV_EVENT_VALUE_CHANGED, NULL);
    } else if (lv_obj_check_type(obj, &lv_textarea_class)) {
        textarea_setup(obj);
    } else if (lv_obj_check_type(obj, &lv_button_class)) {
        /* Tab buttons are owned by the tab view and must stay DEMO-silent. */
        if (!in_tabview && lv_obj_get_name(obj) != NULL) {
            lv_obj_add_event_cb(obj, button_clicked_cb, LV_EVENT_CLICKED, NULL);
        }
    }

    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(obj, i++)) != NULL) {
        walk(child, child_in_tabview);
    }
}

void xom_widgets_attach(lv_obj_t * screen)
{
    if (screen == NULL) {
        return;
    }
    walk(screen, false);
}
