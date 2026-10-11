#include "ui_navigation.h"

#include <stddef.h>

#include "esp_heap_caps.h"
#include "esp_log.h"

#include "board_esp32_3248s035r.h"
#include "xom_keyboard.h"
#include "xom_touch.h"
#include "xom_widgets.h"
#include "xom_wifi_ui.h"
#include "xom_time_ui.h"
#include "xom_weather_ui.h"
#include "xomcodingui.h"
#include "xomcodingui_gen.h"

static const char * TAG = "xom_nav";

#define XOM_NAV_STACK_MAX 16

/*
 * Back region: header back-arrow area (top-left). It is intentionally small
 * (not a full-width strip) so it cannot cover interactive controls: every
 * portrait settings row/button starts below y=56, and the generated header
 * only contains the back arrow and non-interactive title text.
 */
#define XOM_NAV_BACK_REGION_W 72
#define XOM_NAV_BACK_REGION_H 56

typedef struct {
    int16_t x;
    int16_t y;
    int16_t w;
    int16_t h;
    xom_screen_id_t target;
    bool back;            /* true: pop the nav stack instead of pushing target */
    const char * label;   /* item label for logging (may be NULL) */
} xom_nav_region_t;

typedef struct {
    lv_obj_t * (*create)(void);
    const char * name;
} xom_nav_screen_t;

static const xom_nav_screen_t s_screens[XOM_SCREEN_COUNT] = {
    [XOM_SCREEN_HOME] = { home_portrait_create, "home" },
    [XOM_SCREEN_WEATHER] = { weather_portrait_create, "weather" },
    [XOM_SCREEN_FORECAST] = { forecast_portrait_create, "forecast" },
    [XOM_SCREEN_NAS] = { nas_portrait_create, "nas" },
    [XOM_SCREEN_NETWORK] = { network_portrait_create, "network" },
    [XOM_SCREEN_DIAGNOSTICS] = { diagnostics_portrait_create, "diagnostics" },
    [XOM_SCREEN_SYSTEM] = { system_portrait_create, "system" },
    [XOM_SCREEN_LOGS] = { logs_portrait_create, "logs" },
    [XOM_SCREEN_NOTIFICATIONS] = { notifications_portrait_create, "notifications" },
    [XOM_SCREEN_DETAIL] = { detail_portrait_create, "detail" },
    [XOM_SCREEN_SETTINGS] = { settings_portrait_create, "settings" },
    [XOM_SCREEN_QUOTA] = { quota_portrait_create, "quota" },

    [XOM_SCREEN_WIFI] = { wifi_portrait_create, "wifi" },
    [XOM_SCREEN_WIFI_SCAN] = { wifi_scan_portrait_create, "wifi_scan" },
    [XOM_SCREEN_WIFI_PASSWORD] = { wifi_password_portrait_create, "wifi_password" },
    [XOM_SCREEN_WIFI_STATIC_IP] = { wifi_static_ip_portrait_create, "wifi_static_ip" },
    [XOM_SCREEN_DISPLAY] = { display_portrait_create, "display" },
    [XOM_SCREEN_DISPLAY_TIMEOUT] = { display_timeout_portrait_create, "display_timeout" },
    [XOM_SCREEN_WEATHER_CONFIG] = { weather_config_portrait_create, "weather_config" },
    [XOM_SCREEN_WEATHER_INTERVAL] = { weather_interval_portrait_create, "weather_interval" },
    [XOM_SCREEN_DATA] = { data_portrait_create, "data" },
    [XOM_SCREEN_API_CONFIG] = { api_config_portrait_create, "api_config" },
    [XOM_SCREEN_NAS_CONFIG] = { nas_config_portrait_create, "nas_config" },
    [XOM_SCREEN_SYNC_CONFIG] = { sync_config_portrait_create, "sync_config" },
    [XOM_SCREEN_SYNC_INTERVAL] = { sync_interval_portrait_create, "sync_interval" },
    [XOM_SCREEN_DATETIME] = { datetime_portrait_create, "datetime" },
    [XOM_SCREEN_TIMEZONE_SELECT] = { timezone_select_portrait_create, "timezone_select" },
    [XOM_SCREEN_DEVICE] = { device_portrait_create, "device" },
    [XOM_SCREEN_SECURITY] = { security_portrait_create, "security" },
    [XOM_SCREEN_CHANGE_PIN] = { change_pin_portrait_create, "change_pin" },
    [XOM_SCREEN_RESTART_CONFIRM] = { restart_confirm_portrait_create, "restart_confirm" },
    [XOM_SCREEN_FACTORY_RESET] = { factory_reset_portrait_create, "factory_reset" },
    [XOM_SCREEN_OTA] = { ota_portrait_create, "ota" },
    [XOM_SCREEN_OTA_PROGRESS] = { ota_progress_portrait_create, "ota_progress" },
};

/* HOME: tap regions matching the card layout of home_portrait.xml. */
static const xom_nav_region_t s_home_regions[] = {
    { 12, 62, 296, 122, XOM_SCREEN_WEATHER,       false, "weather" },
    { 12, 192, 296, 74, XOM_SCREEN_NAS,           false, "nas" },
    { 12, 274, 296, 108, XOM_SCREEN_SYSTEM,       false, "system" },
    { 12, 390, 296, 80, XOM_SCREEN_NETWORK,       false, "network" },
    { 0, 0, 210, 53, XOM_SCREEN_SETTINGS,         false, "settings" },
    { 210, 0, 110, 53, XOM_SCREEN_NOTIFICATIONS,  false, "notifications" },
};

/* WEATHER: five day forecast panel. */
static const xom_nav_region_t s_weather_regions[] = {
    { 12, 326, 296, 144, XOM_SCREEN_FORECAST, false, "forecast" },
};

/* NETWORK: "network information" card -> diagnostics. */
static const xom_nav_region_t s_network_regions[] = {
    { 12, 346, 296, 124, XOM_SCREEN_DIAGNOSTICS, false, "diagnostics" },
};

/* NOTIFICATIONS: first list row -> detail. */
static const xom_nav_region_t s_notifications_regions[] = {
    { 12, 72, 296, 54, XOM_SCREEN_DETAIL, false, "detail" },
};

/*
 * SETTINGS: the seven settings rows -> their real destination screens.
 * The generated settings screen exposes no named child widgets (rows are plain
 * lv_obj containers), so the rows are matched by their known geometry from
 * settings_portrait.xml. Regions are non-overlapping.
 */
static const xom_nav_region_t s_settings_regions[] = {
    { 12,  89, 296, 49, XOM_SCREEN_WIFI,           false, "wifi" },     /* 01 Wi-Fi và mạng */
    { 12, 143, 296, 49, XOM_SCREEN_DISPLAY,        false, "display" },  /* 02 Màn hình */
    { 12, 197, 296, 49, XOM_SCREEN_WEATHER_CONFIG, false, "weather" },  /* 03 Thời tiết */
    { 12, 251, 296, 49, XOM_SCREEN_DATA,           false, "data" },     /* 04 Dữ liệu và dịch vụ */
    { 12, 305, 296, 49, XOM_SCREEN_DATETIME,       false, "datetime" }, /* 05 Ngày giờ */
    { 12, 359, 296, 49, XOM_SCREEN_DEVICE,         false, "device" },   /* 06 Thiết bị và bộ nhớ */
    { 12, 413, 296, 49, XOM_SCREEN_SECURITY,       false, "security" }, /* 07 Bảo mật và hệ thống */
};

/* WIFI: change-network row / scan button -> scan; "IP tĩnh" -> static IP. */
static const xom_nav_region_t s_wifi_regions[] = {
    { 12, 190, 296, 48, XOM_SCREEN_WIFI_SCAN,      false, "change-network" },
    { 228, 275, 70, 29, XOM_SCREEN_WIFI_STATIC_IP, false, "static-ip" },
    { 12, 432, 140, 38, XOM_SCREEN_WIFI_SCAN,      false, "scan" },
};

/*
 * WIFI SCAN / WIFI PASSWORD: the runtime list of networks and the connect flow
 * are owned by xom_wifi_ui, which manages its own row taps and buttons. They
 * deliberately expose no coordinate regions (handled in xom_nav_regions).
 */

/* WIFI STATIC IP: cancel / save -> back to Wi-Fi settings. */
static const xom_nav_region_t s_wifi_static_ip_regions[] = {
    { 12, 435, 140, 35, XOM_SCREEN_HOME, true, "cancel" },
    { 160, 435, 148, 35, XOM_SCREEN_HOME, true, "save" },
};

/* DISPLAY: "screen timeout" row -> timeout picker; save button -> back. */
static const xom_nav_region_t s_display_regions[] = {
    { 12, 362, 296, 34, XOM_SCREEN_DISPLAY_TIMEOUT, false, "timeout" },
    { 12, 438, 296, 32, XOM_SCREEN_HOME,            true,  "save" },
};

/* DISPLAY TIMEOUT: cancel / save -> back to display settings. */
static const xom_nav_region_t s_display_timeout_regions[] = {
    { 12, 439, 140, 32, XOM_SCREEN_HOME, true, "cancel" },
    { 160, 439, 148, 32, XOM_SCREEN_HOME, true, "save" },
};

/* WEATHER CONFIG: "update interval" row -> interval picker; save -> back. */
static const xom_nav_region_t s_weather_config_regions[] = {
    { 12, 345, 296, 34, XOM_SCREEN_WEATHER_INTERVAL, false, "interval" },
    { 12, 438, 296, 32, XOM_SCREEN_HOME,             true,  "save" },
};

/* WEATHER INTERVAL: cancel / save -> back to weather settings. */
static const xom_nav_region_t s_weather_interval_regions[] = {
    { 12, 434, 140, 37, XOM_SCREEN_HOME, true, "cancel" },
    { 160, 434, 148, 37, XOM_SCREEN_HOME, true, "save" },
};

/* DATA: NAS / API / Sync rows -> their configuration screens. */
static const xom_nav_region_t s_data_regions[] = {
    { 12, 147, 296, 36, XOM_SCREEN_NAS_CONFIG,  false, "nas" },
    { 12, 261, 296, 35, XOM_SCREEN_API_CONFIG,  false, "api" },
    { 12, 361, 296, 43, XOM_SCREEN_SYNC_CONFIG, false, "sync" },
};

/* API CONFIG: save button -> back. */
static const xom_nav_region_t s_api_config_regions[] = {
    { 160, 434, 148, 36, XOM_SCREEN_HOME, true, "save" },
};

/* NAS CONFIG: save button -> back. */
static const xom_nav_region_t s_nas_config_regions[] = {
    { 160, 434, 148, 36, XOM_SCREEN_HOME, true, "save" },
};

/* SYNC CONFIG: "sync cycle" row -> interval picker; save -> back. */
static const xom_nav_region_t s_sync_config_regions[] = {
    { 12, 190, 296, 37, XOM_SCREEN_SYNC_INTERVAL, false, "interval" },
    { 12, 440, 296, 30, XOM_SCREEN_HOME,          true,  "save" },
};

/* SYNC INTERVAL: save -> back. */
static const xom_nav_region_t s_sync_interval_regions[] = {
    { 12, 426, 296, 38, XOM_SCREEN_HOME, true, "save" },
};

/* DATETIME: "timezone" row -> timezone picker; save -> back. */
static const xom_nav_region_t s_datetime_regions[] = {
    { 12, 256, 296, 37, XOM_SCREEN_TIMEZONE_SELECT, false, "timezone" },
    { 12, 440, 296, 30, XOM_SCREEN_HOME,            true,  "save" },
};

/* TIMEZONE SELECT: save -> back. */
static const xom_nav_region_t s_timezone_select_regions[] = {
    { 12, 426, 296, 38, XOM_SCREEN_HOME, true, "save" },
};

/* SECURITY: change-PIN / OTA rows, restart & reset buttons; save -> back. */
static const xom_nav_region_t s_security_regions[] = {
    { 12, 178, 296, 37, XOM_SCREEN_CHANGE_PIN,      false, "change-pin" },
    { 12, 274, 296, 37, XOM_SCREEN_OTA,             false, "ota" },
    { 22, 346, 274, 34, XOM_SCREEN_RESTART_CONFIRM, false, "restart" },
    { 22, 387, 274, 34, XOM_SCREEN_FACTORY_RESET,   false, "reset" },
    { 12, 437, 296, 34, XOM_SCREEN_HOME,            true,  "save" },
};

/* CHANGE PIN: cancel / save -> back to security. */
static const xom_nav_region_t s_change_pin_regions[] = {
    { 12, 439, 140, 32, XOM_SCREEN_HOME, true, "cancel" },
    { 160, 439, 148, 32, XOM_SCREEN_HOME, true, "save" },
};

/* RESTART CONFIRM: cancel / confirm -> back to security (no real restart). */
static const xom_nav_region_t s_restart_confirm_regions[] = {
    { 12, 422, 136, 40, XOM_SCREEN_HOME, true, "cancel" },
    { 156, 422, 152, 40, XOM_SCREEN_HOME, true, "confirm" },
};

/* FACTORY RESET: cancel / confirm -> back to security (no real reset). */
static const xom_nav_region_t s_factory_reset_regions[] = {
    { 12, 432, 140, 38, XOM_SCREEN_HOME, true, "cancel" },
    { 160, 432, 148, 38, XOM_SCREEN_HOME, true, "confirm" },
};

/* OTA: back -> security; check -> demo progress screen. */
static const xom_nav_region_t s_ota_regions[] = {
    { 12, 438, 140, 33, XOM_SCREEN_HOME,         true,  "back" },
    { 160, 438, 148, 33, XOM_SCREEN_OTA_PROGRESS, false, "check" },
};

static xom_screen_id_t s_stack[XOM_NAV_STACK_MAX];
static int s_depth;
static xom_screen_id_t s_current = XOM_SCREEN_HOME;
static lv_display_t * s_display;
static bool s_initialized;

static xom_screen_id_t s_pending_target;
static int s_pending_mode;      /* 0 = push target, 1 = pop one, 2 = pop to depth */
static int s_pending_depth;
static bool s_pending_active;

/* Forward declarations (definitions are below the region tables). */
static const xom_nav_region_t * xom_nav_regions(xom_screen_id_t id, size_t * count);
static void xom_nav_prepare_obj(lv_obj_t * obj, bool keep_scroll);
static bool xom_nav_point_in(const xom_nav_region_t * region, lv_point_t point);
static bool xom_nav_is_interactive(lv_obj_t * obj);
static void xom_nav_screen_clicked_cb(lv_event_t * event);
static void xom_nav_schedule(xom_screen_id_t target, bool back);
static void xom_nav_show(xom_screen_id_t id);

static const xom_nav_region_t * xom_nav_regions(xom_screen_id_t id, size_t * count)
{
    switch (id) {
    case XOM_SCREEN_HOME:
        *count = sizeof(s_home_regions) / sizeof(s_home_regions[0]);
        return s_home_regions;
    case XOM_SCREEN_WEATHER:
        *count = sizeof(s_weather_regions) / sizeof(s_weather_regions[0]);
        return s_weather_regions;
    case XOM_SCREEN_NETWORK:
        *count = sizeof(s_network_regions) / sizeof(s_network_regions[0]);
        return s_network_regions;
    case XOM_SCREEN_NOTIFICATIONS:
        *count = sizeof(s_notifications_regions) / sizeof(s_notifications_regions[0]);
        return s_notifications_regions;
    case XOM_SCREEN_SETTINGS:
        *count = sizeof(s_settings_regions) / sizeof(s_settings_regions[0]);
        return s_settings_regions;
    case XOM_SCREEN_WIFI:
        *count = sizeof(s_wifi_regions) / sizeof(s_wifi_regions[0]);
        return s_wifi_regions;
    case XOM_SCREEN_WIFI_SCAN:
        *count = 0;
        return NULL;
    case XOM_SCREEN_WIFI_PASSWORD:
        *count = 0;
        return NULL;
    case XOM_SCREEN_WIFI_STATIC_IP:
        *count = sizeof(s_wifi_static_ip_regions) / sizeof(s_wifi_static_ip_regions[0]);
        return s_wifi_static_ip_regions;
    case XOM_SCREEN_DISPLAY:
        *count = sizeof(s_display_regions) / sizeof(s_display_regions[0]);
        return s_display_regions;
    case XOM_SCREEN_DISPLAY_TIMEOUT:
        *count = sizeof(s_display_timeout_regions) / sizeof(s_display_timeout_regions[0]);
        return s_display_timeout_regions;
    case XOM_SCREEN_WEATHER_CONFIG:
        *count = sizeof(s_weather_config_regions) / sizeof(s_weather_config_regions[0]);
        return s_weather_config_regions;
    case XOM_SCREEN_WEATHER_INTERVAL:
        *count = sizeof(s_weather_interval_regions) / sizeof(s_weather_interval_regions[0]);
        return s_weather_interval_regions;
    case XOM_SCREEN_DATA:
        *count = sizeof(s_data_regions) / sizeof(s_data_regions[0]);
        return s_data_regions;
    case XOM_SCREEN_API_CONFIG:
        *count = sizeof(s_api_config_regions) / sizeof(s_api_config_regions[0]);
        return s_api_config_regions;
    case XOM_SCREEN_NAS_CONFIG:
        *count = sizeof(s_nas_config_regions) / sizeof(s_nas_config_regions[0]);
        return s_nas_config_regions;
    case XOM_SCREEN_SYNC_CONFIG:
        *count = sizeof(s_sync_config_regions) / sizeof(s_sync_config_regions[0]);
        return s_sync_config_regions;
    case XOM_SCREEN_SYNC_INTERVAL:
        *count = sizeof(s_sync_interval_regions) / sizeof(s_sync_interval_regions[0]);
        return s_sync_interval_regions;
    case XOM_SCREEN_DATETIME:
        *count = sizeof(s_datetime_regions) / sizeof(s_datetime_regions[0]);
        return s_datetime_regions;
    case XOM_SCREEN_TIMEZONE_SELECT:
        *count = sizeof(s_timezone_select_regions) / sizeof(s_timezone_select_regions[0]);
        return s_timezone_select_regions;
    case XOM_SCREEN_SECURITY:
        *count = sizeof(s_security_regions) / sizeof(s_security_regions[0]);
        return s_security_regions;
    case XOM_SCREEN_CHANGE_PIN:
        *count = sizeof(s_change_pin_regions) / sizeof(s_change_pin_regions[0]);
        return s_change_pin_regions;
    case XOM_SCREEN_RESTART_CONFIRM:
        *count = sizeof(s_restart_confirm_regions) / sizeof(s_restart_confirm_regions[0]);
        return s_restart_confirm_regions;
    case XOM_SCREEN_FACTORY_RESET:
        *count = sizeof(s_factory_reset_regions) / sizeof(s_factory_reset_regions[0]);
        return s_factory_reset_regions;
    case XOM_SCREEN_OTA:
        *count = sizeof(s_ota_regions) / sizeof(s_ota_regions[0]);
        return s_ota_regions;
    default:
        *count = 0;
        return NULL;
    }
}

static void xom_nav_log_heap(const char * phase)
{
    ESP_LOGI(TAG, "heap %-18s free=%u DMA=%u", phase,
             (unsigned)heap_caps_get_free_size(MALLOC_CAP_8BIT),
             (unsigned)heap_caps_get_free_size(MALLOC_CAP_DMA));
}

/*
 * The generated screens are fixed 320x480 layouts. LVGL's default objects are
 * scrollable and events do not bubble, which on a noisy resistive panel means a
 * slightly jittery tap is classified as a scroll (so widgets never receive
 * CLICKED) while a clean tap on the bare screen drives navigation. Removing
 * SCROLLABLE and enabling EVENT_BUBBLE makes widget taps reliable and lets a
 * single screen-level CLICKED handler see every tap.
 *
 * SCROLLABLE is deliberately preserved inside a tab view: the tab content pane
 * scrolls horizontally to switch tabs, and that swipe must keep working. So the
 * whole tab-view subtree keeps SCROLLABLE; everywhere else it is stripped.
 */
static void xom_nav_prepare_obj(lv_obj_t * obj, bool keep_scroll)
{
    if (obj == NULL) {
        return;
    }

    bool is_tabview = lv_obj_check_type(obj, &lv_tabview_class);
    bool keep = keep_scroll || is_tabview;

    if (!keep && !lv_obj_check_type(obj, &lv_roller_class)) {
        lv_obj_remove_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    }
    lv_obj_add_flag(obj, LV_OBJ_FLAG_EVENT_BUBBLE);

    uint32_t i = 0;
    lv_obj_t * child = NULL;
    while ((child = lv_obj_get_child(obj, i++)) != NULL) {
        xom_nav_prepare_obj(child, keep);
    }
}

static bool xom_nav_point_in(const xom_nav_region_t * region, lv_point_t point)
{
    return point.x >= region->x && point.x < (region->x + region->w) &&
           point.y >= region->y && point.y < (region->y + region->h);
}

/*
 * Widgets that own their own tap behaviour must not trigger navigation. Buttons
 * are deliberately excluded: the generated screens have no per-button handlers,
 * so buttons (Save, Cancel, header Back, ...) are navigation targets. The one
 * exception is a button inside a tab view's tab bar, which owns the tab switch.
 */
static bool xom_nav_inside_tabview(lv_obj_t * obj)
{
    for (lv_obj_t * p = lv_obj_get_parent(obj); p != NULL; p = lv_obj_get_parent(p)) {
        if (lv_obj_check_type(p, &lv_tabview_class)) {
            return true;
        }
    }
    return false;
}

static bool xom_nav_is_interactive(lv_obj_t * obj)
{
    if (obj == NULL) {
        return false;
    }
    return lv_obj_has_flag(obj, LV_OBJ_FLAG_USER_1) ||
           lv_obj_check_type(obj, &lv_switch_class) ||
           lv_obj_check_type(obj, &lv_checkbox_class) ||
           lv_obj_check_type(obj, &lv_slider_class) ||
           lv_obj_check_type(obj, &lv_textarea_class) ||
           lv_obj_check_type(obj, &lv_dropdown_class) ||
           lv_obj_check_type(obj, &lv_roller_class) ||
           lv_obj_check_type(obj, &lv_arc_class) ||
           lv_obj_check_type(obj, &lv_spinbox_class) ||
           lv_obj_check_type(obj, &lv_buttonmatrix_class) ||
           lv_obj_check_type(obj, &lv_spinner_class) ||
           (lv_obj_check_type(obj, &lv_button_class) && xom_nav_inside_tabview(obj));
}

static void xom_nav_screen_clicked_cb(lv_event_t * event)
{
    /* Only handle the CLICKED event of the currently loaded screen. */
    if ((xom_screen_id_t)(intptr_t)lv_event_get_user_data(event) != s_current) {
        return;
    }

    lv_obj_t * target = lv_event_get_target(event);
    if (xom_nav_is_interactive(target)) {
        return;
    }

    lv_indev_t * indev = lv_event_get_indev(event);
    if (indev == NULL) {
        return;
    }
    lv_point_t point = {0, 0};
    lv_indev_get_point(indev, &point);

    xom_screen_id_t sid = s_current;
    size_t count = 0;
    const xom_nav_region_t * regions = xom_nav_regions(sid, &count);
    for (size_t i = 0; i < count; i++) {
        if (!xom_nav_point_in(&regions[i], point) || regions[i].target == sid) {
            continue;
        }
        const char * item = regions[i].label ? regions[i].label : s_screens[regions[i].target].name;
        if (regions[i].back) {
            ESP_LOGI(TAG, "NAV: %s -> back(%s) touch=(%d,%d)",
                     s_screens[sid].name, item, (int)point.x, (int)point.y);
            xom_nav_schedule(sid, true);
        } else {
            ESP_LOGI(TAG, "NAV: %s -> %s touch=(%d,%d)",
                     s_screens[sid].name, s_screens[regions[i].target].name,
                     (int)point.x, (int)point.y);
            xom_nav_schedule(regions[i].target, false);
        }
        return;
    }

    /* Implicit header Back region on every non-Home screen. */
    if (sid != XOM_SCREEN_HOME &&
        point.x >= 0 && point.x < XOM_NAV_BACK_REGION_W &&
        point.y >= 0 && point.y < XOM_NAV_BACK_REGION_H) {
        ESP_LOGI(TAG, "NAV: %s -> back (header) touch=(%d,%d)",
                 s_screens[sid].name, (int)point.x, (int)point.y);
        xom_nav_schedule(sid, true);
        return;
    }

    /*
     * Diagnostic only: a tap in the top band on the mirrored-back X range means
     * the panel X axis is still reflected (see xom_touch.c invert_x). It must
     * not trigger navigation; it only makes the calibration error explicit.
     */
    if (sid != XOM_SCREEN_HOME && point.y < XOM_NAV_BACK_REGION_H &&
        point.x >= XOM_LCD_H_RES - XOM_NAV_BACK_REGION_W) {
        ESP_LOGW(TAG, "NAV: %s tap at (%d,%d) is in the mirrored-Back zone "
                      "(expected Back at x< %d) - check touch invert_x",
                 s_screens[sid].name, (int)point.x, (int)point.y,
                 XOM_NAV_BACK_REGION_W);
    }
}

static void xom_nav_apply_pending(void * arg)
{
    (void)arg;
    if (!s_pending_active) {
        return;
    }
    s_pending_active = false;
    switch (s_pending_mode) {
    case 1:
        ui_navigation_back();
        break;
    case 2:
        if (s_pending_depth > 0 && s_pending_depth <= s_depth) {
            s_depth = s_pending_depth;
            xom_nav_show(s_stack[s_depth - 1]);
        }
        break;
    default:
        ui_navigation_goto(s_pending_target);
        break;
    }
}

/*
 * Defer navigation out of the indev/LVGL event context. Destroying the active
 * screen from inside its own event callback is unsafe, and deferring also
 * coalesces rapid double taps into a single transition.
 */
static void xom_nav_schedule(xom_screen_id_t target, bool back)
{
    if (s_pending_active) {
        return;
    }
    s_pending_target = target;
    s_pending_mode = back ? 1 : 0;
    s_pending_active = true;
    if (lv_async_call(xom_nav_apply_pending, NULL) != LV_RESULT_OK) {
        s_pending_active = false;
    }
}

static void xom_nav_schedule_pop_to(int depth)
{
    if (s_pending_active) {
        return;
    }
    s_pending_mode = 2;
    s_pending_depth = depth;
    s_pending_active = true;
    if (lv_async_call(xom_nav_apply_pending, NULL) != LV_RESULT_OK) {
        s_pending_active = false;
    }
}

static void xom_nav_show(xom_screen_id_t id)
{
    if (id >= XOM_SCREEN_COUNT || s_screens[id].create == NULL) {
        ESP_LOGE(TAG, "invalid screen id %d", (int)id);
        return;
    }

    /* Tear down transient input UI before the old screen is destroyed. */
    xom_keyboard_hide();

    lv_obj_t * screen = s_screens[id].create();
    if (screen == NULL) {
        ESP_LOGE(TAG, "create failed for %s", s_screens[id].name);
        return;
    }

    xom_nav_prepare_obj(screen, false);
    lv_obj_add_flag(screen, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_add_event_cb(screen, xom_nav_screen_clicked_cb, LV_EVENT_CLICKED,
                        (void *)(intptr_t)id);
    xom_keyboard_attach(screen);
    xom_widgets_attach(screen);
    xom_wifi_ui_attach(screen, id);
    xom_time_ui_attach(screen, id);
    xom_weather_ui_attach(screen, id);

    xom_nav_log_heap("before switch");
    lv_screen_load_anim(screen, LV_SCREEN_LOAD_ANIM_NONE, 0, 0, true);
    s_current = id;
    xom_nav_log_heap("after switch");

    ESP_LOGI(TAG, "screen -> %s (depth=%d)", s_screens[id].name, s_depth);
}

esp_err_t ui_navigation_init(lv_display_t * display, lv_indev_t * indev,
                             xom_screen_id_t initial)
{
    if (display == NULL || indev == NULL) {
        return ESP_ERR_INVALID_ARG;
    }
    if (initial >= XOM_SCREEN_COUNT) {
        initial = XOM_SCREEN_HOME;
    }

    s_display = display;
    s_depth = 0;
    s_current = initial;
    s_stack[s_depth++] = initial;

    lv_indev_set_mode(indev, LV_INDEV_MODE_TIMER);

    s_initialized = true;

    /* Configure the active portrait target used by the generated screens. */
    xomcodingui_set_target(XOMCODINGUI_TARGET_PORTRAIT);

    xom_nav_log_heap("init");
    xom_nav_show(initial);

    return ESP_OK;
}

void ui_navigation_goto(xom_screen_id_t screen)
{
    if (!s_initialized || screen >= XOM_SCREEN_COUNT || screen == s_current) {
        return;
    }

    if (s_depth < XOM_NAV_STACK_MAX) {
        s_stack[s_depth++] = screen;
    } else {
        /* Drop the oldest entry to bound RAM / stack usage. */
        for (int i = 1; i < XOM_NAV_STACK_MAX; i++) {
            s_stack[i - 1] = s_stack[i];
        }
        s_stack[XOM_NAV_STACK_MAX - 1] = screen;
    }

    xom_nav_show(screen);
}

void ui_navigation_back(void)
{
    if (!s_initialized || s_depth <= 1) {
        return;
    }

    s_depth--;
    xom_screen_id_t previous = s_stack[s_depth - 1];
    xom_nav_show(previous);
}

void ui_navigation_request(xom_screen_id_t screen)
{
    if (!s_initialized || screen >= XOM_SCREEN_COUNT || screen == s_current) {
        return;
    }

    /* If the target is already on the stack, pop back to it (no duplicate). */
    for (int i = s_depth - 1; i >= 0; i--) {
        if (s_stack[i] == screen) {
            xom_nav_schedule_pop_to(i + 1);
            return;
        }
    }
    xom_nav_schedule(screen, false);
}

void ui_navigation_request_back(void)
{
    if (!s_initialized || s_depth <= 1) {
        return;
    }
    xom_nav_schedule(s_current, true);
}

xom_screen_id_t ui_navigation_current(void)
{
    return s_current;
}
