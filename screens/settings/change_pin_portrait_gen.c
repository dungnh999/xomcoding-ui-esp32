/**
 * @file change_pin_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "change_pin_portrait_gen.h"
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

lv_obj_t * change_pin_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "change_pin_portrait_#");
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
        lv_obj_set_width(lv_label_0, 244);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Đổi mã PIN");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 236);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Mã khóa màn hình demo");
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
        lv_obj_set_y(lv_label_2, 72);
        lv_obj_set_width(lv_label_2, 220);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "NHẬP MÃ PIN");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 96);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 188);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 110);
        lv_obj_set_width(lv_label_3, 150);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "PIN hiện tại");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_textarea_0 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_0, 24);
        lv_obj_set_y(lv_textarea_0, 134);
        lv_obj_set_width(lv_textarea_0, 272);
        lv_obj_set_height(lv_textarea_0, 34);
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
        lv_obj_set_style_pad_left(lv_textarea_0, 10, 0);
        lv_obj_set_style_pad_right(lv_textarea_0, 10, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 180);
        lv_obj_set_width(lv_label_4, 150);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "PIN mới");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_textarea_1 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_1, 24);
        lv_obj_set_y(lv_textarea_1, 204);
        lv_obj_set_width(lv_textarea_1, 126);
        lv_obj_set_height(lv_textarea_1, 34);
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
        lv_obj_set_style_pad_left(lv_textarea_1, 10, 0);
        lv_obj_set_style_pad_right(lv_textarea_1, 10, 0);

        lv_obj_t * lv_textarea_2 = lv_textarea_create(lv_obj_0);
        lv_obj_set_x(lv_textarea_2, 170);
        lv_obj_set_y(lv_textarea_2, 204);
        lv_obj_set_width(lv_textarea_2, 126);
        lv_obj_set_height(lv_textarea_2, 34);
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
        lv_obj_set_style_pad_left(lv_textarea_2, 10, 0);
        lv_obj_set_style_pad_right(lv_textarea_2, 10, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 250);
        lv_obj_set_width(lv_label_5, 272);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Xác nhận PIN mới khớp.");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 300);
        lv_obj_set_width(lv_label_6, 220);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "YÊU CẦU");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 324);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 86);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 338);
        lv_obj_set_width(lv_label_7, 250);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "PIN gồm 4-6 chữ số.");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 365);
        lv_obj_set_width(lv_label_8, 250);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Không dùng chuỗi quá dễ đoán.");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 392);
        lv_obj_set_width(lv_label_9, 250);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "Có thể đổi lại bất kỳ lúc nào.");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_0, 12);
        lv_obj_set_y(lv_button_0, 430);
        lv_obj_set_width(lv_button_0, 136);
        lv_obj_set_height(lv_button_0, 38);
        lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_button_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_button_0, 1, 0);
        lv_obj_set_style_radius(lv_button_0, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_style_pad_all(lv_button_0, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(lv_button_0);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "Hủy");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_1, 156);
        lv_obj_set_y(lv_button_1, 430);
        lv_obj_set_width(lv_button_1, 152);
        lv_obj_set_height(lv_button_1, 38);
        lv_obj_set_style_bg_color(lv_button_1, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_1, 0, 0);
        lv_obj_set_style_radius(lv_button_1, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_1, 0, 0);
        lv_obj_set_style_pad_all(lv_button_1, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(lv_button_1);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "Lưu PIN");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

