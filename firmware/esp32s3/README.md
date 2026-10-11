# Xom Coding ESP32-S3 firmware foundation

This directory is an ESP-IDF firmware wrapper for the LVGL Pro Editor output in
the repository root.

It intentionally does not contain board-specific LCD or touch GPIOs yet. The
current hardware port returns `ESP_ERR_NOT_SUPPORTED` until the exact ESP32-S3
board, display controller, touch controller, and pin map are known.

Initial bring-up flow after hardware is identified:

1. Install and export ESP-IDF.
2. From this directory, run `idf.py set-target esp32s3`.
3. Replace `main/hw_port_tbd.c` with a board-specific `hw_port_<board>.c`.
4. Run `idf.py build`.
5. Flash only after flash size, partitioning, and serial port are verified.
