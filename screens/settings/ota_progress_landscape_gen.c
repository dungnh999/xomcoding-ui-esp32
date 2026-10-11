/**
 * @file ota_progress_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ota_progress_landscape_gen.h"
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

lv_obj_t * ota_progress_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "ota_progress_landscape_#");
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
        lv_obj_set_width(lv_label_0, 310);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Đang cập nhật OTA");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 285);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Tiến trình cài đặt firmware");
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
        lv_label_set_text(lv_label_2, "THIẾT BỊ CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 75);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 98);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 109);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "OTA");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 70);
        lv_obj_set_y(lv_label_4, 95);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 70);
        lv_obj_set_y(lv_label_5, 120);
        lv_obj_set_width(lv_label_5, 152);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "v1.0.0 -> v1.1.0");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 167);
        lv_obj_set_width(lv_label_6, 210);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "TIẾN TRÌNH CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 189);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 118);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 201);
        lv_obj_set_width(lv_label_7, 151);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Đang tải firmware");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * ota_progress_percent_landscape = lv_label_create(lv_obj_0);
        lv_obj_set_name(ota_progress_percent_landscape, "ota_progress_percent_landscape");
        lv_obj_set_x(ota_progress_percent_landscape, 174);
        lv_obj_set_y(ota_progress_percent_landscape, 194);
        lv_obj_set_width(ota_progress_percent_landscape, 47);
        lv_obj_set_height(ota_progress_percent_landscape, 28);
        lv_label_set_text(ota_progress_percent_landscape, "65%");
        lv_obj_set_style_text_font(ota_progress_percent_landscape, be_semibold_20, 0);
        lv_obj_set_style_text_align(ota_progress_percent_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(ota_progress_percent_landscape, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 231);
        lv_obj_set_width(lv_obj_6, 200);
        lv_obj_set_height(lv_obj_6, 10);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * ota_progress_fill_landscape = lv_obj_create(lv_obj_0);
        lv_obj_set_name(ota_progress_fill_landscape, "ota_progress_fill_landscape");
        lv_obj_set_x(ota_progress_fill_landscape, 22);
        lv_obj_set_y(ota_progress_fill_landscape, 231);
        lv_obj_set_width(ota_progress_fill_landscape, 130);
        lv_obj_set_height(ota_progress_fill_landscape, 10);
        lv_obj_set_style_bg_color(ota_progress_fill_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(ota_progress_fill_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(ota_progress_fill_landscape, 0, 0);
        lv_obj_set_style_radius(ota_progress_fill_landscape, 5, 0);
        lv_obj_set_style_pad_all(ota_progress_fill_landscape, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 252);
        lv_obj_set_width(lv_label_8, 194);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Đã tải: 1.3 / 2.0 MB");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 284);
        lv_obj_set_width(lv_obj_7, 7);
        lv_obj_set_height(lv_obj_7, 7);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 35);
        lv_obj_set_y(lv_label_9, 278);
        lv_obj_set_width(lv_label_9, 184);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "Máy chủ đã kết nối");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 216);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "CÁC BƯỚC CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 83);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 126);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 252);
        lv_obj_set_y(lv_obj_9, 104);
        lv_obj_set_width(lv_obj_9, 8);
        lv_obj_set_height(lv_obj_9, 8);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 270);
        lv_obj_set_y(lv_label_11, 96);
        lv_obj_set_width(lv_label_11, 185);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "Kiểm tra bản cập nhật");
        lv_obj_set_style_text_font(lv_label_11, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 251);
        lv_obj_set_y(lv_obj_10, 125);
        lv_obj_set_width(lv_obj_10, 206);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 252);
        lv_obj_set_y(lv_obj_11, 144);
        lv_obj_set_width(lv_obj_11, 8);
        lv_obj_set_height(lv_obj_11, 8);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 270);
        lv_obj_set_y(lv_label_12, 136);
        lv_obj_set_width(lv_label_12, 185);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Đang tải firmware");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 251);
        lv_obj_set_y(lv_obj_12, 165);
        lv_obj_set_width(lv_obj_12, 206);
        lv_obj_set_height(lv_obj_12, 1);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 252);
        lv_obj_set_y(lv_obj_13, 184);
        lv_obj_set_width(lv_obj_13, 8);
        lv_obj_set_height(lv_obj_13, 8);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 270);
        lv_obj_set_y(lv_label_13, 176);
        lv_obj_set_width(lv_label_13, 185);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "Xác minh và cài đặt");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 241);
        lv_obj_set_y(lv_label_14, 216);
        lv_obj_set_width(lv_label_14, 216);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "LƯU Ý AN TOÀN");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 240);
        lv_obj_set_y(lv_obj_14, 238);
        lv_obj_set_width(lv_obj_14, 228);
        lv_obj_set_height(lv_obj_14, 69);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_14, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_14, 1, 0);
        lv_obj_set_style_radius(lv_obj_14, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 251);
        lv_obj_set_y(lv_obj_15, 251);
        lv_obj_set_width(lv_obj_15, 3);
        lv_obj_set_height(lv_obj_15, 43);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0xe28d88), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_radius(lv_obj_15, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 263);
        lv_obj_set_y(lv_label_15, 244);
        lv_obj_set_width(lv_label_15, 192);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "Không ngắt nguồn");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 263);
        lv_obj_set_y(lv_label_16, 268);
        lv_obj_set_width(lv_label_16, 192);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "Đang cập nhật firmware");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 263);
        lv_obj_set_y(lv_label_17, 286);
        lv_obj_set_width(lv_label_17, 192);
        lv_obj_set_height(lv_label_17, 16);
        lv_label_set_text(lv_label_17, "Máy sẽ tự khởi động lại");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xe28d88), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

