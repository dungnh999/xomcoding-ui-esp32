/**
 * @file home_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "home_landscape_gen.h"
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

lv_obj_t * home_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "home_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 7);
        lv_obj_set_width(lv_label_0, 66);
        lv_obj_set_height(lv_label_0, 25);
        lv_label_set_text(lv_label_0, "12:34");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 88);
        lv_obj_set_y(lv_label_1, 13);
        lv_obj_set_width(lv_label_1, 156);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "T7, 10/10/2026");
        lv_obj_set_style_text_font(lv_label_1, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 379);
        lv_obj_set_y(lv_image_0, 11);
        lv_obj_set_width(lv_image_0, 20);
        lv_obj_set_height(lv_image_0, 20);
        lv_image_set_src(lv_image_0, boot_icon_wifi);
        lv_obj_set_style_image_recolor(lv_image_0, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 404);
        lv_obj_set_y(lv_label_2, 12);
        lv_obj_set_width(lv_label_2, 34);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "85%");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 446);
        lv_obj_set_y(lv_obj_1, 15);
        lv_obj_set_width(lv_obj_1, 20);
        lv_obj_set_height(lv_obj_1, 12);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_1, lv_color_hex(0xcbd5e1), 0);
        lv_obj_set_style_border_width(lv_obj_1, 1, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 449);
        lv_obj_set_y(lv_obj_2, 18);
        lv_obj_set_width(lv_obj_2, 14);
        lv_obj_set_height(lv_obj_2, 6);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_radius(lv_obj_2, 1, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 468);
        lv_obj_set_y(lv_obj_3, 18);
        lv_obj_set_width(lv_obj_3, 2);
        lv_obj_set_height(lv_obj_3, 5);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0xcbd5e1), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 10);
        lv_obj_set_y(lv_obj_4, 41);
        lv_obj_set_width(lv_obj_4, 460);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x273345), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 10);
        lv_obj_set_y(lv_image_1, 51);
        lv_obj_set_width(lv_image_1, 296);
        lv_obj_set_height(lv_image_1, 122);
        lv_image_set_src(lv_image_1, weather_bg_cloudy);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 10);
        lv_obj_set_y(lv_obj_5, 51);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 122);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 0 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 61);
        lv_obj_set_width(lv_label_3, 205);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "THỜI TIẾT · HÀ NỘI");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 85);
        lv_obj_set_width(lv_label_4, 170);
        lv_obj_set_height(lv_label_4, 29);
        lv_label_set_text(lv_label_4, "28.5°C");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 114);
        lv_obj_set_width(lv_label_5, 166);
        lv_obj_set_height(lv_label_5, 20);
        lv_label_set_text(lv_label_5, "Trời có mây");
        lv_obj_set_style_text_font(lv_label_5, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xf1f5f9), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 218);
        lv_obj_set_y(lv_image_2, 73);
        lv_obj_set_width(lv_image_2, 64);
        lv_obj_set_height(lv_image_2, 64);
        lv_image_set_src(lv_image_2, weather_cloud_sun);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 22);
        lv_obj_set_y(lv_label_6, 149);
        lv_obj_set_width(lv_label_6, 80);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Cao 32°C");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 109);
        lv_obj_set_y(lv_label_7, 149);
        lv_obj_set_width(lv_label_7, 89);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "Thấp 24°C");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x60a5fa), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 208);
        lv_obj_set_y(lv_label_8, 149);
        lv_obj_set_width(lv_label_8, 86);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Ẩm 65%");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xcbd5e1), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 314);
        lv_obj_set_y(lv_obj_6, 51);
        lv_obj_set_width(lv_obj_6, 156);
        lv_obj_set_height(lv_obj_6, 122);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 325);
        lv_obj_set_y(lv_image_3, 62);
        lv_obj_set_width(lv_image_3, 20);
        lv_obj_set_height(lv_image_3, 20);
        lv_image_set_src(lv_image_3, boot_icon_nas);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 351);
        lv_obj_set_y(lv_label_9, 60);
        lv_obj_set_width(lv_label_9, 108);
        lv_obj_set_height(lv_label_9, 20);
        lv_label_set_text(lv_label_9, "Synology NAS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 326);
        lv_obj_set_y(lv_obj_7, 92);
        lv_obj_set_width(lv_obj_7, 5);
        lv_obj_set_height(lv_obj_7, 5);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 337);
        lv_obj_set_y(lv_label_10, 86);
        lv_obj_set_width(lv_label_10, 68);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Online");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 326);
        lv_obj_set_y(lv_label_11, 107);
        lv_obj_set_width(lv_label_11, 134);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "DS920+ · 12 ngày");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 326);
        lv_obj_set_y(lv_label_12, 129);
        lv_obj_set_width(lv_label_12, 94);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Dung lượng");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 422);
        lv_obj_set_y(lv_label_13, 129);
        lv_obj_set_width(lv_label_13, 38);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "30%");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 326);
        lv_obj_set_y(lv_obj_8, 153);
        lv_obj_set_width(lv_obj_8, 134);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 326);
        lv_obj_set_y(lv_obj_9, 153);
        lv_obj_set_width(lv_obj_9, 40);
        lv_obj_set_height(lv_obj_9, 7);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0xff6464), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 10);
        lv_obj_set_y(lv_obj_10, 182);
        lv_obj_set_width(lv_obj_10, 94);
        lv_obj_set_height(lv_obj_10, 118);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 22);
        lv_obj_set_y(lv_image_4, 191);
        lv_obj_set_width(lv_image_4, 16);
        lv_obj_set_height(lv_image_4, 16);
        lv_image_set_src(lv_image_4, home_icon_cpu);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 43);
        lv_obj_set_y(lv_label_14, 188);
        lv_obj_set_width(lv_label_14, 54);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "CPU");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_0, 27);
        lv_obj_set_y(lv_arc_0, 214);
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

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 26);
        lv_obj_set_y(lv_label_15, 230);
        lv_obj_set_width(lv_label_15, 62);
        lv_obj_set_height(lv_label_15, 22);
        lv_label_set_text(lv_label_15, "32%");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 14);
        lv_obj_set_y(lv_label_16, 279);
        lv_obj_set_width(lv_label_16, 86);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "240 MHz");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 110);
        lv_obj_set_y(lv_obj_11, 182);
        lv_obj_set_width(lv_obj_11, 94);
        lv_obj_set_height(lv_obj_11, 118);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 122);
        lv_obj_set_y(lv_image_5, 191);
        lv_obj_set_width(lv_image_5, 16);
        lv_obj_set_height(lv_image_5, 16);
        lv_image_set_src(lv_image_5, home_icon_ram);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 143);
        lv_obj_set_y(lv_label_17, 188);
        lv_obj_set_width(lv_label_17, 54);
        lv_obj_set_height(lv_label_17, 18);
        lv_label_set_text(lv_label_17, "RAM");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_1, 127);
        lv_obj_set_y(lv_arc_1, 214);
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

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 126);
        lv_obj_set_y(lv_label_18, 230);
        lv_obj_set_width(lv_label_18, 62);
        lv_obj_set_height(lv_label_18, 22);
        lv_label_set_text(lv_label_18, "46%");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 114);
        lv_obj_set_y(lv_label_19, 279);
        lv_obj_set_width(lv_label_19, 86);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "188 KB");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 210);
        lv_obj_set_y(lv_obj_12, 182);
        lv_obj_set_width(lv_obj_12, 94);
        lv_obj_set_height(lv_obj_12, 118);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_12, 1, 0);
        lv_obj_set_style_radius(lv_obj_12, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 222);
        lv_obj_set_y(lv_image_6, 191);
        lv_obj_set_width(lv_image_6, 16);
        lv_obj_set_height(lv_image_6, 16);
        lv_image_set_src(lv_image_6, home_icon_storage);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 243);
        lv_obj_set_y(lv_label_20, 188);
        lv_obj_set_width(lv_label_20, 55);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "Flash");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_2 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_2, 227);
        lv_obj_set_y(lv_arc_2, 214);
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

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 226);
        lv_obj_set_y(lv_label_21, 230);
        lv_obj_set_width(lv_label_21, 62);
        lv_obj_set_height(lv_label_21, 22);
        lv_label_set_text(lv_label_21, "28%");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 214);
        lv_obj_set_y(lv_label_22, 279);
        lv_obj_set_width(lv_label_22, 86);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "1.8 MB");
        lv_obj_set_style_text_font(lv_label_22, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_22, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 314);
        lv_obj_set_y(lv_obj_13, 182);
        lv_obj_set_width(lv_obj_13, 156);
        lv_obj_set_height(lv_obj_13, 118);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 325);
        lv_obj_set_y(lv_image_7, 192);
        lv_obj_set_width(lv_image_7, 18);
        lv_obj_set_height(lv_image_7, 18);
        lv_image_set_src(lv_image_7, home_icon_network);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 349);
        lv_obj_set_y(lv_label_23, 190);
        lv_obj_set_width(lv_label_23, 110);
        lv_obj_set_height(lv_label_23, 19);
        lv_label_set_text(lv_label_23, "Lưu lượng mạng");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 326);
        lv_obj_set_y(lv_obj_14, 220);
        lv_obj_set_width(lv_obj_14, 5);
        lv_obj_set_height(lv_obj_14, 5);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 337);
        lv_obj_set_y(lv_label_24, 214);
        lv_obj_set_width(lv_label_24, 85);
        lv_obj_set_height(lv_label_24, 18);
        lv_label_set_text(lv_label_24, "Trực tiếp");
        lv_obj_set_style_text_font(lv_label_24, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 326);
        lv_obj_set_y(lv_obj_15, 235);
        lv_obj_set_width(lv_obj_15, 132);
        lv_obj_set_height(lv_obj_15, 1);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 326);
        lv_obj_set_y(lv_label_25, 243);
        lv_obj_set_width(lv_label_25, 66);
        lv_obj_set_height(lv_label_25, 17);
        lv_label_set_text(lv_label_25, "Tải xuống");
        lv_obj_set_style_text_font(lv_label_25, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 326);
        lv_obj_set_y(lv_label_26, 261);
        lv_obj_set_width(lv_label_26, 69);
        lv_obj_set_height(lv_label_26, 20);
        lv_label_set_text(lv_label_26, "125 KB/s");
        lv_obj_set_style_text_font(lv_label_26, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 397);
        lv_obj_set_y(lv_obj_16, 245);
        lv_obj_set_width(lv_obj_16, 1);
        lv_obj_set_height(lv_obj_16, 38);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 405);
        lv_obj_set_y(lv_label_27, 243);
        lv_obj_set_width(lv_label_27, 53);
        lv_obj_set_height(lv_label_27, 17);
        lv_label_set_text(lv_label_27, "Tải lên");
        lv_obj_set_style_text_font(lv_label_27, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 405);
        lv_obj_set_y(lv_label_28, 261);
        lv_obj_set_width(lv_label_28, 53);
        lv_obj_set_height(lv_label_28, 20);
        lv_label_set_text(lv_label_28, "42 KB/s");
        lv_obj_set_style_text_font(lv_label_28, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0x34d399), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

