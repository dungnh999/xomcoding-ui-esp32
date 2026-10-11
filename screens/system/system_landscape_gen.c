/**
 * @file system_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "system_landscape_gen.h"
#include "../../xomcodingui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * system_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "system_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 3);
        lv_obj_set_width(lv_label_0, 150);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 172);
        lv_obj_set_y(lv_label_1, 13);
        lv_obj_set_width(lv_label_1, 150);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết hệ thống");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 402);
        lv_obj_set_y(lv_obj_1, 19);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 415);
        lv_obj_set_y(lv_label_2, 12);
        lv_obj_set_width(lv_label_2, 53);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Online");
        lv_obj_set_style_text_font(lv_label_2, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 10);
        lv_obj_set_y(lv_obj_2, 41);
        lv_obj_set_width(lv_obj_2, 460);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x273345), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 10);
        lv_obj_set_y(lv_obj_3, 50);
        lv_obj_set_width(lv_obj_3, 460);
        lv_obj_set_height(lv_obj_3, 65);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 23);
        lv_obj_set_y(lv_image_0, 69);
        lv_obj_set_width(lv_image_0, 24);
        lv_obj_set_height(lv_image_0, 24);
        lv_image_set_src(lv_image_0, home_icon_cpu_24);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 54);
        lv_obj_set_y(lv_label_3, 59);
        lv_obj_set_width(lv_label_3, 230);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 54);
        lv_obj_set_y(lv_label_4, 82);
        lv_obj_set_width(lv_label_4, 230);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Dual-core · Xtensa LX7");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 300);
        lv_obj_set_y(lv_obj_4, 61);
        lv_obj_set_width(lv_obj_4, 1);
        lv_obj_set_height(lv_obj_4, 42);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 314);
        lv_obj_set_y(lv_label_5, 62);
        lv_obj_set_width(lv_label_5, 140);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "2 nhân CPU");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 314);
        lv_obj_set_y(lv_label_6, 84);
        lv_obj_set_width(lv_label_6, 140);
        lv_obj_set_height(lv_label_6, 21);
        lv_label_set_text(lv_label_6, "240 MHz");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 10);
        lv_obj_set_y(lv_obj_5, 123);
        lv_obj_set_width(lv_obj_5, 94);
        lv_obj_set_height(lv_obj_5, 112);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 22);
        lv_obj_set_y(lv_image_1, 132);
        lv_obj_set_width(lv_image_1, 16);
        lv_obj_set_height(lv_image_1, 16);
        lv_image_set_src(lv_image_1, home_icon_cpu_18);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 43);
        lv_obj_set_y(lv_label_7, 130);
        lv_obj_set_width(lv_label_7, 54);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "CPU");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_0, 27);
        lv_obj_set_y(lv_arc_0, 153);
        lv_obj_set_width(lv_arc_0, 60);
        lv_obj_set_height(lv_arc_0, 60);
        lv_arc_set_min_value(lv_arc_0, 0);
        lv_arc_set_max_value(lv_arc_0, 100);
        lv_arc_set_value(lv_arc_0, 32);
        lv_arc_set_rotation(lv_arc_0, 135);
        lv_arc_set_bg_start_angle(lv_arc_0, 0);
        lv_arc_set_bg_end_angle(lv_arc_0, 270);
        lv_arc_set_mode(lv_arc_0, LV_ARC_MODE_NORMAL);
        lv_obj_add_style(lv_arc_0, &meter_track, LV_PART_MAIN);
        lv_obj_add_style(lv_arc_0, &meter_cpu, LV_PART_INDICATOR);
        lv_obj_add_style(lv_arc_0, &meter_knob_hidden, LV_PART_KNOB);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 26);
        lv_obj_set_y(lv_label_8, 169);
        lv_obj_set_width(lv_label_8, 62);
        lv_obj_set_height(lv_label_8, 22);
        lv_label_set_text(lv_label_8, "32%");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 14);
        lv_obj_set_y(lv_label_9, 211);
        lv_obj_set_width(lv_label_9, 86);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "240 MHz");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 110);
        lv_obj_set_y(lv_obj_6, 123);
        lv_obj_set_width(lv_obj_6, 94);
        lv_obj_set_height(lv_obj_6, 112);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 122);
        lv_obj_set_y(lv_image_2, 132);
        lv_obj_set_width(lv_image_2, 16);
        lv_obj_set_height(lv_image_2, 16);
        lv_image_set_src(lv_image_2, home_icon_ram);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 143);
        lv_obj_set_y(lv_label_10, 130);
        lv_obj_set_width(lv_label_10, 54);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "RAM");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_1, 127);
        lv_obj_set_y(lv_arc_1, 153);
        lv_obj_set_width(lv_arc_1, 60);
        lv_obj_set_height(lv_arc_1, 60);
        lv_arc_set_min_value(lv_arc_1, 0);
        lv_arc_set_max_value(lv_arc_1, 100);
        lv_arc_set_value(lv_arc_1, 46);
        lv_arc_set_rotation(lv_arc_1, 135);
        lv_arc_set_bg_start_angle(lv_arc_1, 0);
        lv_arc_set_bg_end_angle(lv_arc_1, 270);
        lv_arc_set_mode(lv_arc_1, LV_ARC_MODE_NORMAL);
        lv_obj_add_style(lv_arc_1, &meter_track, LV_PART_MAIN);
        lv_obj_add_style(lv_arc_1, &meter_ram, LV_PART_INDICATOR);
        lv_obj_add_style(lv_arc_1, &meter_knob_hidden, LV_PART_KNOB);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 126);
        lv_obj_set_y(lv_label_11, 169);
        lv_obj_set_width(lv_label_11, 62);
        lv_obj_set_height(lv_label_11, 22);
        lv_label_set_text(lv_label_11, "46%");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 114);
        lv_obj_set_y(lv_label_12, 211);
        lv_obj_set_width(lv_label_12, 86);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "188 KB");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 210);
        lv_obj_set_y(lv_obj_7, 123);
        lv_obj_set_width(lv_obj_7, 94);
        lv_obj_set_height(lv_obj_7, 112);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 222);
        lv_obj_set_y(lv_image_3, 132);
        lv_obj_set_width(lv_image_3, 16);
        lv_obj_set_height(lv_image_3, 16);
        lv_image_set_src(lv_image_3, home_icon_storage);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 243);
        lv_obj_set_y(lv_label_13, 130);
        lv_obj_set_width(lv_label_13, 55);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Flash");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_2 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_2, 227);
        lv_obj_set_y(lv_arc_2, 153);
        lv_obj_set_width(lv_arc_2, 60);
        lv_obj_set_height(lv_arc_2, 60);
        lv_arc_set_min_value(lv_arc_2, 0);
        lv_arc_set_max_value(lv_arc_2, 100);
        lv_arc_set_value(lv_arc_2, 28);
        lv_arc_set_rotation(lv_arc_2, 135);
        lv_arc_set_bg_start_angle(lv_arc_2, 0);
        lv_arc_set_bg_end_angle(lv_arc_2, 270);
        lv_arc_set_mode(lv_arc_2, LV_ARC_MODE_NORMAL);
        lv_obj_add_style(lv_arc_2, &meter_track, LV_PART_MAIN);
        lv_obj_add_style(lv_arc_2, &meter_flash, LV_PART_INDICATOR);
        lv_obj_add_style(lv_arc_2, &meter_knob_hidden, LV_PART_KNOB);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 226);
        lv_obj_set_y(lv_label_14, 169);
        lv_obj_set_width(lv_label_14, 62);
        lv_obj_set_height(lv_label_14, 22);
        lv_label_set_text(lv_label_14, "28%");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 214);
        lv_obj_set_y(lv_label_15, 211);
        lv_obj_set_width(lv_label_15, 86);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "1.8 MB");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 314);
        lv_obj_set_y(lv_obj_8, 123);
        lv_obj_set_width(lv_obj_8, 156);
        lv_obj_set_height(lv_obj_8, 112);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 325);
        lv_obj_set_y(lv_label_16, 133);
        lv_obj_set_width(lv_label_16, 100);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Hệ thống");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 434);
        lv_obj_set_y(lv_obj_9, 141);
        lv_obj_set_width(lv_obj_9, 5);
        lv_obj_set_height(lv_obj_9, 5);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 442);
        lv_obj_set_y(lv_label_17, 134);
        lv_obj_set_width(lv_label_17, 17);
        lv_obj_set_height(lv_label_17, 18);
        lv_label_set_text(lv_label_17, "OK");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 325);
        lv_obj_set_y(lv_obj_10, 157);
        lv_obj_set_width(lv_obj_10, 133);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 325);
        lv_obj_set_y(lv_label_18, 165);
        lv_obj_set_width(lv_label_18, 84);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Nhiệt độ chip");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 411);
        lv_obj_set_y(lv_label_19, 165);
        lv_obj_set_width(lv_label_19, 47);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "45°C");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 325);
        lv_obj_set_y(lv_label_20, 186);
        lv_obj_set_width(lv_label_20, 54);
        lv_obj_set_height(lv_label_20, 17);
        lv_label_set_text(lv_label_20, "Uptime");
        lv_obj_set_style_text_font(lv_label_20, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 379);
        lv_obj_set_y(lv_label_21, 186);
        lv_obj_set_width(lv_label_21, 79);
        lv_obj_set_height(lv_label_21, 17);
        lv_label_set_text(lv_label_21, "12 ngày 6 giờ");
        lv_obj_set_style_text_font(lv_label_21, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 325);
        lv_obj_set_y(lv_label_22, 208);
        lv_obj_set_width(lv_label_22, 83);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "Số nhân");
        lv_obj_set_style_text_font(lv_label_22, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 411);
        lv_obj_set_y(lv_label_23, 208);
        lv_obj_set_width(lv_label_23, 47);
        lv_obj_set_height(lv_label_23, 17);
        lv_label_set_text(lv_label_23, "2 nhân");
        lv_obj_set_style_text_font(lv_label_23, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 10);
        lv_obj_set_y(lv_obj_11, 243);
        lv_obj_set_width(lv_obj_11, 226);
        lv_obj_set_height(lv_obj_11, 63);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 22);
        lv_obj_set_y(lv_image_4, 251);
        lv_obj_set_width(lv_image_4, 18);
        lv_obj_set_height(lv_image_4, 18);
        lv_image_set_src(lv_image_4, home_icon_ram);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 47);
        lv_obj_set_y(lv_label_24, 250);
        lv_obj_set_width(lv_label_24, 132);
        lv_obj_set_height(lv_label_24, 19);
        lv_label_set_text(lv_label_24, "Bộ nhớ PSRAM");
        lv_obj_set_style_text_font(lv_label_24, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 180);
        lv_obj_set_y(lv_label_25, 251);
        lv_obj_set_width(lv_label_25, 44);
        lv_obj_set_height(lv_label_25, 19);
        lv_label_set_text(lv_label_25, "52%");
        lv_obj_set_style_text_font(lv_label_25, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 22);
        lv_obj_set_y(lv_label_26, 273);
        lv_obj_set_width(lv_label_26, 87);
        lv_obj_set_height(lv_label_26, 16);
        lv_label_set_text(lv_label_26, "Đã sử dụng");
        lv_obj_set_style_text_font(lv_label_26, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 110);
        lv_obj_set_y(lv_label_27, 273);
        lv_obj_set_width(lv_label_27, 114);
        lv_obj_set_height(lv_label_27, 16);
        lv_label_set_text(lv_label_27, "4.2 MB / 8 MB");
        lv_obj_set_style_text_font(lv_label_27, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 22);
        lv_obj_set_y(lv_obj_12, 291);
        lv_obj_set_width(lv_obj_12, 202);
        lv_obj_set_height(lv_obj_12, 6);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 22);
        lv_obj_set_y(lv_obj_13, 291);
        lv_obj_set_width(lv_obj_13, 105);
        lv_obj_set_height(lv_obj_13, 6);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 244);
        lv_obj_set_y(lv_obj_14, 243);
        lv_obj_set_width(lv_obj_14, 226);
        lv_obj_set_height(lv_obj_14, 63);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_14, 1, 0);
        lv_obj_set_style_radius(lv_obj_14, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 256);
        lv_obj_set_y(lv_image_5, 251);
        lv_obj_set_width(lv_image_5, 18);
        lv_obj_set_height(lv_image_5, 18);
        lv_image_set_src(lv_image_5, home_icon_network);
        lv_obj_set_style_image_recolor(lv_image_5, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_5, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 281);
        lv_obj_set_y(lv_label_28, 250);
        lv_obj_set_width(lv_label_28, 111);
        lv_obj_set_height(lv_label_28, 19);
        lv_label_set_text(lv_label_28, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_28, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 399);
        lv_obj_set_y(lv_obj_15, 258);
        lv_obj_set_width(lv_obj_15, 5);
        lv_obj_set_height(lv_obj_15, 5);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_radius(lv_obj_15, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_29 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_29, 409);
        lv_obj_set_y(lv_label_29, 251);
        lv_obj_set_width(lv_label_29, 49);
        lv_obj_set_height(lv_label_29, 18);
        lv_label_set_text(lv_label_29, "Online");
        lv_obj_set_style_text_font(lv_label_29, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_29, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_29, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_30 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_30, 256);
        lv_obj_set_y(lv_label_30, 277);
        lv_obj_set_width(lv_label_30, 118);
        lv_obj_set_height(lv_label_30, 18);
        lv_label_set_text(lv_label_30, "XomCoding_WiFi");
        lv_obj_set_style_text_font(lv_label_30, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_30, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_31 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_31, 376);
        lv_obj_set_y(lv_label_31, 277);
        lv_obj_set_width(lv_label_31, 82);
        lv_obj_set_height(lv_label_31, 18);
        lv_label_set_text(lv_label_31, "192.168.1.50");
        lv_obj_set_style_text_font(lv_label_31, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_31, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_31, lv_color_hex(0x94a3b8), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

