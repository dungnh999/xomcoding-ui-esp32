/**
 * @file wifi_static_ip_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_static_ip_portrait_gen.h"
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

lv_obj_t * wifi_static_ip_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_static_ip_portrait_#");
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
        lv_obj_set_width(lv_label_0, 240);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình IP tĩnh");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 230);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập mạng thủ công");
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
        lv_obj_set_height(lv_obj_3, 64);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 81);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 27);
        lv_obj_set_y(lv_image_1, 86);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 70);
        lv_obj_set_y(lv_label_2, 76);
        lv_obj_set_width(lv_label_2, 167);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 70);
        lv_obj_set_y(lv_label_3, 100);
        lv_obj_set_width(lv_label_3, 175);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "Cấu hình IP thủ công");
        lv_obj_set_style_text_font(lv_label_3, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 244);
        lv_obj_set_y(lv_obj_5, 88);
        lv_obj_set_width(lv_obj_5, 52);
        lv_obj_set_height(lv_obj_5, 24);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 7, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 244);
        lv_obj_set_y(lv_label_4, 91);
        lv_obj_set_width(lv_label_4, 52);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "IP tĩnh");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 143);
        lv_obj_set_width(lv_label_5, 260);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "THÔNG SỐ MẠNG");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 166);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 246);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 174);
        lv_obj_set_width(lv_label_6, 180);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_ip = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_ip, "input_static_ip");
        lv_obj_set_x(input_static_ip, 24);
        lv_obj_set_y(input_static_ip, 197);
        lv_obj_set_width(input_static_ip, 272);
        lv_obj_set_height(input_static_ip, 31);
        lv_textarea_set_text(input_static_ip, "192.168.1.105");
        lv_obj_set_style_text_font(input_static_ip, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_ip, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_ip, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_ip, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_ip, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(input_static_ip, 1, 0);
        lv_obj_set_style_radius(input_static_ip, 8, 0);
        lv_obj_set_style_pad_left(input_static_ip, 10, 0);
        lv_obj_set_style_pad_right(input_static_ip, 10, 0);
        lv_obj_set_style_pad_top(input_static_ip, 5, 0);
        lv_obj_set_style_pad_bottom(input_static_ip, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 233);
        lv_obj_set_width(lv_label_7, 180);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Gateway");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_gateway = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_gateway, "input_static_gateway");
        lv_obj_set_x(input_static_gateway, 24);
        lv_obj_set_y(input_static_gateway, 256);
        lv_obj_set_width(input_static_gateway, 272);
        lv_obj_set_height(input_static_gateway, 31);
        lv_textarea_set_text(input_static_gateway, "192.168.1.1");
        lv_obj_set_style_text_font(input_static_gateway, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_gateway, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_gateway, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_gateway, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_gateway, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_gateway, 1, 0);
        lv_obj_set_style_radius(input_static_gateway, 8, 0);
        lv_obj_set_style_pad_left(input_static_gateway, 10, 0);
        lv_obj_set_style_pad_right(input_static_gateway, 10, 0);
        lv_obj_set_style_pad_top(input_static_gateway, 5, 0);
        lv_obj_set_style_pad_bottom(input_static_gateway, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 292);
        lv_obj_set_width(lv_label_8, 180);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Subnet Mask");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_subnet = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_subnet, "input_static_subnet");
        lv_obj_set_x(input_static_subnet, 24);
        lv_obj_set_y(input_static_subnet, 315);
        lv_obj_set_width(input_static_subnet, 272);
        lv_obj_set_height(input_static_subnet, 31);
        lv_textarea_set_text(input_static_subnet, "255.255.255.0");
        lv_obj_set_style_text_font(input_static_subnet, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_subnet, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_subnet, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_subnet, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_subnet, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_subnet, 1, 0);
        lv_obj_set_style_radius(input_static_subnet, 8, 0);
        lv_obj_set_style_pad_left(input_static_subnet, 10, 0);
        lv_obj_set_style_pad_right(input_static_subnet, 10, 0);
        lv_obj_set_style_pad_top(input_static_subnet, 5, 0);
        lv_obj_set_style_pad_bottom(input_static_subnet, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 351);
        lv_obj_set_width(lv_label_9, 180);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "DNS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_static_dns = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_static_dns, "input_static_dns");
        lv_obj_set_x(input_static_dns, 24);
        lv_obj_set_y(input_static_dns, 374);
        lv_obj_set_width(input_static_dns, 272);
        lv_obj_set_height(input_static_dns, 31);
        lv_textarea_set_text(input_static_dns, "1.1.1.1");
        lv_obj_set_style_text_font(input_static_dns, be_medium_12, 0);
        lv_obj_set_style_text_color(input_static_dns, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_static_dns, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_static_dns, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_static_dns, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(input_static_dns, 1, 0);
        lv_obj_set_style_radius(input_static_dns, 8, 0);
        lv_obj_set_style_pad_left(input_static_dns, 10, 0);
        lv_obj_set_style_pad_right(input_static_dns, 10, 0);
        lv_obj_set_style_pad_top(input_static_dns, 5, 0);
        lv_obj_set_style_pad_bottom(input_static_dns, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 15);
        lv_obj_set_y(lv_label_10, 416);
        lv_obj_set_width(lv_label_10, 290);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "Kiểm tra IP hợp lệ trước khi lưu.");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_static_ip_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_static_ip_cancel, "btn_static_ip_cancel");
        lv_obj_set_x(btn_static_ip_cancel, 12);
        lv_obj_set_y(btn_static_ip_cancel, 435);
        lv_obj_set_width(btn_static_ip_cancel, 140);
        lv_obj_set_height(btn_static_ip_cancel, 35);
        lv_obj_set_style_bg_color(btn_static_ip_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_static_ip_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_static_ip_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_static_ip_cancel, 1, 0);
        lv_obj_set_style_radius(btn_static_ip_cancel, 10, 0);
        lv_obj_set_style_shadow_width(btn_static_ip_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_static_ip_cancel, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_static_ip_cancel);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "Hủy");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_static_ip_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_static_ip_save, "btn_static_ip_save");
        lv_obj_set_x(btn_static_ip_save, 160);
        lv_obj_set_y(btn_static_ip_save, 435);
        lv_obj_set_width(btn_static_ip_save, 148);
        lv_obj_set_height(btn_static_ip_save, 35);
        lv_obj_set_style_bg_color(btn_static_ip_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_static_ip_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_static_ip_save, 0, 0);
        lv_obj_set_style_radius(btn_static_ip_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_static_ip_save, 0, 0);
        lv_obj_set_style_pad_all(btn_static_ip_save, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_static_ip_save);
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

