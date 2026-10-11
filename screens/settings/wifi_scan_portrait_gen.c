/**
 * @file wifi_scan_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_scan_portrait_gen.h"
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

lv_obj_t * wifi_scan_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_scan_portrait_#");
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
        lv_obj_set_y(lv_label_0, 5);
        lv_obj_set_width(lv_label_0, 235);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "Chọn mạng Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 230);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Tìm kiếm mạng gần thiết bị");
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

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 68);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 55);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 77);
        lv_obj_set_width(lv_obj_4, 36);
        lv_obj_set_height(lv_obj_4, 36);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 26);
        lv_obj_set_y(lv_image_1, 81);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 68);
        lv_obj_set_y(lv_label_2, 75);
        lv_obj_set_width(lv_label_2, 155);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Đã tìm thấy 5 mạng");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 68);
        lv_obj_set_y(lv_label_3, 96);
        lv_obj_set_width(lv_label_3, 167);
        lv_obj_set_height(lv_label_3, 17);
        lv_label_set_text(lv_label_3, "Chọn một mạng để kết nối");
        lv_obj_set_style_text_font(lv_label_3, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 268);
        lv_obj_set_y(lv_obj_5, 89);
        lv_obj_set_width(lv_obj_5, 7);
        lv_obj_set_height(lv_obj_5, 7);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 278);
        lv_obj_set_y(lv_label_4, 84);
        lv_obj_set_width(lv_label_4, 23);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "OK");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 131);
        lv_obj_set_width(lv_label_5, 205);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "MẠNG KHẢ DỤNG");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 250);
        lv_obj_set_y(lv_label_6, 131);
        lv_obj_set_width(lv_label_6, 57);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "5 mạng");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 156);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 49);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 21);
        lv_obj_set_y(lv_obj_7, 164);
        lv_obj_set_width(lv_obj_7, 33);
        lv_obj_set_height(lv_obj_7, 33);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 23);
        lv_obj_set_y(lv_image_2, 166);
        lv_obj_set_width(lv_image_2, 28);
        lv_obj_set_height(lv_image_2, 28);
        lv_image_set_src(lv_image_2, boot_icon_wifi);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 63);
        lv_obj_set_y(lv_label_7, 161);
        lv_obj_set_width(lv_label_7, 165);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 63);
        lv_obj_set_y(lv_label_8, 181);
        lv_obj_set_width(lv_label_8, 165);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Đã kết nối · -48 dBm");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 233);
        lv_obj_set_y(lv_label_9, 171);
        lv_obj_set_width(lv_label_9, 62);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Đang dùng");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 210);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 49);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 21);
        lv_obj_set_y(lv_obj_9, 218);
        lv_obj_set_width(lv_obj_9, 33);
        lv_obj_set_height(lv_obj_9, 33);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 23);
        lv_obj_set_y(lv_image_3, 220);
        lv_obj_set_width(lv_image_3, 28);
        lv_obj_set_height(lv_image_3, 28);
        lv_image_set_src(lv_image_3, boot_icon_wifi);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 63);
        lv_obj_set_y(lv_label_10, 215);
        lv_obj_set_width(lv_label_10, 186);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Home_Network");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 63);
        lv_obj_set_y(lv_label_11, 235);
        lv_obj_set_width(lv_label_11, 166);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "Bảo mật · -55 dBm");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 272);
        lv_obj_set_y(lv_image_4, 222);
        lv_obj_set_width(lv_image_4, 24);
        lv_obj_set_height(lv_image_4, 24);
        lv_image_set_src(lv_image_4, ui_next);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 12);
        lv_obj_set_y(lv_obj_10, 264);
        lv_obj_set_width(lv_obj_10, 296);
        lv_obj_set_height(lv_obj_10, 49);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 21);
        lv_obj_set_y(lv_obj_11, 272);
        lv_obj_set_width(lv_obj_11, 33);
        lv_obj_set_height(lv_obj_11, 33);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_radius(lv_obj_11, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 23);
        lv_obj_set_y(lv_image_5, 274);
        lv_obj_set_width(lv_image_5, 28);
        lv_obj_set_height(lv_image_5, 28);
        lv_image_set_src(lv_image_5, boot_icon_wifi);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 63);
        lv_obj_set_y(lv_label_12, 269);
        lv_obj_set_width(lv_label_12, 186);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Office_2.4G");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 63);
        lv_obj_set_y(lv_label_13, 289);
        lv_obj_set_width(lv_label_13, 166);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "Bảo mật · -63 dBm");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 272);
        lv_obj_set_y(lv_image_6, 276);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 12);
        lv_obj_set_y(lv_obj_12, 318);
        lv_obj_set_width(lv_obj_12, 296);
        lv_obj_set_height(lv_obj_12, 49);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_12, 1, 0);
        lv_obj_set_style_radius(lv_obj_12, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 21);
        lv_obj_set_y(lv_obj_13, 326);
        lv_obj_set_width(lv_obj_13, 33);
        lv_obj_set_height(lv_obj_13, 33);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 23);
        lv_obj_set_y(lv_image_7, 328);
        lv_obj_set_width(lv_image_7, 28);
        lv_obj_set_height(lv_image_7, 28);
        lv_image_set_src(lv_image_7, boot_icon_wifi);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 63);
        lv_obj_set_y(lv_label_14, 323);
        lv_obj_set_width(lv_label_14, 186);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Guest_WiFi");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 63);
        lv_obj_set_y(lv_label_15, 343);
        lv_obj_set_width(lv_label_15, 166);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Không mật khẩu · -71 dBm");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 272);
        lv_obj_set_y(lv_image_8, 330);
        lv_obj_set_width(lv_image_8, 24);
        lv_obj_set_height(lv_image_8, 24);
        lv_image_set_src(lv_image_8, ui_next);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 12);
        lv_obj_set_y(lv_obj_14, 372);
        lv_obj_set_width(lv_obj_14, 296);
        lv_obj_set_height(lv_obj_14, 49);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_14, 1, 0);
        lv_obj_set_style_radius(lv_obj_14, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 21);
        lv_obj_set_y(lv_obj_15, 380);
        lv_obj_set_width(lv_obj_15, 33);
        lv_obj_set_height(lv_obj_15, 33);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_radius(lv_obj_15, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_image_9 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_9, 23);
        lv_obj_set_y(lv_image_9, 382);
        lv_obj_set_width(lv_image_9, 28);
        lv_obj_set_height(lv_image_9, 28);
        lv_image_set_src(lv_image_9, boot_icon_wifi);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 63);
        lv_obj_set_y(lv_label_16, 377);
        lv_obj_set_width(lv_label_16, 186);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "IoT_Devices");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 63);
        lv_obj_set_y(lv_label_17, 397);
        lv_obj_set_width(lv_label_17, 166);
        lv_obj_set_height(lv_label_17, 17);
        lv_label_set_text(lv_label_17, "Bảo mật · -79 dBm");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_10 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_10, 272);
        lv_obj_set_y(lv_image_10, 384);
        lv_obj_set_width(lv_image_10, 24);
        lv_obj_set_height(lv_image_10, 24);
        lv_image_set_src(lv_image_10, ui_next);

        lv_obj_t * btn_wifi_scan_back = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_scan_back, "btn_wifi_scan_back");
        lv_obj_set_x(btn_wifi_scan_back, 12);
        lv_obj_set_y(btn_wifi_scan_back, 432);
        lv_obj_set_width(btn_wifi_scan_back, 105);
        lv_obj_set_height(btn_wifi_scan_back, 38);
        lv_obj_set_style_bg_color(btn_wifi_scan_back, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_wifi_scan_back, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_wifi_scan_back, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_wifi_scan_back, 1, 0);
        lv_obj_set_style_radius(btn_wifi_scan_back, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_scan_back, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_scan_back, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_wifi_scan_back);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Quay lại");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_wifi_rescan = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_rescan, "btn_wifi_rescan");
        lv_obj_set_x(btn_wifi_rescan, 125);
        lv_obj_set_y(btn_wifi_rescan, 432);
        lv_obj_set_width(btn_wifi_rescan, 183);
        lv_obj_set_height(btn_wifi_rescan, 38);
        lv_obj_set_style_bg_color(btn_wifi_rescan, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_wifi_rescan, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_wifi_rescan, 0, 0);
        lv_obj_set_style_radius(btn_wifi_rescan, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_rescan, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_rescan, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_wifi_rescan);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "Quét lại mạng");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

