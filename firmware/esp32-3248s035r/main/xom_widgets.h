#pragma once

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Attach DEMO interaction handlers to the widgets of a freshly created screen.
 *
 * This adds no real backend behaviour (no Wi-Fi/API/NVS/OTA): switches and
 * checkboxes keep their default toggle, sliders update their value label,
 * the AI Quota tab view reflects the real active tab, and action buttons show a
 * short DEMO toast so a tap is never silently ignored.
 *
 * Must be called once per screen creation, after the screen is fully built and
 * before it is loaded. Screen destruction removes the widgets (and thus these
 * callbacks) automatically, so no stale pointers are kept.
 */
void xom_widgets_attach(lv_obj_t * screen);

/* Show a short-lived DEMO toast on the top layer (auto-hides). */
void xom_demo_toast(const char * msg);

#ifdef __cplusplus
}
#endif
