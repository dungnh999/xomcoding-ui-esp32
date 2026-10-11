
#include "weather_rain.h"

#define WEATHER_X       12
#define WEATHER_Y       62
#define WEATHER_WIDTH   296
#define WEATHER_HEIGHT  122

#define RAIN_COUNT      10

static lv_obj_t * rain_layer = NULL;
static lv_obj_t * rain_drops[RAIN_COUNT] = {NULL};

static const int16_t rain_x[RAIN_COUNT] = {
    20, 47, 75, 101, 128,
    155, 185, 213, 243, 275
};

static const uint16_t rain_duration[RAIN_COUNT] = {
    1050, 1170, 920, 1110, 1040,
    1240, 980, 1150, 1080, 1210
};

static void rain_set_y(void * var, int32_t value)
{
    lv_obj_set_y((lv_obj_t *)var, value);
}

void weather_rain_stop(void)
{
    if(rain_layer == NULL) {
        return;
    }

    for(int i = 0; i < RAIN_COUNT; i++) {
        if(rain_drops[i] != NULL) {
            lv_anim_delete(rain_drops[i], rain_set_y);
            rain_drops[i] = NULL;
        }
    }

    lv_obj_delete(rain_layer);
    rain_layer = NULL;
}

void weather_rain_start(lv_obj_t * screen)
{
    if(screen == NULL) {
        return;
    }

    weather_rain_stop();

    rain_layer = lv_obj_create(screen);

    lv_obj_set_pos(
        rain_layer,
        WEATHER_X,
        WEATHER_Y
    );

    lv_obj_set_size(
        rain_layer,
        WEATHER_WIDTH,
        WEATHER_HEIGHT
    );

    lv_obj_set_style_bg_opa(
        rain_layer,
        LV_OPA_TRANSP,
        0
    );

    lv_obj_set_style_border_width(
        rain_layer,
        0,
        0
    );

    lv_obj_set_style_pad_all(
        rain_layer,
        0,
        0
    );

    lv_obj_set_style_radius(
        rain_layer,
        12,
        0
    );

    lv_obj_set_style_clip_corner(
        rain_layer,
        true,
        0
    );

    lv_obj_remove_flag(
        rain_layer,
        LV_OBJ_FLAG_SCROLLABLE
    );

    lv_obj_remove_flag(
        rain_layer,
        LV_OBJ_FLAG_CLICKABLE
    );

    for(int i = 0; i < RAIN_COUNT; i++) {
        lv_obj_t * drop = lv_obj_create(rain_layer);
        rain_drops[i] = drop;

        lv_obj_set_size(drop, 1, 9);
        lv_obj_set_pos(drop, rain_x[i], -12);

        lv_obj_set_style_bg_color(
            drop,
            lv_color_hex(0x9edcff),
            0
        );

        lv_obj_set_style_bg_opa(
            drop,
            LV_OPA_60,
            0
        );

        lv_obj_set_style_border_width(drop, 0, 0);
        lv_obj_set_style_radius(drop, 1, 0);
        lv_obj_set_style_pad_all(drop, 0, 0);

        lv_obj_remove_flag(
            drop,
            LV_OBJ_FLAG_SCROLLABLE
        );

        lv_obj_remove_flag(
            drop,
            LV_OBJ_FLAG_CLICKABLE
        );

        lv_anim_t anim;
        lv_anim_init(&anim);

        lv_anim_set_var(&anim, drop);
        lv_anim_set_exec_cb(&anim, rain_set_y);

        lv_anim_set_values(
            &anim,
            -12,
            WEATHER_HEIGHT + 4
        );

        lv_anim_set_duration(
            &anim,
            rain_duration[i]
        );

        lv_anim_set_delay(
            &anim,
            (uint32_t)i * 105
        );

        lv_anim_set_repeat_count(
            &anim,
            LV_ANIM_REPEAT_INFINITE
        );

        lv_anim_start(&anim);
    }
}
