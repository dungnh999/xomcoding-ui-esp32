#include "lvgl.h"

static const uint8_t placeholder_image_data[] = {0x00, 0x00, 0x00, 0x00};

#define PLACEHOLDER_IMAGE(name)                 \
    const lv_image_dsc_t name = {               \
        .header = {                             \
            .magic = LV_IMAGE_HEADER_MAGIC,     \
            .cf = LV_COLOR_FORMAT_RGB565A8,     \
            .flags = 0,                         \
            .w = 1,                             \
            .h = 1,                             \
            .stride = 2,                        \
            .reserved_2 = 0,                    \
        },                                      \
        .data_size = sizeof(placeholder_image_data), \
        .data = placeholder_image_data,         \
        .reserved = NULL,                       \
    }

PLACEHOLDER_IMAGE(boot_bg_data);
PLACEHOLDER_IMAGE(weather_bg_fog_data);
PLACEHOLDER_IMAGE(weather_bg_night_clear_data);
PLACEHOLDER_IMAGE(weather_bg_rain_data);
PLACEHOLDER_IMAGE(weather_bg_storm_data);
PLACEHOLDER_IMAGE(weather_bg_sunny_data);
