# ESP32 Widget Interaction — Full LVGL Widget Coverage

Date: 2026-10-11

## Scope

Task 16.2 makes **every widget** in the 76 generated screens
(38 screens × portrait/landscape) behave correctly on the ESP32-3248S035R,
using DEMO data only:

- Switches / checkboxes toggle on tap, show ON/OFF/checked, do not navigate and
  are not double-handled.
- Sliders drag smoothly and update their value label.
- Textareas focus on tap, open the shared runtime keyboard, support Backspace and
  Enter, close on Done/Cancel, mask password/PIN/token fields, and never leave a
  dangling pointer.
- The AI Quota tab view selects Claude/ChatGPT, reflects the **real** active tab
  in its colours, shows the correct content, and supports swipe.
- Settings / action buttons update UI state and show a DEMO message instead of
  doing nothing silently.

This task does **not** implement Wi-Fi, API, NAS, weather, Codex Quota, NVS, OTA
or microSD backends. It does not hand-edit any generated C/H file or any screen
XML, and it does not change the (already verified) touch calibration. No hardware
PASS is claimed — see [Hardware verification](#hardware-verification-pending).

## Widget inventory (all 76 generated screens)

Counts over `screens/*/*_gen.c`:

| Widget | Count | Notes |
| --- | --- | --- |
| `lv_switch` | 20 | `settings/{display,data,security,weather_config,datetime,wifi,sync_config}_{portrait,landscape}` |
| `lv_checkbox` | 4 | `settings/factory_reset_*`, `settings/wifi_password_*` (incl. `checkbox_show_wifi_password`) |
| `lv_slider` | 2 | `settings/display_*` → `slider_display_brightness` (0..100, default 75) |
| `lv_textarea` | 30 | API/NAS/Wi-Fi/static-IP/weather/date-time/PIN input fields |
| `lv_tabview` | 2 | `ai/quota_{portrait,landscape}` → `ai_quota_tabview` (tabs "Claude"/"ChatGPT") |
| `lv_button` | 154 | Save/Cancel/Confirm/Test/Refresh + segmented selectors |
| `lv_dropdown` | 0 | not used by the generated screens |
| `lv_roller` | 0 | not used by the generated screens |
| `lv_keyboard` | 0 | provided at runtime by `xom_keyboard.c` |
| `lv_buttonmatrix` | 0 | not used — tabview tab bar uses `lv_button` in LVGL 9.5 |

Named widgets are reachable via `lv_obj_get_name()` because the generator emits
`lv_obj_set_name(...)`.

## Default-behaviour widgets (no custom callback needed)

| Widget | Behaviour |
| --- | --- |
| `lv_switch` | LVGL toggles on `LV_EVENT_CLICKED`; DEMO only adds a log callback. |
| `lv_checkbox` | Same as switch. |
| `lv_slider` | LVGL drags/updates via `PRESSED`/`PRESSING` (the slider class already removes `SCROLLABLE` itself). |

For these, `xom_nav_prepare_obj()` strips `SCROLLABLE` so a jittery resistive tap
is not misclassified as a scroll and the widget receives `CLICKED`, and
`xom_nav_is_interactive()` stops the tap from also triggering navigation.

## Widgets needing callbacks

### `main/xom_widgets.c` / `main/xom_widgets.h` (new)

`xom_widgets_attach(screen)` walks the screen once (after
`xom_keyboard_attach`) and wires behaviour:

- **Switch / checkbox** → `switch_value_cb` on `LV_EVENT_VALUE_CHANGED`:
  logs `SWITCH/CHECKBOX <name> -> ON/OFF/true/false`. No manual toggle, so the
  state is never processed twice. Special case: `checkbox_show_wifi_password`
  finds `input_wifi_password` and calls `lv_textarea_set_password_mode(ta, !on)`
  so the show/hide password toggle works.
- **Slider** → `slider_value_cb` on `LV_EVENT_VALUE_CHANGED`: updates the sibling
  `label_brightness_value` to `"<n>%"` and logs the value.
- **Tab view** → `tabview_apply_style` + `tabview_value_cb` on
  `LV_EVENT_VALUE_CHANGED`: styles each tab button from the **real** active index
  (red `0xa52a26` when active, dark `0x172332` when inactive), so the highlight
  is derived from state, not from a fixed index.
- **Textarea** → `textarea_setup` sets password mode at attach time for names
  containing `password`/`pin`/`token`.
- **Buttons** → `button_clicked_cb` on `LV_EVENT_CLICKED`: shows a short DEMO
  toast (`DEMO: <label>`). Tab-bar buttons are skipped (they own the tab
  switch).
- **Segmented selectors** → `apply_segment_selection` recolours the tapped
  button red and its siblings dark for the known groups:
  `weather_cfg_celsius/fahrenheit`, `nas_config_http/https`,
  `datetime_format_12h/24h`, `btn_theme_dark/light`, `btn_ip_dhcp/static`,
  `btn_display_timeout_*`, `btn_weather_interval_*`, `api_config_auth_*`.

### DEMO toast

`xom_demo_toast(msg)` creates one label on `lv_layer_top()` (top-centre, above
the keyboard footprint) and auto-hides it with a one-shot `lv_timer`
(`repeat_count == 1`). It survives a screen switch, so a Save that both shows a
toast and navigates back still communicates the DEMO action.

### Tab view highlight — why it was wrong before

The LVGL 9.5 tab bar is built from `lv_button` children (`lv_tabview_add_tab`),
and `lv_tabview_set_active()` sets `LV_STATE_CHECKED` on the active button. The
generator drops per-index `<lv_tabview-tab_button index=...>` styles, so both
tabs rendered identically. `tabview_apply_style()` re-derives the colours from
`lv_tabview_get_tab_active()` on attach and on every `VALUE_CHANGED` (sent by
both tap and swipe), restoring a correct active/inactive highlight.

### Navigation integration (`main/ui_navigation.c`)

- `xom_nav_prepare_obj()` gained a `keep_scroll` parameter. It **preserves**
  `LV_OBJ_FLAG_SCROLLABLE` for the entire tab-view subtree (which needs the
  horizontal scroll for swipe) and keeps stripping it everywhere else — it does
  not blindly disable scrolling across the tree.
- `xom_nav_is_interactive()` now also treats a button whose ancestor is a
  `lv_tabview` as interactive, so tab-bar taps switch tabs without triggering
  navigation.
- `xom_nav_show()` calls `xom_widgets_attach(screen)` next to
  `xom_keyboard_attach(screen)`.

### Keyboard change (`main/xom_keyboard.c`)

Password-mode assignment moved out of the keyboard into `xom_widgets.c`, so
toggling "show password" is not re-masked the next time the field is focused.
The keyboard still binds/hides textareas, lifts a covered field above
`kb_top = 480 - 190 = 290`, and clears the binding before removing focus.

## Files changed

- `main/xom_widgets.c`, `main/xom_widgets.h` — new widget-interaction module.
- `main/ui_navigation.c` — tab-view scroll preservation, tab-button
  interactive rule, widgets hookup.
- `main/xom_keyboard.c` — removed per-focus password forcing (now in widgets).
- `main/CMakeLists.txt` — added `xom_widgets.c`.
- `ESP32_WIDGET_INTERACTION.md` — this report.

No generated `*_gen.c` / `*_gen.h` and no `*.xml` were modified. No real
backend functions, no auto-flash.

## Build result

Build via ESP-IDF v5.5.1 (`idf.py build`), app partition `0x380000`:

```
xomcodingui_esp32_3248s035r.bin binary size 0x30c7b0 bytes.
Smallest app partition is 0x380000 bytes. 0x73850 bytes (13%) free.
```

- No compiler errors and no warnings from the project sources.
- Size grew ~`0x3ef0` bytes versus the Task 16.1 build (`0x3088c0`).

Memory (`idf.py size`, no PSRAM):

| Type | Used | Total | Used % |
| --- | --- | --- | --- |
| DRAM | 80164 B | 180736 B | 44.35% |
| IRAM | 67551 B | 131072 B | 51.54% |

Per-screen heap logging (`xom_nav` `before/after switch`) is already emitted on
each transition; the ≥20-switch leak check must be observed on hardware.

## Hardware verification (pending)

No board is attached, so the following are **not yet verified on hardware** and
must not be reported as PASS:

- [ ] Switch toggles and shows ON/OFF; checkbox shows checked; neither
      navigates; no double state change.
- [ ] Slider drags smoothly and updates the brightness label; drag does not
      navigate.
- [ ] Textarea opens the keyboard; Backspace and Enter work; Done/Cancel closes;
      field is not covered; no dangling pointer after leaving the screen.
- [ ] Password/PIN/token fields mask input; `checkbox_show_wifi_password`
      reveals/hides the Wi-Fi password; nothing sensitive is logged.
- [ ] AI Quota: tapping Claude/ChatGPT updates the highlight and content;
      swipe also switches tab and updates the highlight; swipe never navigates.
- [ ] Save/Cancel/Confirm/Close and value/segment buttons show a DEMO toast
      (and Save/Cancel still return one level).
- [ ] `btn_ai_quota_refresh` shows a DEMO toast.
- [ ] Free heap is stable across ≥20 screen switches.
