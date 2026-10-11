#pragma once

#include "esp_err.h"
#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Lightweight UI navigation layer.
 *
 * The generated screens are kept untouched. Navigation is performed either by
 * recreating a generated screen on demand (ui_navigation_goto) or through a
 * coordinate based tap-region map for screens that do not expose named
 * buttons. Only the active screen is kept alive; the previous screen is
 * released by LVGL through `lv_screen_load_anim(..., auto_del = true)`.
 */

typedef enum {
    XOM_SCREEN_HOME = 0,
    XOM_SCREEN_WEATHER,
    XOM_SCREEN_FORECAST,
    XOM_SCREEN_NAS,
    XOM_SCREEN_NETWORK,
    XOM_SCREEN_DIAGNOSTICS,
    XOM_SCREEN_SYSTEM,
    XOM_SCREEN_LOGS,
    XOM_SCREEN_NOTIFICATIONS,
    XOM_SCREEN_DETAIL,
    XOM_SCREEN_SETTINGS,
    XOM_SCREEN_QUOTA,

    /* Settings sub-screens (portrait). */
    XOM_SCREEN_WIFI,
    XOM_SCREEN_WIFI_SCAN,
    XOM_SCREEN_WIFI_PASSWORD,
    XOM_SCREEN_WIFI_STATIC_IP,
    XOM_SCREEN_DISPLAY,
    XOM_SCREEN_DISPLAY_TIMEOUT,
    XOM_SCREEN_WEATHER_CONFIG,
    XOM_SCREEN_WEATHER_INTERVAL,
    XOM_SCREEN_DATA,
    XOM_SCREEN_API_CONFIG,
    XOM_SCREEN_NAS_CONFIG,
    XOM_SCREEN_SYNC_CONFIG,
    XOM_SCREEN_SYNC_INTERVAL,
    XOM_SCREEN_DATETIME,
    XOM_SCREEN_TIMEZONE_SELECT,
    XOM_SCREEN_DEVICE,
    XOM_SCREEN_SECURITY,
    XOM_SCREEN_CHANGE_PIN,
    XOM_SCREEN_RESTART_CONFIRM,
    XOM_SCREEN_FACTORY_RESET,
    XOM_SCREEN_OTA,
    XOM_SCREEN_OTA_PROGRESS,

    XOM_SCREEN_COUNT
} xom_screen_id_t;

/* Must be called with the LVGL port lock held. */
esp_err_t ui_navigation_init(lv_display_t * display, lv_indev_t * indev,
                             xom_screen_id_t initial);

void ui_navigation_goto(xom_screen_id_t screen);
void ui_navigation_back(void);

/*
 * Deferred navigation requests, safe to call from inside an LVGL event
 * callback (the actual screen switch happens on the next LVGL tick).
 *
 * ui_navigation_request() pops back to the target if it is already on the
 * stack, otherwise it pushes it. ui_navigation_request_back() pops one entry.
 */
void ui_navigation_request(xom_screen_id_t screen);
void ui_navigation_request_back(void);

xom_screen_id_t ui_navigation_current(void);

#ifdef __cplusplus
}
#endif
