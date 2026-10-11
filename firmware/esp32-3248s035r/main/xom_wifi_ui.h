#pragma once

#include "lvgl.h"

#include "ui_navigation.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Binds the generated Wi-Fi screens to the real Wi-Fi manager.
 *
 * The generated screens keep fixed placeholder text and expose only a handful
 * of named widgets, so this module renames the placeholder labels to stable
 * runtime names and then updates them from a single LVGL poll timer (which runs
 * with the LVGL lock held). No LVGL call ever happens in an ESP event handler.
 */

/* Create the poll timer. Must be called with the LVGL port lock held. */
void xom_wifi_ui_init(void);

/* Called for every screen right after creation (from ui_navigation). */
void xom_wifi_ui_attach(lv_obj_t * screen, xom_screen_id_t screen_id);

#ifdef __cplusplus
}
#endif
