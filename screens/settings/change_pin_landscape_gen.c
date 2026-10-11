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
        lv_label_set_text(lv_label_0, "Thay đổi mã PIN");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Cập nhật mã khóa thiết bị");
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
        lv_obj_set_y(lv_label_2, 62);
        lv_obj_set_width(lv_label_2, 210);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "BẢO VỆ THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 100);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 96);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 106);
        lv_obj_set_width(lv_label_3, 38);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "PIN");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 68);
        lv_obj_set_y(lv_label_4, 94);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Bảo mật màn hình");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 68);
        lv_obj_set_y(lv_label_5, 116);
        lv_obj_set_width(lv_label_5, 150);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 145);
        lv_obj_set_width(lv_obj_5, 200);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 22);
        lv_obj_set_y(lv_label_6, 155);
        lv_obj_set_width(lv_label_6, 199);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Thay PIN để bảo vệ thiết bị");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 194);
        lv_obj_set_width(lv_label_7, 210);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "LƯU Ý BẢO MẬT");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 216);
        lv_obj_set_width(lv_obj_6, 220);
        lv_obj_set_height(lv_obj_6, 54);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 226);
        lv_obj_set_width(lv_obj_7, 3);
        lv_obj_set_height(lv_obj_7, 33);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 34);
        lv_obj_set_y(lv_label_8, 221);
        lv_obj_set_width(lv_label_8, 187);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "PIN mới từ 6 chữ số");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 34);
        lv_obj_set_y(lv_label_9, 244);
        lv_obj_set_width(lv_label_9, 187);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Không chia sẻ mã PIN");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 62);
        lv_obj_set_width(lv_label_10, 218);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "THÔNG TIN MÃ PIN");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 84);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 186);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 90);
        lv_obj_set_width(lv_label_11, 205);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "Mã PIN hiện tại");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_current_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_current_landscape, "change_pin_current_landscape");
        lv_obj_set_x(change_pin_current_landscape, 251);
        lv_obj_set_y(change_pin_current_landscape, 111);
        lv_obj_set_width(change_pin_current_landscape, 206);
        lv_obj_set_height(change_pin_current_landscape, 31);
        lv_textarea_set_text(change_pin_current_landscape, "");
        lv_obj_set_style_text_font(change_pin_current_landscape, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_current_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_current_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_current_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_current_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(change_pin_current_landscape, 1, 0);
        lv_obj_set_style_radius(change_pin_current_landscape, 8, 0);
        lv_obj_set_style_pad_left(change_pin_current_landscape, 9, 0);
        lv_obj_set_style_pad_right(change_pin_current_landscape, 9, 0);
        lv_obj_set_style_pad_top(change_pin_current_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(change_pin_current_landscape, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 251);
        lv_obj_set_y(lv_label_12, 149);
        lv_obj_set_width(lv_label_12, 205);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Mã PIN mới");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_new_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_new_landscape, "change_pin_new_landscape");
        lv_obj_set_x(change_pin_new_landscape, 251);
        lv_obj_set_y(change_pin_new_landscape, 170);
        lv_obj_set_width(change_pin_new_landscape, 206);
        lv_obj_set_height(change_pin_new_landscape, 31);
        lv_textarea_set_text(change_pin_new_landscape, "");
        lv_obj_set_style_text_font(change_pin_new_landscape, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_new_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_new_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_new_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_new_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(change_pin_new_landscape, 1, 0);
        lv_obj_set_style_radius(change_pin_new_landscape, 8, 0);
        lv_obj_set_style_pad_left(change_pin_new_landscape, 9, 0);
        lv_obj_set_style_pad_right(change_pin_new_landscape, 9, 0);
        lv_obj_set_style_pad_top(change_pin_new_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(change_pin_new_landscape, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 208);
        lv_obj_set_width(lv_label_13, 205);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Xác nhận mã PIN mới");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * change_pin_confirm_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(change_pin_confirm_landscape, "change_pin_confirm_landscape");
        lv_obj_set_x(change_pin_confirm_landscape, 251);
        lv_obj_set_y(change_pin_confirm_landscape, 229);
        lv_obj_set_width(change_pin_confirm_landscape, 206);
        lv_obj_set_height(change_pin_confirm_landscape, 31);
        lv_textarea_set_text(change_pin_confirm_landscape, "");
        lv_obj_set_style_text_font(change_pin_confirm_landscape, be_semibold_14, 0);
        lv_obj_set_style_text_color(change_pin_confirm_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(change_pin_confirm_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(change_pin_confirm_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(change_pin_confirm_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(change_pin_confirm_landscape, 1, 0);
        lv_obj_set_style_radius(change_pin_confirm_landscape, 8, 0);
        lv_obj_set_style_pad_left(change_pin_confirm_landscape, 9, 0);
        lv_obj_set_style_pad_right(change_pin_confirm_landscape, 9, 0);
        lv_obj_set_style_pad_top(change_pin_confirm_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(change_pin_confirm_landscape, 0, 0);

        lv_obj_t * btn_change_pin_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_change_pin_cancel_landscape, "btn_change_pin_cancel_landscape");
        lv_obj_set_x(btn_change_pin_cancel_landscape, 12);
        lv_obj_set_y(btn_change_pin_cancel_landscape, 278);
        lv_obj_set_width(btn_change_pin_cancel_landscape, 220);
        lv_obj_set_height(btn_change_pin_cancel_landscape, 30);
        lv_obj_set_style_bg_color(btn_change_pin_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_change_pin_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_change_pin_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_change_pin_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_change_pin_cancel_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_change_pin_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_change_pin_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_change_pin_cancel_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Hủy");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_change_pin_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_change_pin_save_landscape, "btn_change_pin_save_landscape");
        lv_obj_set_x(btn_change_pin_save_landscape, 240);
        lv_obj_set_y(btn_change_pin_save_landscape, 278);
        lv_obj_set_width(btn_change_pin_save_landscape, 228);
        lv_obj_set_height(btn_change_pin_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_change_pin_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_change_pin_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_change_pin_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_change_pin_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_change_pin_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_change_pin_save_landscape, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_change_pin_save_landscape);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Lưu mã PIN");
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

