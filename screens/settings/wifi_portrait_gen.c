/**
 * @file wifi_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_portrait_gen.h"
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

lv_obj_t * wifi_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t wifi_switch_main;
    static lv_style_t wifi_switch_checked;
    static lv_style_t wifi_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&wifi_switch_main);
        lv_style_init(&wifi_switch_checked);
        lv_style_init(&wifi_switch_knob);

        lv_style_set_bg_color(&wifi_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&wifi_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&wifi_switch_main, 999);
        lv_style_set_pad_all(&wifi_switch_main, 3);
        lv_style_set_border_width(&wifi_switch_main, 0);
        lv_style_set_bg_color(&wifi_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&wifi_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&wifi_switch_checked, 999);
        lv_style_set_bg_color(&wifi_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&wifi_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&wifi_switch_knob, 999);
        lv_style_set_pad_all(&wifi_switch_knob, 0);
        lv_style_set_border_width(&wifi_switch_knob, 0);
        lv_style_set_shadow_color(&wifi_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&wifi_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&wifi_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_portrait_#");
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
        lv_obj_set_y(lv_label_0, 8);
        lv_obj_set_width(lv_label_0, 235);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "Wi-Fi và Mạng");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 230);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Cấu hình kết nối ESP32-S3");
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
        lv_obj_set_height(lv_obj_3, 93);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 79);
        lv_obj_set_width(lv_obj_4, 43);
        lv_obj_set_height(lv_obj_4, 43);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 29);
        lv_obj_set_y(lv_image_1, 86);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 75);
        lv_obj_set_y(lv_label_2, 76);
        lv_obj_set_width(lv_label_2, 163);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Đã kết nối");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 75);
        lv_obj_set_y(lv_label_3, 96);
        lv_obj_set_width(lv_label_3, 163);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 75);
        lv_obj_set_y(lv_label_4, 120);
        lv_obj_set_width(lv_label_4, 164);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Tín hiệu tốt · -48 dBm");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * wifi_enabled = lv_switch_create(lv_obj_0);
        lv_obj_set_name(wifi_enabled, "wifi_enabled");
        lv_obj_set_x(wifi_enabled, 249);
        lv_obj_set_y(wifi_enabled, 89);
        lv_obj_set_width(wifi_enabled, 46);
        lv_obj_set_height(wifi_enabled, 24);
        lv_obj_add_style(wifi_enabled, &wifi_switch_main, LV_PART_MAIN);
        lv_obj_add_style(wifi_enabled, &wifi_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(wifi_enabled, &wifi_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 140);
        lv_obj_set_width(lv_obj_5, 274);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 23);
        lv_obj_set_y(lv_label_5, 142);
        lv_obj_set_width(lv_label_5, 269);
        lv_obj_set_height(lv_label_5, 16);
        lv_label_set_text(lv_label_5, "MAC: A4:CF:12:34:56:78");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 167);
        lv_obj_set_width(lv_label_6, 220);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "MẠNG KHÔNG DÂY");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 190);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 48);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 195);
        lv_obj_set_width(lv_label_7, 227);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Thay đổi mạng Wi-Fi");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 217);
        lv_obj_set_width(lv_label_8, 228);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Quét SSID và nhập mật khẩu");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 271);
        lv_obj_set_y(lv_image_2, 202);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 13);
        lv_obj_set_y(lv_label_9, 245);
        lv_obj_set_width(lv_label_9, 220);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "CẤU HÌNH IP");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 268);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 43);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 24);
        lv_obj_set_y(lv_label_10, 279);
        lv_obj_set_width(lv_label_10, 112);
        lv_obj_set_height(lv_label_10, 21);
        lv_label_set_text(lv_label_10, "Chế độ IP");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_ip_dhcp = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ip_dhcp, "btn_ip_dhcp");
        lv_obj_set_x(btn_ip_dhcp, 153);
        lv_obj_set_y(btn_ip_dhcp, 275);
        lv_obj_set_width(btn_ip_dhcp, 70);
        lv_obj_set_height(btn_ip_dhcp, 29);
        lv_obj_set_style_bg_color(btn_ip_dhcp, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_ip_dhcp, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ip_dhcp, 0, 0);
        lv_obj_set_style_radius(btn_ip_dhcp, 8, 0);
        lv_obj_set_style_shadow_width(btn_ip_dhcp, 0, 0);
        lv_obj_set_style_pad_all(btn_ip_dhcp, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_ip_dhcp);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "DHCP");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_ip_static = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ip_static, "btn_ip_static");
        lv_obj_set_x(btn_ip_static, 228);
        lv_obj_set_y(btn_ip_static, 275);
        lv_obj_set_width(btn_ip_static, 70);
        lv_obj_set_height(btn_ip_static, 29);
        lv_obj_set_style_bg_color(btn_ip_static, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_ip_static, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ip_static, 0, 0);
        lv_obj_set_style_radius(btn_ip_static, 8, 0);
        lv_obj_set_style_shadow_width(btn_ip_static, 0, 0);
        lv_obj_set_style_pad_all(btn_ip_static, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_ip_static);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "IP tĩnh");
        lv_obj_set_style_text_font(lv_label_12, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 319);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 105);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 24);
        lv_obj_set_y(lv_label_13, 324);
        lv_obj_set_width(lv_label_13, 110);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 137);
        lv_obj_set_y(lv_label_14, 324);
        lv_obj_set_width(lv_label_14, 158);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "192.168.1.105");
        lv_obj_set_style_text_font(lv_label_14, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 24);
        lv_obj_set_y(lv_obj_9, 345);
        lv_obj_set_width(lv_obj_9, 272);
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 349);
        lv_obj_set_width(lv_label_15, 110);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Gateway");
        lv_obj_set_style_text_font(lv_label_15, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 137);
        lv_obj_set_y(lv_label_16, 349);
        lv_obj_set_width(lv_label_16, 158);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "192.168.1.1");
        lv_obj_set_style_text_font(lv_label_16, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 24);
        lv_obj_set_y(lv_obj_10, 370);
        lv_obj_set_width(lv_obj_10, 272);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 374);
        lv_obj_set_width(lv_label_17, 110);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "Subnet Mask");
        lv_obj_set_style_text_font(lv_label_17, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 137);
        lv_obj_set_y(lv_label_18, 374);
        lv_obj_set_width(lv_label_18, 158);
        lv_obj_set_height(lv_label_18, 19);
        lv_label_set_text(lv_label_18, "255.255.255.0");
        lv_obj_set_style_text_font(lv_label_18, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 24);
        lv_obj_set_y(lv_obj_11, 395);
        lv_obj_set_width(lv_obj_11, 272);
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 24);
        lv_obj_set_y(lv_label_19, 399);
        lv_obj_set_width(lv_label_19, 110);
        lv_obj_set_height(lv_label_19, 19);
        lv_label_set_text(lv_label_19, "DNS");
        lv_obj_set_style_text_font(lv_label_19, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 137);
        lv_obj_set_y(lv_label_20, 399);
        lv_obj_set_width(lv_label_20, 158);
        lv_obj_set_height(lv_label_20, 19);
        lv_label_set_text(lv_label_20, "1.1.1.1");
        lv_obj_set_style_text_font(lv_label_20, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_scan_wifi = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_scan_wifi, "btn_scan_wifi");
        lv_obj_set_x(btn_scan_wifi, 12);
        lv_obj_set_y(btn_scan_wifi, 432);
        lv_obj_set_width(btn_scan_wifi, 140);
        lv_obj_set_height(btn_scan_wifi, 38);
        lv_obj_set_style_bg_color(btn_scan_wifi, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_scan_wifi, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_scan_wifi, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_scan_wifi, 1, 0);
        lv_obj_set_style_radius(btn_scan_wifi, 10, 0);
        lv_obj_set_style_shadow_width(btn_scan_wifi, 0, 0);
        lv_obj_set_style_pad_all(btn_scan_wifi, 0, 0);
        lv_obj_t * lv_label_21 = lv_label_create(btn_scan_wifi);
        lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_21, "Quét mạng");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_save_wifi = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_save_wifi, "btn_save_wifi");
        lv_obj_set_x(btn_save_wifi, 160);
        lv_obj_set_y(btn_save_wifi, 432);
        lv_obj_set_width(btn_save_wifi, 148);
        lv_obj_set_height(btn_save_wifi, 38);
        lv_obj_set_style_bg_color(btn_save_wifi, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_save_wifi, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_save_wifi, 0, 0);
        lv_obj_set_style_radius(btn_save_wifi, 10, 0);
        lv_obj_set_style_shadow_width(btn_save_wifi, 0, 0);
        lv_obj_set_style_pad_all(btn_save_wifi, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_save_wifi);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Lưu cài đặt");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

