
/**
 * @file main.c
 *
 * XOM CODING Dashboard
 * LVGL 9.5 Simulator
 */

#ifdef LVGL_PRO_SIMULATOR_BUILD

#include "lvgl.h"
#include "hal.h"
#include UI_HEADER

#include "../screens/home/home_portrait_gen.h"
#include "../weather/weather_rain.h"

int main(void)
{
    lv_init();

    /* Lock LVGL during initialization */
    lv_lock();

    /* Initialize simulator display */
    hal_init(UI_WIDTH, UI_HEIGHT);

    /* Initialize UI assets and styles */
    UI_INIT("A:");

    /* Create Home Portrait screen */
    lv_obj_t * home = home_portrait_create();

    /* Display Home */
    lv_screen_load(home);

    /* Start weather rain animation */
    weather_rain_start(home);

    lv_unlock();

    /* LVGL event loop */
    while(1) {
        uint32_t idle_ms = lv_timer_handler();

        if(idle_ms == LV_NO_TIMER_READY) {
            idle_ms = LV_DEF_REFR_PERIOD;
        }

        lv_sleep_ms(idle_ms);
    }

    return 0;
}

#endif /* LVGL_PRO_SIMULATOR_BUILD */
