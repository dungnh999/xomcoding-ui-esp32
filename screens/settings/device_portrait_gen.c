/**
 * @file device_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "device_portrait_gen.h"
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

lv_obj_t * device_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "device_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 12);
        lv_obj_set_y(lv_obj_1, 12);
        lv_obj_set_width(lv_obj_1, 36);
        lv_obj_set_height(lv_obj_1, 36);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_1, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_1, 1, 0);
        lv_obj_set_style_radius(lv_obj_1, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 18);
        lv_obj_set_y(lv_image_0, 18);
        lv_obj_set_width(lv_image_0, 24);
        lv_obj_set_height(lv_image_0, 24);
        lv_image_set_src(lv_image_0, ui_back);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 58);
        lv_obj_set_y(lv_label_0, 9);
        lv_obj_set_width(lv_label_0, 248);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Thiết bị và bộ nhớ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 240);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Phần cứng và tài nguyên");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 59);
        lv_obj_set_width(lv_obj_2, 296);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 13);
        lv_obj_set_y(lv_label_2, 67);
        lv_obj_set_width(lv_label_2, 230);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THÔNG TIN THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 89);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 67);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 101);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 106);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 72);
        lv_obj_set_y(lv_label_4, 97);
        lv_obj_set_width(lv_label_4, 185);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 72);
        lv_obj_set_y(lv_label_5, 121);
        lv_obj_set_width(lv_label_5, 175);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Firmware v1.0.0");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 264);
        lv_obj_set_y(lv_obj_5, 114);
        lv_obj_set_width(lv_obj_5, 7);
        lv_obj_set_height(lv_obj_5, 7);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 274);
        lv_obj_set_y(lv_label_6, 108);
        lv_obj_set_width(lv_label_6, 27);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "OK");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 164);
        lv_obj_set_width(lv_label_7, 230);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "PHẦN CỨNG");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 186);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 101);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 193);
        lv_obj_set_width(lv_label_8, 104);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Chip");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 130);
        lv_obj_set_y(lv_label_9, 193);
        lv_obj_set_width(lv_label_9, 166);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "ESP32-S3");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 215);
        lv_obj_set_width(lv_obj_7, 272);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 24);
        lv_obj_set_y(lv_label_10, 222);
        lv_obj_set_width(lv_label_10, 116);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "CPU");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 130);
        lv_obj_set_y(lv_label_11, 222);
        lv_obj_set_width(lv_label_11, 166);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "Dual-core 240 MHz");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 24);
        lv_obj_set_y(lv_obj_8, 244);
        lv_obj_set_width(lv_obj_8, 272);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 251);
        lv_obj_set_width(lv_label_12, 116);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Firmware");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 130);
        lv_obj_set_y(lv_label_13, 251);
        lv_obj_set_width(lv_label_13, 166);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "v1.0.0");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 13);
        lv_obj_set_y(lv_label_14, 295);
        lv_obj_set_width(lv_label_14, 230);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "SỬ DỤNG BỘ NHỚ");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 12);
        lv_obj_set_y(lv_obj_9, 317);
        lv_obj_set_width(lv_obj_9, 296);
        lv_obj_set_height(lv_obj_9, 104);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 323);
        lv_obj_set_width(lv_label_15, 70);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "RAM");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 152);
        lv_obj_set_y(lv_label_16, 323);
        lv_obj_set_width(lv_label_16, 144);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "180 / 320 KB");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 24);
        lv_obj_set_y(lv_obj_10, 344);
        lv_obj_set_width(lv_obj_10, 272);
        lv_obj_set_height(lv_obj_10, 6);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 24);
        lv_obj_set_y(lv_obj_11, 344);
        lv_obj_set_width(lv_obj_11, 153);
        lv_obj_set_height(lv_obj_11, 6);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 355);
        lv_obj_set_width(lv_label_17, 70);
        lv_obj_set_height(lv_label_17, 17);
        lv_label_set_text(lv_label_17, "Flash");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 152);
        lv_obj_set_y(lv_label_18, 355);
        lv_obj_set_width(lv_label_18, 144);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "5.2 / 16 MB");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 24);
        lv_obj_set_y(lv_obj_12, 375);
        lv_obj_set_width(lv_obj_12, 272);
        lv_obj_set_height(lv_obj_12, 6);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 24);
        lv_obj_set_y(lv_obj_13, 375);
        lv_obj_set_width(lv_obj_13, 88);
        lv_obj_set_height(lv_obj_13, 6);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 24);
        lv_obj_set_y(lv_label_19, 386);
        lv_obj_set_width(lv_label_19, 70);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "PSRAM");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 152);
        lv_obj_set_y(lv_label_20, 386);
        lv_obj_set_width(lv_label_20, 144);
        lv_obj_set_height(lv_label_20, 17);
        lv_label_set_text(lv_label_20, "2.1 / 8 MB");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 24);
        lv_obj_set_y(lv_obj_14, 406);
        lv_obj_set_width(lv_obj_14, 272);
        lv_obj_set_height(lv_obj_14, 6);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 24);
        lv_obj_set_y(lv_obj_15, 406);
        lv_obj_set_width(lv_obj_15, 71);
        lv_obj_set_height(lv_obj_15, 6);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_radius(lv_obj_15, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 18);
        lv_obj_set_y(lv_label_21, 427);
        lv_obj_set_width(lv_label_21, 284);
        lv_obj_set_height(lv_label_21, 17);
        lv_label_set_text(lv_label_21, "Thời gian hoạt động: 2 ngày 14 giờ");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_device_refresh = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_device_refresh, "btn_device_refresh");
        lv_obj_set_x(btn_device_refresh, 12);
        lv_obj_set_y(btn_device_refresh, 446);
        lv_obj_set_width(btn_device_refresh, 296);
        lv_obj_set_height(btn_device_refresh, 25);
        lv_obj_set_style_bg_color(btn_device_refresh, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_device_refresh, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_device_refresh, 0, 0);
        lv_obj_set_style_radius(btn_device_refresh, 8, 0);
        lv_obj_set_style_shadow_width(btn_device_refresh, 0, 0);
        lv_obj_set_style_pad_all(btn_device_refresh, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_device_refresh);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Làm mới thông tin");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_12, 0);
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

