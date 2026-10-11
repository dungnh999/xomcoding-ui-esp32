#include "xom_wifi_ui.h"

#include <stdio.h>
#include <string.h>

#include "esp_log.h"
#include "lvgl.h"

#include "ui_navigation.h"
#include "xom_keyboard.h"
#include "xom_settings.h"
#include "xom_ui_style.h"
#include "xom_wifi.h"
#include "xom_widgets.h"
#include "xomcodingui_gen.h"

static const char * TAG = "xom_wifi_ui";

/* Named widgets already exposed by the generated screens. */
#define XN_WIFI_ENABLED  "wifi_enabled"
#define XN_IP_DHCP       "btn_ip_dhcp"
#define XN_IP_STATIC     "btn_ip_static"
#define XN_SCAN_WIFI     "btn_scan_wifi"
#define XN_SAVE_WIFI     "btn_save_wifi"
#define XN_SCAN_BACK     "btn_wifi_scan_back"
#define XN_SCAN_RESCAN   "btn_wifi_rescan"
#define XN_PW_INPUT      "input_wifi_password"
#define XN_PW_CANCEL     "btn_wifi_password_cancel"
#define XN_PW_CONNECT    "btn_wifi_password_connect"
#define XN_STATIC_IP     "input_static_ip"
#define XN_STATIC_GW     "input_static_gateway"
#define XN_STATIC_MASK   "input_static_subnet"
#define XN_STATIC_DNS    "input_static_dns"
#define XN_STATIC_CANCEL "btn_static_ip_cancel"
#define XN_STATIC_SAVE   "btn_static_ip_save"

/* Stable runtime names assigned to the (otherwise unnamed) value labels. */
#define XL_STATUS      "xw_status"
#define XL_SSID        "xw_ssid"
#define XL_SIGNAL      "xw_signal"
#define XL_MAC         "xw_mac"
#define XL_IP          "xw_ip"
#define XL_GW          "xw_gw"
#define XL_MASK        "xw_mask"
#define XL_DNS         "xw_dns"
#define XL_SCAN_STATUS "xw_scan_status"
#define XL_SCAN_SUB    "xw_scan_sub"
#define XL_SCAN_COUNT  "xw_scan_count"
#define XL_SCAN_LIST   "xw_scan_list"
#define XL_PW_SSID     "xw_pw_ssid"
#define XL_PW_SIGNAL   "xw_pw_signal"
#define XL_PW_SEC      "xw_pw_sec"
#define XL_PW_BADGE    "xw_pw_badge"

#define XOM_WIFI_POLL_MS 300

/* Scan list geometry: the five placeholder rows span y in [150, 425). */
#define SCAN_ROW_TOP   150
#define SCAN_ROW_BOTTOM 425

#define COL_GREEN 0x34d399
#define COL_RED   0xf87171
#define COL_AMBER 0xf59e0b
#define COL_MUTED 0x94a3b8
#define COL_TEXT  0xffffff
#define COL_ROW_BG 0x172332
#define COL_ROW_BORDER 0x29394d

static lv_timer_t * s_poll;
static uint32_t s_built_epoch = UINT32_MAX;

/* Modal "please wait" overlay shown while scanning / connecting. */
static lv_obj_t * s_busy;
static lv_obj_t * s_busy_label;

static void set_text(lv_obj_t * label, const char * text);
static void busy_show(const char * text);
static void busy_hide(void);

static void busy_hide(void)
{
    if (s_busy != NULL) {
        lv_obj_delete(s_busy);
        s_busy = NULL;
        s_busy_label = NULL;
    }
}

static void busy_show(const char * text)
{
    if (s_busy != NULL) {
        if (s_busy_label != NULL) {
            set_text(s_busy_label, text);
        }
        lv_obj_move_foreground(s_busy);
        return;
    }

    lv_obj_t * layer = lv_layer_top();
    s_busy = lv_obj_create(layer);
    lv_obj_remove_flag(s_busy, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_size(s_busy, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(s_busy, lv_color_hex(0x0b111b), 0);
    lv_obj_set_style_bg_opa(s_busy, LV_OPA_70, 0);
    lv_obj_set_style_border_width(s_busy, 0, 0);
    lv_obj_set_style_radius(s_busy, 0, 0);
    lv_obj_set_style_pad_all(s_busy, 0, 0);

    lv_obj_t * box = lv_obj_create(s_busy);
    lv_obj_remove_flag(box, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_size(box, 190, 124);
    lv_obj_center(box);
    xom_ui_style_card(box);
    lv_obj_set_style_radius(box, 14, 0);
    lv_obj_set_style_pad_all(box, 0, 0);

    lv_obj_t * sp = lv_spinner_create(box);
    lv_obj_set_size(sp, 42, 42);
    lv_obj_align(sp, LV_ALIGN_TOP_MID, 0, 20);
    lv_obj_set_style_arc_color(sp, lv_color_hex(0x29394d), LV_PART_MAIN);
    lv_obj_set_style_arc_color(sp, lv_color_hex(0xa52a26), LV_PART_INDICATOR);

    s_busy_label = lv_label_create(box);
    lv_label_set_text(s_busy_label, text != NULL ? text : "");
    xom_ui_style_label(s_busy_label, be_medium_14, XOM_UI_COLOR_TEXT);
    lv_obj_align(s_busy_label, LV_ALIGN_BOTTOM_MID, 0, -16);

    lv_obj_move_foreground(s_busy);
}


static lv_obj_t * find_label_by_text(lv_obj_t * root, const char * text)
{
    if (root == NULL || text == NULL) {
        return NULL;
    }
    if (lv_obj_check_type(root, &lv_label_class)) {
        const char * t = lv_label_get_text(root);
        if (t != NULL && strcmp(t, text) == 0) {
            return root;
        }
    }
    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(root, i++)) != NULL) {
        lv_obj_t * hit = find_label_by_text(child, text);
        if (hit != NULL) {
            return hit;
        }
    }
    return NULL;
}

static void set_text(lv_obj_t * label, const char * text);

static void bind(lv_obj_t * screen, const char * placeholder, const char * stable)
{
    lv_obj_t * label = find_label_by_text(screen, placeholder);
    if (label != NULL) {
        lv_obj_set_name_static(label, stable);
    }
}

static lv_obj_t * named(lv_obj_t * screen, const char * name)
{
    return lv_obj_find_by_name(screen, name);
}

static void set_text(lv_obj_t * label, const char * text)
{
    if (label == NULL || text == NULL) {
        return;
    }
    const char * cur = lv_label_get_text(label);
    if (cur == NULL || strcmp(cur, text) != 0) {
        lv_label_set_text(label, text);
    }
}

static lv_color_t state_color(xom_wifi_state_t state)
{
    switch (state) {
    case XOM_WIFI_STATE_CONNECTED:
        return lv_color_hex(COL_GREEN);
    case XOM_WIFI_STATE_CONNECTING:
    case XOM_WIFI_STATE_SCANNING:
        return lv_color_hex(COL_AMBER);
    case XOM_WIFI_STATE_DISCONNECTED:
    case XOM_WIFI_STATE_FAILED:
        return lv_color_hex(COL_RED);
    default:
        return lv_color_hex(COL_MUTED);
    }
}

static const char * quality_word(int8_t rssi)
{
    if (rssi >= -60) {
        return "Tín hiệu tốt";
    }
    if (rssi >= -70) {
        return "Tín hiệu khá";
    }
    return "Tín hiệu yếu";
}

static void format_signal(char * buf, size_t len, int8_t rssi)
{
    snprintf(buf, len, "%s · %d dBm", quality_word(rssi), (int)rssi);
}

static void format_mac(char * buf, size_t len, const uint8_t mac[6])
{
    snprintf(buf, len, "MAC: %02X:%02X:%02X:%02X:%02X:%02X",
             mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
}

/* ---------------------------------------------------------------- Wi-Fi --- */

static void wifi_enabled_cb(lv_event_t * event)
{
    lv_obj_t * sw = lv_event_get_target(event);
    bool on = lv_obj_has_state(sw, LV_STATE_CHECKED);

    xom_settings_t cfg;
    xom_settings_load(&cfg);
    cfg.wifi_enabled = on;
    xom_settings_save(&cfg);

    xom_wifi_set_enabled(on);
    if (on && cfg.ssid[0] != '\0') {
        xom_wifi_connect(cfg.ssid, cfg.password);
    }
    ESP_LOGI(TAG, "wifi_enabled -> %s", on ? "ON" : "OFF");
}

static void wifi_save_cb(lv_event_t * event)
{
    (void)event;
    lv_obj_t * screen = lv_screen_active();
    lv_obj_t * sw = named(screen, XN_WIFI_ENABLED);

    xom_settings_t cfg;
    xom_settings_load(&cfg);
    if (sw != NULL) {
        cfg.wifi_enabled = lv_obj_has_state(sw, LV_STATE_CHECKED);
    }
    if (xom_settings_save(&cfg) == ESP_OK) {
        xom_demo_toast("Đã lưu cài đặt");
    } else {
        xom_demo_toast("Lưu cài đặt thất bại");
    }
}

static void wifi_scan_button_cb(lv_event_t * event)
{
    (void)event;
    xom_wifi_scan_start();
}

static void update_wifi_screen(lv_obj_t * screen)
{
    xom_wifi_status_t st;
    xom_wifi_get_status(&st);

    lv_obj_t * l = named(screen, XL_STATUS);
    if (l != NULL) {
        set_text(l, xom_wifi_state_label(st.state));
        lv_obj_set_style_text_color(l, state_color(st.state), 0);
    }

    l = named(screen, XL_SSID);
    if (l != NULL) {
        if (st.ssid[0] != '\0') {
            set_text(l, st.ssid);
        } else {
            set_text(l, st.enabled ? "--" : "Wi-Fi đã tắt");
        }
    }

    l = named(screen, XL_SIGNAL);
    if (l != NULL) {
        char buf[48];
        if (st.have_ip) {
            format_signal(buf, sizeof(buf), st.rssi);
        } else {
            snprintf(buf, sizeof(buf), "--");
        }
        set_text(l, buf);
    }

    l = named(screen, XL_MAC);
    if (l != NULL) {
        char buf[40];
        format_mac(buf, sizeof(buf), st.mac);
        set_text(l, buf);
    }

    l = named(screen, XL_IP);
    if (l != NULL) {
        set_text(l, st.have_ip ? st.ip : "--");
    }
    l = named(screen, XL_GW);
    if (l != NULL) {
        set_text(l, st.have_ip ? st.gateway : "--");
    }
    l = named(screen, XL_MASK);
    if (l != NULL) {
        set_text(l, st.have_ip ? st.netmask : "--");
    }
    l = named(screen, XL_DNS);
    if (l != NULL) {
        set_text(l, st.have_ip ? st.dns : "--");
    }

    lv_obj_t * sw = named(screen, XN_WIFI_ENABLED);
    if (sw != NULL) {
        if (st.enabled) {
            lv_obj_add_state(sw, LV_STATE_CHECKED);
        } else {
            lv_obj_remove_state(sw, LV_STATE_CHECKED);
        }
    }
}

static void wifi_screen_attach(lv_obj_t * screen)
{
    bind(screen, "Đã kết nối", XL_STATUS);
    bind(screen, "XomCoding_5G", XL_SSID);
    bind(screen, "Tín hiệu tốt · -48 dBm", XL_SIGNAL);
    bind(screen, "MAC: A4:CF:12:34:56:78", XL_MAC);
    bind(screen, "192.168.1.105", XL_IP);
    bind(screen, "192.168.1.1", XL_GW);
    bind(screen, "255.255.255.0", XL_MASK);
    bind(screen, "1.1.1.1", XL_DNS);

    lv_obj_t * sw = named(screen, XN_WIFI_ENABLED);
    if (sw != NULL) {
        lv_obj_add_event_cb(sw, wifi_enabled_cb, LV_EVENT_VALUE_CHANGED, NULL);
    }

    lv_obj_t * save = named(screen, XN_SAVE_WIFI);
    if (save != NULL) {
        lv_obj_add_flag(save, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(save, wifi_save_cb, LV_EVENT_CLICKED, NULL);
    }

    lv_obj_t * scan = named(screen, XN_SCAN_WIFI);
    if (scan != NULL) {
        lv_obj_add_flag(scan, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(scan, wifi_scan_button_cb, LV_EVENT_CLICKED, NULL);
    }

    update_wifi_screen(screen);
}

/* ----------------------------------------------------------- Wi-Fi scan --- */

static void scan_row_cb(lv_event_t * event)
{
    lv_obj_t * row = lv_event_get_target(event);
    lv_obj_t * ssid = lv_obj_get_child(row, 0);
    if (ssid == NULL) {
        return;
    }
    const char * text = lv_label_get_text(ssid);
    if (text == NULL) {
        return;
    }

    xom_wifi_ap_t aps[XOM_WIFI_MAX_SCAN];
    int n = xom_wifi_get_scan_results(aps, XOM_WIFI_MAX_SCAN);
    for (int i = 0; i < n; i++) {
        if (strcmp(aps[i].ssid, text) == 0) {
            xom_wifi_select(&aps[i]);
            ui_navigation_request(XOM_SCREEN_WIFI_PASSWORD);
            return;
        }
    }
    xom_demo_toast("Mạng không còn khả dụng");
}

static void scan_back_cb(lv_event_t * event)
{
    (void)event;
    ui_navigation_request_back();
}

static void scan_rescan_cb(lv_event_t * event)
{
    (void)event;
    xom_wifi_scan_start();
}

static void rebuild_scan_list(lv_obj_t * screen)
{
    lv_obj_t * list = named(screen, XL_SCAN_LIST);
    if (list == NULL) {
        return;
    }
    lv_obj_clean(list);

    xom_wifi_ap_t aps[XOM_WIFI_MAX_SCAN];
    int n = xom_wifi_get_scan_results(aps, XOM_WIFI_MAX_SCAN);

    if (n == 0) {
        lv_obj_t * empty = lv_label_create(list);
        lv_label_set_text(empty, "Chưa có mạng nào");
        xom_ui_style_label(empty, xom_ui_font_small(), COL_MUTED);
        return;
    }

    for (int i = 0; i < n; i++) {
        lv_obj_t * row = lv_button_create(list);
        lv_obj_set_width(row, 296);
        lv_obj_set_height(row, 49);
        xom_ui_style_button(row, COL_ROW_BG, COL_ROW_BORDER);
        lv_obj_set_style_radius(row, 10, 0);
        lv_obj_add_event_cb(row, scan_row_cb, LV_EVENT_CLICKED, NULL);

        lv_obj_t * ssid = lv_label_create(row);
        lv_obj_set_pos(ssid, 15, 6);
        lv_label_set_text(ssid, aps[i].ssid);
        xom_ui_style_label(ssid, be_semibold_12, COL_TEXT);

        lv_obj_t * sub = lv_label_create(row);
        lv_obj_set_pos(sub, 15, 27);
        char buf[64];
        snprintf(buf, sizeof(buf), "%s · %d dBm", xom_wifi_auth_label(aps[i].auth),
                 (int)aps[i].rssi);
        lv_label_set_text(sub, buf);
        xom_ui_style_label(sub, be_medium_10, aps[i].rssi >= -60 ? COL_GREEN : COL_MUTED);
    }
}

static void update_scan_screen(lv_obj_t * screen)
{
    xom_wifi_scan_state_t ss;
    xom_wifi_get_scan_state(&ss);

    lv_obj_t * l = named(screen, XL_SCAN_STATUS);
    if (l != NULL) {
        char buf[64];
        if (ss.scanning) {
            snprintf(buf, sizeof(buf), "Đang quét mạng...");
        } else if (ss.failed) {
            snprintf(buf, sizeof(buf), "Quét mạng thất bại");
        } else if (ss.count == 0) {
            snprintf(buf, sizeof(buf), "Không tìm thấy mạng nào");
        } else {
            snprintf(buf, sizeof(buf), "Đã tìm thấy %u mạng", (unsigned)ss.count);
        }
        set_text(l, buf);
    }

    l = named(screen, XL_SCAN_SUB);
    if (l != NULL) {
        if (ss.scanning) {
            set_text(l, "Vui lòng đợi");
        } else if (ss.count > 0) {
            set_text(l, "Chọn một mạng để kết nối");
        } else {
            set_text(l, "Nhấn Quét lại để thử lại");
        }
    }

    l = named(screen, XL_SCAN_COUNT);
    if (l != NULL) {
        char buf[24];
        snprintf(buf, sizeof(buf), "%u mạng", (unsigned)ss.count);
        set_text(l, buf);
    }

    if (ss.epoch != s_built_epoch) {
        rebuild_scan_list(screen);
        s_built_epoch = ss.epoch;
    }
}

static void wifi_scan_screen_attach(lv_obj_t * screen)
{
    bind(screen, "Đã tìm thấy 5 mạng", XL_SCAN_STATUS);
    bind(screen, "Chọn một mạng để kết nối", XL_SCAN_SUB);
    bind(screen, "5 mạng", XL_SCAN_COUNT);

    /* Remove the five fixed placeholder rows (rows + their flat children). */
    lv_obj_update_layout(screen);
    int count = (int)lv_obj_get_child_count(screen);
    for (int i = count - 1; i >= 0; i--) {
        lv_obj_t * c = lv_obj_get_child(screen, i);
        if (c == NULL) {
            continue;
        }
        int32_t y = lv_obj_get_y(c);
        if (y >= SCAN_ROW_TOP && y < SCAN_ROW_BOTTOM) {
            lv_obj_delete(c);
        }
    }

    lv_obj_t * list = lv_obj_create(screen);
    lv_obj_set_name_static(list, XL_SCAN_LIST);
    lv_obj_set_pos(list, 12, SCAN_ROW_TOP);
    lv_obj_set_size(list, 296, 274);
    lv_obj_set_style_bg_opa(list, LV_OPA_TRANSP, 0);
    lv_obj_set_style_border_width(list, 0, 0);
    lv_obj_set_style_radius(list, 0, 0);
    lv_obj_set_style_pad_all(list, 0, 0);
    lv_obj_set_style_pad_row(list, 6, 0);
    lv_obj_set_flex_flow(list, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_scroll_dir(list, LV_DIR_VER);
    lv_obj_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_AUTO);

    lv_obj_t * back = named(screen, XN_SCAN_BACK);
    if (back != NULL) {
        lv_obj_add_flag(back, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(back, scan_back_cb, LV_EVENT_CLICKED, NULL);
    }
    lv_obj_t * rescan = named(screen, XN_SCAN_RESCAN);
    if (rescan != NULL) {
        lv_obj_add_flag(rescan, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(rescan, scan_rescan_cb, LV_EVENT_CLICKED, NULL);
    }

    s_built_epoch = UINT32_MAX;
    update_scan_screen(screen);

    xom_wifi_scan_start();
}

/* ------------------------------------------------------- Wi-Fi password --- */

static void password_cancel_cb(lv_event_t * event)
{
    (void)event;
    ui_navigation_request_back();
}

static void password_connect_cb(lv_event_t * event)
{
    (void)event;
    lv_obj_t * screen = lv_screen_active();

    xom_wifi_ap_t ap;
    if (!xom_wifi_get_selected(&ap)) {
        xom_demo_toast("Chưa chọn mạng");
        return;
    }

    lv_obj_t * ta = named(screen, XN_PW_INPUT);
    const char * pwd = (ta != NULL) ? lv_textarea_get_text(ta) : "";
    if (pwd == NULL) {
        pwd = "";
    }
    if (!xom_wifi_auth_is_open(ap.auth) && pwd[0] == '\0') {
        xom_demo_toast("Nhập mật khẩu Wi-Fi");
        return;
    }

    xom_settings_t cfg;
    xom_settings_load(&cfg);
    strncpy(cfg.ssid, ap.ssid, sizeof(cfg.ssid) - 1);
    cfg.ssid[sizeof(cfg.ssid) - 1] = '\0';
    strncpy(cfg.password, pwd, sizeof(cfg.password) - 1);
    cfg.password[sizeof(cfg.password) - 1] = '\0';
    cfg.wifi_enabled = true;
    cfg.auto_reconnect = true;
    xom_settings_save(&cfg);

    if (ta != NULL) {
        lv_textarea_set_text(ta, "");
    }
    xom_wifi_connect(ap.ssid, pwd);
    xom_keyboard_hide();
    xom_demo_toast("Đang kết nối...");
    ui_navigation_request(XOM_SCREEN_WIFI);
}

static void update_password_screen(lv_obj_t * screen)
{
    xom_wifi_ap_t ap;
    if (xom_wifi_get_selected(&ap)) {
        lv_obj_t * l = named(screen, XL_PW_SSID);
        if (l != NULL) {
            set_text(l, ap.ssid);
        }
        l = named(screen, XL_PW_SIGNAL);
        if (l != NULL) {
            char buf[48];
            format_signal(buf, sizeof(buf), ap.rssi);
            set_text(l, buf);
        }
        const char * auth = xom_wifi_auth_label(ap.auth);
        l = named(screen, XL_PW_SEC);
        if (l != NULL) {
            char buf[32];
            snprintf(buf, sizeof(buf), "Bảo mật %s", auth);
            set_text(l, buf);
        }
        l = named(screen, XL_PW_BADGE);
        if (l != NULL) {
            set_text(l, auth);
        }
    }

    xom_wifi_status_t st;
    xom_wifi_get_status(&st);
    lv_obj_t * btn = named(screen, XN_PW_CONNECT);
    if (btn != NULL) {
        if (st.state == XOM_WIFI_STATE_CONNECTING) {
            lv_obj_add_state(btn, LV_STATE_DISABLED);
        } else {
            lv_obj_remove_state(btn, LV_STATE_DISABLED);
        }
    }
}

static void wifi_password_screen_attach(lv_obj_t * screen)
{
    bind(screen, "Home_Network", XL_PW_SSID);
    bind(screen, "Tín hiệu tốt · -55 dBm", XL_PW_SIGNAL);
    bind(screen, "Bảo mật WPA2", XL_PW_SEC);
    bind(screen, "Bảo mật", XL_PW_BADGE);

    lv_obj_t * ta = named(screen, XN_PW_INPUT);
    if (ta != NULL) {
        lv_textarea_set_text(ta, "");
        lv_textarea_set_password_mode(ta, true);
    }

    lv_obj_t * cancel = named(screen, XN_PW_CANCEL);
    if (cancel != NULL) {
        lv_obj_add_flag(cancel, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(cancel, password_cancel_cb, LV_EVENT_CLICKED, NULL);
    }
    lv_obj_t * connect = named(screen, XN_PW_CONNECT);
    if (connect != NULL) {
        lv_obj_add_flag(connect, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(connect, password_connect_cb, LV_EVENT_CLICKED, NULL);
    }

    update_password_screen(screen);
}

/* ------------------------------------------------------ Wi-Fi static IP --- */

static void static_ip_cancel_cb(lv_event_t * event)
{
    (void)event;
    ui_navigation_request_back();
}

static void static_ip_save_cb(lv_event_t * event)
{
    (void)event;
    lv_obj_t * screen = lv_screen_active();

    lv_obj_t * ip = named(screen, XN_STATIC_IP);
    lv_obj_t * gw = named(screen, XN_STATIC_GW);
    lv_obj_t * mask = named(screen, XN_STATIC_MASK);
    lv_obj_t * dns = named(screen, XN_STATIC_DNS);

    xom_settings_t cfg;
    xom_settings_load(&cfg);
    cfg.ip_mode = XOM_SETTINGS_IP_STATIC;
    if (ip != NULL) {
        strncpy(cfg.ip, lv_textarea_get_text(ip), sizeof(cfg.ip) - 1);
        cfg.ip[sizeof(cfg.ip) - 1] = '\0';
    }
    if (gw != NULL) {
        strncpy(cfg.gateway, lv_textarea_get_text(gw), sizeof(cfg.gateway) - 1);
        cfg.gateway[sizeof(cfg.gateway) - 1] = '\0';
    }
    if (mask != NULL) {
        strncpy(cfg.netmask, lv_textarea_get_text(mask), sizeof(cfg.netmask) - 1);
        cfg.netmask[sizeof(cfg.netmask) - 1] = '\0';
    }
    if (dns != NULL) {
        strncpy(cfg.dns, lv_textarea_get_text(dns), sizeof(cfg.dns) - 1);
        cfg.dns[sizeof(cfg.dns) - 1] = '\0';
    }
    if (xom_settings_save(&cfg) == ESP_OK) {
        xom_demo_toast("Đã lưu cấu hình IP");
    } else {
        xom_demo_toast("Lưu cấu hình thất bại");
    }
    ui_navigation_request_back();
}

static void wifi_static_ip_screen_attach(lv_obj_t * screen)
{
    xom_settings_t cfg;
    xom_settings_load(&cfg);

    lv_obj_t * ip = named(screen, XN_STATIC_IP);
    if (ip != NULL && cfg.ip[0] != '\0') {
        lv_textarea_set_text(ip, cfg.ip);
    }
    lv_obj_t * gw = named(screen, XN_STATIC_GW);
    if (gw != NULL && cfg.gateway[0] != '\0') {
        lv_textarea_set_text(gw, cfg.gateway);
    }
    lv_obj_t * mask = named(screen, XN_STATIC_MASK);
    if (mask != NULL && cfg.netmask[0] != '\0') {
        lv_textarea_set_text(mask, cfg.netmask);
    }
    lv_obj_t * dns = named(screen, XN_STATIC_DNS);
    if (dns != NULL && cfg.dns[0] != '\0') {
        lv_textarea_set_text(dns, cfg.dns);
    }

    lv_obj_t * cancel = named(screen, XN_STATIC_CANCEL);
    if (cancel != NULL) {
        lv_obj_add_flag(cancel, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(cancel, static_ip_cancel_cb, LV_EVENT_CLICKED, NULL);
    }
    lv_obj_t * save = named(screen, XN_STATIC_SAVE);
    if (save != NULL) {
        lv_obj_add_flag(save, LV_OBJ_FLAG_USER_1);
        lv_obj_add_event_cb(save, static_ip_save_cb, LV_EVENT_CLICKED, NULL);
    }
}

/* -------------------------------------------------------------- polling --- */

static void poll_cb(lv_timer_t * timer)
{
    (void)timer;
    xom_screen_id_t id = ui_navigation_current();
    lv_obj_t * screen = lv_screen_active();
    if (screen == NULL) {
        return;
    }

    xom_wifi_status_t st;
    xom_wifi_get_status(&st);
    xom_wifi_scan_state_t ss;
    xom_wifi_get_scan_state(&ss);

    switch (id) {
    case XOM_SCREEN_WIFI:
        update_wifi_screen(screen);
        if (st.state == XOM_WIFI_STATE_CONNECTING) {
            busy_show("Đang kết nối...");
        } else {
            busy_hide();
        }
        break;
    case XOM_SCREEN_WIFI_SCAN:
        update_scan_screen(screen);
        if (ss.scanning) {
            busy_show("Đang quét mạng...");
        } else {
            busy_hide();
        }
        break;
    case XOM_SCREEN_WIFI_PASSWORD:
        update_password_screen(screen);
        if (st.state == XOM_WIFI_STATE_CONNECTING) {
            busy_show("Đang kết nối...");
        } else {
            busy_hide();
        }
        break;
    default:
        busy_hide();
        break;
    }
}

void xom_wifi_ui_init(void)
{
    if (s_poll != NULL) {
        return;
    }
    s_poll = lv_timer_create(poll_cb, XOM_WIFI_POLL_MS, NULL);
}

void xom_wifi_ui_attach(lv_obj_t * screen, xom_screen_id_t screen_id)
{
    if (screen == NULL) {
        return;
    }
    busy_hide();
    switch (screen_id) {
    case XOM_SCREEN_WIFI:
        wifi_screen_attach(screen);
        break;
    case XOM_SCREEN_WIFI_SCAN:
        wifi_scan_screen_attach(screen);
        break;
    case XOM_SCREEN_WIFI_PASSWORD:
        wifi_password_screen_attach(screen);
        break;
    case XOM_SCREEN_WIFI_STATIC_IP:
        wifi_static_ip_screen_attach(screen);
        break;
    default:
        break;
    }
}
