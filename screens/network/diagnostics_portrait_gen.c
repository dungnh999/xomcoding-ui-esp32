/**
 * @file diagnostics_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "diagnostics_portrait_gen.h"
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

lv_obj_t * diagnostics_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "diagnostics_portrait_#");
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
        lv_obj_set_width(lv_label_0, 238);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Chẩn đoán mạng");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Kiểm tra demo · không ping thật");
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

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 74);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 74);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 26);
        lv_obj_set_y(lv_label_2, 90);
        lv_obj_set_width(lv_label_2, 130);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "Tổng quan");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 26);
        lv_obj_set_y(lv_label_3, 114);
        lv_obj_set_width(lv_label_3, 120);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "Ổn định");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 164);
        lv_obj_set_y(lv_label_4, 90);
        lv_obj_set_width(lv_label_4, 116);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Độ trễ demo");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 164);
        lv_obj_set_y(lv_label_5, 114);
        lv_obj_set_width(lv_label_5, 116);
        lv_obj_set_height(lv_label_5, 22);
        lv_label_set_text(lv_label_5, "18 ms");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 162);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 56);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 26);
        lv_obj_set_y(lv_label_6, 176);
        lv_obj_set_width(lv_label_6, 120);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Gateway");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 26);
        lv_obj_set_y(lv_label_7, 198);
        lv_obj_set_width(lv_label_7, 130);
        lv_obj_set_height(lv_label_7, 16);
        lv_label_set_text(lv_label_7, "192.168.1.1");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 206);
        lv_obj_set_y(lv_label_8, 181);
        lv_obj_set_width(lv_label_8, 76);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "PASS");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 230);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 56);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 26);
        lv_obj_set_y(lv_label_9, 244);
        lv_obj_set_width(lv_label_9, 120);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "DNS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 26);
        lv_obj_set_y(lv_label_10, 266);
        lv_obj_set_width(lv_label_10, 150);
        lv_obj_set_height(lv_label_10, 16);
        lv_label_set_text(lv_label_10, "1.1.1.1 · 8.8.8.8");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 206);
        lv_obj_set_y(lv_label_11, 249);
        lv_obj_set_width(lv_label_11, 76);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "PASS");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 298);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 56);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 26);
        lv_obj_set_y(lv_label_12, 312);
        lv_obj_set_width(lv_label_12, 120);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "Internet");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 26);
        lv_obj_set_y(lv_label_13, 334);
        lv_obj_set_width(lv_label_13, 150);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "Mô phỏng endpoint");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 206);
        lv_obj_set_y(lv_label_14, 317);
        lv_obj_set_width(lv_label_14, 76);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "WARN");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xf59e0b), 0);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_0, 12);
        lv_obj_set_y(lv_button_0, 434);
        lv_obj_set_width(lv_button_0, 296);
        lv_obj_set_height(lv_button_0, 34);
        lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_0, 0, 0);
        lv_obj_set_style_radius(lv_button_0, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_style_pad_all(lv_button_0, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(lv_button_0);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Chạy kiểm tra demo");
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

