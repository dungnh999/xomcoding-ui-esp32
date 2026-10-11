/**
 * @file sync_interval_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sync_interval_landscape_gen.h"
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

lv_obj_t * sync_interval_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "sync_interval_landscape_#");
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
        lv_label_set_text(lv_label_0, "Chu kỳ đồng bộ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Tần suất cập nhật dashboard");
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
        lv_obj_set_y(lv_obj_3, 76);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 114);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 24);
        lv_obj_set_y(lv_label_2, 92);
        lv_obj_set_width(lv_label_2, 120);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "Đang chọn");
        lv_obj_set_style_text_font(lv_label_2, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 120);
        lv_obj_set_width(lv_label_3, 120);
        lv_obj_set_height(lv_label_3, 24);
        lv_label_set_text(lv_label_3, "30 giây");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 158);
        lv_obj_set_width(lv_label_4, 180);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Cân bằng và ổn định");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_0, 248);
        lv_obj_set_y(lv_button_0, 76);
        lv_obj_set_width(lv_button_0, 68);
        lv_obj_set_height(lv_button_0, 50);
        lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_button_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_button_0, 1, 0);
        lv_obj_set_style_radius(lv_button_0, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_style_pad_all(lv_button_0, 0, 0);
        lv_obj_t * lv_label_5 = lv_label_create(lv_button_0);
        lv_obj_set_align(lv_label_5, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_5, "10s");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_1, 324);
        lv_obj_set_y(lv_button_1, 76);
        lv_obj_set_width(lv_button_1, 68);
        lv_obj_set_height(lv_button_1, 50);
        lv_obj_set_style_bg_color(lv_button_1, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_1, 0, 0);
        lv_obj_set_style_radius(lv_button_1, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_1, 0, 0);
        lv_obj_set_style_pad_all(lv_button_1, 0, 0);
        lv_obj_t * lv_label_6 = lv_label_create(lv_button_1);
        lv_obj_set_align(lv_label_6, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_6, "30s");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_button_2 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_2, 400);
        lv_obj_set_y(lv_button_2, 76);
        lv_obj_set_width(lv_button_2, 68);
        lv_obj_set_height(lv_button_2, 50);
        lv_obj_set_style_bg_color(lv_button_2, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(lv_button_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_button_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_button_2, 1, 0);
        lv_obj_set_style_radius(lv_button_2, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_2, 0, 0);
        lv_obj_set_style_pad_all(lv_button_2, 0, 0);
        lv_obj_t * lv_label_7 = lv_label_create(lv_button_2);
        lv_obj_set_align(lv_label_7, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_7, "2m");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 248);
        lv_obj_set_y(lv_obj_4, 144);
        lv_obj_set_width(lv_obj_4, 220);
        lv_obj_set_height(lv_obj_4, 46);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 260);
        lv_obj_set_y(lv_label_8, 157);
        lv_obj_set_width(lv_label_8, 196);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Áp dụng cho dashboard demo.");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_button_3 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_3, 12);
        lv_obj_set_y(lv_button_3, 244);
        lv_obj_set_width(lv_button_3, 456);
        lv_obj_set_height(lv_button_3, 36);
        lv_obj_set_style_bg_color(lv_button_3, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_3, 0, 0);
        lv_obj_set_style_radius(lv_button_3, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_3, 0, 0);
        lv_obj_set_style_pad_all(lv_button_3, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(lv_button_3);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "Lưu chu kỳ đồng bộ");
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

