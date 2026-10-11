# ESP32-S3 Hardware Setup - Xom Coding UI

Date: 2026-10-11

## Scope

Task 12 prepares an ESP-IDF firmware foundation for running the existing LVGL
demo UI on real ESP32-S3 hardware.

This task does not implement API clients, Wi-Fi networking, NAS, weather,
Codex quota backend, NVS, OTA, or application navigation logic.

## Current UI Status

Verified from the repository:

- XML screens: 76
- Generated screen C files: 76
- Generated screen H files: 76
- Font/image data C files: 279
- LVGL target used by generated UI: LVGL v9.5.0
- UI targets exposed by generated code:
  - `XOMCODINGUI_TARGET_PORTRAIT`
  - `XOMCODINGUI_TARGET_LANDSCAPE`
- Demo entry screens available:
  - `home_portrait_create()`
  - `home_landscape_create()`

## Hardware Discovery

### Verified From Source

The current repository does not contain a real ESP32-S3 hardware definition.

No confirmed information was found for:

- Board model
- LCD controller
- LCD bus type: SPI, RGB, QSPI, 8080, or other
- Physical panel resolution beyond UI design targets
- Touch controller
- LCD/touch GPIO mapping
- Backlight GPIO and polarity
- Flash size
- PSRAM size/type
- Partition table
- Vendor BSP

The strings `ESP32-S3`, `Flash`, and `PSRAM` found in XML are UI demo labels,
not hardware configuration evidence.

### Hardware Blocker

Board-specific LCD/touch driver work is blocked until the exact board or vendor
BSP is known.

Required information before implementing the hardware port:

- Exact ESP32-S3 board/module model
- Vendor product page or schematic
- LCD controller name
- LCD interface type
- LCD resolution and color format
- LCD GPIOs: reset, DC, CS, SCLK, MOSI, MISO if SPI; or RGB/QSPI/8080 signals
- Backlight GPIO, PWM support, and active polarity
- Touch controller name, if present
- Touch bus and GPIOs: I2C/SPI pins, INT, RST, address
- Flash size
- PSRAM size/type and whether it is enabled by default
- Desired boot orientation: 320x480 portrait or 480x320 landscape
- USB/JTAG or UART port used for flashing

No pin mapping was guessed.

## ESP-IDF Toolchain Check

Shell check result:

- `idf.py`: not found
- `xtensa-esp32s3-elf-gcc`: not found
- `ninja`: not found
- `cmake`: found at `/opt/homebrew/bin/cmake`
- ESP-IDF environment variables: not found

ESP-IDF build was not run because the ESP-IDF environment is not installed or
not exported in this shell.

Official references checked:

- [Espressif ESP-IDF ESP32-S3 Get Started documentation](https://documentation.espressif.com/esp-idf/en/v5.5.1/esp32s3/index.html):
  ESP-IDF requires the ESP32-S3 toolchain, build tools such as CMake and Ninja,
  and ESP-IDF itself.
- [LVGL 9.5 ESP32 IDF integration documentation](https://lvgl.io/docs/open/9.5/integration/chip_vendors/espressif/add_lvgl_to_esp32_idf_project):
  LVGL recommends using `esp_lvgl_port`; the documented dependency command is
  `idf.py add-dependency "espressif/esp_lvgl_port^2.3.0"`.

## Firmware Foundation Added

Created an isolated ESP-IDF project under:

`firmware/esp32s3/`

Files added:

- `firmware/esp32s3/CMakeLists.txt`
- `firmware/esp32s3/README.md`
- `firmware/esp32s3/main/CMakeLists.txt`
- `firmware/esp32s3/main/idf_component.yml`
- `firmware/esp32s3/main/app_main.c`
- `firmware/esp32s3/main/lvgl_firmware.c`
- `firmware/esp32s3/main/lvgl_firmware.h`
- `firmware/esp32s3/main/hw_port.h`
- `firmware/esp32s3/main/hw_port_tbd.c`
- `firmware/esp32s3/components/xomcodingui/CMakeLists.txt`

This keeps the LVGL Editor project root untouched. The existing generated UI
files remain the source of truth and are not edited manually.

## Firmware Architecture

The added foundation is split as follows:

- `app_main.c`
  - ESP-IDF entry point.
  - Calls `xom_lvgl_firmware_start()`.

- `lvgl_firmware.c`
  - Initializes LVGL.
  - Calls the board hardware port.
  - Selects the generated UI target based on hardware orientation.
  - Calls `xomcodingui_init(NULL)`.
  - Loads `home_portrait_create()` or `home_landscape_create()`.
  - Runs the LVGL timer loop.

- `hw_port.h`
  - Defines the board abstraction contract.
  - Requires the board implementation to initialize LCD, backlight, touch, and
    LVGL display/input callbacks.

- `hw_port_tbd.c`
  - Temporary placeholder.
  - Returns `ESP_ERR_NOT_SUPPORTED`.
  - Logs that board, LCD, touch, and GPIO mapping are not identified.

- `components/xomcodingui/CMakeLists.txt`
  - Wraps the LVGL Pro Editor generated UI as an ESP-IDF component.
  - Includes:
    - `xomcodingui.c`
    - `xomcodingui_gen.c`
    - all `screens/*/*_gen.c`
    - all `fonts/*_data.c`
    - all `images/*_data.c`
  - Does not modify generated C/H files.

## Dependencies Prepared

`firmware/esp32s3/main/idf_component.yml` declares:

- `lvgl/lvgl: "9.5.0"`
- `espressif/esp_lvgl_port: "^2.3.0"`

LVGL is pinned to 9.5.0 to match the LVGL Pro Editor generated code.

## LCD and Touch Driver Status

Not implemented yet.

Reason: no verified board model, LCD controller, touch controller, or pin map is
available in the repository.

The expected implementation point is:

- Replace or supplement `firmware/esp32s3/main/hw_port_tbd.c` with a
  board-specific file such as `hw_port_<board>.c`.
- Use the vendor BSP if available.
- Otherwise use ESP-IDF `esp_lcd` and `esp_lvgl_port` with confirmed GPIOs.

## Build Status

ESP-IDF build was not executed.

Blocked by:

- ESP-IDF environment missing from shell.
- `idf.py` not found.
- `ninja` not found.
- Board-specific hardware configuration missing.

No firmware image was flashed.

## Next Steps

After the board is identified:

1. Install or export ESP-IDF for ESP32-S3.
2. From `firmware/esp32s3/`, run:
   - `idf.py set-target esp32s3`
   - `idf.py reconfigure`
3. Add the vendor BSP or implement `hw_port_<board>.c`.
4. Configure flash size and PSRAM based on verified hardware.
5. Build with:
   - `idf.py build`
6. Review binary size, RAM usage, PSRAM allocation, and linked UI assets.
7. Flash only after serial port, flash size, and partitioning are confirmed.

## Current Task 12 Result

Completed:

- Hardware discovery from source.
- ESP-IDF toolchain check.
- Firmware foundation directory.
- LVGL generated UI wrapper component.
- Hardware abstraction contract.
- Safe placeholder hardware port.
- Documentation of missing hardware information and next steps.

Blocked:

- Board-specific LCD initialization.
- Touch initialization.
- Backlight control.
- Framebuffer/draw buffer sizing.
- ESP-IDF build.
- Flash/run on hardware.

Reason: exact board, LCD/touch controller, GPIO mapping, Flash, and PSRAM are
not yet verified.
