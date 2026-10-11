
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
#include "screen_gallery_gen.h"

#include "src/libs/lodepng/lodepng.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int save_screen_png(lv_obj_t * screen, const char * path)
{
    char fs_path[1024];
    const char * png_path = path;
    if(strchr(path, ':') == NULL) {
        snprintf(fs_path, sizeof(fs_path), "A:%s", path);
        png_path = fs_path;
    }

    lv_draw_buf_t * snapshot = lv_snapshot_take(screen, LV_COLOR_FORMAT_ARGB8888);
    if(snapshot == NULL) {
        fprintf(stderr, "Failed to take snapshot: %s\n", path);
        return 1;
    }

    uint32_t width = snapshot->header.w;
    uint32_t height = snapshot->header.h;
    uint32_t stride = snapshot->header.stride;
    uint8_t * rgba = malloc((size_t)width * height * 4);
    if(rgba == NULL) {
        fprintf(stderr, "Out of memory while saving screenshot: %s\n", path);
        lv_draw_buf_destroy(snapshot);
        return 1;
    }

    for(uint32_t y = 0; y < height; y++) {
        const lv_color32_t * src = (const lv_color32_t *)(snapshot->data + (size_t)y * stride);
        uint8_t * dst = rgba + (size_t)y * width * 4;
        for(uint32_t x = 0; x < width; x++) {
            dst[x * 4 + 0] = src[x].red;
            dst[x * 4 + 1] = src[x].green;
            dst[x * 4 + 2] = src[x].blue;
            dst[x * 4 + 3] = src[x].alpha;
        }
    }

    unsigned error = lodepng_encode32_file(png_path, rgba, width, height);
    free(rgba);
    lv_draw_buf_destroy(snapshot);

    if(error) {
        fprintf(stderr, "Failed to encode PNG %s: %u %s\n", path, error, lodepng_error_text(error));
        return 1;
    }

    return 0;
}

static void print_usage(const char * program)
{
    printf("Usage: %s [--screen NAME] [--list] [--exit-after-ms N] [--screenshot PATH]\n", program);
    printf("\nGenerated screens available in this build:\n");
    for(size_t i = 0; i < sim_gallery_screen_count; i++) {
        printf("  %s (%ldx%ld)\n",
               sim_gallery_screens[i].name,
               (long)sim_gallery_screens[i].width,
               (long)sim_gallery_screens[i].height);
    }
}

int main(int argc, char ** argv)
{
    const sim_gallery_screen_t * selected = sim_gallery_find_screen("home_portrait");
    uint32_t exit_after_ms = 0;
    const char * screenshot_path = NULL;

    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "--list") == 0) {
            print_usage(argv[0]);
            return 0;
        }

        if(strcmp(argv[i], "--screen") == 0 && i + 1 < argc) {
            selected = sim_gallery_find_screen(argv[++i]);
            if(selected == NULL) {
                fprintf(stderr, "Unknown screen: %s\n\n", argv[i]);
                print_usage(argv[0]);
                return 2;
            }
            continue;
        }

        if(strcmp(argv[i], "--exit-after-ms") == 0 && i + 1 < argc) {
            exit_after_ms = (uint32_t)strtoul(argv[++i], NULL, 10);
            continue;
        }

        if(strcmp(argv[i], "--screenshot") == 0 && i + 1 < argc) {
            screenshot_path = argv[++i];
            continue;
        }

        fprintf(stderr, "Unknown argument: %s\n\n", argv[i]);
        print_usage(argv[0]);
        return 2;
    }

    if(selected == NULL) {
        fprintf(stderr, "No generated screens are available in this build.\n");
        return 2;
    }

    lv_init();

    /* Lock LVGL during initialization */
    lv_lock();

    /* Initialize simulator display */
    hal_init(selected->width, selected->height);

    /* Initialize UI assets and styles */
    UI_INIT("A:");
    xomcodingui_set_target(selected->target);

    lv_obj_t * screen = selected->create();
    lv_screen_load(screen);

    lv_unlock();

    if(screenshot_path != NULL) {
        for(uint8_t i = 0; i < 5; i++) {
            lv_timer_handler();
            lv_sleep_ms(LV_DEF_REFR_PERIOD);
        }

        lv_lock();
        int screenshot_result = save_screen_png(screen, screenshot_path);
        lv_unlock();
        return screenshot_result;
    }

    /* LVGL event loop */
    while(1) {
        uint32_t idle_ms = lv_timer_handler();

        if(idle_ms == LV_NO_TIMER_READY) {
            idle_ms = LV_DEF_REFR_PERIOD;
        }

        lv_sleep_ms(idle_ms);

        if(exit_after_ms > 0 && lv_tick_elaps(0) >= exit_after_ms) {
            break;
        }
    }

    return 0;
}

#endif /* LVGL_PRO_SIMULATOR_BUILD */
