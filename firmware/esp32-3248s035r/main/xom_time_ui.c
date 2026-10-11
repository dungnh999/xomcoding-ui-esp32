#include "xom_time_ui.h"

#include <stdio.h>
#include <string.h>

#include "esp_err.h"
#include "esp_log.h"
#include "ui_navigation.h"
#include "xom_keyboard.h"
#include "xom_settings.h"
#include "xom_time.h"
#include "xom_ui_feedback.h"
#include "xom_ui_style.h"
#include "xom_widgets.h"

#define TN_HOME_TIME "xt_home_time"
#define TN_HOME_DATE "xt_home_date"
#define TN_DT_STATUS "xt_dt_status"
#define TN_DT_SAVE   "btn_datetime_save"
#define TN_DT_SYNC   "btn_datetime_sync"
#define TN_TZ_SAVE   "btn_timezone_save"

static const char * TAG = "xom_time_ui";
static lv_timer_t * s_timer;
static bool s_time_24h = true;
static char s_pending_tz[XOM_SETTINGS_TZ_MAX] = "Asia/Ho_Chi_Minh";

static lv_obj_t * find_label_by_text(lv_obj_t * root, const char * text)
{
    if (root == NULL || text == NULL) return NULL;
    if (lv_obj_check_type(root, &lv_label_class)) {
        const char * t = lv_label_get_text(root);
        if (t != NULL && strcmp(t, text) == 0) return root;
    }
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(root, i++)) != NULL) {
        lv_obj_t * hit = find_label_by_text(child, text);
        if (hit != NULL) return hit;
    }
    return NULL;
}

static void bind(lv_obj_t * screen, const char * placeholder, const char * name)
{
    lv_obj_t * label = find_label_by_text(screen, placeholder);
    if (label != NULL) {
        lv_obj_set_name_static(label, name);
        ESP_LOGI(TAG, "bound label %s from %s", name, placeholder);
    } else {
        ESP_LOGW(TAG, "label not found: %s (placeholder=%s)", name, placeholder);
    }
}

static lv_obj_t * named(lv_obj_t * screen, const char * name)
{
    return lv_obj_find_by_name(screen, name);
}

static void set_text(lv_obj_t * label, const char * text)
{
    if (label == NULL || text == NULL) return;
    const char * cur = lv_label_get_text(label);
    if (cur == NULL || strcmp(cur, text) != 0) lv_label_set_text(label, text);
}

static void set_btn_selected(lv_obj_t * btn, bool selected)
{
    if (btn == NULL) return;
    lv_obj_set_style_bg_color(btn, lv_color_hex(selected ? 0xa52a26 : 0x233247), 0);
    lv_obj_set_style_border_width(btn, selected ? 1 : 0, 0);
}

static lv_obj_t * ensure_sync_button(lv_obj_t * screen)
{
    lv_obj_t * btn = named(screen, TN_DT_SYNC);
    if (btn != NULL) return btn;
    btn = lv_button_create(screen);
    lv_obj_set_name_static(btn, TN_DT_SYNC);
    lv_obj_set_pos(btn, 202, 393);
    lv_obj_set_size(btn, 94, 30);
    xom_ui_style_button(btn, 0x233247, XOM_UI_COLOR_BORDER);
    lv_obj_set_style_radius(btn, 8, 0);
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, "Sync Now");
    lv_obj_center(label);
    xom_ui_style_label(label, xom_ui_font_button(), XOM_UI_COLOR_TEXT);
    return btn;
}

static void format_weekday_date(char * out, size_t len, const struct tm * tm)
{
    static const char * const wd[] = { "CN", "T2", "T3", "T4", "T5", "T6", "T7" };
    snprintf(out, len, "%s, %02d/%02d/%04d", wd[tm->tm_wday], tm->tm_mday,
             tm->tm_mon + 1, tm->tm_year + 1900);
}

static bool time_is_real(const xom_time_status_t * st)
{
    return st != NULL && st->state == XOM_TIME_SYNCED && st->tm_local.tm_year + 1900 >= 2024;
}

static void update_screen(lv_obj_t * screen, int id)
{
    if (screen == NULL) return;

    xom_time_status_t st;
    xom_time_get_status(&st);

    if (id == XOM_SCREEN_HOME) {
        lv_obj_t * l = named(screen, TN_HOME_TIME);
        if (l != NULL) {
            char buf[16];
            if (time_is_real(&st)) strftime(buf, sizeof(buf), "%H:%M", &st.tm_local);
            else snprintf(buf, sizeof(buf), "--:--");
            set_text(l, buf);
        }
        l = named(screen, TN_HOME_DATE);
        if (l != NULL) {
            char buf[32];
            if (time_is_real(&st)) format_weekday_date(buf, sizeof(buf), &st.tm_local);
            else snprintf(buf, sizeof(buf), "Đang đồng bộ thời gian");
            set_text(l, buf);
        }
    } else if (id == XOM_SCREEN_DATETIME) {
        lv_obj_t * l = named(screen, TN_DT_STATUS);
        if (l != NULL) {
            char buf[64];
            if (time_is_real(&st)) {
                char tbuf[24];
                strftime(tbuf, sizeof(tbuf), "%H:%M:%S %d/%m/%Y", &st.tm_local);
                snprintf(buf, sizeof(buf), "%s · %s", xom_time_state_label(st.state), tbuf);
            } else {
                snprintf(buf, sizeof(buf), "%s · chưa có giờ thật", xom_time_state_label(st.state));
            }
            set_text(l, buf);
        }
        xom_settings_t cfg;
        if (xom_settings_load(&cfg) == ESP_OK) {
            set_text(find_label_by_text(screen, "Việt Nam · UTC+7"), cfg.timezone);
        }
    }
}

static void save_cb(lv_event_t * event)
{
    lv_obj_t * btn = lv_event_get_target(event);
    lv_obj_t * screen = lv_obj_get_screen(btn);
    xom_keyboard_hide();
    xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SAVING, "Đang lưu cài đặt thời gian...");

    xom_settings_t cfg;
    esp_err_t err = xom_settings_load(&cfg);
    if (err != ESP_OK) {
        xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, "Không đọc được NVS");
        return;
    }
    lv_obj_t * ntp = named(screen, "datetime_ntp_server");
    lv_obj_t * sw = named(screen, "datetime_ntp_enabled");
    if (ntp != NULL) {
        const char * txt = lv_textarea_get_text(ntp);
        if (txt == NULL || txt[0] == '\0') {
            xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, "Máy chủ NTP không được rỗng");
            return;
        }
        strncpy(cfg.ntp_server, txt, sizeof(cfg.ntp_server)-1);
        cfg.ntp_server[sizeof(cfg.ntp_server)-1] = '\0';
    }
    if (sw != NULL) cfg.ntp_enabled = lv_obj_has_state(sw, LV_STATE_CHECKED);
    cfg.time_24h = s_time_24h;
    if (cfg.timezone[0] == '\0') strncpy(cfg.timezone, "Asia/Ho_Chi_Minh", sizeof(cfg.timezone)-1);

    err = xom_settings_save(&cfg);
    if (err == ESP_OK) err = xom_time_apply_settings(cfg.timezone, cfg.ntp_server, cfg.ntp_enabled);
    if (err == ESP_OK) xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SUCCESS, "Đã lưu thành công");
    else xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, esp_err_to_name(err));
}

static void sync_cb(lv_event_t * event)
{
    lv_obj_t * btn = lv_event_get_target(event);
    lv_obj_t * screen = lv_obj_get_screen(btn);
    esp_err_t err = xom_time_refresh_now();
    if (err == ESP_OK) xom_ui_feedback_set(screen, NULL, XOM_UI_FEEDBACK_SAVING, "Đang đồng bộ NTP...");
    else xom_ui_feedback_set(screen, NULL, XOM_UI_FEEDBACK_ERROR, "NTP đang tắt hoặc chưa sẵn sàng");
}

static void fmt_12_cb(lv_event_t * e)
{
    (void)e;
    s_time_24h = false;
    lv_obj_t * screen = lv_screen_active();
    set_btn_selected(named(screen, "datetime_format_12h"), true);
    set_btn_selected(named(screen, "datetime_format_24h"), false);
}

static void fmt_24_cb(lv_event_t * e)
{
    (void)e;
    s_time_24h = true;
    lv_obj_t * screen = lv_screen_active();
    set_btn_selected(named(screen, "datetime_format_12h"), false);
    set_btn_selected(named(screen, "datetime_format_24h"), true);
}

static void tz_select_cb(lv_event_t * e)
{
    const char * tz = lv_event_get_user_data(e);
    if (tz == NULL) return;
    strncpy(s_pending_tz, tz, sizeof(s_pending_tz)-1);
    s_pending_tz[sizeof(s_pending_tz)-1] = '\0';
    xom_ui_feedback_set(lv_screen_active(), NULL, XOM_UI_FEEDBACK_SUCCESS, tz);
}

static void tz_save_cb(lv_event_t * event)
{
    lv_obj_t * btn = lv_event_get_target(event);
    lv_obj_t * screen = lv_obj_get_screen(btn);
    xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SAVING, "Đang lưu múi giờ...");
    xom_settings_t cfg;
    esp_err_t err = xom_settings_load(&cfg);
    if (err == ESP_OK) {
        strncpy(cfg.timezone, s_pending_tz, sizeof(cfg.timezone)-1);
        cfg.timezone[sizeof(cfg.timezone)-1] = '\0';
        err = xom_settings_save(&cfg);
    }
    if (err == ESP_OK) err = xom_time_apply_settings(cfg.timezone, cfg.ntp_server, cfg.ntp_enabled);
    if (err == ESP_OK) xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SUCCESS, "Đã lưu múi giờ");
    else xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, esp_err_to_name(err));
}

static void poll_cb(lv_timer_t * timer)
{
    (void)timer;
    lv_obj_t * screen = lv_screen_active();
    if (screen == NULL) return;
    const char * name = lv_obj_get_name(screen);
    if (name == NULL) return;
    if (named(screen, TN_HOME_TIME) != NULL || named(screen, TN_HOME_DATE) != NULL)
        update_screen(screen, XOM_SCREEN_HOME);
    else if (named(screen, TN_DT_STATUS) != NULL)
        update_screen(screen, XOM_SCREEN_DATETIME);
}

void xom_time_ui_init(void)
{
    if (s_timer == NULL) s_timer = lv_timer_create(poll_cb, 1000, NULL);
}

void xom_time_ui_attach(lv_obj_t * screen, int id)
{
    if (screen == NULL) return;
    if (id == XOM_SCREEN_HOME) {
        bind(screen, "12:34", TN_HOME_TIME);
        bind(screen, "T7, 10/10/2026", TN_HOME_DATE);
    } else if (id == XOM_SCREEN_DATETIME) {
        xom_settings_t cfg;
        xom_settings_load(&cfg);
        s_time_24h = cfg.time_24h;
        bind(screen, "Chưa kiểm tra · Giờ mẫu 10:35:28", TN_DT_STATUS);
        lv_obj_t * ntp = named(screen, "datetime_ntp_server");
        if (ntp != NULL) lv_textarea_set_text(ntp, cfg.ntp_server);
        lv_obj_t * sw = named(screen, "datetime_ntp_enabled");
        if (sw != NULL) {
            if (cfg.ntp_enabled) lv_obj_add_state(sw, LV_STATE_CHECKED);
            else lv_obj_remove_state(sw, LV_STATE_CHECKED);
        }
        set_btn_selected(named(screen, "datetime_format_12h"), !s_time_24h);
        set_btn_selected(named(screen, "datetime_format_24h"), s_time_24h);
        lv_obj_t * fmt = named(screen, "datetime_format_12h");
        if (fmt != NULL) { lv_obj_add_flag(fmt, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(fmt, fmt_12_cb, LV_EVENT_CLICKED, NULL); }
        fmt = named(screen, "datetime_format_24h");
        if (fmt != NULL) { lv_obj_add_flag(fmt, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(fmt, fmt_24_cb, LV_EVENT_CLICKED, NULL); }
        lv_obj_t * sync = ensure_sync_button(screen);
        lv_obj_add_flag(sync, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(sync, sync_cb, LV_EVENT_CLICKED, NULL);
        lv_obj_t * btn = named(screen, TN_DT_SAVE);
        if (btn != NULL) {
            lv_obj_add_flag(btn, LV_OBJ_FLAG_USER_1);
            lv_obj_add_event_cb(btn, save_cb, LV_EVENT_CLICKED, NULL);
        }
    } else if (id == XOM_SCREEN_TIMEZONE_SELECT) {
        xom_settings_t cfg;
        xom_settings_load(&cfg);
        strncpy(s_pending_tz, cfg.timezone, sizeof(s_pending_tz)-1);
        s_pending_tz[sizeof(s_pending_tz)-1] = '\0';
        static const struct { const char * tz; int y; } zones[] = {
            { "Asia/Ho_Chi_Minh", 98 }, { "Asia/Bangkok", 200 },
            { "Asia/Singapore", 246 }, { "Asia/Tokyo", 292 }, { "UTC", 338 },
        };
        for (int i = 0; i < 5; i++) {
            lv_obj_t * b = lv_button_create(screen);
            lv_obj_set_pos(b, 12, zones[i].y);
            lv_obj_set_size(b, 296, i == 0 ? 60 : 44);
            lv_obj_set_style_bg_opa(b, LV_OPA_TRANSP, 0);
            lv_obj_set_style_border_width(b, 0, 0);
            lv_obj_set_style_shadow_width(b, 0, 0);
            lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1);
            lv_obj_add_event_cb(b, tz_select_cb, LV_EVENT_CLICKED, (void *)zones[i].tz);
        }
        lv_obj_t * save = lv_button_create(screen);
        lv_obj_set_name_static(save, TN_TZ_SAVE);
        lv_obj_set_pos(save, 12, 426);
        lv_obj_set_size(save, 296, 38);
        lv_obj_set_style_bg_opa(save, LV_OPA_TRANSP, 0);
        lv_obj_set_style_border_width(save, 0, 0);
        lv_obj_set_style_shadow_width(save, 0, 0);
        lv_obj_add_flag(save, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(save, tz_save_cb, LV_EVENT_CLICKED, NULL);
    }
    update_screen(screen, id);
}

