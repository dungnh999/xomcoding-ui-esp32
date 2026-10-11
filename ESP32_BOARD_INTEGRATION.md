# ESP32-3248S035R Board Integration

Date: 2026-10-11

## Scope

Task 13 prepares a dedicated ESP-IDF firmware target for the Sunton/CYD
ESP32-3248S035R board and the existing LVGL Pro Editor generated UI.

This task does not implement API clients, Wi-Fi networking, NAS, weather,
quota backend, NVS, OTA, or real application navigation.

## Board Identification

Target board: ESP32-3248S035R, Sunton/CYD 3.5 inch resistive-touch variant.

Verified from public board references:

- ESP3D hardware reference lists ESP32-3248S035R/C as ESP32 based, 3.5-inch
  480x320 ST7796 SPI display, with ESP32-3248S035R using XPT2046 SPI resistive
  touch.
  Source: [ESP3D 3.5' ESP32-3248S035R/C](https://esp3d.io/esp3d-tft/version_1x/hardware/esp32/sunton-35-3248/)
- Sunton PlatformIO board definition identifies `ESP32-3248S035R` as
  ESP32-WROOM-32, 4 MB flash, no PSRAM, 320x480, ST7796 SPI display, XPT2046
  SPI touch.
  Source: [rzeldent platformio-espressif32-sunton](https://github.com/rzeldent/platformio-espressif32-sunton)
- The raw board definition provides concrete GPIOs and display/touch settings.
  Source: [esp32-3248S035R.json](https://raw.githubusercontent.com/rzeldent/platformio-espressif32-sunton/main/esp32-3248S035R.json)
- openHASP has a matching Sunton ESP32-WROOM setup with ST7796, TFT CS 15,
  DC 2, backlight 27, reset -1, and XPT2046 touch CS 33.
  Source: [openHASP esp32-3248s035.ini](https://raw.githubusercontent.com/HASwitchPlate/openHASP/master/user_setups/esp32/esp32-3248s035.ini)

## Verified Hardware Summary

- MCU: ESP32-WROOM-32 / ESP32 classic
- ESP-IDF target: `esp32`
- Display: ST7796 over SPI
- Resolution: 320x480 portrait native for current UI
- Touch: XPT2046 resistive over SPI
- Flash: 4 MB
- PSRAM: not present on the normal board revision
- USB: micro USB, CH340C according to ESP3D reference

## Pin Mapping Used

The new firmware target uses the pin mapping from the Sunton board definition
and ESP3D reference:

| Function | GPIO | Notes |
| --- | ---: | --- |
| LCD SCLK / Touch CLK | 14 | Shared SPI clock |
| LCD MOSI / Touch DIN | 13 | Shared SPI MOSI |
| LCD MISO / Touch OUT | 12 | Shared SPI MISO |
| LCD CS | 15 | ST7796 chip select |
| LCD DC / RS | 2 | ST7796 data/command |
| LCD reset | NC | Board references use reset `-1` / `GPIO_NUM_NC`; reset is tied to board reset |
| LCD backlight | 27 | Active high |
| Touch CS | 33 | XPT2046 chip select |
| Touch IRQ | 36 | ESP3D lists RTP_IRQ on GPIO36; Sunton board definition uses INT 36 |
| Touch reset | NC | XPT2046 reset not used |
| SD CS | 5 | Not used in this task |

Note: some community issue reports mention GPIO32 for touch IRQ. The two
stronger board references used here identify GPIO36 for the resistive touch IRQ,
while GPIO32 is associated with capacitive touch SCL on the ESP3D pin table.
This should still be checked against the physical PCB revision before flashing.

## Firmware Target Added

Created:

`firmware/esp32-3248s035r/`

Files:

- `firmware/esp32-3248s035r/CMakeLists.txt`
- `firmware/esp32-3248s035r/README.md`
- `firmware/esp32-3248s035r/main/CMakeLists.txt`
- `firmware/esp32-3248s035r/main/idf_component.yml`
- `firmware/esp32-3248s035r/main/app_main.c`
- `firmware/esp32-3248s035r/main/board_esp32_3248s035r.c`
- `firmware/esp32-3248s035r/main/board_esp32_3248s035r.h`
- `firmware/esp32-3248s035r/main/xom_firmware.c`
- `firmware/esp32-3248s035r/main/xom_firmware.h`
- `firmware/esp32-3248s035r/components/xomcodingui/CMakeLists.txt`

The previous ESP32-S3 firmware foundation remains intact at:

`firmware/esp32s3/`

## Components Prepared

`firmware/esp32-3248s035r/main/idf_component.yml` declares:

- `lvgl/lvgl: "9.5.0"`
- `espressif/esp_lvgl_port: "^2.3.0"`
- `espressif/esp_lcd_st7796: "^1.5.0"`
- `atanisoft/esp_lcd_touch_xpt2046: "^1.0.6"`

The generated UI is wrapped as an ESP-IDF component from repository-root files:

- `xomcodingui.c`
- `xomcodingui_gen.c`
- all `screens/*/*_gen.c`
- all `fonts/*_data.c`
- all `images/*_data.c`

Generated files are not edited by hand.

## LCD Integration

Implemented in:

`firmware/esp32-3248s035r/main/board_esp32_3248s035r.c`

Prepared behavior:

- Initializes SPI2 host.
- Creates ST7796 SPI panel IO.
- Creates ST7796 panel.
- Applies native portrait mapping:
  - `swap_xy = false`
  - `mirror_x = true`
  - `mirror_y = false`
- Registers display with `esp_lvgl_port`.
- Uses DMA-capable SRAM LVGL draw buffers.
- Uses 40 lines per draw buffer:
  - `320 * 40` pixels
  - about 25 KB per RGB565 buffer
  - double buffer about 50 KB DMA SRAM
- Keeps PSRAM disabled for the display buffers.
- Turns on backlight GPIO27 only after panel and LVGL display registration.

## Touch Integration

Implemented in:

`firmware/esp32-3248s035r/main/board_esp32_3248s035r.c`

Prepared behavior:

- Creates XPT2046 SPI panel IO on the same SPI2 bus.
- Uses touch CS GPIO33.
- Uses touch IRQ GPIO36.
- Sets touch coordinate transform to match portrait display:
  - `swap_xy = false`
  - `mirror_x = true`
  - `mirror_y = false`
- Registers the touch handle with `esp_lvgl_port`.

Touch calibration has not been physically verified. Resistive touch may require
adjusting mirror/swap settings or min/max calibration after first hardware run.

## LVGL and UI Startup

Implemented in:

`firmware/esp32-3248s035r/main/xom_firmware.c`

Startup flow:

1. Initialize board display/touch through `xom_board_display_start()`.
2. Lock LVGL through `lvgl_port_lock()`.
3. Select `XOMCODINGUI_TARGET_PORTRAIT`.
4. Call `xomcodingui_init(NULL)`.
5. Create only `home_portrait_create()`.
6. Load Home Portrait with `lv_screen_load()`.
7. Unlock LVGL.

Only the Home Portrait demo screen is created initially to reduce RAM pressure.
Landscape can be tested later by switching the target and loading
`home_landscape_create()` after portrait bring-up is stable.

## Memory and Performance Notes

The board normally has no PSRAM and only 4 MB flash, so the current generated UI
set may be heavy for this target.

The firmware currently links all generated screens, fonts, and images so the
first ESP-IDF build can reveal the real flash/RAM cost. If it exceeds limits,
recommended next optimizations are:

1. Compile only the screen set needed for a device demo.
2. Reduce unused image assets.
3. Reduce font sizes/weights only after measuring flash usage.
4. Keep draw buffers in DMA-capable SRAM and tune line count.
5. Avoid creating more than one full screen at a time.

No font or asset was removed in this task.

## ESP-IDF Toolchain Status

Shell check result:

- `idf.py`: not found
- `xtensa-esp32-elf-gcc`: not found
- `ninja`: not found
- `cmake`: found at `/opt/homebrew/bin/cmake`

Because ESP-IDF is not available in this shell, no firmware build was executed.

## Build Status

Not built.

Blocked by missing ESP-IDF toolchain in the current environment.

No generated UI files were modified. No firmware was flashed.

## Bring-Up Commands

After installing/exporting ESP-IDF:

```sh
cd /Users/dungndev/Developer/xomcodingui/firmware/esp32-3248s035r
idf.py set-target esp32
idf.py reconfigure
idf.py build
```

Flash only after confirming board revision, serial port, and partition/flash
settings:

```sh
idf.py -p /dev/tty.usbserial-XXXX flash monitor
```

## Hardware Checks Before Flashing

Before flashing a real board:

- Confirm silkscreen/model is ESP32-3248S035R, not ESP32-3248S035C.
- Confirm touch controller is XPT2046, not GT911.
- Confirm LCD is ST7796 over SPI.
- Confirm board has 4 MB flash.
- Confirm PSRAM is absent unless the board was modified.
- Confirm GPIO27 controls backlight.
- Confirm touch IRQ is GPIO36 for the physical revision.
- Confirm USB serial device path.

## Current Task 13 Result

Completed:

- Created a separate ESP32 classic firmware target.
- Kept the ESP32-S3 target untouched.
- Added ST7796 SPI LCD initialization path.
- Added XPT2046 SPI touch initialization path.
- Added LVGL 9.5 / `esp_lvgl_port` startup.
- Added generated UI wrapper component.
- Configured startup to load Home Portrait only.
- Documented pin mapping and source evidence.

Blocked:

- ESP-IDF configure/build.
- Flash/RAM usage measurement.
- Physical display validation.
- Touch calibration.
- Landscape hardware validation.

Reason: ESP-IDF toolchain is not installed or not exported in this shell.
