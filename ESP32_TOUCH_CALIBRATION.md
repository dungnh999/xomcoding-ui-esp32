# ESP32 Touch Calibration (XPT2046) — ESP-IDF + LVGL 9.5.0

Date: 2026-10-11

## Scope

This document describes the touch pipeline for the ESP32-3248S035R board and the current calibration state for the resistive XPT2046 panel. It covers:

- XPT2046 raw-ADC configuration (no coordinates conversion by driver).
- The software orientation/calibration pipeline in `xom_touch.c`.
- Default calibration fallback values in use on this build.
- Procedures to run an on-screen 4-corner wizard (optional) and to capture definitive CAL values.
- Safety notes (calibration is not persisted yet, password never logged).

## Hardware & Driver Configuration

- Touch controller: XPT2046 (resistive, 12-bit).
- LCD: ST7796, resolution 320 (H) × 480 (V) (portrait).
- Driver config: `CONFIG_XPT2046_CONVERT_ADC_TO_COORDS` is **disabled**. This means `esp_lcd_touch_get_data()` returns the raw 12-bit samples `raw_x`, `raw_y` in the range [0, 4095].
- SPI/I²C: handled via the board's `board_esp32_3248s035r.c` touch IO (SPI). The touch `process_coordinates` callback is registered as `xom_touch_process_coordinates()`.

## Orientation & Calibration Pipeline

The calibration is applied in the process callback (`xom_touch_process_coordinates` in `xom_touch.c`):

1. Read raw samples from the driver (per-point). Track last raw and observed min/max ranges for diagnostics.
2. If `calibrated` is true, apply the affine/orientation mapping:
   - Optional `swap_xy`: swaps the two raw axes when the panel's physical axes are rotated relative to the screen.
   - Normalize each axis from `[raw_min, raw_max]` to normalized position across screen dimension, then apply `invert_x`, `invert_y` to flip direction.
   - Clamp to [0, size-1].
3. If not calibrated, the fallback mapping below is used. The fallback includes the measured orientation corrections (invert flags) derived from earlier hardware testing.

The module exports:
- `const xom_touch_calibration_t * xom_touch_get_calibration(void)`
- `void xom_touch_set_calibration(const xom_touch_calibration_t * calibration)`
- `bool xom_touch_compute_calibration(const uint16_t corners[4][2], xom_touch_calibration_t * out)` — compute from 4 corner samples (TL, TR, BL, BR)
- `bool xom_touch_get_last_raw(uint16_t * raw_x, uint16_t * raw_y)`

## Current Default Calibration (Fallback)

The current fallback in `xom_touch.c` (build-time defaults) is:

```c
.raw_min_x = 0,
.raw_max_x = XOM_TOUCH_RAW_LIMIT,  /* 4095 */
.raw_min_y = 0,
.raw_max_y = XOM_TOUCH_RAW_LIMIT,
.swap_xy   = false,
.invert_x  = true,  /* horizontal reflection observed */
.invert_y  = true,  /* vertical reflection observed */
.calibrated = false
```

These `invert_x/invert_y=true` reflect the hardware findings from previous tasks:
- Task 15.1: tapping top visual areas landed in bottom card regions → Y axis inverted relative to screen (`invert_y = true`).
- Task 16.1: tapping visual top-left did nothing, tapping visual top-right acted as Back → X axis inverted (`invert_x = true`).

Until a proper 4-corner calibration is run and the values are recorded, the system uses this fallback (which fixes orientation; accuracy may still vary slightly across the panel).

## On-Screen Calibration Wizard (Optional)

`xom_touch.h` defines `XOM_TOUCH_CALIBRATION_WIZARD` (default `0`). To enable an on-screen 4-corner calibration at boot:

1. Edit `firmware/esp32-3248s035r/main/xom_touch.h` and set:
   ```c
   #define XOM_TOUCH_CALIBRATION_WIZARD 1
   ```
2. Rebuild and flash. On boot the firmware will display a full-screen overlay asking to tap: TL ("TREN - TRAI"), TR ("TREN - PHAI"), BL ("DUOI - TRAI"), BR ("DUOI - PHAI") in order (4 points). After each tap the marker updates; after all 4, it computes calibration and logs the resulting `CAL` struct on Serial.
3. Copy that `CAL` block into `xom_touch.c` as the new default (replace the fallback) if you want the calibration to persist across reboots without re-running the wizard. The current firmware does not write calibration to NVS (out of scope for Task 17.2). Do **not** log or store passwords when capturing calibration logs.

To disable the wizard after capturing values, set `XOM_TOUCH_CALIBRATION_WIZARD` back to `0` and rebuild.

## Verification Checklist

Per Task 17.2 requirements:
1. Chạy calibration (optional wizard) và lưu CAL nếu cần.
2. Bấm chính xác các phím keyboard (verify hit registration).
3. Bấm Save và Cancel (verify CLICKED once).
4. Kiểm tra `TOUCH` logs: see `[UNCALIBRATED]` prefix in fallback mode; after computed calibration that prefix disappears and mapped coordinates track visual taps more accurately.
5. Verify event targets (keyboard/buttonmatrix) are not intercepted by navigation — navigation is screen-level CLICKED and ignores interactive widgets; buttons have `LV_OBJ_FLAG_USER_1` and receive real handlers.

## Notes & Limitations

- Calibration values are **not persisted to NVS** in this build. The fallback defaults (with invert flags) are compiled in. If a device's panel differs significantly, capture CAL via wizard and hardcode, or extend settings to persist calibration (separately from Wi-Fi, as requested).
- Password contents are **never logged** by touch or Wi-Fi code. Only lengths (non-sensitive) may appear in Wi-Fi connect logs.
- The indev mode was set to `LV_INDEV_MODE_TIMER` in Task 16 to avoid latched presses from the XPT2046 (no interrupt-driven wake configured). That remains in effect.

## Task 18.5 Persistent Calibration Update

- Code PASS: Touch calibration now loads from separate NVS namespace `xomtouch`, not the Wi-Fi/settings namespace `xomcfg`.
- Code PASS: Missing/invalid calibration starts an on-screen wizard automatically instead of continuing silently as `[UNCALIBRATED]`.
- Code PASS: Wizard captures 5 raw points: top-left, top-right, bottom-left, bottom-right, and center.
- Code PASS: The first 4 points compute orientation/min/max. The center point validates mapped error against the screen center before saving.
- Code PASS: Successful calibration is saved to NVS keys `ver`, `minx`, `maxx`, `miny`, `maxy`, `flags` and is restored on reboot.
- Code PASS: `xom_touch_start_calibration()` is available as a rerun hook for future UI/menu integration.
- Build PASS: app binary `0x2e52d0`, partition `0x3f0000`, free `0x10ad30` (26%).
- Hardware PASS: pending. Must flash and run wizard once; reboot should log `touch calibration restored from NVS` and no `[UNCALIBRATED]` on touch events.
