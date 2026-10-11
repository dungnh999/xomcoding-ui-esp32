/**
 * @file system_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "system_portrait_gen.h"
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

lv_obj_t * system_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "system_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 3);
        lv_obj_set_width(lv_label_0, 235);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 13);
        lv_obj_set_y(lv_label_1, 34);
        lv_obj_set_width(lv_label_1, 190);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết hệ thống");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 260);
        lv_obj_set_y(lv_obj_1, 22);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 270);
        lv_obj_set_y(lv_label_2, 14);
        lv_obj_set_width(lv_label_2, 40);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Online");
        lv_obj_set_style_text_font(lv_label_2, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 56);
        lv_obj_set_width(lv_obj_2, 296);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x273345), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 65);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 76);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 24);
        lv_obj_set_y(lv_image_0, 85);
        lv_obj_set_width(lv_image_0, 22);
        lv_obj_set_height(lv_image_0, 22);
        lv_image_set_src(lv_image_0, home_icon_cpu_24);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 54);
        lv_obj_set_y(lv_label_3, 75);
        lv_obj_set_width(lv_label_3, 220);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 54);
        lv_obj_set_y(lv_label_4, 97);
        lv_obj_set_width(lv_label_4, 230);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Dual-core · Xtensa LX7");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 24);
        lv_obj_set_y(lv_obj_4, 117);
        lv_obj_set_width(lv_obj_4, 272);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 119);
        lv_obj_set_width(lv_label_5, 124);
        lv_obj_set_height(lv_label_5, 16);
        lv_label_set_text(lv_label_5, "2 nhân CPU");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 174);
        lv_obj_set_y(lv_label_6, 119);
        lv_obj_set_width(lv_label_6, 122);
        lv_obj_set_height(lv_label_6, 16);
        lv_label_set_text(lv_label_6, "240 MHz");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 149);
        lv_obj_set_width(lv_obj_5, 94);
        lv_obj_set_height(lv_obj_5, 113);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 24);
        lv_obj_set_y(lv_image_1, 159);
        lv_obj_set_width(lv_image_1, 16);
        lv_obj_set_height(lv_image_1, 16);
        lv_image_set_src(lv_image_1, home_icon_cpu);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 45);
        lv_obj_set_y(lv_label_7, 156);
        lv_obj_set_width(lv_label_7, 54);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "CPU");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_0, 29);
        lv_obj_set_y(lv_arc_0, 181);
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
        lv_obj_set_x(lv_label_8, 28);
        lv_obj_set_y(lv_label_8, 197);
        lv_obj_set_width(lv_label_8, 62);
        lv_obj_set_height(lv_label_8, 22);
        lv_label_set_text(lv_label_8, "32%");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 16);
        lv_obj_set_y(lv_label_9, 238);
        lv_obj_set_width(lv_label_9, 86);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "240 MHz");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 113);
        lv_obj_set_y(lv_obj_6, 149);
        lv_obj_set_width(lv_obj_6, 94);
        lv_obj_set_height(lv_obj_6, 113);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 125);
        lv_obj_set_y(lv_image_2, 159);
        lv_obj_set_width(lv_image_2, 16);
        lv_obj_set_height(lv_image_2, 16);
        lv_image_set_src(lv_image_2, home_icon_ram);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 146);
        lv_obj_set_y(lv_label_10, 156);
        lv_obj_set_width(lv_label_10, 54);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "RAM");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_1, 130);
        lv_obj_set_y(lv_arc_1, 181);
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
        lv_obj_set_x(lv_label_11, 129);
        lv_obj_set_y(lv_label_11, 197);
        lv_obj_set_width(lv_label_11, 62);
        lv_obj_set_height(lv_label_11, 22);
        lv_label_set_text(lv_label_11, "46%");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 117);
        lv_obj_set_y(lv_label_12, 238);
        lv_obj_set_width(lv_label_12, 86);
        lv_obj_set_height(lv_label_12, 16);
        lv_label_set_text(lv_label_12, "188 KB");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 214);
        lv_obj_set_y(lv_obj_7, 149);
        lv_obj_set_width(lv_obj_7, 94);
        lv_obj_set_height(lv_obj_7, 113);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 226);
        lv_obj_set_y(lv_image_3, 159);
        lv_obj_set_width(lv_image_3, 16);
        lv_obj_set_height(lv_image_3, 16);
        lv_image_set_src(lv_image_3, home_icon_storage);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 247);
        lv_obj_set_y(lv_label_13, 156);
        lv_obj_set_width(lv_label_13, 55);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Flash");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_2 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_2, 231);
        lv_obj_set_y(lv_arc_2, 181);
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
        lv_obj_set_x(lv_label_14, 230);
        lv_obj_set_y(lv_label_14, 197);
        lv_obj_set_width(lv_label_14, 62);
        lv_obj_set_height(lv_label_14, 22);
        lv_label_set_text(lv_label_14, "28%");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 218);
        lv_obj_set_y(lv_label_15, 238);
        lv_obj_set_width(lv_label_15, 86);
        lv_obj_set_height(lv_label_15, 16);
        lv_label_set_text(lv_label_15, "1.8 MB");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 270);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 78);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 24);
        lv_obj_set_y(lv_image_4, 280);
        lv_obj_set_width(lv_image_4, 18);
        lv_obj_set_height(lv_image_4, 18);
        lv_image_set_src(lv_image_4, home_icon_ram);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 49);
        lv_obj_set_y(lv_label_16, 280);
        lv_obj_set_width(lv_label_16, 180);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Bộ nhớ PSRAM");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 230);
        lv_obj_set_y(lv_label_17, 280);
        lv_obj_set_width(lv_label_17, 66);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "52%");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 24);
        lv_obj_set_y(lv_label_18, 302);
        lv_obj_set_width(lv_label_18, 120);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Đã sử dụng");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 146);
        lv_obj_set_y(lv_label_19, 302);
        lv_obj_set_width(lv_label_19, 150);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "4.2 MB / 8 MB");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 24);
        lv_obj_set_y(lv_obj_9, 326);
        lv_obj_set_width(lv_obj_9, 272);
        lv_obj_set_height(lv_obj_9, 7);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 24);
        lv_obj_set_y(lv_obj_10, 326);
        lv_obj_set_width(lv_obj_10, 142);
        lv_obj_set_height(lv_obj_10, 7);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 354);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 63);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 24);
        lv_obj_set_y(lv_image_5, 364);
        lv_obj_set_width(lv_image_5, 18);
        lv_obj_set_height(lv_image_5, 18);
        lv_image_set_src(lv_image_5, home_icon_network);
        lv_obj_set_style_image_recolor(lv_image_5, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_5, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 49);
        lv_obj_set_y(lv_label_20, 364);
        lv_obj_set_width(lv_label_20, 120);
        lv_obj_set_height(lv_label_20, 19);
        lv_label_set_text(lv_label_20, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 250);
        lv_obj_set_y(lv_obj_12, 372);
        lv_obj_set_width(lv_obj_12, 5);
        lv_obj_set_height(lv_obj_12, 5);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 246);
        lv_obj_set_y(lv_label_21, 365);
        lv_obj_set_width(lv_label_21, 50);
        lv_obj_set_height(lv_label_21, 18);
        lv_label_set_text(lv_label_21, "Online");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 24);
        lv_obj_set_y(lv_label_22, 388);
        lv_obj_set_width(lv_label_22, 135);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "XomCoding_WiFi");
        lv_obj_set_style_text_font(lv_label_22, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 162);
        lv_obj_set_y(lv_label_23, 388);
        lv_obj_set_width(lv_label_23, 134);
        lv_obj_set_height(lv_label_23, 17);
        lv_label_set_text(lv_label_23, "192.168.1.50");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 12);
        lv_obj_set_y(lv_obj_13, 425);
        lv_obj_set_width(lv_obj_13, 296);
        lv_obj_set_height(lv_obj_13, 45);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 24);
        lv_obj_set_y(lv_label_24, 431);
        lv_obj_set_width(lv_label_24, 125);
        lv_obj_set_height(lv_label_24, 15);
        lv_label_set_text(lv_label_24, "Nhiệt độ chip");
        lv_obj_set_style_text_font(lv_label_24, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 178);
        lv_obj_set_y(lv_label_25, 431);
        lv_obj_set_width(lv_label_25, 118);
        lv_obj_set_height(lv_label_25, 16);
        lv_label_set_text(lv_label_25, "Thời gian chạy");
        lv_obj_set_style_text_font(lv_label_25, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 24);
        lv_obj_set_y(lv_label_26, 448);
        lv_obj_set_width(lv_label_26, 110);
        lv_obj_set_height(lv_label_26, 17);
        lv_label_set_text(lv_label_26, "45°C");
        lv_obj_set_style_text_font(lv_label_26, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 163);
        lv_obj_set_y(lv_label_27, 446);
        lv_obj_set_width(lv_label_27, 133);
        lv_obj_set_height(lv_label_27, 18);
        lv_label_set_text(lv_label_27, "12 ngày 6 giờ");
        lv_obj_set_style_text_font(lv_label_27, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

