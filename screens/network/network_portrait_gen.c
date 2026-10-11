/**
 * @file network_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "network_portrait_gen.h"
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

lv_obj_t * network_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "network_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 3);
        lv_obj_set_width(lv_label_0, 215);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "Mạng & Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 13);
        lv_obj_set_y(lv_label_1, 34);
        lv_obj_set_width(lv_label_1, 200);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Chi tiết kết nối");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 240);
        lv_obj_set_y(lv_obj_1, 20);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 251);
        lv_obj_set_y(lv_label_2, 14);
        lv_obj_set_width(lv_label_2, 57);
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
        lv_obj_set_height(lv_obj_3, 91);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 24);
        lv_obj_set_y(lv_image_0, 77);
        lv_obj_set_width(lv_image_0, 22);
        lv_obj_set_height(lv_image_0, 22);
        lv_image_set_src(lv_image_0, boot_icon_wifi);
        lv_obj_set_style_image_recolor(lv_image_0, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_0, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 54);
        lv_obj_set_y(lv_label_3, 76);
        lv_obj_set_width(lv_label_3, 164);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 240);
        lv_obj_set_y(lv_obj_4, 85);
        lv_obj_set_width(lv_obj_4, 5);
        lv_obj_set_height(lv_obj_4, 5);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 251);
        lv_obj_set_y(lv_label_4, 78);
        lv_obj_set_width(lv_label_4, 45);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "Online");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 24);
        lv_obj_set_y(lv_obj_5, 104);
        lv_obj_set_width(lv_obj_5, 272);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 111);
        lv_obj_set_width(lv_label_5, 72);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Tên Wi-Fi");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 104);
        lv_obj_set_y(lv_label_6, 111);
        lv_obj_set_width(lv_label_6, 192);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "XomCoding_WiFi");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 131);
        lv_obj_set_width(lv_label_7, 88);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 112);
        lv_obj_set_y(lv_label_8, 131);
        lv_obj_set_width(lv_label_8, 184);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "192.168.1.50");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 164);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 72);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 24);
        lv_obj_set_y(lv_image_1, 174);
        lv_obj_set_width(lv_image_1, 18);
        lv_obj_set_height(lv_image_1, 18);
        lv_image_set_src(lv_image_1, home_icon_network);
        lv_obj_set_style_image_recolor(lv_image_1, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_image_recolor_opa(lv_image_1, (255 * 100 / 100), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 49);
        lv_obj_set_y(lv_label_9, 172);
        lv_obj_set_width(lv_label_9, 174);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Cường độ tín hiệu");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 232);
        lv_obj_set_y(lv_label_10, 173);
        lv_obj_set_width(lv_label_10, 64);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Tốt");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 24);
        lv_obj_set_y(lv_label_11, 198);
        lv_obj_set_width(lv_label_11, 137);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "RSSI: -56 dBm");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 177);
        lv_obj_set_y(lv_label_12, 198);
        lv_obj_set_width(lv_label_12, 119);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "2.4 GHz");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 222);
        lv_obj_set_width(lv_obj_7, 64);
        lv_obj_set_height(lv_obj_7, 5);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 93);
        lv_obj_set_y(lv_obj_8, 222);
        lv_obj_set_width(lv_obj_8, 64);
        lv_obj_set_height(lv_obj_8, 5);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 162);
        lv_obj_set_y(lv_obj_9, 222);
        lv_obj_set_width(lv_obj_9, 64);
        lv_obj_set_height(lv_obj_9, 5);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 231);
        lv_obj_set_y(lv_obj_10, 222);
        lv_obj_set_width(lv_obj_10, 65);
        lv_obj_set_height(lv_obj_10, 5);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x344256), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 244);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 94);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 24);
        lv_obj_set_y(lv_image_2, 254);
        lv_obj_set_width(lv_image_2, 18);
        lv_obj_set_height(lv_image_2, 18);
        lv_image_set_src(lv_image_2, home_icon_network);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 49);
        lv_obj_set_y(lv_label_13, 250);
        lv_obj_set_width(lv_label_13, 163);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "Lưu lượng mạng");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 232);
        lv_obj_set_y(lv_obj_12, 261);
        lv_obj_set_width(lv_obj_12, 5);
        lv_obj_set_height(lv_obj_12, 5);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 243);
        lv_obj_set_y(lv_label_14, 254);
        lv_obj_set_width(lv_label_14, 53);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "Trực tiếp");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 24);
        lv_obj_set_y(lv_obj_13, 280);
        lv_obj_set_width(lv_obj_13, 272);
        lv_obj_set_height(lv_obj_13, 1);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 289);
        lv_obj_set_width(lv_label_15, 121);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Tải xuống");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 24);
        lv_obj_set_y(lv_label_16, 309);
        lv_obj_set_width(lv_label_16, 125);
        lv_obj_set_height(lv_label_16, 21);
        lv_label_set_text(lv_label_16, "125 KB/s");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xff6464), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 159);
        lv_obj_set_y(lv_obj_14, 289);
        lv_obj_set_width(lv_obj_14, 1);
        lv_obj_set_height(lv_obj_14, 37);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 173);
        lv_obj_set_y(lv_label_17, 289);
        lv_obj_set_width(lv_label_17, 123);
        lv_obj_set_height(lv_label_17, 17);
        lv_label_set_text(lv_label_17, "Tải lên");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 173);
        lv_obj_set_y(lv_label_18, 309);
        lv_obj_set_width(lv_label_18, 123);
        lv_obj_set_height(lv_label_18, 21);
        lv_label_set_text(lv_label_18, "42 KB/s");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 12);
        lv_obj_set_y(lv_obj_15, 346);
        lv_obj_set_width(lv_obj_15, 296);
        lv_obj_set_height(lv_obj_15, 124);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_15, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_15, 1, 0);
        lv_obj_set_style_radius(lv_obj_15, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 24);
        lv_obj_set_y(lv_label_19, 356);
        lv_obj_set_width(lv_label_19, 208);
        lv_obj_set_height(lv_label_19, 20);
        lv_label_set_text(lv_label_19, "Thông tin mạng");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 24);
        lv_obj_set_y(lv_obj_16, 382);
        lv_obj_set_width(lv_obj_16, 272);
        lv_obj_set_height(lv_obj_16, 1);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 24);
        lv_obj_set_y(lv_label_20, 390);
        lv_obj_set_width(lv_label_20, 109);
        lv_obj_set_height(lv_label_20, 17);
        lv_label_set_text(lv_label_20, "Gateway");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 142);
        lv_obj_set_y(lv_label_21, 390);
        lv_obj_set_width(lv_label_21, 154);
        lv_obj_set_height(lv_label_21, 17);
        lv_label_set_text(lv_label_21, "192.168.1.1");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 24);
        lv_obj_set_y(lv_label_22, 412);
        lv_obj_set_width(lv_label_22, 109);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "DNS");
        lv_obj_set_style_text_font(lv_label_22, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 142);
        lv_obj_set_y(lv_label_23, 412);
        lv_obj_set_width(lv_label_23, 154);
        lv_obj_set_height(lv_label_23, 17);
        lv_label_set_text(lv_label_23, "8.8.8.8");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 24);
        lv_obj_set_y(lv_label_24, 434);
        lv_obj_set_width(lv_label_24, 109);
        lv_obj_set_height(lv_label_24, 17);
        lv_label_set_text(lv_label_24, "Địa chỉ MAC");
        lv_obj_set_style_text_font(lv_label_24, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 128);
        lv_obj_set_y(lv_label_25, 434);
        lv_obj_set_width(lv_label_25, 168);
        lv_obj_set_height(lv_label_25, 17);
        lv_label_set_text(lv_label_25, "A4:CF:12:AB:CD:EF");
        lv_obj_set_style_text_font(lv_label_25, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xe2e8f0), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

