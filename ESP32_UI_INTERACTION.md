# ESP32 UI Interaction — Back Navigation, Switches, Checkboxes & Virtual Keyboard

Date: 2026-10-11

## Scope

Task 16 makes the generated LVGL Pro Editor UI *interactive* on the
ESP32-3248S035R:

- Back navigation moves exactly one level up (no hardcoded return-to-Home, no
  double pop) and is safe (deferred out of the LVGL event context).
- `lv_switch` and `lv_checkbox` toggle on tap and do **not** trigger
  navigation.
- `lv_textarea` fields focus on tap and open a runtime `lv_keyboard` with
  Done/Cancel, password mode for secret fields, and coverage avoidance.

This task does **not** implement API clients, Wi-Fi, NAS, weather, NVS, or OTA.
It does not hand-edit any generated C/H file or any screen XML. No hardware PASS
is claimed — see [Hardware verification](#hardware-verification-pending).

## Root cause (why Back worked but switches/checkboxes/keyboard did not)

All three symptoms had a single cause in the Task 15 input path:

1. Navigation was fired directly on the touch indev `LV_EVENT_RELEASED` (or the
   equivalent), while widgets need `LV_EVENT_CLICKED`.
2. LVGL objects are **scrollable by default** (`LV_OBJ_FLAG_CLICKABLE` +
   `LV_OBJ_FLAG_SCROLLABLE`). On an uncalibrated, noisy XPT2046 panel a
   slightly jittery tap is classified as a *scroll*, so `LV_EVENT_CLICKED` is
   never delivered to the widget — switches/checkboxes never toggled and
   textareas never focused — while a clean tap on the bare (scrollable) screen
   still drove navigation.
3. A screen-level handler only receives events that reach it. LVGL does **not**
   bubble events by default (`LV_OBJ_FLAG_EVENT_BUBBLE` is not a default flag),
   so a handler attached to the screen missed all child-widget clicks.

Additionally the indev was read via `esp_lvgl_port` event mode
(`LV_INDEV_MODE_EVENT`) while `CONFIG_XPT2046_INTERRUPT_MODE` is not set, so a
touch *release* may not wake LVGL and the indev can stay latched on the last
press.

## Fixes

### `main/xom_firmware.c`

- `lv_indev_set_mode(board_display.touch_indev, LV_INDEV_MODE_TIMER)` so the
  touch indev is polled by the LVGL timer rather than relying on the (not
  configured) XPT2046 interrupt, which fixes stuck/latched presses.

### `main/ui_navigation.c`

- `xom_nav_prepare_obj()` walks the freshly created screen and, recursively:
  - removes `LV_OBJ_FLAG_SCROLLABLE` (kept only on `lv_roller`, which needs it),
    so jittery taps are no longer misclassified as scrolls and widgets receive
    `LV_EVENT_CLICKED`.
  - adds `LV_OBJ_FLAG_EVENT_BUBBLE`, so a single screen-level CLICKED handler
    sees taps that land on any child.
- Navigation moved off the indev handler onto a screen-level
  `xom_nav_screen_clicked_cb` (`LV_EVENT_CLICKED`):
  - Ignores taps whose target is an interactive widget
    (`xom_nav_is_interactive`: switch, checkbox, slider, textarea, dropdown,
    roller, arc, spinbox, buttonmatrix, spinner). Buttons are intentionally
    **not** in this list because the generated screens have no per-button
    handlers, so Save/Cancel/header Back are navigation targets.
  - Matches the tap point against the per-screen hit regions (Task 15.2 data),
    then falls back to the implicit header Back region `(0, 0, 72, 56)` on any
    non-Home screen.
  - The header Back region starts at y=56; every interactive row starts below
    it, so it cannot steal widget taps.
- `xom_nav_schedule()` defers the transition through `lv_async_call()` and
  coalesces rapid double taps (`s_pending_active`), so the active screen is
  never destroyed from inside its own event callback.
- Back is a real stack pop via `ui_navigation_back()` (stack depth bounded by
  `XOM_NAV_STACK_MAX`), not a hardcoded `XOM_SCREEN_HOME`.
- The scree-level handler also checks the event's user data against
  `s_current`, so a screen that is being torn down cannot act on a stale tap.

### `main/xom_keyboard.h` / `main/xom_keyboard.c` (new)

Runtime virtual keyboard module:

- A **single** `lv_keyboard` instance is created lazily on `lv_layer_top()`
  (full width, 190 px tall, aligned to the bottom) and hidden until needed. It
  is never recreated per screen.
- `xom_keyboard_attach(screen)` walks the new screen with `lv_obj_tree_walk()`
  and registers a focus/click handler on every `lv_textarea`.
- On `LV_EVENT_FOCUSED` / `LV_EVENT_CLICKED` the textarea is bound with
  `lv_keyboard_set_textarea()`, the keyboard is shown and raised.
- **Password mode**: fields whose object name contains `password`, `pin`, or
  `token` (`input_wifi_password`, `change_pin_current/new/confirm`,
  `api_config_token`, `nas_config_token`) get
  `lv_textarea_set_password_mode(ta, true)`. Nothing is ever logged from the
  textarea, so no secret reaches the serial log.
- **Coverage avoidance**: if the focused textarea's bottom edge would sit under
  the keyboard (`kb_top = 480 - 190 = 290`), it is temporarily lifted above the
  keyboard; the original `y` is restored when the keyboard hides.
- **Hide path**: `LV_EVENT_READY` / `LV_EVENT_CANCEL` on the keyboard, or
  `LV_EVENT_DEFOCUSED` / `LV_EVENT_CANCEL` on the textarea, hide the keyboard,
  clear the binding and restore any moved textarea. `xom_keyboard_hide()` is
  also called at the start of every `xom_nav_show()`, so binding is cleared
  *before* the old screen (and its textarea) is destroyed — no dangling
  textarea pointers.
- The binding is cleared before focus is removed, so the resulting
  `LV_EVENT_DEFOCUSED` cannot re-enter the hide path.

### `main/CMakeLists.txt`

- Added `xom_keyboard.c` to the component sources.

## Widget coverage

| Widget | Handling |
| --- | --- |
| `lv_switch` (`display_touch_feedback`, `datetime`…, `data`…, `sync_*`, `security_*`) | Toggles via LVGL on CLICKED; excluded from navigation. |
| `lv_checkbox` (`factory_reset…`) | Toggles via LVGL on CLICKED; excluded from navigation. |
| `lv_slider` (`slider_display_brightness`) | Adjusts via LVGL; excluded from navigation. |
| `lv_textarea` (15 fields across settings) | Focuses on tap; shared keyboard with Done/Cancel; password mode where applicable. |
| Buttons / rows / screen background | Navigation via per-screen hit regions (Task 15.2). |
| Header back arrow | Implicit `(0,0,72,56)` region → single-level pop. |

## Task 18.5 Runtime Interaction Update

- Code PASS: The underlying touch issue is addressed at calibration level first, before increasing Save/Cancel hitboxes.
- Code PASS: Touch calibration auto-starts only when saved calibration is missing/invalid and persists separately from Wi-Fi credentials.
- Code PASS: Existing keyboard behavior remains unchanged: one shared keyboard, no dangling textarea pointer, hide on navigation.
- Code PASS: Runtime toast/save feedback remains Be Vietnam Pro via `xom_ui_style` from Task 18.4.
- Code PASS: Weather refresh status will not start a network request until Wi-Fi is connected with IP, so startup loading/error should no longer be caused by premature DNS.
- Build PASS: app binary `0x2e52d0`, IRAM 108,351 used / 22,721 free, DRAM 105,428 used / 75,308 free.
- Hardware PASS: pending. Validate centered Save/Cancel taps, keyboard keys, Sync Now layout, and Weather loading/success/error on the physical panel after calibration.

## Files changed

- `main/xom_firmware.c` — timer-mode touch indev.
- `main/ui_navigation.c` — input path rewrite (scroll/disable, bubbling,
  screen-level CLICKED nav, deferred schedule, keyboard hookup).
- `main/xom_keyboard.c`, `main/xom_keyboard.h` — new keyboard module.
- `main/CMakeLists.txt` — new source.
- `ESP32_UI_INTERACTION.md` — this report.

No generated `*_gen.c` / `*_gen.h` and no `*.xml` were modified.

## Build result

Build via ESP-IDF v5.5.1 (`idf.py build`), app partition `0x380000`:

```
xomcodingui_esp32_3248s035r.bin binary size 0x3087f0 bytes.
Smallest app partition is 0x380000 bytes. 0x77810 bytes (13%) free.
```

- No compiler errors and no warnings from the project sources.
- Size grew by ~`0x440` bytes versus the pre-Task-16 build (`0x3083b0`).
- No auto-flash was performed.

## Hardware verification (pending)

No board is attached, so the following are **not yet verified on hardware** and
must not be reported as PASS:

- [ ] Tapping a switch/checkbox toggles it and does not navigate.
- [ ] Tapping a textarea focuses it and opens the keyboard; Done/Cancel hides it.
- [ ] Password/PIN/token fields mask input and nothing sensitive appears on the
      serial log.
- [ ] The focused textarea is never fully covered by the keyboard.
- [ ] Back from a settings sub-screen returns exactly one level (no jump Home,
      no double pop).
- [ ] Dragging/swiping does not navigate.
- [ ] Header Back works on every non-Home screen.

## Task 16.1 — Mirrored touch X and Back hit detection

Date: 2026-10-11

### Symptom (hardware)

- Home renders correctly and touch works.
- Navigating to other screens works.
- The Back arrow is drawn in the **top-left** corner, but tapping the visual
  top-left did nothing — the user had to tap the visual **top-right** to go
  back.

### Investigation

1. **Touch mapping** (`xom_touch.c`, `board_esp32_3248s035r.c`). The XPT2046
   runs in raw-ADC mode and orientation is applied only in
   `xom_touch_process_coordinates()`. The port layer
   (`esp_lvgl_port_touch.c:116`) passes touch coordinates through untouched
   (scale 1.0, no rotation/mirror), so the panel orientation is fully described
   by the calibration struct.
2. **Back region** (`ui_navigation.c`). The Back icon in every settings XML is a
   36x36 rounded box at `x=12, y=12` (e.g. `wifi_portrait.xml:20`), i.e. visual
   top-left. The implicit header region is `(0, 0, 72, 56)` on screen
   coordinates, which contains it. `lv_indev_get_point()` returns **screen**
   coordinates, and the region tables are authored in the same space.
3. **Event bubbling / double navigation.** LVGL's `event_send_core()`
   (`lv_obj_event.c:367`) invokes the event list of each `current_target`
   exactly once and then recurses to the parent when
   `LV_OBJ_FLAG_EVENT_BUBBLE` is set. The screen-level CLICKED callback
   therefore runs once per tap — no double navigation. The callback also
   returns after the first matching region, so an explicit region and the
   implicit header region cannot both fire.

The region logic was therefore correct; the root cause is that a tap at the
visual left was mapped to a large screen X (and vice-versa), i.e. the panel X
axis is reflected relative to the display. Combined with Task 15.1's proven
vertical reflection, **both** axes are inverted on this unit.

### Fix

- `xom_touch.c`: fallback calibration `invert_x` changed `false` -> `true`
  (`invert_y` already `true`). Comment updated with the Task 16.1 evidence.
  The calibration wizard still overrides this once real corners are measured.
- `xom_touch.c`: the debug line now prints a conclusive, paste-friendly format:
  `TOUCH <EVENT> raw=(x,y) mapped=(x,y) screen=(320,480) swap=.. inv_x=.. inv_y=..`
  so tapping the visual top-left and top-right directly proves the axis
  direction from serial output alone.
- `ui_navigation.c`: added a diagnostic-only warning when a tap lands in the
  top band on the **mirrored** Back X range (`x >= 320 - 72`). It never
  navigates; it just points at a residual calibration problem.
- The Back region was **not** widened and remains `(0, 0, 72, 56)` so it cannot
  mask a calibration error.

No generated C/H and no XML were modified.

### Build (Task 16.1)

```
xomcodingui_esp32_3248s035r.bin binary size 0x3088c0 bytes.
Smallest app partition is 0x380000 bytes. 0x77740 bytes (13%) free.
```

No compiler errors or warnings; no auto-flash performed.

### Hardware verification (Task 16.1, pending)

- [ ] Tapping the visual top-left Back arrow navigates back.
- [ ] Tapping the visual top-right does **not** navigate back.
- [ ] Weather / NAS / System / Network navigation still correct.
- [ ] Switches and checkboxes toggle.
- [ ] Textareas open the keyboard at the correct position.
- [ ] No double navigation.


## Wi-Fi UI (Task 17 additions relevant to interaction)

- Buttons in Wi-Fi module flagged `LV_OBJ_FLAG_USER_1`; demo toast suppressed for them. Real handlers: Wi-Fi/Scan/Password/Static IP buttons work via `LV_EVENT_CLICKED`.
- Password connect button is disabled during `CONNECTING` to prevent double-connect.
- Busy overlay (spinner + text) shows during scanning/connecting; keyboard is hidden before returning to Wi-Fi screen after successful connect attempt.
- Scan list rebuilt only on epoch change; tapping a row selects AP and navigates to password screen. Placeholders removed by deleting children with `y` in scan area (after `lv_obj_update_layout`).
- No navigation interception of interactive widgets (screen-level CLICKED ignores widget targets).

## Touch mapping (fallback)

Fallback calibration uses `invert_x=true, invert_y=true` (from hardware tests) to match visual <-> raw orientation. A proper 4-corner wizard is available (see `ESP32_TOUCH_CALIBRATION.md`) but not persisted to NVS in this build.
