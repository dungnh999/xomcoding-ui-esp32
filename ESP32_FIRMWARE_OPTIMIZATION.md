# ESP32 Firmware Optimization

## Scope

Task 18.2 measured the ESP32 firmware footprint after Wi-Fi/NVS, NTP time, and HTTPS weather were enabled. The optimization keeps all 76 generated screens and does not change the partition table, Wi-Fi/NVS, NTP, Weather, TLS verification, or generated screen sources.

## Baseline

- Firmware: `firmware/esp32-3248s035r`
- Factory app partition: `0x3f0000`
- Baseline app binary: `0x3d7960`
- Baseline free app space: `0x186a0` bytes, about 2%
- Main contributor: `libxomcodingui.a`, dominated by generated UI asset `.rodata`

## Asset Audit

- Screens: 76 generated `*_gen.c` files kept.
- Weather/home screens reference `weather_bg_cloudy` only.
- The following large global images were registered by generated global code but were not referenced by XML screens or firmware UI code:
  - `boot_bg`
  - `weather_bg_fog`
  - `weather_bg_night_clear`
  - `weather_bg_rain`
  - `weather_bg_storm`
  - `weather_bg_sunny`
- Generated `xomcodingui_gen.c` registers all global images, so simply removing the source files would create unresolved symbols. The firmware component now excludes only those heavy image data files and provides tiny compatible placeholder descriptors for their global symbols.

## Change

- Updated `firmware/esp32-3248s035r/components/xomcodingui/CMakeLists.txt` to remove the six unused heavy image data files from the ESP32 build.
- Added `firmware/esp32-3248s035r/components/xomcodingui/stub_unused_assets.c` with 1x1 RGB565A8 placeholder `lv_image_dsc_t` symbols for the excluded globals.
- Kept `weather_bg_cloudy_data.c`, all generated screens, and all referenced assets.

## Result

- Optimized app binary: `0x2e2d70`
- Free app space: `0x10d290` bytes, about 27%
- Binary reduction: `0xf4bf0` bytes, about 971 KiB
- `idf.py size` total image size: `3,026,173` bytes
- Flash `.rodata`: `1,721,504` bytes
- IRAM: `108,351` bytes used, `22,721` bytes free
- DRAM: `105,204` bytes used, `75,532` bytes free
- `libxomcodingui.a`: `1,624,580` bytes total, with `1,466,952` bytes Flash `.rodata`

## Verification

Build command used:

```sh
IDF_PYTHON_ENV_PATH=/Users/dungndev/.espressif/python_env/idf5.5_py3.12_env \
/Users/dungndev/.espressif/python_env/idf5.5_py3.12_env/bin/python \
/Users/dungndev/esp/esp-idf-v5.5.1/tools/idf.py build
```

Build passed. `check_sizes.py` reports:

```text
xomcodingui_esp32_3248s035r.bin binary size 0x2e2d70 bytes. Smallest app partition is 0x3f0000 bytes. 0x10d290 bytes (27%) free.
```

Size commands run after the build:

```sh
idf.py size
idf.py size-components
idf.py size-files
```

## Remaining Constraints

- Runtime heap measurements still require hardware.
- If future screens start referencing one of the excluded global images, remove that image from the CMake exclusion list so the real generated asset is linked again.
