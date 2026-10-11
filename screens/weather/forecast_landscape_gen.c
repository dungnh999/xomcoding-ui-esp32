/**
 * @file forecast_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "forecast_landscape_gen.h"
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

lv_obj_t * forecast_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "forecast_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 12);
        lv_obj_set_y(lv_obj_1, 10);
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
        lv_obj_set_y(lv_image_0, 15);
        lv_obj_set_width(lv_image_0, 24);
        lv_obj_set_height(lv_image_0, 24);
        lv_image_set_src(lv_image_0, ui_back);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 56);
        lv_obj_set_y(lv_label_0, 6);
        lv_obj_set_width(lv_label_0, 240);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 34);
        lv_obj_set_width(lv_label_1, 200);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hà Nội · 25-29/05");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 398);
        lv_obj_set_y(lv_obj_2, 13);
        lv_obj_set_width(lv_obj_2, 70);
        lv_obj_set_height(lv_obj_2, 30);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_2, 1, 0);
        lv_obj_set_style_radius(lv_obj_2, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 401);
        lv_obj_set_y(lv_obj_3, 16);
        lv_obj_set_width(lv_obj_3, 32);
        lv_obj_set_height(lv_obj_3, 24);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);
        lv_obj_set_style_radius(lv_obj_3, 7, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 401);
        lv_obj_set_y(lv_label_2, 16);
        lv_obj_set_width(lv_label_2, 32);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "°C");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 435);
        lv_obj_set_y(lv_label_3, 17);
        lv_obj_set_width(lv_label_3, 29);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "°F");
        lv_obj_set_style_text_font(lv_label_3, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 56);
        lv_obj_set_width(lv_obj_4, 456);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 64);
        lv_obj_set_width(lv_obj_5, 88);
        lv_obj_set_height(lv_obj_5, 188);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 73);
        lv_obj_set_width(lv_label_4, 68);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "CN");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 94);
        lv_obj_set_width(lv_label_5, 68);
        lv_obj_set_height(lv_label_5, 15);
        lv_label_set_text(lv_label_5, "25/05");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 40);
        lv_obj_set_y(lv_image_1, 110);
        lv_obj_set_width(lv_image_1, 32);
        lv_obj_set_height(lv_image_1, 32);
        lv_image_set_src(lv_image_1, forecast_cloudy);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 17);
        lv_obj_set_y(lv_label_6, 145);
        lv_obj_set_width(lv_label_6, 78);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Có mây");
        lv_obj_set_style_text_font(lv_label_6, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 18);
        lv_obj_set_y(lv_label_7, 166);
        lv_obj_set_width(lv_label_7, 76);
        lv_obj_set_height(lv_label_7, 22);
        lv_label_set_text(lv_label_7, "31° / 24°");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_7, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 23);
        lv_obj_set_y(lv_obj_6, 190);
        lv_obj_set_width(lv_obj_6, 66);
        lv_obj_set_height(lv_obj_6, 1);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 19);
        lv_obj_set_y(lv_label_8, 195);
        lv_obj_set_width(lv_label_8, 74);
        lv_obj_set_height(lv_label_8, 15);
        lv_label_set_text(lv_label_8, "Mưa 35%");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 19);
        lv_obj_set_y(lv_label_9, 212);
        lv_obj_set_width(lv_label_9, 74);
        lv_obj_set_height(lv_label_9, 15);
        lv_label_set_text(lv_label_9, "0.8 mm");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 17);
        lv_obj_set_y(lv_label_10, 229);
        lv_obj_set_width(lv_label_10, 78);
        lv_obj_set_height(lv_label_10, 15);
        lv_label_set_text(lv_label_10, "Gió 10 km/h");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 104);
        lv_obj_set_y(lv_obj_7, 64);
        lv_obj_set_width(lv_obj_7, 88);
        lv_obj_set_height(lv_obj_7, 188);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 114);
        lv_obj_set_y(lv_label_11, 73);
        lv_obj_set_width(lv_label_11, 68);
        lv_obj_set_height(lv_label_11, 21);
        lv_label_set_text(lv_label_11, "T2");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 114);
        lv_obj_set_y(lv_label_12, 94);
        lv_obj_set_width(lv_label_12, 68);
        lv_obj_set_height(lv_label_12, 15);
        lv_label_set_text(lv_label_12, "26/05");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 132);
        lv_obj_set_y(lv_image_2, 110);
        lv_obj_set_width(lv_image_2, 32);
        lv_obj_set_height(lv_image_2, 32);
        lv_image_set_src(lv_image_2, forecast_rain);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 109);
        lv_obj_set_y(lv_label_13, 145);
        lv_obj_set_width(lv_label_13, 78);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Mưa nhẹ");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 110);
        lv_obj_set_y(lv_label_14, 166);
        lv_obj_set_width(lv_label_14, 76);
        lv_obj_set_height(lv_label_14, 22);
        lv_label_set_text(lv_label_14, "29° / 23°");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 115);
        lv_obj_set_y(lv_obj_8, 190);
        lv_obj_set_width(lv_obj_8, 66);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 111);
        lv_obj_set_y(lv_label_15, 195);
        lv_obj_set_width(lv_label_15, 74);
        lv_obj_set_height(lv_label_15, 15);
        lv_label_set_text(lv_label_15, "Mưa 70%");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 111);
        lv_obj_set_y(lv_label_16, 212);
        lv_obj_set_width(lv_label_16, 74);
        lv_obj_set_height(lv_label_16, 15);
        lv_label_set_text(lv_label_16, "4.2 mm");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 109);
        lv_obj_set_y(lv_label_17, 229);
        lv_obj_set_width(lv_label_17, 78);
        lv_obj_set_height(lv_label_17, 15);
        lv_label_set_text(lv_label_17, "Gió 12 km/h");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 196);
        lv_obj_set_y(lv_obj_9, 64);
        lv_obj_set_width(lv_obj_9, 88);
        lv_obj_set_height(lv_obj_9, 188);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 206);
        lv_obj_set_y(lv_label_18, 73);
        lv_obj_set_width(lv_label_18, 68);
        lv_obj_set_height(lv_label_18, 21);
        lv_label_set_text(lv_label_18, "T3");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 206);
        lv_obj_set_y(lv_label_19, 94);
        lv_obj_set_width(lv_label_19, 68);
        lv_obj_set_height(lv_label_19, 15);
        lv_label_set_text(lv_label_19, "27/05");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 224);
        lv_obj_set_y(lv_image_3, 110);
        lv_obj_set_width(lv_image_3, 32);
        lv_obj_set_height(lv_image_3, 32);
        lv_image_set_src(lv_image_3, forecast_sun);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 201);
        lv_obj_set_y(lv_label_20, 145);
        lv_obj_set_width(lv_label_20, 78);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "Có nắng");
        lv_obj_set_style_text_font(lv_label_20, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 202);
        lv_obj_set_y(lv_label_21, 166);
        lv_obj_set_width(lv_label_21, 76);
        lv_obj_set_height(lv_label_21, 22);
        lv_label_set_text(lv_label_21, "32° / 25°");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 207);
        lv_obj_set_y(lv_obj_10, 190);
        lv_obj_set_width(lv_obj_10, 66);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 203);
        lv_obj_set_y(lv_label_22, 195);
        lv_obj_set_width(lv_label_22, 74);
        lv_obj_set_height(lv_label_22, 15);
        lv_label_set_text(lv_label_22, "Mưa 15%");
        lv_obj_set_style_text_font(lv_label_22, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_22, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 203);
        lv_obj_set_y(lv_label_23, 212);
        lv_obj_set_width(lv_label_23, 74);
        lv_obj_set_height(lv_label_23, 15);
        lv_label_set_text(lv_label_23, "0.0 mm");
        lv_obj_set_style_text_font(lv_label_23, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 201);
        lv_obj_set_y(lv_label_24, 229);
        lv_obj_set_width(lv_label_24, 78);
        lv_obj_set_height(lv_label_24, 15);
        lv_label_set_text(lv_label_24, "Gió 8 km/h");
        lv_obj_set_style_text_font(lv_label_24, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_24, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 288);
        lv_obj_set_y(lv_obj_11, 64);
        lv_obj_set_width(lv_obj_11, 88);
        lv_obj_set_height(lv_obj_11, 188);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 298);
        lv_obj_set_y(lv_label_25, 73);
        lv_obj_set_width(lv_label_25, 68);
        lv_obj_set_height(lv_label_25, 21);
        lv_label_set_text(lv_label_25, "T4");
        lv_obj_set_style_text_font(lv_label_25, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 298);
        lv_obj_set_y(lv_label_26, 94);
        lv_obj_set_width(lv_label_26, 68);
        lv_obj_set_height(lv_label_26, 15);
        lv_label_set_text(lv_label_26, "28/05");
        lv_obj_set_style_text_font(lv_label_26, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_26, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 316);
        lv_obj_set_y(lv_image_4, 110);
        lv_obj_set_width(lv_image_4, 32);
        lv_obj_set_height(lv_image_4, 32);
        lv_image_set_src(lv_image_4, forecast_heavy_rain);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 293);
        lv_obj_set_y(lv_label_27, 145);
        lv_obj_set_width(lv_label_27, 78);
        lv_obj_set_height(lv_label_27, 18);
        lv_label_set_text(lv_label_27, "Mưa rào");
        lv_obj_set_style_text_font(lv_label_27, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 294);
        lv_obj_set_y(lv_label_28, 166);
        lv_obj_set_width(lv_label_28, 76);
        lv_obj_set_height(lv_label_28, 22);
        lv_label_set_text(lv_label_28, "28° / 23°");
        lv_obj_set_style_text_font(lv_label_28, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_28, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 299);
        lv_obj_set_y(lv_obj_12, 190);
        lv_obj_set_width(lv_obj_12, 66);
        lv_obj_set_height(lv_obj_12, 1);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_29 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_29, 295);
        lv_obj_set_y(lv_label_29, 195);
        lv_obj_set_width(lv_label_29, 74);
        lv_obj_set_height(lv_label_29, 15);
        lv_label_set_text(lv_label_29, "Mưa 80%");
        lv_obj_set_style_text_font(lv_label_29, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_29, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_29, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_30 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_30, 295);
        lv_obj_set_y(lv_label_30, 212);
        lv_obj_set_width(lv_label_30, 74);
        lv_obj_set_height(lv_label_30, 15);
        lv_label_set_text(lv_label_30, "12.6 mm");
        lv_obj_set_style_text_font(lv_label_30, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_30, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_30, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_31 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_31, 293);
        lv_obj_set_y(lv_label_31, 229);
        lv_obj_set_width(lv_label_31, 78);
        lv_obj_set_height(lv_label_31, 15);
        lv_label_set_text(lv_label_31, "Gió 15 km/h");
        lv_obj_set_style_text_font(lv_label_31, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_31, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_31, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 380);
        lv_obj_set_y(lv_obj_13, 64);
        lv_obj_set_width(lv_obj_13, 88);
        lv_obj_set_height(lv_obj_13, 188);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_32 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_32, 390);
        lv_obj_set_y(lv_label_32, 73);
        lv_obj_set_width(lv_label_32, 68);
        lv_obj_set_height(lv_label_32, 21);
        lv_label_set_text(lv_label_32, "T5");
        lv_obj_set_style_text_font(lv_label_32, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_32, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_32, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_33 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_33, 390);
        lv_obj_set_y(lv_label_33, 94);
        lv_obj_set_width(lv_label_33, 68);
        lv_obj_set_height(lv_label_33, 15);
        lv_label_set_text(lv_label_33, "29/05");
        lv_obj_set_style_text_font(lv_label_33, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_33, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_33, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 408);
        lv_obj_set_y(lv_image_5, 110);
        lv_obj_set_width(lv_image_5, 32);
        lv_obj_set_height(lv_image_5, 32);
        lv_image_set_src(lv_image_5, forecast_cloud_sun);

        lv_obj_t * lv_label_34 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_34, 385);
        lv_obj_set_y(lv_label_34, 145);
        lv_obj_set_width(lv_label_34, 78);
        lv_obj_set_height(lv_label_34, 18);
        lv_label_set_text(lv_label_34, "Ít mây");
        lv_obj_set_style_text_font(lv_label_34, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_34, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_34, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_35 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_35, 386);
        lv_obj_set_y(lv_label_35, 166);
        lv_obj_set_width(lv_label_35, 76);
        lv_obj_set_height(lv_label_35, 22);
        lv_label_set_text(lv_label_35, "30° / 24°");
        lv_obj_set_style_text_font(lv_label_35, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_35, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_35, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 391);
        lv_obj_set_y(lv_obj_14, 190);
        lv_obj_set_width(lv_obj_14, 66);
        lv_obj_set_height(lv_obj_14, 1);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_36 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_36, 387);
        lv_obj_set_y(lv_label_36, 195);
        lv_obj_set_width(lv_label_36, 74);
        lv_obj_set_height(lv_label_36, 15);
        lv_label_set_text(lv_label_36, "Mưa 40%");
        lv_obj_set_style_text_font(lv_label_36, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_36, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_36, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_37 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_37, 387);
        lv_obj_set_y(lv_label_37, 212);
        lv_obj_set_width(lv_label_37, 74);
        lv_obj_set_height(lv_label_37, 15);
        lv_label_set_text(lv_label_37, "1.2 mm");
        lv_obj_set_style_text_font(lv_label_37, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_37, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_37, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_38 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_38, 385);
        lv_obj_set_y(lv_label_38, 229);
        lv_obj_set_width(lv_label_38, 78);
        lv_obj_set_height(lv_label_38, 15);
        lv_label_set_text(lv_label_38, "Gió 10 km/h");
        lv_obj_set_style_text_font(lv_label_38, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_38, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_38, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 12);
        lv_obj_set_y(lv_obj_15, 260);
        lv_obj_set_width(lv_obj_15, 456);
        lv_obj_set_height(lv_obj_15, 48);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_15, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_15, 1, 0);
        lv_obj_set_style_radius(lv_obj_15, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 164);
        lv_obj_set_y(lv_obj_16, 268);
        lv_obj_set_width(lv_obj_16, 1);
        lv_obj_set_height(lv_obj_16, 32);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_17, 316);
        lv_obj_set_y(lv_obj_17, 268);
        lv_obj_set_width(lv_obj_17, 1);
        lv_obj_set_height(lv_obj_17, 32);
        lv_obj_set_style_bg_color(lv_obj_17, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_17, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_17, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_17, 0, 0);

        lv_obj_t * lv_label_39 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_39, 20);
        lv_obj_set_y(lv_label_39, 266);
        lv_obj_set_width(lv_label_39, 136);
        lv_obj_set_height(lv_label_39, 16);
        lv_label_set_text(lv_label_39, "Nhiệt độ TB");
        lv_obj_set_style_text_font(lv_label_39, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_39, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_39, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_40 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_40, 20);
        lv_obj_set_y(lv_label_40, 282);
        lv_obj_set_width(lv_label_40, 136);
        lv_obj_set_height(lv_label_40, 21);
        lv_label_set_text(lv_label_40, "29°C");
        lv_obj_set_style_text_font(lv_label_40, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_40, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_40, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_41 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_41, 172);
        lv_obj_set_y(lv_label_41, 266);
        lv_obj_set_width(lv_label_41, 136);
        lv_obj_set_height(lv_label_41, 16);
        lv_label_set_text(lv_label_41, "Tổng lượng mưa");
        lv_obj_set_style_text_font(lv_label_41, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_41, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_41, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_42 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_42, 172);
        lv_obj_set_y(lv_label_42, 282);
        lv_obj_set_width(lv_label_42, 136);
        lv_obj_set_height(lv_label_42, 21);
        lv_label_set_text(lv_label_42, "18.8 mm");
        lv_obj_set_style_text_font(lv_label_42, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_42, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_42, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_43 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_43, 324);
        lv_obj_set_y(lv_label_43, 266);
        lv_obj_set_width(lv_label_43, 136);
        lv_obj_set_height(lv_label_43, 16);
        lv_label_set_text(lv_label_43, "Gió TB");
        lv_obj_set_style_text_font(lv_label_43, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_43, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_43, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_44 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_44, 324);
        lv_obj_set_y(lv_label_44, 282);
        lv_obj_set_width(lv_label_44, 136);
        lv_obj_set_height(lv_label_44, 21);
        lv_label_set_text(lv_label_44, "11 km/h");
        lv_obj_set_style_text_font(lv_label_44, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_44, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_44, lv_color_hex(0x34d399), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

