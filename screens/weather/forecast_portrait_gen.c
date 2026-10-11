/**
 * @file forecast_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "forecast_portrait_gen.h"
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

lv_obj_t * forecast_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "forecast_portrait_#");
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
        lv_obj_set_width(lv_label_0, 175);
        lv_obj_set_height(lv_label_0, 27);
        lv_label_set_text(lv_label_0, "Dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 145);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hà Nội · 25-29/05");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 253);
        lv_obj_set_y(lv_obj_2, 18);
        lv_obj_set_width(lv_obj_2, 55);
        lv_obj_set_height(lv_obj_2, 27);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_2, 1, 0);
        lv_obj_set_style_radius(lv_obj_2, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 256);
        lv_obj_set_y(lv_obj_3, 21);
        lv_obj_set_width(lv_obj_3, 24);
        lv_obj_set_height(lv_obj_3, 21);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x1ea0ff), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);
        lv_obj_set_style_radius(lv_obj_3, 7, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 256);
        lv_obj_set_y(lv_label_2, 23);
        lv_obj_set_width(lv_label_2, 24);
        lv_obj_set_height(lv_label_2, 17);
        lv_label_set_text(lv_label_2, "°C");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 281);
        lv_obj_set_y(lv_label_3, 23);
        lv_obj_set_width(lv_label_3, 24);
        lv_obj_set_height(lv_label_3, 17);
        lv_label_set_text(lv_label_3, "°F");
        lv_obj_set_style_text_font(lv_label_3, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 59);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x273345), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 66);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 68);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 77);
        lv_obj_set_width(lv_label_4, 35);
        lv_obj_set_height(lv_label_4, 22);
        lv_label_set_text(lv_label_4, "CN");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 102);
        lv_obj_set_width(lv_label_5, 45);
        lv_obj_set_height(lv_label_5, 16);
        lv_label_set_text(lv_label_5, "25/05");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 66);
        lv_obj_set_y(lv_image_1, 84);
        lv_obj_set_width(lv_image_1, 32);
        lv_obj_set_height(lv_image_1, 32);
        lv_image_set_src(lv_image_1, forecast_cloudy);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 105);
        lv_obj_set_y(lv_label_6, 76);
        lv_obj_set_width(lv_label_6, 104);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Có mây");
        lv_obj_set_style_text_font(lv_label_6, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 105);
        lv_obj_set_y(lv_label_7, 100);
        lv_obj_set_width(lv_label_7, 49);
        lv_obj_set_height(lv_label_7, 24);
        lv_label_set_text(lv_label_7, "31°");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 149);
        lv_obj_set_y(lv_label_8, 100);
        lv_obj_set_width(lv_label_8, 55);
        lv_obj_set_height(lv_label_8, 24);
        lv_label_set_text(lv_label_8, "/ 24°");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 209);
        lv_obj_set_y(lv_obj_6, 77);
        lv_obj_set_width(lv_obj_6, 1);
        lv_obj_set_height(lv_obj_6, 47);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 219);
        lv_obj_set_y(lv_label_9, 76);
        lv_obj_set_width(lv_label_9, 79);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "Mưa 35%");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 219);
        lv_obj_set_y(lv_label_10, 95);
        lv_obj_set_width(lv_label_10, 79);
        lv_obj_set_height(lv_label_10, 16);
        lv_label_set_text(lv_label_10, "0.8 mm");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 219);
        lv_obj_set_y(lv_label_11, 114);
        lv_obj_set_width(lv_label_11, 79);
        lv_obj_set_height(lv_label_11, 16);
        lv_label_set_text(lv_label_11, "Gió 10 km/h");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 138);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 68);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 22);
        lv_obj_set_y(lv_label_12, 149);
        lv_obj_set_width(lv_label_12, 35);
        lv_obj_set_height(lv_label_12, 22);
        lv_label_set_text(lv_label_12, "T2");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 22);
        lv_obj_set_y(lv_label_13, 174);
        lv_obj_set_width(lv_label_13, 45);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "26/05");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 66);
        lv_obj_set_y(lv_image_2, 156);
        lv_obj_set_width(lv_image_2, 32);
        lv_obj_set_height(lv_image_2, 32);
        lv_image_set_src(lv_image_2, forecast_rain);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 105);
        lv_obj_set_y(lv_label_14, 148);
        lv_obj_set_width(lv_label_14, 104);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "Mưa nhẹ");
        lv_obj_set_style_text_font(lv_label_14, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 105);
        lv_obj_set_y(lv_label_15, 172);
        lv_obj_set_width(lv_label_15, 49);
        lv_obj_set_height(lv_label_15, 24);
        lv_label_set_text(lv_label_15, "29°");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 149);
        lv_obj_set_y(lv_label_16, 172);
        lv_obj_set_width(lv_label_16, 55);
        lv_obj_set_height(lv_label_16, 24);
        lv_label_set_text(lv_label_16, "/ 23°");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 209);
        lv_obj_set_y(lv_obj_8, 149);
        lv_obj_set_width(lv_obj_8, 1);
        lv_obj_set_height(lv_obj_8, 47);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 219);
        lv_obj_set_y(lv_label_17, 148);
        lv_obj_set_width(lv_label_17, 79);
        lv_obj_set_height(lv_label_17, 16);
        lv_label_set_text(lv_label_17, "Mưa 70%");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 219);
        lv_obj_set_y(lv_label_18, 167);
        lv_obj_set_width(lv_label_18, 79);
        lv_obj_set_height(lv_label_18, 16);
        lv_label_set_text(lv_label_18, "4.2 mm");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 219);
        lv_obj_set_y(lv_label_19, 186);
        lv_obj_set_width(lv_label_19, 79);
        lv_obj_set_height(lv_label_19, 16);
        lv_label_set_text(lv_label_19, "Gió 12 km/h");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 12);
        lv_obj_set_y(lv_obj_9, 210);
        lv_obj_set_width(lv_obj_9, 296);
        lv_obj_set_height(lv_obj_9, 68);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 22);
        lv_obj_set_y(lv_label_20, 221);
        lv_obj_set_width(lv_label_20, 35);
        lv_obj_set_height(lv_label_20, 22);
        lv_label_set_text(lv_label_20, "T3");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 22);
        lv_obj_set_y(lv_label_21, 246);
        lv_obj_set_width(lv_label_21, 45);
        lv_obj_set_height(lv_label_21, 16);
        lv_label_set_text(lv_label_21, "27/05");
        lv_obj_set_style_text_font(lv_label_21, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 66);
        lv_obj_set_y(lv_image_3, 228);
        lv_obj_set_width(lv_image_3, 32);
        lv_obj_set_height(lv_image_3, 32);
        lv_image_set_src(lv_image_3, forecast_sun);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 105);
        lv_obj_set_y(lv_label_22, 220);
        lv_obj_set_width(lv_label_22, 104);
        lv_obj_set_height(lv_label_22, 18);
        lv_label_set_text(lv_label_22, "Có nắng");
        lv_obj_set_style_text_font(lv_label_22, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 105);
        lv_obj_set_y(lv_label_23, 244);
        lv_obj_set_width(lv_label_23, 49);
        lv_obj_set_height(lv_label_23, 24);
        lv_label_set_text(lv_label_23, "32°");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 149);
        lv_obj_set_y(lv_label_24, 244);
        lv_obj_set_width(lv_label_24, 55);
        lv_obj_set_height(lv_label_24, 24);
        lv_label_set_text(lv_label_24, "/ 25°");
        lv_obj_set_style_text_font(lv_label_24, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 209);
        lv_obj_set_y(lv_obj_10, 221);
        lv_obj_set_width(lv_obj_10, 1);
        lv_obj_set_height(lv_obj_10, 47);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 219);
        lv_obj_set_y(lv_label_25, 220);
        lv_obj_set_width(lv_label_25, 79);
        lv_obj_set_height(lv_label_25, 16);
        lv_label_set_text(lv_label_25, "Mưa 15%");
        lv_obj_set_style_text_font(lv_label_25, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 219);
        lv_obj_set_y(lv_label_26, 239);
        lv_obj_set_width(lv_label_26, 79);
        lv_obj_set_height(lv_label_26, 16);
        lv_label_set_text(lv_label_26, "0.0 mm");
        lv_obj_set_style_text_font(lv_label_26, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 219);
        lv_obj_set_y(lv_label_27, 258);
        lv_obj_set_width(lv_label_27, 79);
        lv_obj_set_height(lv_label_27, 16);
        lv_label_set_text(lv_label_27, "Gió 8 km/h");
        lv_obj_set_style_text_font(lv_label_27, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 282);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 68);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 22);
        lv_obj_set_y(lv_label_28, 293);
        lv_obj_set_width(lv_label_28, 35);
        lv_obj_set_height(lv_label_28, 22);
        lv_label_set_text(lv_label_28, "T4");
        lv_obj_set_style_text_font(lv_label_28, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_29 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_29, 22);
        lv_obj_set_y(lv_label_29, 318);
        lv_obj_set_width(lv_label_29, 45);
        lv_obj_set_height(lv_label_29, 16);
        lv_label_set_text(lv_label_29, "28/05");
        lv_obj_set_style_text_font(lv_label_29, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_29, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 66);
        lv_obj_set_y(lv_image_4, 300);
        lv_obj_set_width(lv_image_4, 32);
        lv_obj_set_height(lv_image_4, 32);
        lv_image_set_src(lv_image_4, forecast_heavy_rain);

        lv_obj_t * lv_label_30 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_30, 105);
        lv_obj_set_y(lv_label_30, 292);
        lv_obj_set_width(lv_label_30, 104);
        lv_obj_set_height(lv_label_30, 18);
        lv_label_set_text(lv_label_30, "Mưa rào");
        lv_obj_set_style_text_font(lv_label_30, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_30, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_31 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_31, 105);
        lv_obj_set_y(lv_label_31, 316);
        lv_obj_set_width(lv_label_31, 49);
        lv_obj_set_height(lv_label_31, 24);
        lv_label_set_text(lv_label_31, "28°");
        lv_obj_set_style_text_font(lv_label_31, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_31, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_32 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_32, 149);
        lv_obj_set_y(lv_label_32, 316);
        lv_obj_set_width(lv_label_32, 55);
        lv_obj_set_height(lv_label_32, 24);
        lv_label_set_text(lv_label_32, "/ 23°");
        lv_obj_set_style_text_font(lv_label_32, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_32, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 209);
        lv_obj_set_y(lv_obj_12, 293);
        lv_obj_set_width(lv_obj_12, 1);
        lv_obj_set_height(lv_obj_12, 47);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_33 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_33, 219);
        lv_obj_set_y(lv_label_33, 292);
        lv_obj_set_width(lv_label_33, 79);
        lv_obj_set_height(lv_label_33, 16);
        lv_label_set_text(lv_label_33, "Mưa 80%");
        lv_obj_set_style_text_font(lv_label_33, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_33, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_34 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_34, 219);
        lv_obj_set_y(lv_label_34, 311);
        lv_obj_set_width(lv_label_34, 79);
        lv_obj_set_height(lv_label_34, 16);
        lv_label_set_text(lv_label_34, "12.6 mm");
        lv_obj_set_style_text_font(lv_label_34, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_34, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_35 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_35, 219);
        lv_obj_set_y(lv_label_35, 330);
        lv_obj_set_width(lv_label_35, 79);
        lv_obj_set_height(lv_label_35, 16);
        lv_label_set_text(lv_label_35, "Gió 15 km/h");
        lv_obj_set_style_text_font(lv_label_35, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_35, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 12);
        lv_obj_set_y(lv_obj_13, 354);
        lv_obj_set_width(lv_obj_13, 296);
        lv_obj_set_height(lv_obj_13, 68);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_36 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_36, 22);
        lv_obj_set_y(lv_label_36, 365);
        lv_obj_set_width(lv_label_36, 35);
        lv_obj_set_height(lv_label_36, 22);
        lv_label_set_text(lv_label_36, "T5");
        lv_obj_set_style_text_font(lv_label_36, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_36, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_37 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_37, 22);
        lv_obj_set_y(lv_label_37, 390);
        lv_obj_set_width(lv_label_37, 45);
        lv_obj_set_height(lv_label_37, 16);
        lv_label_set_text(lv_label_37, "29/05");
        lv_obj_set_style_text_font(lv_label_37, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_37, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 66);
        lv_obj_set_y(lv_image_5, 372);
        lv_obj_set_width(lv_image_5, 32);
        lv_obj_set_height(lv_image_5, 32);
        lv_image_set_src(lv_image_5, forecast_cloud_sun);

        lv_obj_t * lv_label_38 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_38, 105);
        lv_obj_set_y(lv_label_38, 364);
        lv_obj_set_width(lv_label_38, 104);
        lv_obj_set_height(lv_label_38, 18);
        lv_label_set_text(lv_label_38, "Ít mây");
        lv_obj_set_style_text_font(lv_label_38, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_38, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_39 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_39, 105);
        lv_obj_set_y(lv_label_39, 388);
        lv_obj_set_width(lv_label_39, 49);
        lv_obj_set_height(lv_label_39, 24);
        lv_label_set_text(lv_label_39, "30°");
        lv_obj_set_style_text_font(lv_label_39, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_39, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_40 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_40, 149);
        lv_obj_set_y(lv_label_40, 388);
        lv_obj_set_width(lv_label_40, 55);
        lv_obj_set_height(lv_label_40, 24);
        lv_label_set_text(lv_label_40, "/ 24°");
        lv_obj_set_style_text_font(lv_label_40, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_40, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_14, 209);
        lv_obj_set_y(lv_obj_14, 365);
        lv_obj_set_width(lv_obj_14, 1);
        lv_obj_set_height(lv_obj_14, 47);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * lv_label_41 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_41, 219);
        lv_obj_set_y(lv_label_41, 364);
        lv_obj_set_width(lv_label_41, 79);
        lv_obj_set_height(lv_label_41, 16);
        lv_label_set_text(lv_label_41, "Mưa 40%");
        lv_obj_set_style_text_font(lv_label_41, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_41, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_42 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_42, 219);
        lv_obj_set_y(lv_label_42, 383);
        lv_obj_set_width(lv_label_42, 79);
        lv_obj_set_height(lv_label_42, 16);
        lv_label_set_text(lv_label_42, "1.2 mm");
        lv_obj_set_style_text_font(lv_label_42, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_42, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_43 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_43, 219);
        lv_obj_set_y(lv_label_43, 402);
        lv_obj_set_width(lv_label_43, 79);
        lv_obj_set_height(lv_label_43, 16);
        lv_label_set_text(lv_label_43, "Gió 10 km/h");
        lv_obj_set_style_text_font(lv_label_43, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_43, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_15, 12);
        lv_obj_set_y(lv_obj_15, 428);
        lv_obj_set_width(lv_obj_15, 296);
        lv_obj_set_height(lv_obj_15, 42);
        lv_obj_set_style_bg_color(lv_obj_15, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_15, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_15, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_15, 1, 0);
        lv_obj_set_style_radius(lv_obj_15, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_15, 0, 0);

        lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_16, 110);
        lv_obj_set_y(lv_obj_16, 435);
        lv_obj_set_width(lv_obj_16, 1);
        lv_obj_set_height(lv_obj_16, 27);
        lv_obj_set_style_bg_color(lv_obj_16, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_16, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_16, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_16, 0, 0);

        lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_17, 210);
        lv_obj_set_y(lv_obj_17, 435);
        lv_obj_set_width(lv_obj_17, 1);
        lv_obj_set_height(lv_obj_17, 27);
        lv_obj_set_style_bg_color(lv_obj_17, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_17, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_17, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_17, 0, 0);

        lv_obj_t * lv_label_44 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_44, 15);
        lv_obj_set_y(lv_label_44, 433);
        lv_obj_set_width(lv_label_44, 92);
        lv_obj_set_height(lv_label_44, 14);
        lv_label_set_text(lv_label_44, "Nhiệt độ TB");
        lv_obj_set_style_text_font(lv_label_44, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_44, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_44, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_45 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_45, 15);
        lv_obj_set_y(lv_label_45, 449);
        lv_obj_set_width(lv_label_45, 92);
        lv_obj_set_height(lv_label_45, 18);
        lv_label_set_text(lv_label_45, "29°C");
        lv_obj_set_style_text_font(lv_label_45, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_45, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_45, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_46 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_46, 113);
        lv_obj_set_y(lv_label_46, 433);
        lv_obj_set_width(lv_label_46, 94);
        lv_obj_set_height(lv_label_46, 14);
        lv_label_set_text(lv_label_46, "Tổng lượng mưa");
        lv_obj_set_style_text_font(lv_label_46, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_46, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_46, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_47 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_47, 113);
        lv_obj_set_y(lv_label_47, 449);
        lv_obj_set_width(lv_label_47, 94);
        lv_obj_set_height(lv_label_47, 18);
        lv_label_set_text(lv_label_47, "18.8 mm");
        lv_obj_set_style_text_font(lv_label_47, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_47, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_47, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_48 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_48, 213);
        lv_obj_set_y(lv_label_48, 433);
        lv_obj_set_width(lv_label_48, 92);
        lv_obj_set_height(lv_label_48, 14);
        lv_label_set_text(lv_label_48, "Gió TB");
        lv_obj_set_style_text_font(lv_label_48, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_48, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_48, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_49 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_49, 213);
        lv_obj_set_y(lv_label_49, 449);
        lv_obj_set_width(lv_label_49, 92);
        lv_obj_set_height(lv_label_49, 18);
        lv_label_set_text(lv_label_49, "11 km/h");
        lv_obj_set_style_text_font(lv_label_49, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_49, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_49, lv_color_hex(0x34d399), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

