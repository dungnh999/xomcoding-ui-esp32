/**
 * @file nas_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "nas_landscape_gen.h"
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

lv_obj_t * nas_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "nas_landscape_#");
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
        lv_obj_set_width(lv_label_0, 185);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "Synology NAS");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 200);
        lv_obj_set_y(lv_label_1, 13);
        lv_obj_set_width(lv_label_1, 130);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết thiết bị");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 404);
        lv_obj_set_y(lv_obj_1, 19);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 416);
        lv_obj_set_y(lv_label_2, 12);
        lv_obj_set_width(lv_label_2, 52);
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
        lv_obj_set_y(lv_obj_3, 51);
        lv_obj_set_width(lv_obj_3, 226);
        lv_obj_set_height(lv_obj_3, 89);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 22);
        lv_obj_set_y(lv_image_0, 62);
        lv_obj_set_width(lv_image_0, 26);
        lv_obj_set_height(lv_image_0, 26);
        lv_image_set_src(lv_image_0, boot_icon_nas);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 56);
        lv_obj_set_y(lv_label_3, 60);
        lv_obj_set_width(lv_label_3, 168);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "DiskStation DS920+");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 56);
        lv_obj_set_y(lv_label_4, 80);
        lv_obj_set_width(lv_label_4, 168);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Synology DSM · 7.2");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 103);
        lv_obj_set_width(lv_obj_4, 202);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 112);
        lv_obj_set_width(lv_label_5, 111);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "192.168.1.100");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 127);
        lv_obj_set_y(lv_label_6, 112);
        lv_obj_set_width(lv_label_6, 97);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "12 ngày uptime");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 10);
        lv_obj_set_y(lv_obj_5, 148);
        lv_obj_set_width(lv_obj_5, 226);
        lv_obj_set_height(lv_obj_5, 158);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 22);
        lv_obj_set_y(lv_image_1, 160);
        lv_obj_set_width(lv_image_1, 18);
        lv_obj_set_height(lv_image_1, 18);
        lv_image_set_src(lv_image_1, home_icon_storage);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 47);
        lv_obj_set_y(lv_label_7, 158);
        lv_obj_set_width(lv_label_7, 147);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Dung lượng lưu trữ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 188);
        lv_obj_set_y(lv_label_8, 160);
        lv_obj_set_width(lv_label_8, 36);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "30%");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 22);
        lv_obj_set_y(lv_label_9, 190);
        lv_obj_set_width(lv_label_9, 87);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Volume 1");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 112);
        lv_obj_set_y(lv_label_10, 190);
        lv_obj_set_width(lv_label_10, 112);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "3.6 TB / 12 TB");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 215);
        lv_obj_set_width(lv_obj_6, 202);
        lv_obj_set_height(lv_obj_6, 7);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 215);
        lv_obj_set_width(lv_obj_7, 61);
        lv_obj_set_height(lv_obj_7, 7);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0xff6464), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 22);
        lv_obj_set_y(lv_label_11, 229);
        lv_obj_set_width(lv_label_11, 202);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "SHR · Bình thường");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 254);
        lv_obj_set_width(lv_obj_8, 202);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 22);
        lv_obj_set_y(lv_label_12, 262);
        lv_obj_set_width(lv_label_12, 89);
        lv_obj_set_height(lv_label_12, 16);
        lv_label_set_text(lv_label_12, "Đã sử dụng");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 22);
        lv_obj_set_y(lv_label_13, 280);
        lv_obj_set_width(lv_label_13, 91);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "3.6 TB");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 128);
        lv_obj_set_y(lv_label_14, 262);
        lv_obj_set_width(lv_label_14, 96);
        lv_obj_set_height(lv_label_14, 16);
        lv_label_set_text(lv_label_14, "Còn trống");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 128);
        lv_obj_set_y(lv_label_15, 280);
        lv_obj_set_width(lv_label_15, 96);
        lv_obj_set_height(lv_label_15, 18);
        lv_label_set_text(lv_label_15, "8.4 TB");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 244);
        lv_obj_set_y(lv_obj_9, 51);
        lv_obj_set_width(lv_obj_9, 108);
        lv_obj_set_height(lv_obj_9, 110);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 255);
        lv_obj_set_y(lv_image_2, 61);
        lv_obj_set_width(lv_image_2, 16);
        lv_obj_set_height(lv_image_2, 16);
        lv_image_set_src(lv_image_2, home_icon_cpu);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 276);
        lv_obj_set_y(lv_label_16, 58);
        lv_obj_set_width(lv_label_16, 69);
        lv_obj_set_height(lv_label_16, 18);
        lv_label_set_text(lv_label_16, "CPU NAS");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_0, 268);
        lv_obj_set_y(lv_arc_0, 79);
        lv_obj_set_width(lv_arc_0, 60);
        lv_obj_set_height(lv_arc_0, 60);
        lv_arc_set_min_value(lv_arc_0, 0);
        lv_arc_set_max_value(lv_arc_0, 100);
        lv_arc_set_value(lv_arc_0, 24);
        lv_arc_set_rotation(lv_arc_0, 135);
        lv_arc_set_bg_start_angle(lv_arc_0, 0);
        lv_arc_set_bg_end_angle(lv_arc_0, 270);
        lv_arc_set_mode(lv_arc_0, LV_ARC_MODE_NORMAL);
        lv_obj_add_style(lv_arc_0, &meter_track, LV_PART_MAIN);
        lv_obj_add_style(lv_arc_0, &meter_cpu, LV_PART_INDICATOR);
        lv_obj_add_style(lv_arc_0, &meter_knob_hidden, LV_PART_KNOB);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 267);
        lv_obj_set_y(lv_label_17, 96);
        lv_obj_set_width(lv_label_17, 62);
        lv_obj_set_height(lv_label_17, 22);
        lv_label_set_text(lv_label_17, "24%");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 251);
        lv_obj_set_y(lv_label_18, 143);
        lv_obj_set_width(lv_label_18, 94);
        lv_obj_set_height(lv_label_18, 15);
        lv_label_set_text(lv_label_18, "42°C · OK");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 360);
        lv_obj_set_y(lv_obj_10, 51);
        lv_obj_set_width(lv_obj_10, 110);
        lv_obj_set_height(lv_obj_10, 110);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 371);
        lv_obj_set_y(lv_image_3, 61);
        lv_obj_set_width(lv_image_3, 16);
        lv_obj_set_height(lv_image_3, 16);
        lv_image_set_src(lv_image_3, home_icon_ram);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 392);
        lv_obj_set_y(lv_label_19, 58);
        lv_obj_set_width(lv_label_19, 69);
        lv_obj_set_height(lv_label_19, 18);
        lv_label_set_text(lv_label_19, "RAM NAS");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_1, 385);
        lv_obj_set_y(lv_arc_1, 79);
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

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 384);
        lv_obj_set_y(lv_label_20, 96);
        lv_obj_set_width(lv_label_20, 62);
        lv_obj_set_height(lv_label_20, 22);
        lv_label_set_text(lv_label_20, "46%");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 368);
        lv_obj_set_y(lv_label_21, 143);
        lv_obj_set_width(lv_label_21, 94);
        lv_obj_set_height(lv_label_21, 15);
        lv_label_set_text(lv_label_21, "1.8 GB / 4 GB");
        lv_obj_set_style_text_font(lv_label_21, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 244);
        lv_obj_set_y(lv_obj_11, 169);
        lv_obj_set_width(lv_obj_11, 226);
        lv_obj_set_height(lv_obj_11, 137);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 256);
        lv_obj_set_y(lv_label_22, 180);
        lv_obj_set_width(lv_label_22, 157);
        lv_obj_set_height(lv_label_22, 20);
        lv_label_set_text(lv_label_22, "Trạng thái hệ thống");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 430);
        lv_obj_set_y(lv_obj_12, 187);
        lv_obj_set_width(lv_obj_12, 5);
        lv_obj_set_height(lv_obj_12, 5);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 441);
        lv_obj_set_y(lv_label_23, 180);
        lv_obj_set_width(lv_label_23, 17);
        lv_obj_set_height(lv_label_23, 18);
        lv_label_set_text(lv_label_23, "OK");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 256);
        lv_obj_set_y(lv_obj_13, 205);
        lv_obj_set_width(lv_obj_13, 202);
        lv_obj_set_height(lv_obj_13, 1);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 256);
        lv_obj_set_y(lv_label_24, 215);
        lv_obj_set_width(lv_label_24, 123);
        lv_obj_set_height(lv_label_24, 17);
        lv_label_set_text(lv_label_24, "Nhiệt độ ổ đĩa");
        lv_obj_set_style_text_font(lv_label_24, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 393);
        lv_obj_set_y(lv_label_25, 215);
        lv_obj_set_width(lv_label_25, 65);
        lv_obj_set_height(lv_label_25, 17);
        lv_label_set_text(lv_label_25, "38°C");
        lv_obj_set_style_text_font(lv_label_25, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 256);
        lv_obj_set_y(lv_label_26, 238);
        lv_obj_set_width(lv_label_26, 142);
        lv_obj_set_height(lv_label_26, 17);
        lv_label_set_text(lv_label_26, "Tất cả ổ đĩa khỏe");
        lv_obj_set_style_text_font(lv_label_26, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 398);
        lv_obj_set_y(lv_label_27, 238);
        lv_obj_set_width(lv_label_27, 60);
        lv_obj_set_height(lv_label_27, 17);
        lv_label_set_text(lv_label_27, "Tốt");
        lv_obj_set_style_text_font(lv_label_27, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 256);
        lv_obj_set_y(lv_obj_14, 261);
        lv_obj_set_width(lv_obj_14, 202);
        lv_obj_set_height(lv_obj_14, 1);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 256);
        lv_obj_set_y(lv_label_28, 272);
        lv_obj_set_width(lv_label_28, 132);
        lv_obj_set_height(lv_label_28, 17);
        lv_label_set_text(lv_label_28, "RAID / SHR");
        lv_obj_set_style_text_font(lv_label_28, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_29 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_29, 388);
        lv_obj_set_y(lv_label_29, 272);
        lv_obj_set_width(lv_label_29, 70);
        lv_obj_set_height(lv_label_29, 17);
        lv_label_set_text(lv_label_29, "Bình thường");
        lv_obj_set_style_text_font(lv_label_29, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_29, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_29, lv_color_hex(0x34d399), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

