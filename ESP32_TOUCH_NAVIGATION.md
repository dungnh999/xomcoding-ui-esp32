# ESP32 Touch Calibration & LVGL Screen Navigation

Date: 2026-10-11

## Scope

Task 15 makes the generated LVGL Pro Editor UI usable on the real
ESP32-3248S035R board: read the XPT2046 resistive touch panel, correct the
coordinates for the 320x480 portrait panel, observe LVGL input events, and
navigate between the generated screens with a working Back path.

This task does **not** implement API clients, Wi-Fi networking, NAS, weather,
the quota backend, NVS, or OTA. It does not modify any generated C/H file or
any screen XML.

## Hardware

| Item | Value |
| --- | --- |
| Board | ESP32-3248S035R (Sunton/CYD 3.5") |
| MCU | ESP32-WROOM-32, 4 MB flash, no PSRAM |
| Display | ST7796 SPI, 320x480 |
| Touch | XPT2046 SPI resistive |
| Touch CS / IRQ | GPIO 33 / GPIO 36 |
| SPI host / clock | SPI2_HOST, LCD 24 MHz, touch 2 MHz |

## Key Driver Finding

Two details drive the whole implementation and were verified in the managed
components:

1. **Raw ADC mode is required for calibration.** The project had
   `CONFIG_XPT2046_CONVERT_ADC_TO_COORDS=y`, which makes the driver scale the
   12-bit ADC samples onto a fixed screen range. That discards the real panel
   extent and makes accurate corner calibration impossible. It is now
   **disabled**, so `esp_lcd_touch_get_data()` returns raw samples (0..4095).
2. **The XPT2046 driver does not implement `set_mirror_x`.** Because of that,
   `esp_lcd_touch_get_data()` applied a software `mirror_x` in the touch layer.
   The board config previously requested `mirror_x = true`, which would have
   mirrored the raw samples. All touch flags are now `false` and orientation is
   handled explicitly by our own calibration (`swap_xy` / `invert_x` /
   `invert_y`).

Source:
- `managed_components/atanisoft__esp_lcd_touch_xpt2046/esp_lcd_touch_xpt2046.c`
- `managed_components/espressif__esp_lcd_touch/esp_lcd_touch.c`

## What Was Added

### `main/xom_touch.h` / `main/xom_touch.c`

Touch debug and calibration module.

- `xom_touch_process_coordinates()` is registered as the esp_lcd_touch
  `process_coordinates` callback. It reads the raw XPT2046 samples, tracks the
  min/max observed, and maps them to screen pixels using the current
  calibration (`raw_min/max`, `swap_xy`, `invert_x`, `invert_y`).
- `xom_touch_init()` registers an LVGL indev event callback that logs
  `PRESS` / `RELEASE` / `CLICK` with the raw sample, the mapped point, and an
  `[UNCALIBRATED]` marker while no calibration is loaded.
- `xom_touch_compute_calibration()` turns four raw corner samples (TL, TR, BL,
  BR) into a calibration, detecting axis swap and inversion automatically.
- An optional on-screen 4-corner wizard
  (`XOM_TOUCH_CALIBRATION_WIZARD`) guides the user through the corners and
  prints a paste-ready `CAL: { ... }` block on the serial log.
- Toggles: `XOM_TOUCH_DEBUG` (default 1), `XOM_TOUCH_CALIBRATION_WIZARD`
  (default 0).

### `main/ui_navigation.h` / `main/ui_navigation.c`

Lightweight navigation layer over the generated screens.

- `xom_screen_id_t` enumerates the portrait screens that ship with the UI.
- `ui_navigation_init()` registers an indev callback and loads the initial
  screen. Must be called with the LVGL port lock held.
- Navigation uses a coordinate tap-region map per screen (the generated
  screens mostly do not expose named child widgets), plus an implicit 72x56
  header Back region in the top-left of every non-Home screen. A region can be
  marked `back` to pop the nav stack instead of pushing its target.
- Screen switches are deferred through `lv_async_call` so a screen is never
  deleted while an input event is being dispatched. Only one screen is alive
  at a time; `lv_screen_load_anim(..., auto_del = true)` releases the previous
  screen, and Back recreates the target from the generated create function.
- Heap (and DMA heap) is logged before and after each switch to watch RAM on
  this PSRAM-less board.

### `main/xom_firmware.c`

`xom_firmware_start()` now:

1. Starts the board display/touch.
2. Takes the LVGL port lock.
3. Sets the portrait target and calls `xomcodingui_init()`.
4. Calls `xom_touch_init()` and `xom_touch_log_stats()`.
5. Calls `ui_navigation_init(...)` on Home.

### `main/board_esp32_3248s035r.c`

- Includes `xom_touch.h`.
- Touch flags changed to `swap_xy = false`, `mirror_x = false`,
  `mirror_y = false`.
- Registers `.process_coordinates = xom_touch_process_coordinates`.

### `main/CMakeLists.txt`

Added `xom_touch.c` and `ui_navigation.c` to `SRCS`.

### `sdkconfig` / `sdkconfig.defaults`

- `CONFIG_XPT2046_CONVERT_ADC_TO_COORDS` is now **not set**.

## Navigation Map

| From | Region (x,y,w,h) | To |
| --- | --- | --- |
| Home | weather card `12,62,296,122` | Weather |
| Home | NAS card `12,192,296,74` | NAS |
| Home | system card `12,274,296,108` | System |
| Home | network card `12,390,296,80` | Network |
| Home | header left `0,0,210,53` | Settings |
| Home | header right `210,0,110,53` | Notifications |
| Weather | forecast panel `12,326,296,144` | Forecast |
| Network | info card `12,346,296,124` | Diagnostics |
| Notifications | first row `12,72,296,54` | Detail |
| Settings | rows 1..7 | Wi-Fi / Display / Weather / Data / Date & Time / Device / Security (see Task 15.2) |
| any non-Home | header back-arrow `0,0,72,56` | Back to previous screen |

The Settings destinations were originally a first-stage demo mapping
(Network / System / Weather / Quota / Notifications / Logs / Diagnostics). They
are now replaced by the real settings sub-screens; see **Task 15.2** below.

The Back region was originally a full-width top strip (Task 15.1) so it worked
regardless of the touch X orientation. It is now a small top-left header region
(`0,0,72,56`) so it matches the visible back arrow and cannot cover any other
control; see **Task 15.2** below.

## Task 15.1 — Home Navigation Fix

### Symptom (first hardware run)

| Tapped | Went to | Expected |
| --- | --- | --- |
| Weather card (top) | System screen | Weather screen |
| NAS card (middle) | NAS screen | NAS screen |
| CPU/RAM/Flash row (bottom) | Weather screen | System screen |

### Root cause

The hit regions were **not** wrong. Every Home region already matches the
generated layout in `screens/home/home_portrait.xml` exactly (verified region by
region), they do not overlap, and the destination `*_portrait_create()`
functions are correct. The wrong screens were caused by the **touch Y axis being
inverted on this panel**.

Evidence: with the previous fallback (no orientation), mapping the observed
physical taps through the regions shows

- physical top -> `mapped_y` in System (`274..382`)
- physical middle -> `mapped_y` in NAS (`192..266`)
- physical bottom -> `mapped_y` in Weather (`62..184`)

which is a pure vertical reflection, `mapped_y = 480 - 1 - raw_y`. The XPT2046
driver returns raw 12-bit samples without any orientation
(`CONFIG_XPT2046_CONVERT_ADC_TO_COORDS` disabled) and the board touch flags are
all off, so orientation is entirely the responsibility of
`xom_touch_process_coordinates()`.

### Fix

- `main/xom_touch.c`: the fallback calibration now sets `invert_y = true` (with
  a comment recording the evidence). `xom_touch_compute_calibration()` still
  derives orientation from measured corners, so running the wizard overwrites
  this default.
- `main/ui_navigation.c`: the Back region became a full-width top strip so Back
  is independent of the (unconfirmed) X orientation, and the release log now
  prints the raw sample, the mapped point, the matched region and the
  destination screen.
- `main/xom_touch.c` / `main/xom_touch.h`: added `xom_touch_get_last_raw()` for
  that log.

### Old vs new mapping

The region geometry is unchanged; only the coordinate transform changes.

| | Before | After |
| --- | --- | --- |
| Y transform | `mapped_y = raw_y` | `mapped_y = 479 - raw_y` |
| Weather card | System | **Weather** |
| NAS card | NAS | **NAS** |
| CPU/RAM/Flash row | Weather | **System** |
| Network card | (unchanged) | **Network** |
| Back | top-left corner | **full-width top strip -> Home** |

### Not changed (no evidence)

`invert_x` and `swap_xy` stay off. Every Home card is full width, so the first
hardware run could not distinguish the X orientation, and the reference board
definition (`TOUCH_MIRROR_X=true, MIRROR_Y=false`) disagrees with this unit on
Y, so it is not trusted for X either. Note that `invert_x=false, invert_y=true`
is exactly the reference orientation rotated 180 degrees, which is self
consistent if this unit's touch panel is mounted rotated relative to the
reference. Confirm X by tapping the Home header (left should be Settings, right
should be Notifications) and the top-left Back arrow; if they are mirrored, set
`invert_x = true` in `main/xom_touch.c`.


## Task 15.2 — Settings Navigation

Task 15.1 left the Settings screen routed to a demo set of unrelated screens.
Task 15.2 wires every Settings row to its correct destination and makes the
settings sub-screens (Wi-Fi scan, static IP, display timeout, weather/sync
interval, timezone, change PIN, restart/reset confirm, OTA) reachable, each with
a working Back path.

### Approach

The generated settings screens have no named child widgets: each row is an
`lv_obj` container with an `lv_label` and an `lv_image` but no `lv_obj_set_name`.
Registering widget callbacks would therefore require walking unnamed children,
and would risk double-firing with the existing indev callback. Navigation keeps
the single hit-region code path and the coordinates are taken from each screen's
`*_portrait.xml`, verified to not overlap.

### Files changed

- `main/ui_navigation.h`: `xom_screen_id_t` extended with 22 settings sub-screen
  IDs (Wi-Fi, Wi-Fi Scan, Wi-Fi Password, Static IP, Display, Display Timeout,
  Weather Config, Weather Interval, Data, API Config, NAS Config, Sync Config,
  Sync Interval, Date & Time, Timezone Select, Device, Security, Change PIN,
  Restart Confirm, Factory Reset, OTA, OTA Progress) before `XOM_SCREEN_COUNT`.
- `main/ui_navigation.c`:
  - Screen table entries for all new screens (`*_portrait_create`).
  - `xom_nav_region_t` gained `bool back` and `const char * label`. `back` pops
    the nav stack instead of pushing `target`; `label` only affects logging.
  - `XOM_NAV_STACK_MAX` raised from 8 to 16 (deepest settings chain is ~5).
  - `s_settings_regions` replaced with the real row targets.
  - New per-screen region tables for every settings sub-screen.
  - `xom_nav_regions()` switch updated with cases for Settings and every new
    screen; Device and OTA Progress intentionally fall through to `default`
    (no regions) and rely on the implicit header Back region.
  - Implicit Back region changed from the full-width strip to the header
    back-arrow area `0,0,72,56`; the release log now reports
    `NAV: <src> -> <item>, touch=(x,y), target=<dest>` (and `-> back` for Back).

### Settings row mapping

| Settings row | y band | Destination |
| --- | --- | --- |
| Wi-Fi | 89 | Wi-Fi Settings |
| Display | 143 | Display Settings |
| Weather | 197 | Weather Settings |
| Data / Services | 251 | Data Settings |
| Date & Time | 305 | Date & Time Settings |
| Device | 359 | Device Settings |
| Security | 413 | Security Settings |

### Sub-screen mapping

| Screen | Control (x,y,w,h) | Destination |
| --- | --- | --- |
| Wi-Fi | change network `12,190,296,48` | Wi-Fi Scan |
| Wi-Fi | static IP btn `228,275,70,29` | Static IP |
| Wi-Fi | scan btn `12,432,140,38` | Wi-Fi Scan |
| Wi-Fi Scan | network rows `12,{210,264,318,372},296,49` | Wi-Fi Password |
| Wi-Fi Scan | back `12,432,105,38` | Back |
| Wi-Fi Password | cancel `12,432,140,38` / connect `160,432,148,38` | Back |
| Static IP | cancel `12,435,140,35` / save `160,435,148,35` | Back |
| Display | timeout row `12,362,296,34` | Display Timeout |
| Display | save `12,438,296,32` | Back |
| Display Timeout | cancel `12,439,140,32` / save `160,439,148,32` | Back |
| Weather Config | interval row `12,345,296,34` | Weather Interval |
| Weather Config | save `12,438,296,32` | Back |
| Weather Interval | cancel `12,434,140,37` / save `160,434,148,37` | Back |
| Data | NAS `12,147,296,36` | NAS Config |
| Data | API `12,261,296,35` | API Config |
| Data | Sync `12,361,296,43` | Sync Config |
| API Config | save `160,434,148,36` | Back |
| NAS Config | save `160,434,148,36` | Back |
| Sync Config | interval row `12,190,296,37` | Sync Interval |
| Sync Config | save `12,440,296,30` | Back |
| Sync Interval | save `12,426,296,38` | Back |
| Date & Time | timezone row `12,256,296,37` | Timezone Select |
| Date & Time | save `12,440,296,30` | Back |
| Timezone Select | save `12,426,296,38` | Back |
| Security | change PIN `12,178,296,37` | Change PIN |
| Security | OTA `12,274,296,37` | OTA |
| Security | restart `22,346,274,34` | Restart Confirm |
| Security | reset `22,387,274,34` | Factory Reset |
| Security | save `12,437,296,34` | Back |
| Change PIN | cancel `12,439,140,32` / save `160,439,148,32` | Back |
| Restart Confirm | cancel `12,422,136,40` / confirm `156,422,152,40` | Back |
| Factory Reset | cancel `12,432,140,38` / confirm `160,432,148,38` | Back |
| OTA | back `12,438,140,33` | Back |
| OTA | check `160,438,148,33` | OTA Progress |
| Device / OTA Progress | — | implicit header Back only |

### Intentionally unmapped

These have no matching destination screen and are left with no navigation (the
implicit header Back still works on those screens):

- Sync Config rows "Thời gian chờ" (`ui_next 273,234`) and "Số lần thử lại"
  (`ui_next 273,349`).
- Wi-Fi Scan connected network 1 ("Đang dùng").
- Picker option buttons (display timeout, weather/sync interval, timezone
  options, auth method buttons).

### Mapping decision

The Data screen row "Chu kỳ đồng bộ" (Sync) routes to **Sync Settings**, and the
Sync Settings row "Chu kỳ đồng bộ" routes to **Sync Interval**. Without this the
two sync screens would be unreachable; the duplicated label is the only
available signal in the generated layout.

### Old vs new Settings mapping

| Settings row | Before (Task 15) | After (Task 15.2) |
| --- | --- | --- |
| Wi-Fi | network | **Wi-Fi Settings** |
| Display | system | **Display Settings** |
| Weather | weather | **Weather Settings** |
| Data / Services | quota | **Data Settings** |
| Date & Time | notifications | **Date & Time Settings** |
| Device | logs | **Device Settings** |
| Security | diagnostics | **Security Settings** |
| Back | full-width strip `0,0,320,56` | **header arrow `0,0,72,56`** |

## Build

ESP-IDF v5.5.1. Note: on this machine `export.sh` fails because the ESP-IDF
Python virtualenv is named for Python 3.12 while the default `python3` is now
3.14. Point IDF at the existing env explicitly:

```sh
source ~/.espressif/python_env/idf5.5_py3.12_env/bin/activate
export IDF_PATH=~/esp/esp-idf-v5.5.1
export IDF_PYTHON_ENV_PATH=~/.espressif/python_env/idf5.5_py3.12_env
python "$IDF_PATH/tools/idf.py" build
```

Result:

```text
xomcodingui_esp32_3248s035r.bin binary size 0x3083b0 bytes (~3.03 MB)
Smallest app partition is 0x380000 bytes (~3.67 MB), 13% free
Project build complete.
```

Both the default configuration and a build with
`XOM_TOUCH_CALIBRATION_WIZARD=1` compile clean.

## Flash

Only after explicit confirmation:

```sh
python "$IDF_PATH/tools/idf.py" -p <PORT> flash monitor
```

## Calibration Procedure

1. Set `XOM_TOUCH_CALIBRATION_WIZARD` to `1` in `main/xom_touch.h` and flash.
2. The wizard overlays Home and asks for four corners (top-left, top-right,
   bottom-left, bottom-right); tap and release on each marker.
3. Read the `CAL: { ... }` line from the serial log.
4. Paste those values as the default in `main/xom_touch.c` and set the wizard
   back to `0`.

While uncalibrated, the module maps the full 0..4095 range to the panel using
the fallback orientation (`invert_y = true` for this unit) and logs
`[UNCALIBRATED]` on every event. That fallback is approximate; the wizard
produces accurate min/max values.

## Verification Status

- **BUILD: PASS** (default config and wizard enabled). Last build after
  Task 15.2: `0x3083b0` bytes, 13% free, no warnings.
- **TOUCH / NAVIGATION: PARTIALLY VERIFIED ON HARDWARE.** The first real-device
  run confirmed the panel reports touches, the Serial log works, screens switch,
  and it exposed the inverted Y axis fixed in Task 15.1. The Task 15.1 and
  Task 15.2 builds have **not yet been flashed**, so the following remain to be
  confirmed on hardware:
  1. All four Home card groups route correctly: Weather -> weather,
     NAS -> nas, CPU/RAM/Flash -> system, Network -> network.
  2. Back (header arrow) returns to the previous screen (Settings -> Home,
     sub-screen -> parent).
  3. Each Settings row opens its correct screen (Task 15.2 table).
  4. Each settings sub-screen control routes as listed and Back never loops.
  5. At least 20 consecutive screen switches.
  6. Free heap is stable across those switches (the log prints `heap before
     switch` / `heap after switch`).
  7. Whether the X axis is mirrored (Home header Settings vs Notifications and
     the header Back arrow). If Back is mirrored, set `invert_x = true`.

  Until then, touch accuracy and full navigation are **not** claimed as PASS.

## Limitations / Next Steps

- Calibration is not persisted (no NVS by design); values must be baked into
  `xom_touch.c` after measuring.
- The fallback orientation fixes Y (`invert_y = true`) but X is unconfirmed; see
  Task 15.1. If X is mirrored, the header Back arrow and the Home header
  Settings/Notifications split will be swapped; set `invert_x = true` to fix.
- Navigation only keeps one screen alive and uses hard-coded coordinates; if a
  generated layout changes, the region tables must be updated.
- A few Settings controls have no destination screen yet (Sync Config wait/retry
  rows, connected Wi-Fi row, picker option buttons); see Task 15.2.
- Animated transitions are disabled (`LV_SCREEN_LOAD_ANIM_NONE`) to keep RAM
  and timing predictable on the PSRAM-less board.
