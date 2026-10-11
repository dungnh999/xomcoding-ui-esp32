/**
 * @file change_pin_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "change_pin_landscape_gen.h"
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

lv_obj_t * change_pin_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "change_pin_landscape_#");
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
        lv_obj_set_width(lv_label_0, 300);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Đổi mã PIN");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Mã khóa màn hình demo");
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
        lv_obj_set_y(lv_obj_3, 72);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 168);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 24);
        lv_obj_set_y(lv_label_2, 86);
        lv_obj_set_width(lv_label_2, 150);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "PIN hiện tại");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_textarea_0 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_0, 24);
        lv_obj_set_y(lv_textarea_0, 110);
        lv_obj_set_width(lv_textarea_0, 196);
        lv_obj_set_height(lv_textarea_0, 32);
        lv_textarea_set_text(lv_textarea_0, "1234");
        lv_textarea_set_one_line(lv_textarea_0, true);
        lv_textarea_set_password_mode(lv_textarea_0, true);
        lv_obj_set_style_bg_color(lv_textarea_0, lv_color_hex(0x0f1826), 0);
        lv_obj_set_style_bg_opa(lv_textarea_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_textarea_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_textarea_0, 1, 0);
        lv_obj_set_style_radius(lv_textarea_0, 8, 0);
        lv_obj_set_style_text_font(lv_textarea_0, be_medium_14, 0);
        lv_obj_set_style_text_color(lv_textarea_0, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_left(lv_textarea_0, 8, 0);
        lv_obj_set_style_pad_right(lv_textarea_0, 8, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 154);
        lv_obj_set_width(lv_label_3, 150);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "PIN mới");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_textarea_1 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_1, 24);
        lv_obj_set_y(lv_textarea_1, 178);
        lv_obj_set_width(lv_textarea_1, 92);
        lv_obj_set_height(lv_textarea_1, 32);
        lv_textarea_set_text(lv_textarea_1, "2580");
        lv_textarea_set_one_line(lv_textarea_1, true);
        lv_textarea_set_password_mode(lv_textarea_1, true);
        lv_obj_set_style_bg_color(lv_textarea_1, lv_color_hex(0x0f1826), 0);
        lv_obj_set_style_bg_opa(lv_textarea_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_textarea_1, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_textarea_1, 1, 0);
        lv_obj_set_style_radius(lv_textarea_1, 8, 0);
        lv_obj_set_style_text_font(lv_textarea_1, be_medium_14, 0);
        lv_obj_set_style_text_color(lv_textarea_1, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_left(lv_textarea_1, 8, 0);
        lv_obj_set_style_pad_right(lv_textarea_1, 8, 0);

        lv_obj_t * lv_textarea_2 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_2, 128);
        lv_obj_set_y(lv_textarea_2, 178);
        lv_obj_set_width(lv_textarea_2, 92);
        lv_obj_set_height(lv_textarea_2, 32);
        lv_textarea_set_text(lv_textarea_2, "2580");
        lv_textarea_set_one_line(lv_textarea_2, true);
        lv_textarea_set_password_mode(lv_textarea_2, true);
        lv_obj_set_style_bg_color(lv_textarea_2, lv_color_hex(0x0f1826), 0);
        lv_obj_set_style_bg_opa(lv_textarea_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_textarea_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_textarea_2, 1, 0);
        lv_obj_set_style_radius(lv_textarea_2, 8, 0);
        lv_obj_set_style_text_font(lv_textarea_2, be_medium_14, 0);
        lv_obj_set_style_text_color(lv_textarea_2, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_left(lv_textarea_2, 8, 0);
        lv_obj_set_style_pad_right(lv_textarea_2, 8, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 248);
        lv_obj_set_y(lv_obj_4, 72);
        lv_obj_set_width(lv_obj_4, 220);
        lv_obj_set_height(lv_obj_4, 168);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 260);
        lv_obj_set_y(lv_label_4, 88);
        lv_obj_set_width(lv_label_4, 180);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Yêu cầu bảo mật");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 260);
        lv_obj_set_y(lv_label_5, 122);
        lv_obj_set_width(lv_label_5, 190);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "PIN gồm 4-6 chữ số.");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 260);
        lv_obj_set_y(lv_label_6, 154);
        lv_obj_set_width(lv_label_6, 190);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Không dùng 0000 hoặc 1234.");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 260);
        lv_obj_set_y(lv_label_7, 186);
        lv_obj_set_width(lv_label_7, 190);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "Trạng thái: hợp lệ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_0, 12);
        lv_obj_set_y(lv_button_0, 260);
        lv_obj_set_width(lv_button_0, 220);
        lv_obj_set_height(lv_button_0, 36);
        lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_button_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_button_0, 1, 0);
        lv_obj_set_style_radius(lv_button_0, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_style_pad_all(lv_button_0, 0, 0);
        lv_obj_t * lv_label_8 = lv_label_create(lv_button_0);
        lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_8, "Hủy");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_1, 248);
        lv_obj_set_y(lv_button_1, 260);
        lv_obj_set_width(lv_button_1, 220);
        lv_obj_set_height(lv_button_1, 36);
        lv_obj_set_style_bg_color(lv_button_1, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_1, 0, 0);
        lv_obj_set_style_radius(lv_button_1, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_1, 0, 0);
        lv_obj_set_style_pad_all(lv_button_1, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(lv_button_1);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "Lưu PIN");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

