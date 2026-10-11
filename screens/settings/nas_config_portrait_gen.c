/**
 * @file nas_config_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "nas_config_portrait_gen.h"
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

lv_obj_t * nas_config_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "nas_config_portrait_#");
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
        lv_obj_set_width(lv_label_0, 247);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình NAS");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Kết nối máy chủ lưu trữ");
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
        lv_obj_set_height(lv_obj_3, 62);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 79);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 27);
        lv_obj_set_y(lv_image_1, 84);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_nas);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 69);
        lv_obj_set_y(lv_label_2, 76);
        lv_obj_set_width(lv_label_2, 166);
        lv_obj_set_height(lv_label_2, 20);
        lv_label_set_text(lv_label_2, "XomCoding NAS");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 69);
        lv_obj_set_y(lv_label_3, 99);
        lv_obj_set_width(lv_label_3, 165);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "192.168.1.100");
        lv_obj_set_style_text_font(lv_label_3, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 254);
        lv_obj_set_y(lv_obj_5, 91);
        lv_obj_set_width(lv_obj_5, 7);
        lv_obj_set_height(lv_obj_5, 7);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 267);
        lv_obj_set_y(lv_label_4, 86);
        lv_obj_set_width(lv_label_4, 29);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "OK");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 138);
        lv_obj_set_width(lv_label_5, 250);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "THÔNG TIN KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 160);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 211);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 168);
        lv_obj_set_width(lv_label_6, 207);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Địa chỉ máy chủ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_host = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_host, "nas_config_host");
        lv_obj_set_x(nas_config_host, 24);
        lv_obj_set_y(nas_config_host, 188);
        lv_obj_set_width(nas_config_host, 272);
        lv_obj_set_height(nas_config_host, 31);
        lv_textarea_set_text(nas_config_host, "192.168.1.100");
        lv_obj_set_style_text_font(nas_config_host, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_host, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_host, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_host, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_host, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(nas_config_host, 1, 0);
        lv_obj_set_style_radius(nas_config_host, 8, 0);
        lv_obj_set_style_pad_left(nas_config_host, 10, 0);
        lv_obj_set_style_pad_right(nas_config_host, 10, 0);
        lv_obj_set_style_pad_top(nas_config_host, 5, 0);
        lv_obj_set_style_pad_bottom(nas_config_host, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 225);
        lv_obj_set_width(lv_label_7, 125);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "Cổng kết nối");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_port = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_port, "nas_config_port");
        lv_obj_set_x(nas_config_port, 24);
        lv_obj_set_y(nas_config_port, 245);
        lv_obj_set_width(nas_config_port, 107);
        lv_obj_set_height(nas_config_port, 31);
        lv_textarea_set_text(nas_config_port, "5001");
        lv_obj_set_style_text_font(nas_config_port, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_port, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_port, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_port, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_port, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_port, 1, 0);
        lv_obj_set_style_radius(nas_config_port, 8, 0);
        lv_obj_set_style_pad_left(nas_config_port, 10, 0);
        lv_obj_set_style_pad_right(nas_config_port, 8, 0);
        lv_obj_set_style_pad_top(nas_config_port, 5, 0);
        lv_obj_set_style_pad_bottom(nas_config_port, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 146);
        lv_obj_set_y(lv_label_8, 225);
        lv_obj_set_width(lv_label_8, 150);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Giao thức");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_http = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_http, "nas_config_http");
        lv_obj_set_x(nas_config_http, 146);
        lv_obj_set_y(nas_config_http, 245);
        lv_obj_set_width(nas_config_http, 68);
        lv_obj_set_height(nas_config_http, 31);
        lv_obj_set_style_bg_color(nas_config_http, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(nas_config_http, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_http, 0, 0);
        lv_obj_set_style_radius(nas_config_http, 8, 0);
        lv_obj_set_style_shadow_width(nas_config_http, 0, 0);
        lv_obj_set_style_pad_all(nas_config_http, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(nas_config_http);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "HTTP");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * nas_config_https = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_https, "nas_config_https");
        lv_obj_set_x(nas_config_https, 219);
        lv_obj_set_y(nas_config_https, 245);
        lv_obj_set_width(nas_config_https, 77);
        lv_obj_set_height(nas_config_https, 31);
        lv_obj_set_style_bg_color(nas_config_https, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(nas_config_https, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_https, 0, 0);
        lv_obj_set_style_radius(nas_config_https, 8, 0);
        lv_obj_set_style_shadow_width(nas_config_https, 0, 0);
        lv_obj_set_style_pad_all(nas_config_https, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(nas_config_https);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "HTTPS");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 24);
        lv_obj_set_y(lv_label_11, 283);
        lv_obj_set_width(lv_label_11, 209);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "API Token");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_token = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_token, "nas_config_token");
        lv_obj_set_x(nas_config_token, 24);
        lv_obj_set_y(nas_config_token, 303);
        lv_obj_set_width(nas_config_token, 272);
        lv_obj_set_height(nas_config_token, 31);
        lv_textarea_set_text(nas_config_token, "");
        lv_obj_set_style_text_font(nas_config_token, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_token, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_token, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_token, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_token, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_token, 1, 0);
        lv_obj_set_style_radius(nas_config_token, 8, 0);
        lv_obj_set_style_pad_left(nas_config_token, 10, 0);
        lv_obj_set_style_pad_right(nas_config_token, 10, 0);
        lv_obj_set_style_pad_top(nas_config_token, 5, 0);
        lv_obj_set_style_pad_bottom(nas_config_token, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 343);
        lv_obj_set_width(lv_label_12, 272);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Dùng token của dịch vụ NAS/API.");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 380);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 44);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 391);
        lv_obj_set_width(lv_obj_8, 7);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 35);
        lv_obj_set_y(lv_label_13, 385);
        lv_obj_set_width(lv_label_13, 261);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Trạng thái kết nối");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 35);
        lv_obj_set_y(lv_label_14, 404);
        lv_obj_set_width(lv_label_14, 261);
        lv_obj_set_height(lv_label_14, 16);
        lv_label_set_text(lv_label_14, "Máy chủ phản hồi bình thường");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x34d399), 0);

        lv_obj_t * nas_config_test = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_test, "nas_config_test");
        lv_obj_set_x(nas_config_test, 12);
        lv_obj_set_y(nas_config_test, 434);
        lv_obj_set_width(nas_config_test, 140);
        lv_obj_set_height(nas_config_test, 36);
        lv_obj_set_style_bg_color(nas_config_test, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(nas_config_test, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_test, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_test, 1, 0);
        lv_obj_set_style_radius(nas_config_test, 10, 0);
        lv_obj_set_style_shadow_width(nas_config_test, 0, 0);
        lv_obj_set_style_pad_all(nas_config_test, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(nas_config_test);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Kiểm tra");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_save, "nas_config_save");
        lv_obj_set_x(nas_config_save, 160);
        lv_obj_set_y(nas_config_save, 434);
        lv_obj_set_width(nas_config_save, 148);
        lv_obj_set_height(nas_config_save, 36);
        lv_obj_set_style_bg_color(nas_config_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(nas_config_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_save, 0, 0);
        lv_obj_set_style_radius(nas_config_save, 10, 0);
        lv_obj_set_style_shadow_width(nas_config_save, 0, 0);
        lv_obj_set_style_pad_all(nas_config_save, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(nas_config_save);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

