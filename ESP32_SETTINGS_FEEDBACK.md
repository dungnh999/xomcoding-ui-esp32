# ESP32 Settings Feedback — Task 18.3

## Root Causes

- Date & Time Save was not saving Date/Time settings. The callback called `xom_time_refresh_now()` and showed a demo toast, so Save was actually Sync.
- Timezone was not part of the NVS schema, so reboot persistence could not be verified.
- Weather Settings broke layout because Latitude/Longitude textareas were created directly inside a fixed 320x480 XML row that only had room for a coordinate label.
- Functional Save buttons were still inside navigation coordinate regions. Without treating `LV_OBJ_FLAG_USER_1` buttons as interactive, a Save tap could both run the feature callback and trigger navigation.

## Files Changed

- `firmware/esp32-3248s035r/main/xom_settings.c/.h`
- `firmware/esp32-3248s035r/main/xom_time.c/.h`
- `firmware/esp32-3248s035r/main/xom_time_ui.c`
- `firmware/esp32-3248s035r/main/xom_weather.c/.h`
- `firmware/esp32-3248s035r/main/xom_weather_ui.c`
- `firmware/esp32-3248s035r/main/xom_ui_feedback.c/.h`
- `firmware/esp32-3248s035r/main/ui_navigation.c`
- `firmware/esp32-3248s035r/main/CMakeLists.txt`
- `ESP32_TIME_WEATHER.md`

## Save, Cancel, Apply Logic

- Save validates inputs, hides keyboard, disables the Save button, writes NVS, applies service settings, then shows success or the exact error.
- Sync Now is separate from Save and only requests SNTP sync.
- Weather Advanced Location Apply validates latitude and longitude, updates the draft values on-screen, and does not write NVS until the main Weather Save is pressed.
- Cancel/back does not write NVS and closes keyboard/transient UI.
- Weather Interval Save persists `weather_refresh_sec` and reprograms the timer before success is shown.

## NVS Schema

- Namespace: `xomcfg`
- Schema: v3
- Existing Wi-Fi keys are unchanged.
- Weather keys: `wcity`, `wlat`, `wlon`, `tunit`, `wref`
- Time keys: `tz`, `ntp`, `ntpen`, `time24`
- Defaults: `Asia/Ho_Chi_Minh`, `pool.ntp.org`, NTP enabled, 24h format.

## Layout

- Weather Settings remains a 320x480 fixed portrait layout.
- Coordinate row now stays as text: `lat, lon`.
- Advanced Location modal: x=18, y=86, w=284, h=224.
- Modal inputs: Latitude and Longitude, 256x32 each.
- Save button remains visible at bottom; keyboard hides on Save/Cancel/Apply.

## Build

- Build passed with ESP-IDF 5.5.1.
- Binary: `0x2e4170`
- Partition: `0x3f0000`
- Free: `0x10be90` (27%)
- IRAM: 108,351 used / 22,721 free
- DRAM: 105,348 used / 75,388 free

## Hardware Test Checklist

- Wi-Fi scan/connect still works and credentials persist.
- Date & Time Save persists timezone/NTP settings after reboot.
- Sync Now shows Syncing and Home updates after SNTP success.
- Unsynced Home clock shows `--:--`, not 1970/mock time.
- Weather Settings reopens with saved city, unit, and coordinates.
- Advanced Location modal validates -90..90 and -180..180 and accepts `0` as valid.
- Weather Save applies new location/unit and refreshes Open-Meteo data.
- Weather Interval Save updates the timer and persists after reboot.
- Save/Cancel/back do not double-trigger, do not leave keyboard/spinner behind, and do not use demo toast for real actions.

## Task 18.4 Toast / Notification Font Fix

### Root Cause

- Runtime labels created with `lv_label_create()` do not inherit the generated XML font styles unless a font is explicitly applied.
- `xom_demo_toast()` and the Task 18.3 save feedback label could therefore fall back to LVGL's default Montserrat font, which is not the project UI font and may not cover Vietnamese glyphs consistently.

### Changes

- Added `xom_ui_style.c/.h` as a shared runtime style helper.
- Runtime notification text now uses existing Be Vietnam Pro generated font pointers from `xomcodingui_gen.h`:
  - Body/toast/save feedback: `be_medium_12`
  - Dialog/modal titles: `be_semibold_14`
  - Buttons: `be_medium_12`
  - Small secondary labels: `be_medium_11`
- Updated runtime-created UI in:
  - `xom_widgets.c`: global toast now uses Be Vietnam Pro, themed card/background/border, width limit, and no touch blocking.
  - `xom_ui_feedback.c`: Save success/error/loading feedback now uses Be Vietnam Pro and auto-hides success/error after 2200 ms.
  - `xom_wifi_ui.c`: busy overlay and runtime scan-list labels/buttons use the shared Be Vietnam/theme helpers.
  - `xom_time_ui.c`: runtime Sync Now button label uses Be Vietnam Pro.
  - `xom_weather_ui.c`: Advanced Location modal title/labels/buttons use Be Vietnam Pro.

### Build

- Build passed with ESP-IDF 5.5.1.
- Binary: `0x2e40f0`
- Partition: `0x3f0000`
- Free: `0x10bf10` (27%)
- IRAM: 108,351 used / 22,721 free
- DRAM: 105,356 used / 75,380 free

### Device Checklist Additions

- Save success shows `Đã lưu thành công` with Be Vietnam Pro, no tofu boxes.
- Save failure shows the error message with Be Vietnam Pro, no false success.
- Wi-Fi toasts and busy overlay show Vietnamese text with correct font.
- Advanced Location validation messages show Vietnamese text with correct font.
- Success/error feedback auto-hides and does not leave an invisible object blocking touch.
