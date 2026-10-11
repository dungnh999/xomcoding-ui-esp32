/**
 * @file settings_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "settings_portrait_gen.h"
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

lv_obj_t * settings_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "settings_portrait_#");
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
        lv_obj_set_width(lv_label_0, 200);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cài đặt");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 220);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Xóm Coding · ESP32-S3");
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
        lv_obj_set_height(lv_label_2, 17);
        lv_label_set_text(lv_label_2, "THIẾT LẬP THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 89);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 49);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 21);
        lv_obj_set_y(lv_obj_4, 98);
        lv_obj_set_width(lv_obj_4, 32);
        lv_obj_set_height(lv_obj_4, 32);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 23);
        lv_obj_set_y(lv_image_1, 100);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 62);
        lv_obj_set_y(lv_label_3, 95);
        lv_obj_set_width(lv_label_3, 195);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Wi-Fi và mạng");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 62);
        lv_obj_set_y(lv_label_4, 114);
        lv_obj_set_width(lv_label_4, 195);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "SSID, mật khẩu, IP, DNS");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 274);
        lv_obj_set_y(lv_image_2, 101);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 143);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 49);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 21);
        lv_obj_set_y(lv_obj_6, 152);
        lv_obj_set_width(lv_obj_6, 32);
        lv_obj_set_height(lv_obj_6, 32);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x302529), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 158);
        lv_obj_set_width(lv_label_5, 30);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "02");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 62);
        lv_obj_set_y(lv_label_6, 149);
        lv_obj_set_width(lv_label_6, 195);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Màn hình và giao diện");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 62);
        lv_obj_set_y(lv_label_7, 168);
        lv_obj_set_width(lv_label_7, 195);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Độ sáng, xoay, màn chờ");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 274);
        lv_obj_set_y(lv_image_3, 155);
        lv_obj_set_width(lv_image_3, 24);
        lv_obj_set_height(lv_image_3, 24);
        lv_image_set_src(lv_image_3, ui_next);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 197);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 49);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 21);
        lv_obj_set_y(lv_obj_8, 206);
        lv_obj_set_width(lv_obj_8, 32);
        lv_obj_set_height(lv_obj_8, 32);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 212);
        lv_obj_set_width(lv_label_8, 30);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "03");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 62);
        lv_obj_set_y(lv_label_9, 203);
        lv_obj_set_width(lv_label_9, 195);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Thời tiết và vị trí");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 62);
        lv_obj_set_y(lv_label_10, 222);
        lv_obj_set_width(lv_label_10, 195);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "Thành phố, nhiệt độ, API");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 274);
        lv_obj_set_y(lv_image_4, 209);
        lv_obj_set_width(lv_image_4, 24);
        lv_obj_set_height(lv_image_4, 24);
        lv_image_set_src(lv_image_4, ui_next);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 12);
        lv_obj_set_y(lv_obj_9, 251);
        lv_obj_set_width(lv_obj_9, 296);
        lv_obj_set_height(lv_obj_9, 49);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 21);
        lv_obj_set_y(lv_obj_10, 260);
        lv_obj_set_width(lv_obj_10, 32);
        lv_obj_set_height(lv_obj_10, 32);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x203730), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 22);
        lv_obj_set_y(lv_label_11, 266);
        lv_obj_set_width(lv_label_11, 30);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "04");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 62);
        lv_obj_set_y(lv_label_12, 257);
        lv_obj_set_width(lv_label_12, 195);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Dữ liệu và dịch vụ");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 62);
        lv_obj_set_y(lv_label_13, 276);
        lv_obj_set_width(lv_label_13, 195);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "NAS, API, đồng bộ dữ liệu");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 274);
        lv_obj_set_y(lv_image_5, 263);
        lv_obj_set_width(lv_image_5, 24);
        lv_obj_set_height(lv_image_5, 24);
        lv_image_set_src(lv_image_5, ui_next);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 305);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 49);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 21);
        lv_obj_set_y(lv_obj_12, 314);
        lv_obj_set_width(lv_obj_12, 32);
        lv_obj_set_height(lv_obj_12, 32);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x343025), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 22);
        lv_obj_set_y(lv_label_14, 320);
        lv_obj_set_width(lv_label_14, 30);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "05");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 62);
        lv_obj_set_y(lv_label_15, 311);
        lv_obj_set_width(lv_label_15, 195);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Ngày giờ và múi giờ");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 62);
        lv_obj_set_y(lv_label_16, 330);
        lv_obj_set_width(lv_label_16, 195);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "NTP, GMT+7, định dạng giờ");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 274);
        lv_obj_set_y(lv_image_6, 317);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 12);
        lv_obj_set_y(lv_obj_13, 359);
        lv_obj_set_width(lv_obj_13, 296);
        lv_obj_set_height(lv_obj_13, 49);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 21);
        lv_obj_set_y(lv_obj_14, 368);
        lv_obj_set_width(lv_obj_14, 32);
        lv_obj_set_height(lv_obj_14, 32);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x292b40), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 22);
        lv_obj_set_y(lv_label_17, 374);
        lv_obj_set_width(lv_label_17, 30);
        lv_obj_set_height(lv_label_17, 18);
        lv_label_set_text(lv_label_17, "06");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xa5b4fc), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 62);
        lv_obj_set_y(lv_label_18, 365);
        lv_obj_set_width(lv_label_18, 195);
        lv_obj_set_height(lv_label_18, 19);
        lv_label_set_text(lv_label_18, "Thiết bị và bộ nhớ");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 62);
        lv_obj_set_y(lv_label_19, 384);
        lv_obj_set_width(lv_label_19, 195);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "Chip, Flash, PSRAM, firmware");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 274);
        lv_obj_set_y(lv_image_7, 371);
        lv_obj_set_width(lv_image_7, 24);
        lv_obj_set_height(lv_image_7, 24);
        lv_image_set_src(lv_image_7, ui_next);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 12);
        lv_obj_set_y(lv_obj_15, 413);
        lv_obj_set_width(lv_obj_15, 296);
        lv_obj_set_height(lv_obj_15, 49);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_15, lv_color_hex(0x49363b), 0);
        lv_obj_set_style_border_width(lv_obj_15, 1, 0);
        lv_obj_set_style_radius(lv_obj_15, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 21);
        lv_obj_set_y(lv_obj_16, 422);
        lv_obj_set_width(lv_obj_16, 32);
        lv_obj_set_height(lv_obj_16, 32);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_radius(lv_obj_16, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 22);
        lv_obj_set_y(lv_label_20, 428);
        lv_obj_set_width(lv_label_20, 30);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "07");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 62);
        lv_obj_set_y(lv_label_21, 419);
        lv_obj_set_width(lv_label_21, 195);
        lv_obj_set_height(lv_label_21, 19);
        lv_label_set_text(lv_label_21, "Bảo mật và hệ thống");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 62);
        lv_obj_set_y(lv_label_22, 438);
        lv_obj_set_width(lv_label_22, 195);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "OTA, khởi động lại, reset");
        lv_obj_set_style_text_font(lv_label_22, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 274);
        lv_obj_set_y(lv_image_8, 425);
        lv_obj_set_width(lv_image_8, 24);
        lv_obj_set_height(lv_image_8, 24);
        lv_image_set_src(lv_image_8, ui_next);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

