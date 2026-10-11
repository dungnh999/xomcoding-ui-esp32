/**
 * @file settings_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_landscape_gen.h"
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

lv_obj_t * settings_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "settings_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 12);
        lv_obj_set_y(lv_obj_1, 10);
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
        lv_obj_set_y(lv_image_0, 15);
        lv_obj_set_width(lv_image_0, 24);
        lv_obj_set_height(lv_image_0, 24);
        lv_image_set_src(lv_image_0, ui_back);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 56);
        lv_obj_set_y(lv_label_0, 5);
        lv_obj_set_width(lv_label_0, 235);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cài đặt");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 33);
        lv_obj_set_width(lv_label_1, 245);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Xóm Coding · ESP32-S3");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 55);
        lv_obj_set_width(lv_obj_2, 456);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 13);
        lv_obj_set_y(lv_label_2, 61);
        lv_obj_set_width(lv_label_2, 200);
        lv_obj_set_height(lv_label_2, 17);
        lv_label_set_text(lv_label_2, "THIẾT LẬP THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 222);
        lv_obj_set_height(lv_obj_3, 49);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 20);
        lv_obj_set_y(lv_obj_4, 92);
        lv_obj_set_width(lv_obj_4, 32);
        lv_obj_set_height(lv_obj_4, 32);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 22);
        lv_obj_set_y(lv_image_1, 94);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 59);
        lv_obj_set_y(lv_label_3, 90);
        lv_obj_set_width(lv_label_3, 142);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Wi-Fi và mạng");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 59);
        lv_obj_set_y(lv_label_4, 109);
        lv_obj_set_width(lv_label_4, 143);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "SSID, IP, DNS");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 202);
        lv_obj_set_y(lv_image_2, 96);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 139);
        lv_obj_set_width(lv_obj_5, 222);
        lv_obj_set_height(lv_obj_5, 49);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 20);
        lv_obj_set_y(lv_obj_6, 147);
        lv_obj_set_width(lv_obj_6, 32);
        lv_obj_set_height(lv_obj_6, 32);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 21);
        lv_obj_set_y(lv_label_5, 153);
        lv_obj_set_width(lv_label_5, 30);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "03");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 59);
        lv_obj_set_y(lv_label_6, 145);
        lv_obj_set_width(lv_label_6, 142);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Thời tiết và vị trí");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 59);
        lv_obj_set_y(lv_label_7, 164);
        lv_obj_set_width(lv_label_7, 143);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Thành phố, API");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 202);
        lv_obj_set_y(lv_image_3, 151);
        lv_obj_set_width(lv_image_3, 24);
        lv_obj_set_height(lv_image_3, 24);
        lv_image_set_src(lv_image_3, ui_next);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 194);
        lv_obj_set_width(lv_obj_7, 222);
        lv_obj_set_height(lv_obj_7, 49);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 20);
        lv_obj_set_y(lv_obj_8, 202);
        lv_obj_set_width(lv_obj_8, 32);
        lv_obj_set_height(lv_obj_8, 32);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x343025), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 21);
        lv_obj_set_y(lv_label_8, 208);
        lv_obj_set_width(lv_label_8, 30);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "05");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 59);
        lv_obj_set_y(lv_label_9, 200);
        lv_obj_set_width(lv_label_9, 142);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Ngày giờ và múi giờ");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 59);
        lv_obj_set_y(lv_label_10, 219);
        lv_obj_set_width(lv_label_10, 143);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "NTP, GMT+7, giờ");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 202);
        lv_obj_set_y(lv_image_4, 206);
        lv_obj_set_width(lv_image_4, 24);
        lv_obj_set_height(lv_image_4, 24);
        lv_image_set_src(lv_image_4, ui_next);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 12);
        lv_obj_set_y(lv_obj_9, 249);
        lv_obj_set_width(lv_obj_9, 222);
        lv_obj_set_height(lv_obj_9, 49);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x49363b), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 20);
        lv_obj_set_y(lv_obj_10, 257);
        lv_obj_set_width(lv_obj_10, 32);
        lv_obj_set_height(lv_obj_10, 32);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 21);
        lv_obj_set_y(lv_label_11, 263);
        lv_obj_set_width(lv_label_11, 30);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "07");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 59);
        lv_obj_set_y(lv_label_12, 255);
        lv_obj_set_width(lv_label_12, 142);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Bảo mật và hệ thống");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 59);
        lv_obj_set_y(lv_label_13, 274);
        lv_obj_set_width(lv_label_13, 143);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "OTA, khởi động, reset");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 202);
        lv_obj_set_y(lv_image_5, 261);
        lv_obj_set_width(lv_image_5, 24);
        lv_obj_set_height(lv_image_5, 24);
        lv_image_set_src(lv_image_5, ui_next);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 246);
        lv_obj_set_y(lv_obj_11, 84);
        lv_obj_set_width(lv_obj_11, 222);
        lv_obj_set_height(lv_obj_11, 49);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 254);
        lv_obj_set_y(lv_obj_12, 92);
        lv_obj_set_width(lv_obj_12, 32);
        lv_obj_set_height(lv_obj_12, 32);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x302529), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 255);
        lv_obj_set_y(lv_label_14, 98);
        lv_obj_set_width(lv_label_14, 30);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "02");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 293);
        lv_obj_set_y(lv_label_15, 90);
        lv_obj_set_width(lv_label_15, 141);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Màn hình và giao diện");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 293);
        lv_obj_set_y(lv_label_16, 109);
        lv_obj_set_width(lv_label_16, 141);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "Độ sáng, xoay, màn chờ");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 436);
        lv_obj_set_y(lv_image_6, 96);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 246);
        lv_obj_set_y(lv_obj_13, 139);
        lv_obj_set_width(lv_obj_13, 222);
        lv_obj_set_height(lv_obj_13, 49);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 254);
        lv_obj_set_y(lv_obj_14, 147);
        lv_obj_set_width(lv_obj_14, 32);
        lv_obj_set_height(lv_obj_14, 32);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x203730), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 255);
        lv_obj_set_y(lv_label_17, 153);
        lv_obj_set_width(lv_label_17, 30);
        lv_obj_set_height(lv_label_17, 18);
        lv_label_set_text(lv_label_17, "04");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 293);
        lv_obj_set_y(lv_label_18, 145);
        lv_obj_set_width(lv_label_18, 141);
        lv_obj_set_height(lv_label_18, 19);
        lv_label_set_text(lv_label_18, "Dữ liệu và dịch vụ");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 293);
        lv_obj_set_y(lv_label_19, 164);
        lv_obj_set_width(lv_label_19, 141);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "NAS, API, đồng bộ");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 436);
        lv_obj_set_y(lv_image_7, 151);
        lv_obj_set_width(lv_image_7, 24);
        lv_obj_set_height(lv_image_7, 24);
        lv_image_set_src(lv_image_7, ui_next);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 246);
        lv_obj_set_y(lv_obj_15, 194);
        lv_obj_set_width(lv_obj_15, 222);
        lv_obj_set_height(lv_obj_15, 49);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_15, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_15, 1, 0);
        lv_obj_set_style_radius(lv_obj_15, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 254);
        lv_obj_set_y(lv_obj_16, 202);
        lv_obj_set_width(lv_obj_16, 32);
        lv_obj_set_height(lv_obj_16, 32);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x292b40), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_radius(lv_obj_16, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 255);
        lv_obj_set_y(lv_label_20, 208);
        lv_obj_set_width(lv_label_20, 30);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "06");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xa5b4fc), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 293);
        lv_obj_set_y(lv_label_21, 200);
        lv_obj_set_width(lv_label_21, 141);
        lv_obj_set_height(lv_label_21, 19);
        lv_label_set_text(lv_label_21, "Thiết bị và bộ nhớ");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 293);
        lv_obj_set_y(lv_label_22, 219);
        lv_obj_set_width(lv_label_22, 141);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "Chip, Flash, PSRAM");
        lv_obj_set_style_text_font(lv_label_22, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 436);
        lv_obj_set_y(lv_image_8, 206);
        lv_obj_set_width(lv_image_8, 24);
        lv_obj_set_height(lv_image_8, 24);
        lv_image_set_src(lv_image_8, ui_next);

        lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_17, 246);
        lv_obj_set_y(lv_obj_17, 249);
        lv_obj_set_width(lv_obj_17, 222);
        lv_obj_set_height(lv_obj_17, 49);
        lv_obj_set_style_bg_color(lv_obj_17, lv_color_hex(0x101b29), 0);
        lv_obj_set_style_bg_opa(lv_obj_17, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_17, lv_color_hex(0x223044), 0);
        lv_obj_set_style_border_width(lv_obj_17, 1, 0);
        lv_obj_set_style_radius(lv_obj_17, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_17, 0, 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 260);
        lv_obj_set_y(lv_label_23, 257);
        lv_obj_set_width(lv_label_23, 190);
        lv_obj_set_height(lv_label_23, 18);
        lv_label_set_text(lv_label_23, "XÓM CODING");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xa52a26), 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 260);
        lv_obj_set_y(lv_label_24, 276);
        lv_obj_set_width(lv_label_24, 190);
        lv_obj_set_height(lv_label_24, 16);
        lv_label_set_text(lv_label_24, "Code local, Connect global.");
        lv_obj_set_style_text_font(lv_label_24, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

