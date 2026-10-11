#include "xom_weather_ui.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "esp_err.h"
#include "ui_navigation.h"
#include "xom_keyboard.h"
#include "xom_settings.h"
#include "xom_ui_feedback.h"
#include "xom_ui_style.h"
#include "xom_weather.h"
#include "xom_widgets.h"

#define WN_HOME_TITLE "xw_home_title"
#define WN_HOME_TEMP  "xw_home_temp"
#define WN_HOME_DESC  "xw_home_desc"
#define WN_HOME_HIGH  "xw_home_high"
#define WN_HOME_LOW   "xw_home_low"
#define WN_HOME_HUM   "xw_home_hum"

#define WN_DET_SUB    "xw_det_sub"
#define WN_DET_FRESH  "xw_det_fresh"
#define WN_DET_TITLE  "xw_det_title"
#define WN_DET_TEMP   "xw_det_temp"
#define WN_DET_DESC   "xw_det_desc"
#define WN_DET_FEELS  "xw_det_feels"
#define WN_DET_HIGH   "xw_det_high"
#define WN_DET_LOW    "xw_det_low"
#define WN_DET_RAIN   "xw_det_rain"
#define WN_DET_POP    "xw_det_pop"
#define WN_DET_WIND   "xw_det_wind"
#define WN_DET_HUM    "xw_det_hum"

#define WN_CFG_CITY   "weather_cfg_city"
#define WN_CFG_LAT    "xw_cfg_lat"
#define WN_CFG_LON    "xw_cfg_lon"
#define WN_CFG_COORD  "xw_cfg_coord"
#define WN_CFG_C      "weather_cfg_celsius"
#define WN_CFG_F      "weather_cfg_fahrenheit"
#define WN_CFG_SAVE   "btn_weather_cfg_save"

#define WN_INT_5      "btn_weather_interval_5m"
#define WN_INT_15     "btn_weather_interval_15m"
#define WN_INT_30     "btn_weather_interval_30m"
#define WN_INT_60     "btn_weather_interval_60m"
#define WN_INT_CANCEL "btn_weather_interval_cancel"
#define WN_INT_SAVE   "btn_weather_interval_save"

static lv_timer_t * s_timer;
static bool s_cfg_celsius = true;
static uint32_t s_interval_sec = 1800;
static float s_cfg_lat;
static float s_cfg_lon;

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

static lv_obj_t * label_at(lv_obj_t * root, int x, int y)
{
    if (root == NULL) return NULL;
    if (lv_obj_check_type(root, &lv_label_class)) {
        if (lv_obj_get_x(root) == x && lv_obj_get_y(root) == y) return root;
    }
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(root, i++)) != NULL) {
        lv_obj_t * hit = label_at(child, x, y);
        if (hit != NULL) return hit;
    }
    return NULL;
}

static void bind(lv_obj_t * screen, const char * placeholder, const char * name)
{
    lv_obj_t * l = find_label_by_text(screen, placeholder);
    if (l != NULL) lv_obj_set_name_static(l, name);
}

static void bind_xy(lv_obj_t * screen, int x, int y, const char * name)
{
    lv_obj_t * l = label_at(screen, x, y);
    if (l != NULL) lv_obj_set_name_static(l, name);
}

static lv_obj_t * named(lv_obj_t * screen, const char * name)
{
    return lv_obj_find_by_name(screen, name);
}

static void set_text(lv_obj_t * obj, const char * text)
{
    if (obj == NULL || text == NULL || !lv_obj_check_type(obj, &lv_label_class)) return;
    const char * cur = lv_label_get_text(obj);
    if (cur == NULL || strcmp(cur, text) != 0) lv_label_set_text(obj, text);
}

static int disp_temp(int c, bool unit_c)
{
    return unit_c ? c : (c * 9) / 5 + 32;
}

static const char * unit(bool unit_c)
{
    return unit_c ? "°C" : "°F";
}

static const char * wmo_desc(uint16_t code)
{
    if (code == 0) return "Trời quang";
    if (code <= 3) return "Trời có mây";
    if (code == 45 || code == 48) return "Sương mù";
    if ((code >= 51 && code <= 67) || (code >= 80 && code <= 82)) return "Có mưa";
    if (code >= 71 && code <= 77) return "Có tuyết";
    if (code >= 95) return "Dông";
    return "Nhiều mây";
}

static const char * day_name(const struct tm * tm)
{
    static const char * const wd[] = { "CN", "T2", "T3", "T4", "T5", "T6", "T7" };
    return wd[tm->tm_wday];
}

static void set_btn_selected(lv_obj_t * btn, bool selected)
{
    if (btn == NULL) return;
    lv_obj_set_style_bg_color(btn, lv_color_hex(selected ? 0xa52a26 : 0x233247), 0);
    lv_obj_set_style_border_width(btn, selected ? 1 : 0, 0);
    lv_obj_set_style_border_color(btn, lv_color_hex(0xa52a26), 0);
}

static bool weather_has_data(const xom_weather_status_t * st)
{
    return st != NULL && (st->state == XOM_WF_OK || st->daily_count > 0 || st->hourly_count > 0);
}

static void update_home(lv_obj_t * screen, const xom_weather_status_t * st)
{
    char buf[96];
    bool has = weather_has_data(st);
    snprintf(buf, sizeof(buf), "THỜI TIẾT · %s", st->city[0] ? st->city : "HÀ NỘI");
    set_text(named(screen, WN_HOME_TITLE), buf);
    if (!has) {
        set_text(named(screen, WN_HOME_TEMP), st->state == XOM_WF_FETCHING ? "Đang tải" : "--");
        set_text(named(screen, WN_HOME_DESC), st->state == XOM_WF_ERROR ? "Lỗi API" : "Chưa có dữ liệu");
        return;
    }
    snprintf(buf, sizeof(buf), "%d%s", disp_temp(st->temp_c, st->unit_c), unit(st->unit_c));
    set_text(named(screen, WN_HOME_TEMP), buf);
    set_text(named(screen, WN_HOME_DESC), wmo_desc(st->wmo_code));
    if (st->daily_count > 0) {
        snprintf(buf, sizeof(buf), "Cao %d%s", disp_temp(st->daily[0].temp_max_c, st->unit_c), unit(st->unit_c));
        set_text(named(screen, WN_HOME_HIGH), buf);
        snprintf(buf, sizeof(buf), "Thấp %d%s", disp_temp(st->daily[0].temp_min_c, st->unit_c), unit(st->unit_c));
        set_text(named(screen, WN_HOME_LOW), buf);
    }
    snprintf(buf, sizeof(buf), "Ẩm %u%%", (unsigned)st->humidity);
    set_text(named(screen, WN_HOME_HUM), buf);
}

static void update_detail(lv_obj_t * screen, const xom_weather_status_t * st)
{
    char buf[96];
    snprintf(buf, sizeof(buf), "%s · Chi tiết dự báo", st->city[0] ? st->city : "Hà Nội");
    set_text(named(screen, WN_DET_SUB), buf);
    if (st->state == XOM_WF_FETCHING) set_text(named(screen, WN_DET_FRESH), "Đang tải");
    else if (st->state == XOM_WF_ERROR) set_text(named(screen, WN_DET_FRESH), weather_has_data(st) ? "Cache" : "Lỗi");
    else set_text(named(screen, WN_DET_FRESH), "Mới nhất");
    update_home(screen, st);
    set_text(named(screen, WN_DET_TITLE), named(screen, WN_HOME_TITLE) ? lv_label_get_text(named(screen, WN_HOME_TITLE)) : "THỜI TIẾT");
    set_text(named(screen, WN_DET_TEMP), named(screen, WN_HOME_TEMP) ? lv_label_get_text(named(screen, WN_HOME_TEMP)) : "--");
    set_text(named(screen, WN_DET_DESC), named(screen, WN_HOME_DESC) ? lv_label_get_text(named(screen, WN_HOME_DESC)) : "--");
    snprintf(buf, sizeof(buf), "Cảm giác như %d%s", disp_temp(st->temp_feels_c, st->unit_c), unit(st->unit_c));
    set_text(named(screen, WN_DET_FEELS), buf);
    if (st->daily_count > 0) {
        snprintf(buf, sizeof(buf), "Cao %d%s", disp_temp(st->daily[0].temp_max_c, st->unit_c), unit(st->unit_c));
        set_text(named(screen, WN_DET_HIGH), buf);
        snprintf(buf, sizeof(buf), "Thấp %d%s", disp_temp(st->daily[0].temp_min_c, st->unit_c), unit(st->unit_c));
        set_text(named(screen, WN_DET_LOW), buf);
    }
    set_text(named(screen, WN_DET_RAIN), "-- mm");
    snprintf(buf, sizeof(buf), "%u%%", (unsigned)st->precip_prob);
    set_text(named(screen, WN_DET_POP), buf);
    snprintf(buf, sizeof(buf), "%d km/h", (int)st->wind_kmh);
    set_text(named(screen, WN_DET_WIND), buf);
    snprintf(buf, sizeof(buf), "%u%%", (unsigned)st->humidity);
    set_text(named(screen, WN_DET_HUM), buf);

    for (int i = 0; i < 5 && i < st->daily_count; i++) {
        const xom_weather_day_t * d = &st->daily[i];
        struct tm tm;
        localtime_r(&d->time, &tm);
        char name[24];
        snprintf(name, sizeof(name), "xw_det_day%d", i); set_text(named(screen, name), day_name(&tm));
        snprintf(name, sizeof(name), "xw_det_t%d", i); snprintf(buf, sizeof(buf), "%d°/%d°", disp_temp(d->temp_max_c, st->unit_c), disp_temp(d->temp_min_c, st->unit_c)); set_text(named(screen, name), buf);
    }
}

static void update_forecast(lv_obj_t * screen, const xom_weather_status_t * st)
{
    char buf[96];
    if (st->daily_count > 0) {
        struct tm a, b;
        localtime_r(&st->daily[0].time, &a);
        localtime_r(&st->daily[st->daily_count - 1].time, &b);
        snprintf(buf, sizeof(buf), "%s · %02d-%02d/%02d", st->city, a.tm_mday, b.tm_mday, b.tm_mon + 1);
        set_text(named(screen, "xw_fc_sub"), buf);
    }
    for (int i = 0; i < 5 && i < st->daily_count; i++) {
        const xom_weather_day_t * d = &st->daily[i];
        struct tm tm;
        localtime_r(&d->time, &tm);
        char name[24];
        snprintf(name, sizeof(name), "xw_fc_day%d", i); set_text(named(screen, name), day_name(&tm));
        snprintf(name, sizeof(name), "xw_fc_date%d", i); snprintf(buf, sizeof(buf), "%02d/%02d", tm.tm_mday, tm.tm_mon + 1); set_text(named(screen, name), buf);
        snprintf(name, sizeof(name), "xw_fc_desc%d", i); set_text(named(screen, name), wmo_desc(d->wmo_code));
        snprintf(name, sizeof(name), "xw_fc_hi%d", i); snprintf(buf, sizeof(buf), "%d°", disp_temp(d->temp_max_c, st->unit_c)); set_text(named(screen, name), buf);
        snprintf(name, sizeof(name), "xw_fc_lo%d", i); snprintf(buf, sizeof(buf), "/ %d°", disp_temp(d->temp_min_c, st->unit_c)); set_text(named(screen, name), buf);
        snprintf(name, sizeof(name), "xw_fc_pop%d", i); snprintf(buf, sizeof(buf), "Mưa %u%%", (unsigned)d->precip_prob); set_text(named(screen, name), buf);
    }
    if (st->hourly_count > 0) {
        set_text(named(screen, "xw_fc_hour_label"), "Giờ tới");
        snprintf(buf, sizeof(buf), "%d°", disp_temp(st->hourly[0].temp_c, st->unit_c));
        set_text(named(screen, "xw_fc_hour_temp"), buf);
        set_text(named(screen, "xw_fc_rain_label"), "Mưa tới");
        snprintf(buf, sizeof(buf), "%u%%", (unsigned)st->hourly[0].precip_prob);
        set_text(named(screen, "xw_fc_hour_rain"), buf);
        set_text(named(screen, "xw_fc_wind_label"), "Gió hiện");
        snprintf(buf, sizeof(buf), "%d km/h", (int)st->wind_kmh);
        set_text(named(screen, "xw_fc_hour_wind"), buf);
    }
}

static void update_cfg_coord_label(lv_obj_t * screen)
{
    char buf[48];
    snprintf(buf, sizeof(buf), "%.4f, %.4f", s_cfg_lat, s_cfg_lon);
    set_text(named(screen, WN_CFG_COORD), buf);
}

static void update_cfg_buttons(lv_obj_t * screen)
{
    set_btn_selected(named(screen, WN_CFG_C), s_cfg_celsius);
    set_btn_selected(named(screen, WN_CFG_F), !s_cfg_celsius);
}

static void unit_c_cb(lv_event_t * e){ (void)e; s_cfg_celsius = true; update_cfg_buttons(lv_screen_active()); }
static void unit_f_cb(lv_event_t * e){ (void)e; s_cfg_celsius = false; update_cfg_buttons(lv_screen_active()); }

static bool parse_float_strict(const char * txt, float * out)
{
    if (txt == NULL || txt[0] == '\0' || out == NULL) return false;
    char * end = NULL;
    float v = strtof(txt, &end);
    if (end == txt) return false;
    while (*end == ' ') end++;
    if (*end != '\0') return false;
    *out = v;
    return true;
}

static void coord_modal_close(lv_obj_t * modal)
{
    xom_keyboard_hide();
    if (modal != NULL) lv_obj_delete(modal);
}

static void coord_cancel_cb(lv_event_t * e)
{
    coord_modal_close(lv_event_get_user_data(e));
}

static void coord_apply_cb(lv_event_t * e)
{
    lv_obj_t * modal = lv_event_get_user_data(e);
    lv_obj_t * screen = lv_screen_active();
    lv_obj_t * lat = modal ? lv_obj_find_by_name(modal, WN_CFG_LAT) : NULL;
    lv_obj_t * lon = modal ? lv_obj_find_by_name(modal, WN_CFG_LON) : NULL;
    float la = 0.0f, lo = 0.0f;
    if (!parse_float_strict(lat ? lv_textarea_get_text(lat) : NULL, &la) || la < -90.0f || la > 90.0f) {
        xom_ui_feedback_set(screen, NULL, XOM_UI_FEEDBACK_ERROR, "Latitude phải từ -90 đến 90");
        return;
    }
    if (!parse_float_strict(lon ? lv_textarea_get_text(lon) : NULL, &lo) || lo < -180.0f || lo > 180.0f) {
        xom_ui_feedback_set(screen, NULL, XOM_UI_FEEDBACK_ERROR, "Longitude phải từ -180 đến 180");
        return;
    }
    s_cfg_lat = la;
    s_cfg_lon = lo;
    update_cfg_coord_label(screen);
    xom_ui_feedback_set(screen, NULL, XOM_UI_FEEDBACK_SUCCESS, "Đã cập nhật tọa độ, bấm Lưu để ghi NVS");
    coord_modal_close(modal);
}

static lv_obj_t * modal_button(lv_obj_t * parent, const char * text, int x, int y, int w, uint32_t bg)
{
    lv_obj_t * b = lv_button_create(parent);
    lv_obj_set_pos(b, x, y);
    lv_obj_set_size(b, w, 34);
    xom_ui_style_button(b, bg, bg == XOM_UI_COLOR_PRIMARY ? 0 : XOM_UI_COLOR_BORDER);
    lv_obj_t * l = lv_label_create(b);
    lv_label_set_text(l, text);
    lv_obj_center(l);
    xom_ui_style_label(l, xom_ui_font_button(), XOM_UI_COLOR_TEXT);
    return b;
}

static void coord_open_cb(lv_event_t * e)
{
    (void)e;
    lv_obj_t * screen = lv_screen_active();
    if (named(screen, "xw_coord_modal") != NULL) return;
    lv_obj_t * modal = lv_obj_create(screen);
    lv_obj_set_name_static(modal, "xw_coord_modal");
    lv_obj_set_pos(modal, 18, 86);
    lv_obj_set_size(modal, 284, 224);
    xom_ui_style_card(modal);
    lv_obj_set_style_bg_color(modal, lv_color_hex(0x0f1b2a), 0);
    lv_obj_set_style_border_color(modal, lv_color_hex(XOM_UI_COLOR_PRIMARY), 0);
    lv_obj_set_style_radius(modal, 12, 0);
    lv_obj_set_style_pad_all(modal, 0, 0);
    lv_obj_remove_flag(modal, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_t * title = lv_label_create(modal);
    lv_obj_set_pos(title, 14, 12);
    lv_label_set_text(title, "Advanced Location");
    xom_ui_style_label(title, xom_ui_font_title(), XOM_UI_COLOR_TEXT);

    lv_obj_t * l = lv_label_create(modal);
    lv_obj_set_pos(l, 14, 45);
    lv_label_set_text(l, "Latitude (-90..90)");
    xom_ui_style_label(l, xom_ui_font_small(), XOM_UI_COLOR_MUTED);
    lv_obj_t * lat = lv_textarea_create(modal);
    lv_obj_set_name_static(lat, WN_CFG_LAT);
    lv_obj_set_pos(lat, 14, 66);
    lv_obj_set_size(lat, 256, 32);
    lv_textarea_set_one_line(lat, true);

    l = lv_label_create(modal);
    lv_obj_set_pos(l, 14, 106);
    lv_label_set_text(l, "Longitude (-180..180)");
    xom_ui_style_label(l, xom_ui_font_small(), XOM_UI_COLOR_MUTED);
    lv_obj_t * lon = lv_textarea_create(modal);
    lv_obj_set_name_static(lon, WN_CFG_LON);
    lv_obj_set_pos(lon, 14, 127);
    lv_obj_set_size(lon, 256, 32);
    lv_textarea_set_one_line(lon, true);

    char buf[24];
    snprintf(buf, sizeof(buf), "%.4f", s_cfg_lat); lv_textarea_set_text(lat, buf);
    snprintf(buf, sizeof(buf), "%.4f", s_cfg_lon); lv_textarea_set_text(lon, buf);
    xom_keyboard_attach(modal);

    lv_obj_t * cancel = modal_button(modal, "Hủy", 14, 176, 120, 0x172332);
    lv_obj_t * apply = modal_button(modal, "Áp dụng", 150, 176, 120, 0xa52a26);
    lv_obj_add_flag(cancel, LV_OBJ_FLAG_USER_1);
    lv_obj_add_flag(apply, LV_OBJ_FLAG_USER_1);
    lv_obj_add_event_cb(cancel, coord_cancel_cb, LV_EVENT_CLICKED, modal);
    lv_obj_add_event_cb(apply, coord_apply_cb, LV_EVENT_CLICKED, modal);
}

static void cfg_save_cb(lv_event_t * e)
{
    lv_obj_t * btn = lv_event_get_target(e);
    lv_obj_t * screen = lv_obj_get_screen(btn);
    xom_keyboard_hide();
    xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SAVING, "Đang lưu cài đặt thời tiết...");
    xom_settings_t cfg;
    esp_err_t err = xom_settings_load(&cfg);
    if (err != ESP_OK) { xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, "Không đọc được NVS"); return; }
    lv_obj_t * city = named(screen, WN_CFG_CITY);
    if (city != NULL) {
        strncpy(cfg.weather_city, lv_textarea_get_text(city), sizeof(cfg.weather_city) - 1);
        cfg.weather_city[sizeof(cfg.weather_city) - 1] = '\0';
    }
    if (cfg.weather_city[0] == '\0') {
        xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, "Tên vị trí không được rỗng");
        return;
    }
    cfg.weather_lat = s_cfg_lat;
    cfg.weather_lon = s_cfg_lon;
    cfg.temp_unit = s_cfg_celsius ? XOM_SETTINGS_TEMP_C : XOM_SETTINGS_TEMP_F;
    err = xom_settings_save(&cfg);
    if (err == ESP_OK) err = xom_weather_set_location(cfg.weather_city, cfg.weather_lat, cfg.weather_lon);
    if (err == ESP_OK) err = xom_weather_set_unit(s_cfg_celsius);
    if (err == ESP_OK) err = xom_weather_request_refresh();
    if (err == ESP_OK) xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SUCCESS, "Đã lưu thành công");
    else xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, esp_err_to_name(err));
}

static void int_pick_cb(lv_event_t * e)
{
    const char * name = lv_obj_get_name(lv_event_get_target(e));
    if (name == NULL) return;
    if (strcmp(name, WN_INT_5) == 0) s_interval_sec = 300;
    else if (strcmp(name, WN_INT_15) == 0) s_interval_sec = 900;
    else if (strcmp(name, WN_INT_30) == 0) s_interval_sec = 1800;
    else if (strcmp(name, WN_INT_60) == 0) s_interval_sec = 3600;
    lv_obj_t * screen = lv_screen_active();
    set_btn_selected(named(screen, WN_INT_5), s_interval_sec == 300);
    set_btn_selected(named(screen, WN_INT_15), s_interval_sec == 900);
    set_btn_selected(named(screen, WN_INT_30), s_interval_sec == 1800);
    set_btn_selected(named(screen, WN_INT_60), s_interval_sec == 3600);
}

static void update_interval_buttons(lv_obj_t * screen)
{
    set_btn_selected(named(screen, WN_INT_5), s_interval_sec == 300);
    set_btn_selected(named(screen, WN_INT_15), s_interval_sec == 900);
    set_btn_selected(named(screen, WN_INT_30), s_interval_sec == 1800);
    set_btn_selected(named(screen, WN_INT_60), s_interval_sec == 3600);
}

static void int_cancel_cb(lv_event_t * e){ (void)e; ui_navigation_request_back(); }

static void int_save_cb(lv_event_t * e)
{
    lv_obj_t * btn = lv_event_get_target(e);
    lv_obj_t * screen = lv_obj_get_screen(btn);
    xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SAVING, "Đang lưu chu kỳ...");
    xom_settings_t cfg;
    esp_err_t err = xom_settings_load(&cfg);
    if (err != ESP_OK) { xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, "Không đọc được NVS"); return; }
    cfg.weather_refresh_sec = s_interval_sec;
    err = xom_settings_save(&cfg);
    if (err == ESP_OK) err = xom_weather_set_refresh_interval(s_interval_sec);
    if (err == ESP_OK) xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_SUCCESS, "Đã lưu thành công");
    else xom_ui_feedback_set(screen, btn, XOM_UI_FEEDBACK_ERROR, esp_err_to_name(err));
}

static void poll_cb(lv_timer_t * timer)
{
    (void)timer;
    lv_obj_t * screen = lv_screen_active();
    if (screen == NULL) return;
    const char * name = lv_obj_get_name(screen);
    if (name == NULL) return;
    xom_weather_status_t st;
    xom_weather_get_status(&st);
    if (strcmp(name, "home") == 0) update_home(screen, &st);
    else if (strcmp(name, "weather") == 0) update_detail(screen, &st);
    else if (strcmp(name, "forecast") == 0) update_forecast(screen, &st);
}

void xom_weather_ui_init(void)
{
    if (s_timer == NULL) s_timer = lv_timer_create(poll_cb, 1000, NULL);
}

void xom_weather_ui_attach(lv_obj_t * screen, int id)
{
    if (screen == NULL) return;
    lv_obj_update_layout(screen);
    if (id == XOM_SCREEN_HOME) {
        bind(screen, "THỜI TIẾT · HÀ NỘI", WN_HOME_TITLE);
        bind(screen, "28.5°C", WN_HOME_TEMP);
        bind(screen, "Trời có mây", WN_HOME_DESC);
        bind(screen, "Cao 32°C", WN_HOME_HIGH);
        bind(screen, "Thấp 24°C", WN_HOME_LOW);
        bind(screen, "Ẩm 65%", WN_HOME_HUM);
    } else if (id == XOM_SCREEN_WEATHER) {
        bind(screen, "Hà Nội · Chi tiết dự báo", WN_DET_SUB);
        bind(screen, "Mới nhất", WN_DET_FRESH);
        bind(screen, "THỜI TIẾT · HÀ NỘI", WN_DET_TITLE);
        bind(screen, "28.5°C", WN_DET_TEMP);
        bind(screen, "Trời có mây", WN_DET_DESC);
        bind(screen, "Cảm giác như 31°C", WN_DET_FEELS);
        bind(screen, "Cao 32°C", WN_DET_HIGH);
        bind(screen, "Thấp 24°C", WN_DET_LOW);
        bind(screen, "2.4 mm", WN_DET_RAIN);
        bind(screen, "65%", WN_DET_POP);
        bind(screen, "12 km/h", WN_DET_WIND);
        bind_xy(screen, 212, 289, WN_DET_HUM);
        for (int i = 0; i < 5; i++) {
            char n[24];
            snprintf(n, sizeof(n), "xw_det_day%d", i); bind_xy(screen, 24 + i * 55, 381, n);
            snprintf(n, sizeof(n), "xw_det_t%d", i); bind_xy(screen, 24 + i * 55, 441, n);
        }
    } else if (id == XOM_SCREEN_FORECAST) {
        bind(screen, "Hà Nội · 25-29/05", "xw_fc_sub");
        const int ys[5] = {76, 146, 216, 286, 356};
        for (int i = 0; i < 5; i++) {
            char n[24];
            snprintf(n, sizeof(n), "xw_fc_day%d", i); bind_xy(screen, 22, ys[i], n);
            snprintf(n, sizeof(n), "xw_fc_date%d", i); bind_xy(screen, 22, ys[i] + 24, n);
            snprintf(n, sizeof(n), "xw_fc_desc%d", i); bind_xy(screen, 105, ys[i], n);
            snprintf(n, sizeof(n), "xw_fc_hi%d", i); bind_xy(screen, 105, ys[i] + 24, n);
            snprintf(n, sizeof(n), "xw_fc_lo%d", i); bind_xy(screen, 149, ys[i] + 24, n);
            snprintf(n, sizeof(n), "xw_fc_pop%d", i); bind_xy(screen, 219, ys[i], n);
        }
        bind(screen, "Nhiệt độ TB", "xw_fc_hour_label");
        bind(screen, "29°C", "xw_fc_hour_temp");
        bind(screen, "Tổng lượng mưa", "xw_fc_rain_label");
        bind(screen, "18.8 mm", "xw_fc_hour_rain");
        bind(screen, "Gió TB", "xw_fc_wind_label");
        bind(screen, "11 km/h", "xw_fc_hour_wind");
    } else if (id == XOM_SCREEN_WEATHER_CONFIG) {
        xom_settings_t cfg;
        xom_settings_load(&cfg);
        s_cfg_celsius = cfg.temp_unit == XOM_SETTINGS_TEMP_C;
        s_cfg_lat = cfg.weather_lat;
        s_cfg_lon = cfg.weather_lon;
        bind(screen, "21.0285, 105.8542", WN_CFG_COORD);
        update_cfg_coord_label(screen);
        lv_obj_t * city = named(screen, WN_CFG_CITY);
        if (city != NULL) lv_textarea_set_text(city, cfg.weather_city);
        update_cfg_buttons(screen);
        lv_obj_t * coord = lv_button_create(screen);
        lv_obj_set_pos(coord, 20, 162);
        lv_obj_set_size(coord, 280, 42);
        lv_obj_set_style_bg_opa(coord, LV_OPA_TRANSP, 0);
        lv_obj_set_style_border_width(coord, 0, 0);
        lv_obj_set_style_shadow_width(coord, 0, 0);
        lv_obj_add_flag(coord, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(coord, coord_open_cb, LV_EVENT_CLICKED, NULL);
        lv_obj_t * b = named(screen, WN_CFG_C); if (b) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, unit_c_cb, LV_EVENT_CLICKED, NULL); }
        b = named(screen, WN_CFG_F); if (b) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, unit_f_cb, LV_EVENT_CLICKED, NULL); }
        b = named(screen, WN_CFG_SAVE); if (b) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, cfg_save_cb, LV_EVENT_CLICKED, NULL); }
    } else if (id == XOM_SCREEN_WEATHER_INTERVAL) {
        xom_settings_t cfg;
        xom_settings_load(&cfg);
        s_interval_sec = cfg.weather_refresh_sec;
        const char * names[] = { WN_INT_5, WN_INT_15, WN_INT_30, WN_INT_60 };
        for (int i = 0; i < 4; i++) {
            lv_obj_t * b = named(screen, names[i]);
            if (b != NULL) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, int_pick_cb, LV_EVENT_CLICKED, NULL); }
        }
        lv_obj_t * b = named(screen, WN_INT_CANCEL); if (b) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, int_cancel_cb, LV_EVENT_CLICKED, NULL); }
        b = named(screen, WN_INT_SAVE); if (b) { lv_obj_add_flag(b, LV_OBJ_FLAG_USER_1); lv_obj_add_event_cb(b, int_save_cb, LV_EVENT_CLICKED, NULL); }
        update_interval_buttons(screen);
    }

    xom_weather_status_t st;
    xom_weather_get_status(&st);
    if (id == XOM_SCREEN_HOME) update_home(screen, &st);
    else if (id == XOM_SCREEN_WEATHER) update_detail(screen, &st);
    else if (id == XOM_SCREEN_FORECAST) update_forecast(screen, &st);
}
