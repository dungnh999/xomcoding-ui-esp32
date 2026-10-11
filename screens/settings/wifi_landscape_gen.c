/**
 * @file wifi_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_landscape_gen.h"
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

lv_obj_t * wifi_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_sw;
    static lv_style_t style_sw_on;
    static lv_style_t style_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&style_sw);
        lv_style_init(&style_sw_on);
        lv_style_init(&style_knob);

        lv_style_set_bg_color(&style_sw, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&style_sw, (255 * 100 / 100));
        lv_style_set_radius(&style_sw, 999);
        lv_style_set_pad_all(&style_sw, 3);
        lv_style_set_border_width(&style_sw, 0);
        lv_style_set_bg_color(&style_sw_on, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&style_sw_on, (255 * 100 / 100));
        lv_style_set_radius(&style_sw_on, 999);
        lv_style_set_bg_color(&style_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&style_knob, (255 * 100 / 100));
        lv_style_set_radius(&style_knob, 999);
        lv_style_set_pad_all(&style_knob, 0);
        lv_style_set_border_width(&style_knob, 0);
        lv_style_set_shadow_color(&style_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&style_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&style_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_landscape_#");
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
        lv_obj_set_width(lv_label_0, 235);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Wi-Fi và Mạng");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 250);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Cấu hình kết nối ESP32-S3");
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
        lv_obj_set_y(lv_label_2, 60);
        lv_obj_set_width(lv_label_2, 180);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "TRẠNG THÁI KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 99);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 21);
        lv_obj_set_y(lv_obj_4, 94);
        lv_obj_set_width(lv_obj_4, 37);
        lv_obj_set_height(lv_obj_4, 37);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 26);
        lv_obj_set_y(lv_image_1, 99);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 66);
        lv_obj_set_y(lv_label_3, 91);
        lv_obj_set_width(lv_label_3, 106);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "Đã kết nối");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 66);
        lv_obj_set_y(lv_label_4, 111);
        lv_obj_set_width(lv_label_4, 143);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 21);
        lv_obj_set_y(lv_label_5, 139);
        lv_obj_set_width(lv_label_5, 190);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Tín hiệu tốt · -48 dBm");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * wifi_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(wifi_enabled_landscape, "wifi_enabled_landscape");
        lv_obj_set_x(wifi_enabled_landscape, 180);
        lv_obj_set_y(wifi_enabled_landscape, 91);
        lv_obj_set_width(wifi_enabled_landscape, 43);
        lv_obj_set_height(wifi_enabled_landscape, 24);
        lv_obj_add_style(wifi_enabled_landscape, &style_sw, LV_PART_MAIN);
        lv_obj_add_style(wifi_enabled_landscape, &style_sw_on, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(wifi_enabled_landscape, &style_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 21);
        lv_obj_set_y(lv_obj_5, 158);
        lv_obj_set_width(lv_obj_5, 202);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 21);
        lv_obj_set_y(lv_label_6, 164);
        lv_obj_set_width(lv_label_6, 203);
        lv_obj_set_height(lv_label_6, 15);
        lv_label_set_text(lv_label_6, "MAC: A4:CF:12:34:56:78");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 187);
        lv_obj_set_width(lv_label_7, 180);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "MẠNG KHÔNG DÂY");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 209);
        lv_obj_set_width(lv_obj_6, 220);
        lv_obj_set_height(lv_obj_6, 49);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 214);
        lv_obj_set_width(lv_label_8, 173);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Thay đổi mạng Wi-Fi");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 22);
        lv_obj_set_y(lv_label_9, 233);
        lv_obj_set_width(lv_label_9, 178);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Quét SSID, nhập mật khẩu");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 199);
        lv_obj_set_y(lv_image_2, 221);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 60);
        lv_obj_set_width(lv_label_10, 180);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "CẤU HÌNH IP");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 83);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 44);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 95);
        lv_obj_set_width(lv_label_11, 72);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "Chế độ IP");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_ip_dhcp_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ip_dhcp_landscape, "btn_ip_dhcp_landscape");
        lv_obj_set_x(btn_ip_dhcp_landscape, 325);
        lv_obj_set_y(btn_ip_dhcp_landscape, 90);
        lv_obj_set_width(btn_ip_dhcp_landscape, 64);
        lv_obj_set_height(btn_ip_dhcp_landscape, 30);
        lv_obj_set_style_bg_color(btn_ip_dhcp_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_ip_dhcp_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ip_dhcp_landscape, 0, 0);
        lv_obj_set_style_radius(btn_ip_dhcp_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_ip_dhcp_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_ip_dhcp_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_ip_dhcp_landscape);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "DHCP");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_ip_static_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ip_static_landscape, "btn_ip_static_landscape");
        lv_obj_set_x(btn_ip_static_landscape, 393);
        lv_obj_set_y(btn_ip_static_landscape, 90);
        lv_obj_set_width(btn_ip_static_landscape, 66);
        lv_obj_set_height(btn_ip_static_landscape, 30);
        lv_obj_set_style_bg_color(btn_ip_static_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_ip_static_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ip_static_landscape, 0, 0);
        lv_obj_set_style_radius(btn_ip_static_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_ip_static_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_ip_static_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_ip_static_landscape);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "IP tĩnh");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 135);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 123);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 251);
        lv_obj_set_y(lv_label_14, 142);
        lv_obj_set_width(lv_label_14, 80);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Địa chỉ IP");
        lv_obj_set_style_text_font(lv_label_14, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 333);
        lv_obj_set_y(lv_label_15, 142);
        lv_obj_set_width(lv_label_15, 123);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "192.168.1.105");
        lv_obj_set_style_text_font(lv_label_15, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 251);
        lv_obj_set_y(lv_obj_9, 165);
        lv_obj_set_width(lv_obj_9, 205);
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 251);
        lv_obj_set_y(lv_label_16, 170);
        lv_obj_set_width(lv_label_16, 80);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "Gateway");
        lv_obj_set_style_text_font(lv_label_16, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 333);
        lv_obj_set_y(lv_label_17, 170);
        lv_obj_set_width(lv_label_17, 123);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "192.168.1.1");
        lv_obj_set_style_text_font(lv_label_17, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 251);
        lv_obj_set_y(lv_obj_10, 193);
        lv_obj_set_width(lv_obj_10, 205);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 251);
        lv_obj_set_y(lv_label_18, 198);
        lv_obj_set_width(lv_label_18, 83);
        lv_obj_set_height(lv_label_18, 20);
        lv_label_set_text(lv_label_18, "Subnet Mask");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 335);
        lv_obj_set_y(lv_label_19, 198);
        lv_obj_set_width(lv_label_19, 121);
        lv_obj_set_height(lv_label_19, 20);
        lv_label_set_text(lv_label_19, "255.255.255.0");
        lv_obj_set_style_text_font(lv_label_19, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 251);
        lv_obj_set_y(lv_obj_11, 221);
        lv_obj_set_width(lv_obj_11, 205);
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 251);
        lv_obj_set_y(lv_label_20, 226);
        lv_obj_set_width(lv_label_20, 80);
        lv_obj_set_height(lv_label_20, 20);
        lv_label_set_text(lv_label_20, "DNS");
        lv_obj_set_style_text_font(lv_label_20, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 333);
        lv_obj_set_y(lv_label_21, 226);
        lv_obj_set_width(lv_label_21, 123);
        lv_obj_set_height(lv_label_21, 20);
        lv_label_set_text(lv_label_21, "1.1.1.1");
        lv_obj_set_style_text_font(lv_label_21, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_scan_wifi_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_scan_wifi_landscape, "btn_scan_wifi_landscape");
        lv_obj_set_x(btn_scan_wifi_landscape, 12);
        lv_obj_set_y(btn_scan_wifi_landscape, 270);
        lv_obj_set_width(btn_scan_wifi_landscape, 220);
        lv_obj_set_height(btn_scan_wifi_landscape, 38);
        lv_obj_set_style_bg_color(btn_scan_wifi_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_scan_wifi_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_scan_wifi_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_scan_wifi_landscape, 1, 0);
        lv_obj_set_style_radius(btn_scan_wifi_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_scan_wifi_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_scan_wifi_landscape, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_scan_wifi_landscape);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Quét mạng Wi-Fi");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_save_wifi_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_save_wifi_landscape, "btn_save_wifi_landscape");
        lv_obj_set_x(btn_save_wifi_landscape, 240);
        lv_obj_set_y(btn_save_wifi_landscape, 270);
        lv_obj_set_width(btn_save_wifi_landscape, 228);
        lv_obj_set_height(btn_save_wifi_landscape, 38);
        lv_obj_set_style_bg_color(btn_save_wifi_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_save_wifi_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_save_wifi_landscape, 0, 0);
        lv_obj_set_style_radius(btn_save_wifi_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_save_wifi_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_save_wifi_landscape, 0, 0);
        lv_obj_t * lv_label_23 = lv_label_create(btn_save_wifi_landscape);
        lv_obj_set_align(lv_label_23, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_23, "Lưu cài đặt");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

