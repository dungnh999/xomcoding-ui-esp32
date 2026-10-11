/**
 * @file wifi_password_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "wifi_password_portrait_gen.h"
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

lv_obj_t * wifi_password_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t wifi_checkbox_small;
    static lv_style_t wifi_checkbox_checked;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&wifi_checkbox_small);
        lv_style_init(&wifi_checkbox_checked);

        lv_style_set_width(&wifi_checkbox_small, 16);
        lv_style_set_height(&wifi_checkbox_small, 16);
        lv_style_set_radius(&wifi_checkbox_small, 4);
        lv_style_set_border_width(&wifi_checkbox_small, 1);
        lv_style_set_border_color(&wifi_checkbox_small, lv_color_hex(0x526174));
        lv_style_set_bg_color(&wifi_checkbox_small, lv_color_hex(0x101b2b));
        lv_style_set_bg_opa(&wifi_checkbox_small, (255 * 100 / 100));
        lv_style_set_bg_color(&wifi_checkbox_checked, lv_color_hex(0xa52a26));
        lv_style_set_border_color(&wifi_checkbox_checked, lv_color_hex(0xa52a26));

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "wifi_password_portrait_#");
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
        lv_obj_set_width(lv_label_0, 242);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Kết nối Wi-Fi");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 240);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Nhập mật khẩu mạng đã chọn");
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

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 13);
        lv_obj_set_y(lv_label_2, 68);
        lv_obj_set_width(lv_label_2, 220);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "MẠNG ĐÃ CHỌN");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 92);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 84);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 103);
        lv_obj_set_width(lv_obj_4, 42);
        lv_obj_set_height(lv_obj_4, 42);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 29);
        lv_obj_set_y(lv_image_1, 110);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 74);
        lv_obj_set_y(lv_label_3, 101);
        lv_obj_set_width(lv_label_3, 194);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "Home_Network");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 74);
        lv_obj_set_y(lv_label_4, 124);
        lv_obj_set_width(lv_label_4, 185);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Tín hiệu tốt · -55 dBm");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 149);
        lv_obj_set_width(lv_obj_5, 274);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 153);
        lv_obj_set_width(lv_label_5, 166);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Bảo mật WPA2");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 232);
        lv_obj_set_y(lv_obj_6, 152);
        lv_obj_set_width(lv_obj_6, 63);
        lv_obj_set_height(lv_obj_6, 19);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x24372f), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 6, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 232);
        lv_obj_set_y(lv_label_6, 153);
        lv_obj_set_width(lv_label_6, 63);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "Bảo mật");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 186);
        lv_obj_set_width(lv_label_7, 245);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "XÁC THỰC KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 210);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 132);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 219);
        lv_obj_set_width(lv_label_8, 220);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Mật khẩu Wi-Fi");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * input_wifi_password = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(input_wifi_password, "input_wifi_password");
        lv_obj_set_x(input_wifi_password, 24);
        lv_obj_set_y(input_wifi_password, 245);
        lv_obj_set_width(input_wifi_password, 272);
        lv_obj_set_height(input_wifi_password, 39);
        lv_textarea_set_text(input_wifi_password, "");
        lv_obj_set_style_text_font(input_wifi_password, be_medium_14, 0);
        lv_obj_set_style_text_color(input_wifi_password, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(input_wifi_password, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(input_wifi_password, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(input_wifi_password, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(input_wifi_password, 1, 0);
        lv_obj_set_style_radius(input_wifi_password, 9, 0);
        lv_obj_set_style_pad_left(input_wifi_password, 11, 0);
        lv_obj_set_style_pad_right(input_wifi_password, 11, 0);
        lv_obj_set_style_pad_top(input_wifi_password, 8, 0);
        lv_obj_set_style_pad_bottom(input_wifi_password, 0, 0);

        lv_obj_t * checkbox_show_wifi_password = lv_checkbox_create(lv_obj_0);
        lv_obj_set_name(checkbox_show_wifi_password, "checkbox_show_wifi_password");
        lv_obj_set_x(checkbox_show_wifi_password, 24);
        lv_obj_set_y(checkbox_show_wifi_password, 299);
        lv_checkbox_set_text(checkbox_show_wifi_password, "Hiện mật khẩu");
        lv_obj_set_state(checkbox_show_wifi_password, LV_STATE_CHECKED, false);
        lv_obj_set_style_text_font(checkbox_show_wifi_password, be_medium_12, 0);
        lv_obj_set_style_text_color(checkbox_show_wifi_password, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_column(checkbox_show_wifi_password, 7, 0);
        lv_obj_add_style(checkbox_show_wifi_password, &wifi_checkbox_small, LV_PART_INDICATOR);
        lv_obj_add_style(checkbox_show_wifi_password, &wifi_checkbox_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 321);
        lv_obj_set_width(lv_label_9, 272);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "Mật khẩu thường có ít nhất 8 ký tự.");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 352);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 67);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 23);
        lv_obj_set_y(lv_obj_9, 363);
        lv_obj_set_width(lv_obj_9, 3);
        lv_obj_set_height(lv_obj_9, 43);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 35);
        lv_obj_set_y(lv_label_10, 360);
        lv_obj_set_width(lv_label_10, 260);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Lưu ý kết nối");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 35);
        lv_obj_set_y(lv_label_11, 380);
        lv_obj_set_width(lv_label_11, 255);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "ESP32-S3 chỉ hỗ trợ Wi-Fi 2.4 GHz.");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 35);
        lv_obj_set_y(lv_label_12, 398);
        lv_obj_set_width(lv_label_12, 255);
        lv_obj_set_height(lv_label_12, 16);
        lv_label_set_text(lv_label_12, "Chọn đúng mạng và mật khẩu.");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_wifi_password_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_password_cancel, "btn_wifi_password_cancel");
        lv_obj_set_x(btn_wifi_password_cancel, 12);
        lv_obj_set_y(btn_wifi_password_cancel, 432);
        lv_obj_set_width(btn_wifi_password_cancel, 140);
        lv_obj_set_height(btn_wifi_password_cancel, 38);
        lv_obj_set_style_bg_color(btn_wifi_password_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_wifi_password_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_wifi_password_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_wifi_password_cancel, 1, 0);
        lv_obj_set_style_radius(btn_wifi_password_cancel, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_password_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_password_cancel, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_wifi_password_cancel);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "Hủy");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_wifi_password_connect = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_wifi_password_connect, "btn_wifi_password_connect");
        lv_obj_set_x(btn_wifi_password_connect, 160);
        lv_obj_set_y(btn_wifi_password_connect, 432);
        lv_obj_set_width(btn_wifi_password_connect, 148);
        lv_obj_set_height(btn_wifi_password_connect, 38);
        lv_obj_set_style_bg_color(btn_wifi_password_connect, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_wifi_password_connect, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_wifi_password_connect, 0, 0);
        lv_obj_set_style_radius(btn_wifi_password_connect, 10, 0);
        lv_obj_set_style_shadow_width(btn_wifi_password_connect, 0, 0);
        lv_obj_set_style_pad_all(btn_wifi_password_connect, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_wifi_password_connect);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Kết nối");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

