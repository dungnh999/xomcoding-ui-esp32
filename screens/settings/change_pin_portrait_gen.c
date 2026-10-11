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
        lv_obj_set_width(lv_label_0, 248);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Thay đổi mã PIN");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Cập nhật mã khóa thiết bị");
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
        lv_obj_set_y(lv_label_2, 69);
        lv_obj_set_width(lv_label_2, 230);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "BẢO VỆ THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 92);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 65);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 104);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 115);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "PIN");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 73);
        lv_obj_set_y(lv_label_4, 101);
        lv_obj_set_width(lv_label_4, 218);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Mã bảo mật màn hình");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 73);
        lv_obj_set_y(lv_label_5, 126);
        lv_obj_set_width(lv_label_5, 218);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Đổi PIN để bảo vệ thiết bị");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 169);
        lv_obj_set_width(lv_label_6, 230);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "THÔNG TIN MÃ PIN");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 191);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 205);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 199);
        lv_obj_set_width(lv_label_7, 260);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Mã PIN hiện tại");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_current = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_current, "change_pin_current");
        lv_obj_set_x(change_pin_current, 24);
        lv_obj_set_y(change_pin_current, 222);
        lv_obj_set_width(change_pin_current, 272);
        lv_obj_set_height(change_pin_current, 35);
        lv_textarea_set_text(change_pin_current, "");
        lv_obj_set_style_text_font(change_pin_current, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_current, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_current, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_current, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_current, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(change_pin_current, 1, 0);
        lv_obj_set_style_radius(change_pin_current, 8, 0);
        lv_obj_set_style_pad_left(change_pin_current, 11, 0);
        lv_obj_set_style_pad_right(change_pin_current, 11, 0);
        lv_obj_set_style_pad_top(change_pin_current, 6, 0);
        lv_obj_set_style_pad_bottom(change_pin_current, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 265);
        lv_obj_set_width(lv_label_8, 260);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Mã PIN mới");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_new = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_new, "change_pin_new");
        lv_obj_set_x(change_pin_new, 24);
        lv_obj_set_y(change_pin_new, 288);
        lv_obj_set_width(change_pin_new, 272);
        lv_obj_set_height(change_pin_new, 35);
        lv_textarea_set_text(change_pin_new, "");
        lv_obj_set_style_text_font(change_pin_new, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_new, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_new, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_new, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_new, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(change_pin_new, 1, 0);
        lv_obj_set_style_radius(change_pin_new, 8, 0);
        lv_obj_set_style_pad_left(change_pin_new, 11, 0);
        lv_obj_set_style_pad_right(change_pin_new, 11, 0);
        lv_obj_set_style_pad_top(change_pin_new, 6, 0);
        lv_obj_set_style_pad_bottom(change_pin_new, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 331);
        lv_obj_set_width(lv_label_9, 260);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Xác nhận mã PIN mới");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_confirm = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_confirm, "change_pin_confirm");
        lv_obj_set_x(change_pin_confirm, 24);
        lv_obj_set_y(change_pin_confirm, 354);
        lv_obj_set_width(change_pin_confirm, 272);
        lv_obj_set_height(change_pin_confirm, 35);
        lv_textarea_set_text(change_pin_confirm, "");
        lv_obj_set_style_text_font(change_pin_confirm, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_confirm, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_confirm, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_confirm, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_confirm, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(change_pin_confirm, 1, 0);
        lv_obj_set_style_radius(change_pin_confirm, 8, 0);
        lv_obj_set_style_pad_left(change_pin_confirm, 11, 0);
        lv_obj_set_style_pad_right(change_pin_confirm, 11, 0);
        lv_obj_set_style_pad_top(change_pin_confirm, 6, 0);
        lv_obj_set_style_pad_bottom(change_pin_confirm, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 406);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 25);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 414);
        lv_obj_set_width(lv_obj_7, 3);
        lv_obj_set_height(lv_obj_7, 10);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 34);
        lv_obj_set_y(lv_label_10, 409);
        lv_obj_set_width(lv_label_10, 260);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "PIN mới nên có ít nhất 6 chữ số.");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_change_pin_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_change_pin_cancel, "btn_change_pin_cancel");
        lv_obj_set_x(btn_change_pin_cancel, 12);
        lv_obj_set_y(btn_change_pin_cancel, 439);
        lv_obj_set_width(btn_change_pin_cancel, 140);
        lv_obj_set_height(btn_change_pin_cancel, 32);
        lv_obj_set_style_bg_color(btn_change_pin_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_change_pin_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_change_pin_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_change_pin_cancel, 1, 0);
        lv_obj_set_style_radius(btn_change_pin_cancel, 9, 0);
        lv_obj_set_style_shadow_width(btn_change_pin_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_change_pin_cancel, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_change_pin_cancel);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "Hủy");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_change_pin_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_change_pin_save, "btn_change_pin_save");
        lv_obj_set_x(btn_change_pin_save, 160);
        lv_obj_set_y(btn_change_pin_save, 439);
        lv_obj_set_width(btn_change_pin_save, 148);
        lv_obj_set_height(btn_change_pin_save, 32);
        lv_obj_set_style_bg_color(btn_change_pin_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_change_pin_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_change_pin_save, 0, 0);
        lv_obj_set_style_radius(btn_change_pin_save, 9, 0);
        lv_obj_set_style_shadow_width(btn_change_pin_save, 0, 0);
        lv_obj_set_style_pad_all(btn_change_pin_save, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_change_pin_save);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "Lưu mã PIN");
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

