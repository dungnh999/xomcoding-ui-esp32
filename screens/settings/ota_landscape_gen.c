/**
 * @file ota_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "ota_landscape_gen.h"
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

lv_obj_t * ota_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "ota_landscape_#");
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
        lv_label_set_text(lv_label_0, "Cập nhật Firmware");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 285);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Cập nhật phần mềm thiết bị OTA");
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
        lv_obj_set_width(lv_label_2, 211);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THÔNG TIN FIRMWARE");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 77);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 99);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 110);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "OTA");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 70);
        lv_obj_set_y(lv_label_4, 96);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 70);
        lv_obj_set_y(lv_label_5, 122);
        lv_obj_set_width(lv_label_5, 151);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Cập nhật qua Wi-Fi");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 169);
        lv_obj_set_width(lv_label_6, 211);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "PHIÊN BẢN PHẦN MỀM");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 191);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 77);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 200);
        lv_obj_set_width(lv_label_7, 137);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Phiên bản hiện tại");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 161);
        lv_obj_set_y(lv_label_8, 200);
        lv_obj_set_width(lv_label_8, 60);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "v1.0.0");
        lv_obj_set_style_text_font(lv_label_8, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 228);
        lv_obj_set_width(lv_obj_6, 200);
        lv_obj_set_height(lv_obj_6, 1);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 22);
        lv_obj_set_y(lv_label_9, 240);
        lv_obj_set_width(lv_label_9, 118);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Mới nhất");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 136);
        lv_obj_set_y(lv_label_10, 240);
        lv_obj_set_width(lv_label_10, 85);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Chưa kiểm tra");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 241);
        lv_obj_set_y(lv_label_11, 61);
        lv_obj_set_width(lv_label_11, 216);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "TRẠNG THÁI CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 83);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 84);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 251);
        lv_obj_set_y(lv_obj_8, 102);
        lv_obj_set_width(lv_obj_8, 7);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 264);
        lv_obj_set_y(lv_label_12, 94);
        lv_obj_set_width(lv_label_12, 192);
        lv_obj_set_height(lv_label_12, 21);
        lv_label_set_text(lv_label_12, "Chưa kiểm tra OTA");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 264);
        lv_obj_set_y(lv_label_13, 120);
        lv_obj_set_width(lv_label_13, 190);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Kết nối Wi-Fi để kiểm tra");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 251);
        lv_obj_set_y(lv_obj_9, 146);
        lv_obj_set_width(lv_obj_9, 206);
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 251);
        lv_obj_set_y(lv_label_14, 149);
        lv_obj_set_width(lv_label_14, 206);
        lv_obj_set_height(lv_label_14, 16);
        lv_label_set_text(lv_label_14, "Trạng thái: Chưa thực hiện");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 241);
        lv_obj_set_y(lv_label_15, 177);
        lv_obj_set_width(lv_label_15, 216);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "LƯU Ý TRƯỚC KHI OTA");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 240);
        lv_obj_set_y(lv_obj_10, 199);
        lv_obj_set_width(lv_obj_10, 228);
        lv_obj_set_height(lv_obj_10, 69);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 251);
        lv_obj_set_y(lv_obj_11, 210);
        lv_obj_set_width(lv_obj_11, 3);
        lv_obj_set_height(lv_obj_11, 46);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 263);
        lv_obj_set_y(lv_label_16, 204);
        lv_obj_set_width(lv_label_16, 192);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "Cập nhật an toàn");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 263);
        lv_obj_set_y(lv_label_17, 228);
        lv_obj_set_width(lv_label_17, 194);
        lv_obj_set_height(lv_label_17, 17);
        lv_label_set_text(lv_label_17, "Giữ nguồn điện ổn định");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 263);
        lv_obj_set_y(lv_label_18, 246);
        lv_obj_set_width(lv_label_18, 194);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Không tắt máy khi OTA");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_ota_back_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ota_back_landscape, "btn_ota_back_landscape");
        lv_obj_set_x(btn_ota_back_landscape, 12);
        lv_obj_set_y(btn_ota_back_landscape, 278);
        lv_obj_set_width(btn_ota_back_landscape, 220);
        lv_obj_set_height(btn_ota_back_landscape, 30);
        lv_obj_set_style_bg_color(btn_ota_back_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_ota_back_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_ota_back_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_ota_back_landscape, 1, 0);
        lv_obj_set_style_radius(btn_ota_back_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_ota_back_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_ota_back_landscape, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_ota_back_landscape);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "Quay lại");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_ota_check_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ota_check_landscape, "btn_ota_check_landscape");
        lv_obj_set_x(btn_ota_check_landscape, 240);
        lv_obj_set_y(btn_ota_check_landscape, 278);
        lv_obj_set_width(btn_ota_check_landscape, 228);
        lv_obj_set_height(btn_ota_check_landscape, 30);
        lv_obj_set_style_bg_color(btn_ota_check_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_ota_check_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ota_check_landscape, 0, 0);
        lv_obj_set_style_radius(btn_ota_check_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_ota_check_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_ota_check_landscape, 0, 0);
        lv_obj_t * lv_label_20 = lv_label_create(btn_ota_check_landscape);
        lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_20, "Kiểm tra OTA");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

