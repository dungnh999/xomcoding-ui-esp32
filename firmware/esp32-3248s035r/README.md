# Xom Coding firmware target: ESP32-3248S035R

This ESP-IDF project targets the Sunton/CYD ESP32-3248S035R board:

- ESP32-WROOM-32
- ST7796 SPI LCD, 320x480
- XPT2046 resistive touch over SPI
- 4 MB flash
- No PSRAM on the normal board revision

It uses the LVGL Pro Editor generated UI from the repository root. Generated
files are not modified by this firmware target.

Bring-up:

1. Export ESP-IDF in the shell.
2. Run `idf.py set-target esp32`.
3. Run `idf.py reconfigure`.
4. Run `idf.py build`.
5. Flash only after confirming the exact board revision and serial port.
