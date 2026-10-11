/**
 * @file wifi_password_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_password_landscape_gen.h"
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

lv_obj_t * wifi_password_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t wifi_password_land_checkbox;
    static lv_style_t wifi_password_land_checked;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&wifi_password_land_checkbox);
        lv_style_init(&wifi_password_land_checked);

        lv_style_set_width(&wifi_password_land_checkbox, 16);
        lv_style_set_height(&wifi_password_land_checkbox, 16);
        lv_style_set_radius(&wifi_password_land_checkbox, 4);
        lv_style_set_border_width(&wifi_password_land_checkbox, 1);
        lv_style_set_border_color(&wifi_password_land_checkbox, lv_color_hex(0x526174));
        lv_style_set_bg_color(&wifi_password_land_checkbox, lv_color_hex(0x101b2b));
        lv_style_set_bg_opa(&wifi_password_land_checkbox, (255 * 100 / 100));
        lv_style_set_bg_color(&wifi_password_land_checked, lv_color_hex(0xa52a26));
        lv_style_set_border_color(&wifi_password_land_checked, lv_color_hex(0xa52a26));

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_password_landscape_#");
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
        lv_obj_set_width(lv_label_0, 250);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Nhập mật khẩu mạng đã chọn");
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
        lv_label_set_text(lv_label_2, "MẠNG ĐÃ CHỌN");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 112);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 95);
        lv_obj_set_width(lv_obj_4, 39);
        lv_obj_set_height(lv_obj_4, 39);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 28);
        lv_obj_set_y(lv_image_1, 101);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 69);
        lv_obj_set_y(lv_label_3, 95);
        lv_obj_set_width(lv_label_3, 151);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "Home_Network");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 69);
        lv_obj_set_y(lv_label_4, 118);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Tín hiệu tốt · -55 dBm");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 143);
        lv_obj_set_width(lv_obj_5, 200);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 150);
        lv_obj_set_width(lv_label_5, 130);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Loại bảo mật");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 147);
        lv_obj_set_y(lv_label_6, 150);
        lv_obj_set_width(lv_label_6, 75);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "WPA2");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 174);
        lv_obj_set_width(lv_label_7, 198);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Yêu cầu mật khẩu để kết nối");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 205);
        lv_obj_set_width(lv_obj_6, 220);
        lv_obj_set_height(lv_obj_6, 53);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 214);
        lv_obj_set_width(lv_obj_7, 3);
        lv_obj_set_height(lv_obj_7, 35);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 33);
        lv_obj_set_y(lv_label_8, 210);
        lv_obj_set_width(lv_label_8, 188);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Lưu ý kết nối");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 33);
        lv_obj_set_y(lv_label_9, 230);
        lv_obj_set_width(lv_label_9, 187);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "Chỉ hỗ trợ Wi-Fi 2.4 GHz.");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 225);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "XÁC THỰC KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 84);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 174);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 95);
        lv_obj_set_width(lv_label_11, 205);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "Mật khẩu Wi-Fi");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_wifi_password_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_wifi_password_landscape, "input_wifi_password_landscape");
        lv_obj_set_x(input_wifi_password_landscape, 251);
        lv_obj_set_y(input_wifi_password_landscape, 120);
        lv_obj_set_width(input_wifi_password_landscape, 206);
        lv_obj_set_height(input_wifi_password_landscape, 39);
        lv_textarea_set_text(input_wifi_password_landscape, "");
        lv_obj_set_style_text_font(input_wifi_password_landscape, be_medium_14, 0);
        lv_obj_set_style_text_color(input_wifi_password_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_wifi_password_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_wifi_password_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_wifi_password_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(input_wifi_password_landscape, 1, 0);
        lv_obj_set_style_radius(input_wifi_password_landscape, 9, 0);
        lv_obj_set_style_pad_left(input_wifi_password_landscape, 10, 0);
        lv_obj_set_style_pad_right(input_wifi_password_landscape, 10, 0);
        lv_obj_set_style_pad_top(input_wifi_password_landscape, 8, 0);
        lv_obj_set_style_pad_bottom(input_wifi_password_landscape, 0, 0);

        lv_obj_t * checkbox_show_wifi_password_landscape = lv_checkbox_create(lv_obj_0);
        lv_obj_set_name(checkbox_show_wifi_password_landscape, "checkbox_show_wifi_password_landscape");
        lv_obj_set_x(checkbox_show_wifi_password_landscape, 251);
        lv_obj_set_y(checkbox_show_wifi_password_landscape, 171);
        lv_checkbox_set_text(checkbox_show_wifi_password_landscape, "Hiện mật khẩu");
        lv_obj_set_state(checkbox_show_wifi_password_landscape, LV_STATE_CHECKED, false);
        lv_obj_set_style_text_font(checkbox_show_wifi_password_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(checkbox_show_wifi_password_landscape, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_column(checkbox_show_wifi_password_landscape, 7, 0);
        lv_obj_add_style(checkbox_show_wifi_password_landscape, &wifi_password_land_checkbox, LV_PART_INDICATOR);
        lv_obj_add_style(checkbox_show_wifi_password_landscape, &wifi_password_land_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 251);
        lv_obj_set_y(lv_obj_9, 201);
        lv_obj_set_width(lv_obj_9, 206);
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 251);
        lv_obj_set_y(lv_label_12, 210);
        lv_obj_set_width(lv_label_12, 203);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "Nhập đúng mật khẩu mạng.");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 231);
        lv_obj_set_width(lv_label_13, 203);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "WPA2: thường từ 8 ký tự.");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_wifi_password_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_password_cancel_landscape, "btn_wifi_password_cancel_landscape");
        lv_obj_set_x(btn_wifi_password_cancel_landscape, 12);
        lv_obj_set_y(btn_wifi_password_cancel_landscape, 270);
        lv_obj_set_width(btn_wifi_password_cancel_landscape, 220);
        lv_obj_set_height(btn_wifi_password_cancel_landscape, 38);
        lv_obj_set_style_bg_color(btn_wifi_password_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_wifi_password_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_wifi_password_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_wifi_password_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_wifi_password_cancel_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_password_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_password_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_wifi_password_cancel_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Hủy");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_wifi_password_connect_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_password_connect_landscape, "btn_wifi_password_connect_landscape");
        lv_obj_set_x(btn_wifi_password_connect_landscape, 240);
        lv_obj_set_y(btn_wifi_password_connect_landscape, 270);
        lv_obj_set_width(btn_wifi_password_connect_landscape, 228);
        lv_obj_set_height(btn_wifi_password_connect_landscape, 38);
        lv_obj_set_style_bg_color(btn_wifi_password_connect_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_wifi_password_connect_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_wifi_password_connect_landscape, 0, 0);
        lv_obj_set_style_radius(btn_wifi_password_connect_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_password_connect_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_password_connect_landscape, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_wifi_password_connect_landscape);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

