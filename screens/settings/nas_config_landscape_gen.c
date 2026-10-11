/**
 * @file nas_config_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "nas_config_landscape_gen.h"
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

lv_obj_t * nas_config_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "nas_config_landscape_#");
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
        lv_obj_set_width(lv_label_0, 280);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình NAS");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Kết nối máy chủ lưu trữ");
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
        lv_label_set_text(lv_label_2, "MÁY CHỦ NAS");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 105);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 95);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 27);
        lv_obj_set_y(lv_image_1, 100);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_nas);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 68);
        lv_obj_set_y(lv_label_3, 95);
        lv_obj_set_width(lv_label_3, 153);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "XomCoding NAS");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 68);
        lv_obj_set_y(lv_label_4, 117);
        lv_obj_set_width(lv_label_4, 150);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "192.168.1.100");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 144);
        lv_obj_set_width(lv_obj_5, 200);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 159);
        lv_obj_set_width(lv_obj_6, 7);
        lv_obj_set_height(lv_obj_6, 7);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 35);
        lv_obj_set_y(lv_label_5, 153);
        lv_obj_set_width(lv_label_5, 184);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "Máy chủ đang hoạt động");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 198);
        lv_obj_set_width(lv_label_6, 210);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "TRẠNG THÁI KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 220);
        lv_obj_set_width(lv_obj_7, 220);
        lv_obj_set_height(lv_obj_7, 43);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 231);
        lv_obj_set_width(lv_obj_8, 3);
        lv_obj_set_height(lv_obj_8, 22);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 33);
        lv_obj_set_y(lv_label_7, 222);
        lv_obj_set_width(lv_label_7, 186);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Kết nối thành công");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 33);
        lv_obj_set_y(lv_label_8, 242);
        lv_obj_set_width(lv_label_8, 186);
        lv_obj_set_height(lv_label_8, 16);
        lv_label_set_text(lv_label_8, "Máy chủ phản hồi tốt");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 241);
        lv_obj_set_y(lv_label_9, 61);
        lv_obj_set_width(lv_label_9, 218);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "THÔNG TIN KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 83);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 180);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 251);
        lv_obj_set_y(lv_label_10, 89);
        lv_obj_set_width(lv_label_10, 205);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Địa chỉ máy chủ");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_host_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_host_landscape, "nas_config_host_landscape");
        lv_obj_set_x(nas_config_host_landscape, 251);
        lv_obj_set_y(nas_config_host_landscape, 109);
        lv_obj_set_width(nas_config_host_landscape, 206);
        lv_obj_set_height(nas_config_host_landscape, 28);
        lv_textarea_set_text(nas_config_host_landscape, "192.168.1.100");
        lv_obj_set_style_text_font(nas_config_host_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_host_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_host_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_host_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_host_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(nas_config_host_landscape, 1, 0);
        lv_obj_set_style_radius(nas_config_host_landscape, 7, 0);
        lv_obj_set_style_pad_left(nas_config_host_landscape, 9, 0);
        lv_obj_set_style_pad_right(nas_config_host_landscape, 9, 0);
        lv_obj_set_style_pad_top(nas_config_host_landscape, 4, 0);
        lv_obj_set_style_pad_bottom(nas_config_host_landscape, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 141);
        lv_obj_set_width(lv_label_11, 75);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "Cổng");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_port_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_port_landscape, "nas_config_port_landscape");
        lv_obj_set_x(nas_config_port_landscape, 251);
        lv_obj_set_y(nas_config_port_landscape, 161);
        lv_obj_set_width(nas_config_port_landscape, 70);
        lv_obj_set_height(nas_config_port_landscape, 28);
        lv_textarea_set_text(nas_config_port_landscape, "5001");
        lv_obj_set_style_text_font(nas_config_port_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_port_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_port_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_port_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_port_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_port_landscape, 1, 0);
        lv_obj_set_style_radius(nas_config_port_landscape, 7, 0);
        lv_obj_set_style_pad_left(nas_config_port_landscape, 8, 0);
        lv_obj_set_style_pad_right(nas_config_port_landscape, 8, 0);
        lv_obj_set_style_pad_top(nas_config_port_landscape, 4, 0);
        lv_obj_set_style_pad_bottom(nas_config_port_landscape, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 334);
        lv_obj_set_y(lv_label_12, 141);
        lv_obj_set_width(lv_label_12, 120);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "Giao thức");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_http_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_http_landscape, "nas_config_http_landscape");
        lv_obj_set_x(nas_config_http_landscape, 334);
        lv_obj_set_y(nas_config_http_landscape, 161);
        lv_obj_set_width(nas_config_http_landscape, 55);
        lv_obj_set_height(nas_config_http_landscape, 28);
        lv_obj_set_style_bg_color(nas_config_http_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(nas_config_http_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_http_landscape, 0, 0);
        lv_obj_set_style_radius(nas_config_http_landscape, 7, 0);
        lv_obj_set_style_shadow_width(nas_config_http_landscape, 0, 0);
        lv_obj_set_style_pad_all(nas_config_http_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(nas_config_http_landscape);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "HTTP");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * nas_config_https_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_https_landscape, "nas_config_https_landscape");
        lv_obj_set_x(nas_config_https_landscape, 394);
        lv_obj_set_y(nas_config_https_landscape, 161);
        lv_obj_set_width(nas_config_https_landscape, 63);
        lv_obj_set_height(nas_config_https_landscape, 28);
        lv_obj_set_style_bg_color(nas_config_https_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(nas_config_https_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_https_landscape, 0, 0);
        lv_obj_set_style_radius(nas_config_https_landscape, 7, 0);
        lv_obj_set_style_shadow_width(nas_config_https_landscape, 0, 0);
        lv_obj_set_style_pad_all(nas_config_https_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(nas_config_https_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "HTTPS");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 251);
        lv_obj_set_y(lv_label_15, 197);
        lv_obj_set_width(lv_label_15, 205);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "API Token");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_token_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(nas_config_token_landscape, "nas_config_token_landscape");
        lv_obj_set_x(nas_config_token_landscape, 251);
        lv_obj_set_y(nas_config_token_landscape, 216);
        lv_obj_set_width(nas_config_token_landscape, 206);
        lv_obj_set_height(nas_config_token_landscape, 28);
        lv_textarea_set_text(nas_config_token_landscape, "");
        lv_obj_set_style_text_font(nas_config_token_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(nas_config_token_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(nas_config_token_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(nas_config_token_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_token_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_token_landscape, 1, 0);
        lv_obj_set_style_radius(nas_config_token_landscape, 7, 0);
        lv_obj_set_style_pad_left(nas_config_token_landscape, 9, 0);
        lv_obj_set_style_pad_right(nas_config_token_landscape, 9, 0);
        lv_obj_set_style_pad_top(nas_config_token_landscape, 4, 0);
        lv_obj_set_style_pad_bottom(nas_config_token_landscape, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 251);
        lv_obj_set_y(lv_label_16, 243);
        lv_obj_set_width(lv_label_16, 205);
        lv_obj_set_height(lv_label_16, 14);
        lv_label_set_text(lv_label_16, "Token của dịch vụ NAS/API");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * nas_config_test_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_test_landscape, "nas_config_test_landscape");
        lv_obj_set_x(nas_config_test_landscape, 12);
        lv_obj_set_y(nas_config_test_landscape, 275);
        lv_obj_set_width(nas_config_test_landscape, 220);
        lv_obj_set_height(nas_config_test_landscape, 33);
        lv_obj_set_style_bg_color(nas_config_test_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(nas_config_test_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(nas_config_test_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(nas_config_test_landscape, 1, 0);
        lv_obj_set_style_radius(nas_config_test_landscape, 10, 0);
        lv_obj_set_style_shadow_width(nas_config_test_landscape, 0, 0);
        lv_obj_set_style_pad_all(nas_config_test_landscape, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(nas_config_test_landscape);
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_17, "Kiểm tra kết nối");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * nas_config_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(nas_config_save_landscape, "nas_config_save_landscape");
        lv_obj_set_x(nas_config_save_landscape, 240);
        lv_obj_set_y(nas_config_save_landscape, 275);
        lv_obj_set_width(nas_config_save_landscape, 228);
        lv_obj_set_height(nas_config_save_landscape, 33);
        lv_obj_set_style_bg_color(nas_config_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(nas_config_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(nas_config_save_landscape, 0, 0);
        lv_obj_set_style_radius(nas_config_save_landscape, 10, 0);
        lv_obj_set_style_shadow_width(nas_config_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(nas_config_save_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(nas_config_save_landscape);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

