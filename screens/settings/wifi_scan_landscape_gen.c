/**
 * @file wifi_scan_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_scan_landscape_gen.h"
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

lv_obj_t * wifi_scan_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_scan_landscape_#");
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
        lv_obj_set_y(lv_label_0, 2);
        lv_obj_set_width(lv_label_0, 260);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "Chọn mạng Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 260);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Tìm kiếm mạng gần thiết bị");
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
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "TRẠNG THÁI QUÉT");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 78);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 94);
        lv_obj_set_width(lv_obj_4, 36);
        lv_obj_set_height(lv_obj_4, 36);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 26);
        lv_obj_set_y(lv_image_1, 98);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 66);
        lv_obj_set_y(lv_label_3, 92);
        lv_obj_set_width(lv_label_3, 156);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Đã tìm thấy 5 mạng");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 66);
        lv_obj_set_y(lv_label_4, 112);
        lv_obj_set_width(lv_label_4, 154);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Quét mạng hoàn tất");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 139);
        lv_obj_set_width(lv_obj_5, 6);
        lv_obj_set_height(lv_obj_5, 6);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 33);
        lv_obj_set_y(lv_label_5, 134);
        lv_obj_set_width(lv_label_5, 180);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Sẵn sàng kết nối");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 171);
        lv_obj_set_width(lv_label_6, 210);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "MẠNG ĐANG SỬ DỤNG");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 194);
        lv_obj_set_width(lv_obj_6, 220);
        lv_obj_set_height(lv_obj_6, 64);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 21);
        lv_obj_set_y(lv_obj_7, 205);
        lv_obj_set_width(lv_obj_7, 34);
        lv_obj_set_height(lv_obj_7, 34);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 24);
        lv_obj_set_y(lv_image_2, 208);
        lv_obj_set_width(lv_image_2, 28);
        lv_obj_set_height(lv_image_2, 28);
        lv_image_set_src(lv_image_2, boot_icon_wifi);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 63);
        lv_obj_set_y(lv_label_7, 199);
        lv_obj_set_width(lv_label_7, 155);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "XomCoding_5G");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 63);
        lv_obj_set_y(lv_label_8, 218);
        lv_obj_set_width(lv_label_8, 155);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Đã kết nối · -48 dBm");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 63);
        lv_obj_set_y(lv_label_9, 235);
        lv_obj_set_width(lv_label_9, 155);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Bảo mật · Tín hiệu tốt");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 165);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "MẠNG KHẢ DỤNG");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 412);
        lv_obj_set_y(lv_label_11, 61);
        lv_obj_set_width(lv_label_11, 56);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "4 mạng");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 84);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 40);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 248);
        lv_obj_set_y(lv_image_3, 90);
        lv_obj_set_width(lv_image_3, 28);
        lv_obj_set_height(lv_image_3, 28);
        lv_image_set_src(lv_image_3, boot_icon_wifi);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 282);
        lv_obj_set_y(lv_label_12, 86);
        lv_obj_set_width(lv_label_12, 148);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Home_Network");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 282);
        lv_obj_set_y(lv_label_13, 104);
        lv_obj_set_width(lv_label_13, 153);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "Bảo mật · -55 dBm");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 438);
        lv_obj_set_y(lv_image_4, 92);
        lv_obj_set_width(lv_image_4, 24);
        lv_obj_set_height(lv_image_4, 24);
        lv_image_set_src(lv_image_4, ui_next);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 129);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 40);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 248);
        lv_obj_set_y(lv_image_5, 135);
        lv_obj_set_width(lv_image_5, 28);
        lv_obj_set_height(lv_image_5, 28);
        lv_image_set_src(lv_image_5, boot_icon_wifi);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 282);
        lv_obj_set_y(lv_label_14, 131);
        lv_obj_set_width(lv_label_14, 148);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Office_2.4G");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 282);
        lv_obj_set_y(lv_label_15, 149);
        lv_obj_set_width(lv_label_15, 153);
        lv_obj_set_height(lv_label_15, 16);
        lv_label_set_text(lv_label_15, "Bảo mật · -63 dBm");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 438);
        lv_obj_set_y(lv_image_6, 137);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 240);
        lv_obj_set_y(lv_obj_10, 174);
        lv_obj_set_width(lv_obj_10, 228);
        lv_obj_set_height(lv_obj_10, 40);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_10, 1, 0);
        lv_obj_set_style_radius(lv_obj_10, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 248);
        lv_obj_set_y(lv_image_7, 180);
        lv_obj_set_width(lv_image_7, 28);
        lv_obj_set_height(lv_image_7, 28);
        lv_image_set_src(lv_image_7, boot_icon_wifi);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 282);
        lv_obj_set_y(lv_label_16, 176);
        lv_obj_set_width(lv_label_16, 148);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Guest_WiFi");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 282);
        lv_obj_set_y(lv_label_17, 194);
        lv_obj_set_width(lv_label_17, 153);
        lv_obj_set_height(lv_label_17, 16);
        lv_label_set_text(lv_label_17, "Mạng mở · -71 dBm");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 438);
        lv_obj_set_y(lv_image_8, 182);
        lv_obj_set_width(lv_image_8, 24);
        lv_obj_set_height(lv_image_8, 24);
        lv_image_set_src(lv_image_8, ui_next);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 240);
        lv_obj_set_y(lv_obj_11, 219);
        lv_obj_set_width(lv_obj_11, 228);
        lv_obj_set_height(lv_obj_11, 40);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_image_9 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_9, 248);
        lv_obj_set_y(lv_image_9, 225);
        lv_obj_set_width(lv_image_9, 28);
        lv_obj_set_height(lv_image_9, 28);
        lv_image_set_src(lv_image_9, boot_icon_wifi);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 282);
        lv_obj_set_y(lv_label_18, 221);
        lv_obj_set_width(lv_label_18, 148);
        lv_obj_set_height(lv_label_18, 19);
        lv_label_set_text(lv_label_18, "IoT_Devices");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 282);
        lv_obj_set_y(lv_label_19, 239);
        lv_obj_set_width(lv_label_19, 153);
        lv_obj_set_height(lv_label_19, 16);
        lv_label_set_text(lv_label_19, "Bảo mật · -79 dBm");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_10 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_10, 438);
        lv_obj_set_y(lv_image_10, 227);
        lv_obj_set_width(lv_image_10, 24);
        lv_obj_set_height(lv_image_10, 24);
        lv_image_set_src(lv_image_10, ui_next);

        lv_obj_t * btn_wifi_scan_back_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_scan_back_landscape, "btn_wifi_scan_back_landscape");
        lv_obj_set_x(btn_wifi_scan_back_landscape, 12);
        lv_obj_set_y(btn_wifi_scan_back_landscape, 270);
        lv_obj_set_width(btn_wifi_scan_back_landscape, 220);
        lv_obj_set_height(btn_wifi_scan_back_landscape, 38);
        lv_obj_set_style_bg_color(btn_wifi_scan_back_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_wifi_scan_back_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_wifi_scan_back_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_wifi_scan_back_landscape, 1, 0);
        lv_obj_set_style_radius(btn_wifi_scan_back_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_scan_back_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_scan_back_landscape, 0, 0);
        lv_obj_t * lv_label_20 = lv_label_create(btn_wifi_scan_back_landscape);
        lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_20, "Quay lại");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_wifi_scan_refresh_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_scan_refresh_landscape, "btn_wifi_scan_refresh_landscape");
        lv_obj_set_x(btn_wifi_scan_refresh_landscape, 240);
        lv_obj_set_y(btn_wifi_scan_refresh_landscape, 270);
        lv_obj_set_width(btn_wifi_scan_refresh_landscape, 228);
        lv_obj_set_height(btn_wifi_scan_refresh_landscape, 38);
        lv_obj_set_style_bg_color(btn_wifi_scan_refresh_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_wifi_scan_refresh_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_wifi_scan_refresh_landscape, 0, 0);
        lv_obj_set_style_radius(btn_wifi_scan_refresh_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_scan_refresh_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_scan_refresh_landscape, 0, 0);
        lv_obj_t * lv_label_21 = lv_label_create(btn_wifi_scan_refresh_landscape);
        lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_21, "Quét lại mạng");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

