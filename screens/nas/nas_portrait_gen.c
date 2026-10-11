/**
 * @file nas_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "nas_portrait_gen.h"
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

lv_obj_t * nas_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "nas_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 9);
        lv_obj_set_width(lv_label_0, 210);
        lv_obj_set_height(lv_label_0, 25);
        lv_label_set_text(lv_label_0, "Synology NAS");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 13);
        lv_obj_set_y(lv_label_1, 34);
        lv_obj_set_width(lv_label_1, 200);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết thiết bị");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 239);
        lv_obj_set_y(lv_obj_1, 20);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 250);
        lv_obj_set_y(lv_label_2, 14);
        lv_obj_set_width(lv_label_2, 58);
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
        lv_obj_set_height(lv_obj_3, 93);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 24);
        lv_obj_set_y(lv_image_0, 85);
        lv_obj_set_width(lv_image_0, 26);
        lv_obj_set_height(lv_image_0, 26);
        lv_image_set_src(lv_image_0, boot_icon_nas);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 58);
        lv_obj_set_y(lv_label_3, 76);
        lv_obj_set_width(lv_label_3, 208);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "DiskStation DS920+");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 58);
        lv_obj_set_y(lv_label_4, 98);
        lv_obj_set_width(lv_label_4, 220);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Synology DSM · 7.2");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 24);
        lv_obj_set_y(lv_obj_4, 122);
        lv_obj_set_width(lv_obj_4, 272);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 132);
        lv_obj_set_width(lv_label_5, 125);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "192.168.1.100");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 165);
        lv_obj_set_y(lv_label_6, 132);
        lv_obj_set_width(lv_label_6, 131);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "Uptime: 12 ngày");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 166);
        lv_obj_set_width(lv_obj_5, 144);
        lv_obj_set_height(lv_obj_5, 111);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 23);
        lv_obj_set_y(lv_image_1, 177);
        lv_obj_set_width(lv_image_1, 16);
        lv_obj_set_height(lv_image_1, 16);
        lv_image_set_src(lv_image_1, home_icon_cpu);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 45);
        lv_obj_set_y(lv_label_7, 174);
        lv_obj_set_width(lv_label_7, 96);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "CPU NAS");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_0 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_0, 53);
        lv_obj_set_y(lv_arc_0, 195);
        lv_obj_set_width(lv_arc_0, 62);
        lv_obj_set_height(lv_arc_0, 62);
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

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 53);
        lv_obj_set_y(lv_label_8, 213);
        lv_obj_set_width(lv_label_8, 62);
        lv_obj_set_height(lv_label_8, 22);
        lv_label_set_text(lv_label_8, "24%");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 23);
        lv_obj_set_y(lv_label_9, 255);
        lv_obj_set_width(lv_label_9, 122);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "42°C · Bình thường");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 164);
        lv_obj_set_y(lv_obj_6, 166);
        lv_obj_set_width(lv_obj_6, 144);
        lv_obj_set_height(lv_obj_6, 111);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 175);
        lv_obj_set_y(lv_image_2, 177);
        lv_obj_set_width(lv_image_2, 16);
        lv_obj_set_height(lv_image_2, 16);
        lv_image_set_src(lv_image_2, home_icon_ram);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 197);
        lv_obj_set_y(lv_label_10, 174);
        lv_obj_set_width(lv_label_10, 98);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "RAM NAS");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_arc_1 = lv_arc_create(lv_obj_0);
        lv_obj_set_x(lv_arc_1, 205);
        lv_obj_set_y(lv_arc_1, 195);
        lv_obj_set_width(lv_arc_1, 62);
        lv_obj_set_height(lv_arc_1, 62);
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
        lv_obj_set_x(lv_label_11, 205);
        lv_obj_set_y(lv_label_11, 213);
        lv_obj_set_width(lv_label_11, 62);
        lv_obj_set_height(lv_label_11, 22);
        lv_label_set_text(lv_label_11, "46%");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 175);
        lv_obj_set_y(lv_label_12, 255);
        lv_obj_set_width(lv_label_12, 122);
        lv_obj_set_height(lv_label_12, 16);
        lv_label_set_text(lv_label_12, "1.8 GB / 4 GB");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 285);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 93);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 24);
        lv_obj_set_y(lv_image_3, 295);
        lv_obj_set_width(lv_image_3, 18);
        lv_obj_set_height(lv_image_3, 18);
        lv_image_set_src(lv_image_3, home_icon_storage);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 49);
        lv_obj_set_y(lv_label_13, 292);
        lv_obj_set_width(lv_label_13, 158);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "Dung lượng lưu trữ");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 227);
        lv_obj_set_y(lv_label_14, 295);
        lv_obj_set_width(lv_label_14, 69);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "30%");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 318);
        lv_obj_set_width(lv_label_15, 125);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Volume 1");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 149);
        lv_obj_set_y(lv_label_16, 318);
        lv_obj_set_width(lv_label_16, 147);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "3.6 TB / 12 TB");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 24);
        lv_obj_set_y(lv_obj_8, 340);
        lv_obj_set_width(lv_obj_8, 272);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 24);
        lv_obj_set_y(lv_obj_9, 340);
        lv_obj_set_width(lv_obj_9, 82);
        lv_obj_set_height(lv_obj_9, 7);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0xff6464), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 353);
        lv_obj_set_width(lv_label_17, 272);
        lv_obj_set_height(lv_label_17, 16);
        lv_label_set_text(lv_label_17, "SHR · Trạng thái: Bình thường");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 12);
        lv_obj_set_y(lv_obj_10, 386);
        lv_obj_set_width(lv_obj_10, 296);
        lv_obj_set_height(lv_obj_10, 84);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 24);
        lv_obj_set_y(lv_label_18, 397);
        lv_obj_set_width(lv_label_18, 174);
        lv_obj_set_height(lv_label_18, 20);
        lv_label_set_text(lv_label_18, "Trạng thái hệ thống");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 262);
        lv_obj_set_y(lv_obj_11, 404);
        lv_obj_set_width(lv_obj_11, 5);
        lv_obj_set_height(lv_obj_11, 5);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 272);
        lv_obj_set_y(lv_label_19, 397);
        lv_obj_set_width(lv_label_19, 24);
        lv_obj_set_height(lv_label_19, 18);
        lv_label_set_text(lv_label_19, "OK");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 24);
        lv_obj_set_y(lv_obj_12, 422);
        lv_obj_set_width(lv_obj_12, 272);
        lv_obj_set_height(lv_obj_12, 1);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 24);
        lv_obj_set_y(lv_label_20, 430);
        lv_obj_set_width(lv_label_20, 110);
        lv_obj_set_height(lv_label_20, 17);
        lv_label_set_text(lv_label_20, "Nhiệt độ ổ đĩa");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 227);
        lv_obj_set_y(lv_label_21, 430);
        lv_obj_set_width(lv_label_21, 69);
        lv_obj_set_height(lv_label_21, 17);
        lv_label_set_text(lv_label_21, "38°C");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 24);
        lv_obj_set_y(lv_label_22, 450);
        lv_obj_set_width(lv_label_22, 145);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "Tất cả ổ đĩa khỏe");
        lv_obj_set_style_text_font(lv_label_22, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 231);
        lv_obj_set_y(lv_label_23, 450);
        lv_obj_set_width(lv_label_23, 65);
        lv_obj_set_height(lv_label_23, 17);
        lv_label_set_text(lv_label_23, "Tốt");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0x34d399), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

