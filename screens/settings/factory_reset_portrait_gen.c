/**
 * @file factory_reset_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "factory_reset_portrait_gen.h"
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

lv_obj_t * factory_reset_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "factory_reset_portrait_#");
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
        lv_label_set_text(lv_label_0, "Khôi phục cài đặt");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Xác nhận đưa thiết bị về mặc định");
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
        lv_obj_set_width(lv_label_2, 250);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 90);
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
        lv_obj_set_y(lv_obj_4, 102);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 108);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 40);
        lv_label_set_text(lv_label_3, "S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 73);
        lv_obj_set_y(lv_label_4, 99);
        lv_obj_set_width(lv_label_4, 219);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 73);
        lv_obj_set_y(lv_label_5, 125);
        lv_obj_set_width(lv_label_5, 219);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Khôi phục cấu hình mặc định");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 164);
        lv_obj_set_width(lv_label_6, 250);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "CẢNH BÁO KHÔI PHỤC");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 186);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 113);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 23);
        lv_obj_set_y(lv_obj_6, 198);
        lv_obj_set_width(lv_obj_6, 3);
        lv_obj_set_height(lv_obj_6, 88);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0xe28d88), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 35);
        lv_obj_set_y(lv_label_7, 192);
        lv_obj_set_width(lv_label_7, 258);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Dữ liệu cấu hình sẽ bị xóa");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 35);
        lv_obj_set_y(lv_label_8, 220);
        lv_obj_set_width(lv_label_8, 257);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Wi-Fi và mật khẩu đã lưu");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 35);
        lv_obj_set_y(lv_label_9, 241);
        lv_obj_set_width(lv_label_9, 257);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "Cấu hình NAS, API và đồng bộ");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 35);
        lv_obj_set_y(lv_label_10, 262);
        lv_obj_set_width(lv_label_10, 257);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Các tùy chọn đã cá nhân hóa");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 13);
        lv_obj_set_y(lv_label_11, 309);
        lv_obj_set_width(lv_label_11, 250);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "XÁC NHẬN THAO TÁC");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 331);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 91);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 340);
        lv_obj_set_width(lv_label_12, 268);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Bạn chắc chắn muốn khôi phục?");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 24);
        lv_obj_set_y(lv_label_13, 360);
        lv_obj_set_width(lv_label_13, 268);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "Thao tác có thể không hoàn tác.");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * factory_reset_acknowledge = lv_checkbox_create(lv_obj_0);
        lv_obj_set_name(factory_reset_acknowledge, "factory_reset_acknowledge");
        lv_obj_set_x(factory_reset_acknowledge, 24);
        lv_obj_set_y(factory_reset_acknowledge, 386);
        lv_checkbox_set_text(factory_reset_acknowledge, "Tôi hiểu dữ liệu sẽ bị xóa");
        lv_obj_set_state(factory_reset_acknowledge, LV_STATE_CHECKED, false);
        lv_obj_set_style_text_font(factory_reset_acknowledge, be_medium_11, 0);
        lv_obj_set_style_text_color(factory_reset_acknowledge, lv_color_hex(0xe2e8f0), 0);
        lv_obj_set_style_pad_column(factory_reset_acknowledge, 8, 0);

        lv_obj_t * btn_factory_reset_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_factory_reset_cancel, "btn_factory_reset_cancel");
        lv_obj_set_x(btn_factory_reset_cancel, 12);
        lv_obj_set_y(btn_factory_reset_cancel, 432);
        lv_obj_set_width(btn_factory_reset_cancel, 140);
        lv_obj_set_height(btn_factory_reset_cancel, 38);
        lv_obj_set_style_bg_color(btn_factory_reset_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_factory_reset_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_factory_reset_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_factory_reset_cancel, 1, 0);
        lv_obj_set_style_radius(btn_factory_reset_cancel, 10, 0);
        lv_obj_set_style_shadow_width(btn_factory_reset_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_factory_reset_cancel, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_factory_reset_cancel);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Hủy");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_factory_reset_confirm = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_factory_reset_confirm, "btn_factory_reset_confirm");
        lv_obj_set_x(btn_factory_reset_confirm, 160);
        lv_obj_set_y(btn_factory_reset_confirm, 432);
        lv_obj_set_width(btn_factory_reset_confirm, 148);
        lv_obj_set_height(btn_factory_reset_confirm, 38);
        lv_obj_set_style_bg_color(btn_factory_reset_confirm, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_factory_reset_confirm, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_factory_reset_confirm, 0, 0);
        lv_obj_set_style_radius(btn_factory_reset_confirm, 10, 0);
        lv_obj_set_style_shadow_width(btn_factory_reset_confirm, 0, 0);
        lv_obj_set_style_pad_all(btn_factory_reset_confirm, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_factory_reset_confirm);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Khôi phục");
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

