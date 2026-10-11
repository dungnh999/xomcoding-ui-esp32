#pragma once

#include "lvgl.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Runtime virtual keyboard for generated lv_textarea widgets.
 *
 * A single lv_keyboard instance is created lazily on the top layer and shared
 * by every screen. It is hidden until a textarea is focused, at which point the
 * textarea is bound and, if the keyboard would cover it, temporarily lifted
 * above the keyboard. The binding is cleared (and the position restored) on
 * Done/Cancel, on textarea defocus, and whenever the active screen changes.
 */

/* Wire every lv_textarea found under `screen` to the shared keyboard. */
void xom_keyboard_attach(lv_obj_t * screen);

/* Hide the keyboard, clear the binding and restore any moved textarea. */
void xom_keyboard_hide(void);

/* True while the shared keyboard is visible. */
bool xom_keyboard_is_visible(void);

#ifdef __cplusplus
}
#endif
