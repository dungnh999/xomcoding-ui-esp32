/**
 * @file network_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "network_landscape_gen.h"
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

lv_obj_t * network_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "network_landscape_#");
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
        lv_obj_set_width(lv_label_0, 175);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "Mạng & Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 191);
        lv_obj_set_y(lv_label_1, 13);
        lv_obj_set_width(lv_label_1, 144);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết kết nối");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 402);
        lv_obj_set_y(lv_obj_1, 19);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 415);
        lv_obj_set_y(lv_label_2, 12);
        lv_obj_set_width(lv_label_2, 53);
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
        lv_obj_set_y(lv_obj_3, 50);
        lv_obj_set_width(lv_obj_3, 226);
        lv_obj_set_height(lv_obj_3, 91);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 22);
        lv_obj_set_y(lv_image_0, 60);
        lv_obj_set_width(lv_image_0, 20);
        lv_obj_set_height(lv_image_0, 20);
        lv_image_set_src(lv_image_0, boot_icon_wifi);
        lv_obj_set_style_image_recolor(lv_image_0, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 49);
        lv_obj_set_y(lv_label_3, 60);
        lv_obj_set_width(lv_label_3, 119);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 176);
        lv_obj_set_y(lv_obj_4, 67);
        lv_obj_set_width(lv_obj_4, 5);
        lv_obj_set_height(lv_obj_4, 5);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 186);
        lv_obj_set_y(lv_label_4, 60);
        lv_obj_set_width(lv_label_4, 38);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Online");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 85);
        lv_obj_set_width(lv_obj_5, 202);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 92);
        lv_obj_set_width(lv_label_5, 59);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Tên Wi-Fi");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 82);
        lv_obj_set_y(lv_label_6, 92);
        lv_obj_set_width(lv_label_6, 142);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "XomCoding_WiFi");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 114);
        lv_obj_set_width(lv_label_7, 65);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 88);
        lv_obj_set_y(lv_label_8, 114);
        lv_obj_set_width(lv_label_8, 136);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "192.168.1.50");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 10);
        lv_obj_set_y(lv_obj_6, 149);
        lv_obj_set_width(lv_obj_6, 226);
        lv_obj_set_height(lv_obj_6, 70);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 22);
        lv_obj_set_y(lv_image_1, 159);
        lv_obj_set_width(lv_image_1, 18);
        lv_obj_set_height(lv_image_1, 18);
        lv_image_set_src(lv_image_1, boot_icon_wifi);
        lv_obj_set_style_image_recolor(lv_image_1, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 47);
        lv_obj_set_y(lv_label_9, 156);
        lv_obj_set_width(lv_label_9, 148);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Cường độ tín hiệu");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 196);
        lv_obj_set_y(lv_label_10, 159);
        lv_obj_set_width(lv_label_10, 28);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Tốt");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 22);
        lv_obj_set_y(lv_label_11, 183);
        lv_obj_set_width(lv_label_11, 111);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "RSSI: -56 dBm");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 145);
        lv_obj_set_y(lv_label_12, 183);
        lv_obj_set_width(lv_label_12, 79);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "2.4 GHz");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 205);
        lv_obj_set_width(lv_obj_7, 202);
        lv_obj_set_height(lv_obj_7, 5);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 205);
        lv_obj_set_width(lv_obj_8, 152);
        lv_obj_set_height(lv_obj_8, 5);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 10);
        lv_obj_set_y(lv_obj_9, 227);
        lv_obj_set_width(lv_obj_9, 226);
        lv_obj_set_height(lv_obj_9, 79);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 22);
        lv_obj_set_y(lv_image_2, 237);
        lv_obj_set_width(lv_image_2, 18);
        lv_obj_set_height(lv_image_2, 18);
        lv_image_set_src(lv_image_2, home_icon_network);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 47);
        lv_obj_set_y(lv_label_13, 235);
        lv_obj_set_width(lv_label_13, 133);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Lưu lượng mạng");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 185);
        lv_obj_set_y(lv_obj_10, 244);
        lv_obj_set_width(lv_obj_10, 5);
        lv_obj_set_height(lv_obj_10, 5);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 194);
        lv_obj_set_y(lv_label_14, 237);
        lv_obj_set_width(lv_label_14, 30);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "Live");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 22);
        lv_obj_set_y(lv_obj_11, 260);
        lv_obj_set_width(lv_obj_11, 202);
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 22);
        lv_obj_set_y(lv_label_15, 266);
        lv_obj_set_width(lv_label_15, 95);
        lv_obj_set_height(lv_label_15, 16);
        lv_label_set_text(lv_label_15, "Tải xuống");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 22);
        lv_obj_set_y(lv_label_16, 283);
        lv_obj_set_width(lv_label_16, 95);
        lv_obj_set_height(lv_label_16, 18);
        lv_label_set_text(lv_label_16, "125 KB/s");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 122);
        lv_obj_set_y(lv_obj_12, 267);
        lv_obj_set_width(lv_obj_12, 1);
        lv_obj_set_height(lv_obj_12, 32);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 132);
        lv_obj_set_y(lv_label_17, 266);
        lv_obj_set_width(lv_label_17, 92);
        lv_obj_set_height(lv_label_17, 16);
        lv_label_set_text(lv_label_17, "Tải lên");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 132);
        lv_obj_set_y(lv_label_18, 283);
        lv_obj_set_width(lv_label_18, 92);
        lv_obj_set_height(lv_label_18, 18);
        lv_label_set_text(lv_label_18, "42 KB/s");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 244);
        lv_obj_set_y(lv_obj_13, 50);
        lv_obj_set_width(lv_obj_13, 226);
        lv_obj_set_height(lv_obj_13, 169);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 256);
        lv_obj_set_y(lv_label_19, 61);
        lv_obj_set_width(lv_label_19, 200);
        lv_obj_set_height(lv_label_19, 20);
        lv_label_set_text(lv_label_19, "Thông tin mạng");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 256);
        lv_obj_set_y(lv_obj_14, 87);
        lv_obj_set_width(lv_obj_14, 202);
        lv_obj_set_height(lv_obj_14, 1);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 256);
        lv_obj_set_y(lv_label_20, 97);
        lv_obj_set_width(lv_label_20, 100);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "Gateway");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 360);
        lv_obj_set_y(lv_label_21, 97);
        lv_obj_set_width(lv_label_21, 98);
        lv_obj_set_height(lv_label_21, 18);
        lv_label_set_text(lv_label_21, "192.168.1.1");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 256);
        lv_obj_set_y(lv_label_22, 120);
        lv_obj_set_width(lv_label_22, 100);
        lv_obj_set_height(lv_label_22, 18);
        lv_label_set_text(lv_label_22, "DNS");
        lv_obj_set_style_text_font(lv_label_22, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 360);
        lv_obj_set_y(lv_label_23, 120);
        lv_obj_set_width(lv_label_23, 98);
        lv_obj_set_height(lv_label_23, 18);
        lv_label_set_text(lv_label_23, "8.8.8.8");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 256);
        lv_obj_set_y(lv_label_24, 143);
        lv_obj_set_width(lv_label_24, 101);
        lv_obj_set_height(lv_label_24, 18);
        lv_label_set_text(lv_label_24, "Địa chỉ MAC");
        lv_obj_set_style_text_font(lv_label_24, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 348);
        lv_obj_set_y(lv_label_25, 143);
        lv_obj_set_width(lv_label_25, 110);
        lv_obj_set_height(lv_label_25, 18);
        lv_label_set_text(lv_label_25, "A4:CF:12:AB:CD:EF");
        lv_obj_set_style_text_font(lv_label_25, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 256);
        lv_obj_set_y(lv_obj_15, 169);
        lv_obj_set_width(lv_obj_15, 202);
        lv_obj_set_height(lv_obj_15, 1);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_15, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 256);
        lv_obj_set_y(lv_label_26, 179);
        lv_obj_set_width(lv_label_26, 100);
        lv_obj_set_height(lv_label_26, 18);
        lv_label_set_text(lv_label_26, "Giao thức");
        lv_obj_set_style_text_font(lv_label_26, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 358);
        lv_obj_set_y(lv_label_27, 179);
        lv_obj_set_width(lv_label_27, 100);
        lv_obj_set_height(lv_label_27, 18);
        lv_label_set_text(lv_label_27, "DHCP");
        lv_obj_set_style_text_font(lv_label_27, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 244);
        lv_obj_set_y(lv_obj_16, 227);
        lv_obj_set_width(lv_obj_16, 226);
        lv_obj_set_height(lv_obj_16, 79);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_16, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_16, 1, 0);
        lv_obj_set_style_radius(lv_obj_16, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 256);
        lv_obj_set_y(lv_label_28, 237);
        lv_obj_set_width(lv_label_28, 149);
        lv_obj_set_height(lv_label_28, 19);
        lv_label_set_text(lv_label_28, "Trạng thái kết nối");
        lv_obj_set_style_text_font(lv_label_28, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_17, 419);
        lv_obj_set_y(lv_obj_17, 244);
        lv_obj_set_width(lv_obj_17, 5);
        lv_obj_set_height(lv_obj_17, 5);
        lv_obj_set_style_bg_color(lv_obj_17, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_17, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_17, 0, 0);
        lv_obj_set_style_radius(lv_obj_17, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_17, 0, 0);

        lv_obj_t * lv_label_29 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_29, 430);
        lv_obj_set_y(lv_label_29, 237);
        lv_obj_set_width(lv_label_29, 28);
        lv_obj_set_height(lv_label_29, 18);
        lv_label_set_text(lv_label_29, "OK");
        lv_obj_set_style_text_font(lv_label_29, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_29, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_29, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_18 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_18, 256);
        lv_obj_set_y(lv_obj_18, 261);
        lv_obj_set_width(lv_obj_18, 202);
        lv_obj_set_height(lv_obj_18, 1);
        lv_obj_set_style_bg_color(lv_obj_18, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_18, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_18, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_18, 0, 0);

        lv_obj_t * lv_label_30 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_30, 256);
        lv_obj_set_y(lv_label_30, 270);
        lv_obj_set_width(lv_label_30, 97);
        lv_obj_set_height(lv_label_30, 17);
        lv_label_set_text(lv_label_30, "Thời gian kết nối");
        lv_obj_set_style_text_font(lv_label_30, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_30, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_31 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_31, 358);
        lv_obj_set_y(lv_label_31, 270);
        lv_obj_set_width(lv_label_31, 100);
        lv_obj_set_height(lv_label_31, 17);
        lv_label_set_text(lv_label_31, "12 ngày 6 giờ");
        lv_obj_set_style_text_font(lv_label_31, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_31, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_31, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

