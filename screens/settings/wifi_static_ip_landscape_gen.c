/**
 * @file wifi_static_ip_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_static_ip_landscape_gen.h"
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

lv_obj_t * wifi_static_ip_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_static_ip_landscape_#");
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
        lv_obj_set_width(lv_label_0, 255);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình IP tĩnh");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 246);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập mạng thủ công");
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

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 61);
        lv_obj_set_width(lv_obj_3, 456);
        lv_obj_set_height(lv_obj_3, 49);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 21);
        lv_obj_set_y(lv_obj_4, 69);
        lv_obj_set_width(lv_obj_4, 33);
        lv_obj_set_height(lv_obj_4, 33);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 23);
        lv_obj_set_y(lv_image_1, 71);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 63);
        lv_obj_set_y(lv_label_2, 66);
        lv_obj_set_width(lv_label_2, 224);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 63);
        lv_obj_set_y(lv_label_3, 87);
        lv_obj_set_width(lv_label_3, 251);
        lv_obj_set_height(lv_label_3, 17);
        lv_label_set_text(lv_label_3, "Đang thiết lập địa chỉ IP thủ công");
        lv_obj_set_style_text_font(lv_label_3, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 398);
        lv_obj_set_y(lv_obj_5, 73);
        lv_obj_set_width(lv_obj_5, 58);
        lv_obj_set_height(lv_obj_5, 25);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 398);
        lv_obj_set_y(lv_label_4, 77);
        lv_obj_set_width(lv_label_4, 58);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "IP tĩnh");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 118);
        lv_obj_set_width(lv_label_5, 260);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "THÔNG SỐ MẠNG");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 141);
        lv_obj_set_width(lv_obj_6, 222);
        lv_obj_set_height(lv_obj_6, 54);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 22);
        lv_obj_set_y(lv_label_6, 146);
        lv_obj_set_width(lv_label_6, 198);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_ip_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_ip_landscape, "input_static_ip_landscape");
        lv_obj_set_x(input_static_ip_landscape, 22);
        lv_obj_set_y(input_static_ip_landscape, 165);
        lv_obj_set_width(input_static_ip_landscape, 202);
        lv_obj_set_height(input_static_ip_landscape, 24);
        lv_textarea_set_text(input_static_ip_landscape, "192.168.1.105");
        lv_obj_set_style_text_font(input_static_ip_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_ip_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_ip_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_ip_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_ip_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(input_static_ip_landscape, 1, 0);
        lv_obj_set_style_radius(input_static_ip_landscape, 6, 0);
        lv_obj_set_style_pad_left(input_static_ip_landscape, 9, 0);
        lv_obj_set_style_pad_right(input_static_ip_landscape, 8, 0);
        lv_obj_set_style_pad_top(input_static_ip_landscape, 2, 0);
        lv_obj_set_style_pad_bottom(input_static_ip_landscape, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 246);
        lv_obj_set_y(lv_obj_7, 141);
        lv_obj_set_width(lv_obj_7, 222);
        lv_obj_set_height(lv_obj_7, 54);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 256);
        lv_obj_set_y(lv_label_7, 146);
        lv_obj_set_width(lv_label_7, 198);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "Gateway");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_gateway_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_gateway_landscape, "input_static_gateway_landscape");
        lv_obj_set_x(input_static_gateway_landscape, 256);
        lv_obj_set_y(input_static_gateway_landscape, 165);
        lv_obj_set_width(input_static_gateway_landscape, 202);
        lv_obj_set_height(input_static_gateway_landscape, 24);
        lv_textarea_set_text(input_static_gateway_landscape, "192.168.1.1");
        lv_obj_set_style_text_font(input_static_gateway_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_gateway_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_gateway_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_gateway_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_gateway_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_gateway_landscape, 1, 0);
        lv_obj_set_style_radius(input_static_gateway_landscape, 6, 0);
        lv_obj_set_style_pad_left(input_static_gateway_landscape, 9, 0);
        lv_obj_set_style_pad_right(input_static_gateway_landscape, 8, 0);
        lv_obj_set_style_pad_top(input_static_gateway_landscape, 2, 0);
        lv_obj_set_style_pad_bottom(input_static_gateway_landscape, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 202);
        lv_obj_set_width(lv_obj_8, 222);
        lv_obj_set_height(lv_obj_8, 54);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 207);
        lv_obj_set_width(lv_label_8, 198);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Subnet Mask");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_subnet_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_subnet_landscape, "input_static_subnet_landscape");
        lv_obj_set_x(input_static_subnet_landscape, 22);
        lv_obj_set_y(input_static_subnet_landscape, 226);
        lv_obj_set_width(input_static_subnet_landscape, 202);
        lv_obj_set_height(input_static_subnet_landscape, 24);
        lv_textarea_set_text(input_static_subnet_landscape, "255.255.255.0");
        lv_obj_set_style_text_font(input_static_subnet_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_subnet_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_subnet_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_subnet_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_subnet_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_subnet_landscape, 1, 0);
        lv_obj_set_style_radius(input_static_subnet_landscape, 6, 0);
        lv_obj_set_style_pad_left(input_static_subnet_landscape, 9, 0);
        lv_obj_set_style_pad_right(input_static_subnet_landscape, 8, 0);
        lv_obj_set_style_pad_top(input_static_subnet_landscape, 2, 0);
        lv_obj_set_style_pad_bottom(input_static_subnet_landscape, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 246);
        lv_obj_set_y(lv_obj_9, 202);
        lv_obj_set_width(lv_obj_9, 222);
        lv_obj_set_height(lv_obj_9, 54);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 256);
        lv_obj_set_y(lv_label_9, 207);
        lv_obj_set_width(lv_label_9, 198);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "DNS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_dns_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_dns_landscape, "input_static_dns_landscape");
        lv_obj_set_x(input_static_dns_landscape, 256);
        lv_obj_set_y(input_static_dns_landscape, 226);
        lv_obj_set_width(input_static_dns_landscape, 202);
        lv_obj_set_height(input_static_dns_landscape, 24);
        lv_textarea_set_text(input_static_dns_landscape, "1.1.1.1");
        lv_obj_set_style_text_font(input_static_dns_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_dns_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_dns_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_dns_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_dns_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_dns_landscape, 1, 0);
        lv_obj_set_style_radius(input_static_dns_landscape, 6, 0);
        lv_obj_set_style_pad_left(input_static_dns_landscape, 9, 0);
        lv_obj_set_style_pad_right(input_static_dns_landscape, 8, 0);
        lv_obj_set_style_pad_top(input_static_dns_landscape, 2, 0);
        lv_obj_set_style_pad_bottom(input_static_dns_landscape, 0, 0);

        lv_obj_t * btn_static_ip_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_static_ip_cancel_landscape, "btn_static_ip_cancel_landscape");
        lv_obj_set_x(btn_static_ip_cancel_landscape, 12);
        lv_obj_set_y(btn_static_ip_cancel_landscape, 270);
        lv_obj_set_width(btn_static_ip_cancel_landscape, 145);
        lv_obj_set_height(btn_static_ip_cancel_landscape, 38);
        lv_obj_set_style_bg_color(btn_static_ip_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_static_ip_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_static_ip_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_static_ip_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_static_ip_cancel_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_static_ip_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_static_ip_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(btn_static_ip_cancel_landscape);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "Hủy");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 166);
        lv_obj_set_y(lv_label_11, 281);
        lv_obj_set_width(lv_label_11, 133);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "Kiểm tra IPv4 hợp lệ");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_static_ip_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_static_ip_save_landscape, "btn_static_ip_save_landscape");
        lv_obj_set_x(btn_static_ip_save_landscape, 308);
        lv_obj_set_y(btn_static_ip_save_landscape, 270);
        lv_obj_set_width(btn_static_ip_save_landscape, 160);
        lv_obj_set_height(btn_static_ip_save_landscape, 38);
        lv_obj_set_style_bg_color(btn_static_ip_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_static_ip_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_static_ip_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_static_ip_save_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_static_ip_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_static_ip_save_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_static_ip_save_landscape);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

