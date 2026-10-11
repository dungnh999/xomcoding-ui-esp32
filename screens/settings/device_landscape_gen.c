/**
 * @file device_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "device_landscape_gen.h"
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

lv_obj_t * device_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "device_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 12);
        lv_obj_set_y(lv_obj_1, 9);
        lv_obj_set_width(lv_obj_1, 34);
        lv_obj_set_height(lv_obj_1, 34);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_1, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_1, 1, 0);
        lv_obj_set_style_radius(lv_obj_1, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 17);
        lv_obj_set_y(lv_image_0, 14);
        lv_obj_set_width(lv_image_0, 24);
        lv_obj_set_height(lv_image_0, 24);
        lv_image_set_src(lv_image_0, ui_back);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 56);
        lv_obj_set_y(lv_label_0, 5);
        lv_obj_set_width(lv_label_0, 300);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Thiết bị và bộ nhớ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Phần cứng và tài nguyên");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 53);
        lv_obj_set_width(lv_obj_2, 456);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 13);
        lv_obj_set_y(lv_label_2, 61);
        lv_obj_set_width(lv_label_2, 210);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THÔNG TIN THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 72);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 98);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 108);
        lv_obj_set_width(lv_label_3, 38);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 68);
        lv_obj_set_y(lv_label_4, 94);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 68);
        lv_obj_set_y(lv_label_5, 117);
        lv_obj_set_width(lv_label_5, 149);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Firmware v1.0.0");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 69);
        lv_obj_set_y(lv_obj_5, 140);
        lv_obj_set_width(lv_obj_5, 6);
        lv_obj_set_height(lv_obj_5, 6);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 81);
        lv_obj_set_y(lv_label_6, 135);
        lv_obj_set_width(lv_label_6, 136);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Thiết bị hoạt động");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 162);
        lv_obj_set_width(lv_label_7, 210);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "PHẦN CỨNG");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 184);
        lv_obj_set_width(lv_obj_6, 220);
        lv_obj_set_height(lv_obj_6, 85);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 189);
        lv_obj_set_width(lv_label_8, 74);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Chip");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 104);
        lv_obj_set_y(lv_label_9, 189);
        lv_obj_set_width(lv_label_9, 118);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 210);
        lv_obj_set_width(lv_obj_7, 200);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 22);
        lv_obj_set_y(lv_label_10, 216);
        lv_obj_set_width(lv_label_10, 74);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "CPU");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 104);
        lv_obj_set_y(lv_label_11, 216);
        lv_obj_set_width(lv_label_11, 118);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "240 MHz");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 237);
        lv_obj_set_width(lv_obj_8, 200);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 22);
        lv_obj_set_y(lv_label_12, 244);
        lv_obj_set_width(lv_label_12, 74);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Firmware");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 104);
        lv_obj_set_y(lv_label_13, 244);
        lv_obj_set_width(lv_label_13, 118);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "v1.0.0");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 241);
        lv_obj_set_y(lv_label_14, 61);
        lv_obj_set_width(lv_label_14, 216);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "SỬ DỤNG BỘ NHỚ");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 83);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 150);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 251);
        lv_obj_set_y(lv_label_15, 93);
        lv_obj_set_width(lv_label_15, 70);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "RAM");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 333);
        lv_obj_set_y(lv_label_16, 93);
        lv_obj_set_width(lv_label_16, 124);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "180 / 320 KB");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 251);
        lv_obj_set_y(lv_obj_10, 117);
        lv_obj_set_width(lv_obj_10, 206);
        lv_obj_set_height(lv_obj_10, 7);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 251);
        lv_obj_set_y(lv_obj_11, 117);
        lv_obj_set_width(lv_obj_11, 116);
        lv_obj_set_height(lv_obj_11, 7);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 251);
        lv_obj_set_y(lv_label_17, 136);
        lv_obj_set_width(lv_label_17, 70);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "Flash");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 333);
        lv_obj_set_y(lv_label_18, 136);
        lv_obj_set_width(lv_label_18, 124);
        lv_obj_set_height(lv_label_18, 19);
        lv_label_set_text(lv_label_18, "5.2 / 16 MB");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 251);
        lv_obj_set_y(lv_obj_12, 160);
        lv_obj_set_width(lv_obj_12, 206);
        lv_obj_set_height(lv_obj_12, 7);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 251);
        lv_obj_set_y(lv_obj_13, 160);
        lv_obj_set_width(lv_obj_13, 67);
        lv_obj_set_height(lv_obj_13, 7);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 251);
        lv_obj_set_y(lv_label_19, 179);
        lv_obj_set_width(lv_label_19, 70);
        lv_obj_set_height(lv_label_19, 19);
        lv_label_set_text(lv_label_19, "PSRAM");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 333);
        lv_obj_set_y(lv_label_20, 179);
        lv_obj_set_width(lv_label_20, 124);
        lv_obj_set_height(lv_label_20, 19);
        lv_label_set_text(lv_label_20, "2.1 / 8 MB");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 251);
        lv_obj_set_y(lv_obj_14, 203);
        lv_obj_set_width(lv_obj_14, 206);
        lv_obj_set_height(lv_obj_14, 7);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 251);
        lv_obj_set_y(lv_obj_15, 203);
        lv_obj_set_width(lv_obj_15, 54);
        lv_obj_set_height(lv_obj_15, 7);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_radius(lv_obj_15, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 240);
        lv_obj_set_y(lv_obj_16, 242);
        lv_obj_set_width(lv_obj_16, 228);
        lv_obj_set_height(lv_obj_16, 27);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_16, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_16, 1, 0);
        lv_obj_set_style_radius(lv_obj_16, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 251);
        lv_obj_set_y(lv_label_21, 246);
        lv_obj_set_width(lv_label_21, 206);
        lv_obj_set_height(lv_label_21, 19);
        lv_label_set_text(lv_label_21, "Hoạt động: 2 ngày 14 giờ");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_device_refresh_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_device_refresh_landscape, "btn_device_refresh_landscape");
        lv_obj_set_x(btn_device_refresh_landscape, 12);
        lv_obj_set_y(btn_device_refresh_landscape, 278);
        lv_obj_set_width(btn_device_refresh_landscape, 456);
        lv_obj_set_height(btn_device_refresh_landscape, 30);
        lv_obj_set_style_bg_color(btn_device_refresh_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_device_refresh_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_device_refresh_landscape, 0, 0);
        lv_obj_set_style_radius(btn_device_refresh_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_device_refresh_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_device_refresh_landscape, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_device_refresh_landscape);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Làm mới thông tin thiết bị");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

