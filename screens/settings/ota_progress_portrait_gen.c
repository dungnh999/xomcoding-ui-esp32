/**
 * @file ota_progress_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ota_progress_portrait_gen.h"
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

lv_obj_t * ota_progress_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "ota_progress_portrait_#");
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
        lv_label_set_text(lv_label_0, "Đang cập nhật OTA");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Tiến trình cài đặt firmware");
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
        lv_obj_set_y(lv_label_2, 68);
        lv_obj_set_width(lv_label_2, 240);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THIẾT BỊ CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 91);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 66);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 103);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 114);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "OTA");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 74);
        lv_obj_set_y(lv_label_4, 100);
        lv_obj_set_width(lv_label_4, 219);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 74);
        lv_obj_set_y(lv_label_5, 125);
        lv_obj_set_width(lv_label_5, 219);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "v1.0.0 -> v1.1.0");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 167);
        lv_obj_set_width(lv_label_6, 240);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "TIẾN TRÌNH CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 190);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 116);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 200);
        lv_obj_set_width(lv_label_7, 186);
        lv_obj_set_height(lv_label_7, 22);
        lv_label_set_text(lv_label_7, "Đang tải firmware");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * ota_progress_percent = lv_label_create(lv_obj_0);
        lv_obj_set_name(ota_progress_percent, "ota_progress_percent");
        lv_obj_set_x(ota_progress_percent, 218);
        lv_obj_set_y(ota_progress_percent, 194);
        lv_obj_set_width(ota_progress_percent, 78);
        lv_obj_set_height(ota_progress_percent, 30);
        lv_label_set_text(ota_progress_percent, "65%");
        lv_obj_set_style_text_font(ota_progress_percent, be_semibold_20, 0);
        lv_obj_set_style_text_align(ota_progress_percent, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(ota_progress_percent, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 24);
        lv_obj_set_y(lv_obj_6, 235);
        lv_obj_set_width(lv_obj_6, 272);
        lv_obj_set_height(lv_obj_6, 12);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 6, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * ota_progress_fill = lv_obj_create(lv_obj_0);
        lv_obj_set_name(ota_progress_fill, "ota_progress_fill");
        lv_obj_set_x(ota_progress_fill, 24);
        lv_obj_set_y(ota_progress_fill, 235);
        lv_obj_set_width(ota_progress_fill, 177);
        lv_obj_set_height(ota_progress_fill, 12);
        lv_obj_set_style_bg_color(ota_progress_fill, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(ota_progress_fill, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(ota_progress_fill, 0, 0);
        lv_obj_set_style_radius(ota_progress_fill, 6, 0);
        lv_obj_set_style_pad_all(ota_progress_fill, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 258);
        lv_obj_set_width(lv_label_8, 175);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Đã tải: 1.3 / 2.0 MB");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 203);
        lv_obj_set_y(lv_label_9, 258);
        lv_obj_set_width(lv_label_9, 93);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Đang xử lý");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 283);
        lv_obj_set_width(lv_obj_7, 7);
        lv_obj_set_height(lv_obj_7, 7);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 37);
        lv_obj_set_y(lv_label_10, 278);
        lv_obj_set_width(lv_label_10, 256);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Kết nối máy chủ thành công");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 13);
        lv_obj_set_y(lv_label_11, 316);
        lv_obj_set_width(lv_label_11, 240);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "CÁC BƯỚC CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 339);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 77);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 24);
        lv_obj_set_y(lv_obj_9, 350);
        lv_obj_set_width(lv_obj_9, 8);
        lv_obj_set_height(lv_obj_9, 8);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 42);
        lv_obj_set_y(lv_label_12, 344);
        lv_obj_set_width(lv_label_12, 248);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Kiểm tra bản cập nhật");
        lv_obj_set_style_text_font(lv_label_12, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 24);
        lv_obj_set_y(lv_obj_10, 373);
        lv_obj_set_width(lv_obj_10, 8);
        lv_obj_set_height(lv_obj_10, 8);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 42);
        lv_obj_set_y(lv_label_13, 367);
        lv_obj_set_width(lv_label_13, 248);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Đang tải gói firmware");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 24);
        lv_obj_set_y(lv_obj_11, 392);
        lv_obj_set_width(lv_obj_11, 8);
        lv_obj_set_height(lv_obj_11, 8);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 42);
        lv_obj_set_y(lv_label_14, 386);
        lv_obj_set_width(lv_label_14, 248);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Xác minh và cài đặt");
        lv_obj_set_style_text_font(lv_label_14, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 12);
        lv_obj_set_y(lv_obj_12, 422);
        lv_obj_set_width(lv_obj_12, 296);
        lv_obj_set_height(lv_obj_12, 48);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_12, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_12, 1, 0);
        lv_obj_set_style_radius(lv_obj_12, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 23);
        lv_obj_set_y(lv_obj_13, 433);
        lv_obj_set_width(lv_obj_13, 3);
        lv_obj_set_height(lv_obj_13, 26);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0xe28d88), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 35);
        lv_obj_set_y(lv_label_15, 427);
        lv_obj_set_width(lv_label_15, 257);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Không ngắt nguồn thiết bị");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 35);
        lv_obj_set_y(lv_label_16, 449);
        lv_obj_set_width(lv_label_16, 257);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "Thiết bị sẽ khởi động lại khi xong");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

