/**
 * @file weather_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_portrait_gen.h"
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

lv_obj_t * weather_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 3);
        lv_obj_set_width(lv_label_0, 190);
        lv_obj_set_height(lv_label_0, 34);
        lv_label_set_text(lv_label_0, "Thời tiết");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 13);
        lv_obj_set_y(lv_label_1, 34);
        lv_obj_set_width(lv_label_1, 210);
        lv_obj_set_height(lv_label_1, 18);
        lv_label_set_text(lv_label_1, "Hà Nội · Chi tiết dự báo");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 239);
        lv_obj_set_y(lv_obj_1, 20);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 249);
        lv_obj_set_y(lv_label_2, 14);
        lv_obj_set_width(lv_label_2, 59);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Mới nhất");
        lv_obj_set_style_text_font(lv_label_2, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 56);
        lv_obj_set_width(lv_obj_2, 296);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x273345), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 12);
        lv_obj_set_y(lv_image_0, 64);
        lv_obj_set_width(lv_image_0, 296);
        lv_obj_set_height(lv_image_0, 122);
        lv_image_set_src(lv_image_0, weather_bg_cloudy);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 64);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 122);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 0 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 74);
        lv_obj_set_width(lv_label_3, 185);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "THỜI TIẾT · HÀ NỘI");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 95);
        lv_obj_set_width(lv_label_4, 164);
        lv_obj_set_height(lv_label_4, 31);
        lv_label_set_text(lv_label_4, "28.5°C");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 123);
        lv_obj_set_width(lv_label_5, 174);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "Trời có mây");
        lv_obj_set_style_text_font(lv_label_5, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 141);
        lv_obj_set_width(lv_label_6, 174);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "Cảm giác như 31°C");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 220);
        lv_obj_set_y(lv_image_1, 83);
        lv_obj_set_width(lv_image_1, 64);
        lv_obj_set_height(lv_image_1, 64);
        lv_image_set_src(lv_image_1, weather_cloud_sun);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 164);
        lv_obj_set_width(lv_label_7, 86);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Cao 32°C");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 116);
        lv_obj_set_y(lv_label_8, 164);
        lv_obj_set_width(lv_label_8, 91);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Thấp 24°C");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x60a5fa), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 194);
        lv_obj_set_width(lv_obj_4, 144);
        lv_obj_set_height(lv_obj_4, 58);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 18);
        lv_obj_set_y(lv_image_2, 207);
        lv_obj_set_width(lv_image_2, 32);
        lv_obj_set_height(lv_image_2, 32);
        lv_image_set_src(lv_image_2, weather_metric_rain);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 60);
        lv_obj_set_y(lv_label_9, 204);
        lv_obj_set_width(lv_label_9, 88);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Lượng mưa");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 60);
        lv_obj_set_y(lv_label_10, 223);
        lv_obj_set_width(lv_label_10, 88);
        lv_obj_set_height(lv_label_10, 24);
        lv_label_set_text(lv_label_10, "2.4 mm");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 164);
        lv_obj_set_y(lv_obj_5, 194);
        lv_obj_set_width(lv_obj_5, 144);
        lv_obj_set_height(lv_obj_5, 58);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 170);
        lv_obj_set_y(lv_image_3, 207);
        lv_obj_set_width(lv_image_3, 32);
        lv_obj_set_height(lv_image_3, 32);
        lv_image_set_src(lv_image_3, weather_metric_rain_chance);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 212);
        lv_obj_set_y(lv_label_11, 204);
        lv_obj_set_width(lv_label_11, 90);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "Khả năng mưa");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 212);
        lv_obj_set_y(lv_label_12, 223);
        lv_obj_set_width(lv_label_12, 86);
        lv_obj_set_height(lv_label_12, 24);
        lv_label_set_text(lv_label_12, "65%");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x818cf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 260);
        lv_obj_set_width(lv_obj_6, 144);
        lv_obj_set_height(lv_obj_6, 58);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 18);
        lv_obj_set_y(lv_image_4, 273);
        lv_obj_set_width(lv_image_4, 32);
        lv_obj_set_height(lv_image_4, 32);
        lv_image_set_src(lv_image_4, weather_metric_wind);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 60);
        lv_obj_set_y(lv_label_13, 270);
        lv_obj_set_width(lv_label_13, 88);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "Tốc độ gió");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 60);
        lv_obj_set_y(lv_label_14, 289);
        lv_obj_set_width(lv_label_14, 88);
        lv_obj_set_height(lv_label_14, 24);
        lv_label_set_text(lv_label_14, "12 km/h");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 164);
        lv_obj_set_y(lv_obj_7, 260);
        lv_obj_set_width(lv_obj_7, 144);
        lv_obj_set_height(lv_obj_7, 58);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 170);
        lv_obj_set_y(lv_image_5, 273);
        lv_obj_set_width(lv_image_5, 32);
        lv_obj_set_height(lv_image_5, 32);
        lv_image_set_src(lv_image_5, weather_metric_humidity);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 212);
        lv_obj_set_y(lv_label_15, 270);
        lv_obj_set_width(lv_label_15, 86);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Độ ẩm");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 212);
        lv_obj_set_y(lv_label_16, 289);
        lv_obj_set_width(lv_label_16, 86);
        lv_obj_set_height(lv_label_16, 24);
        lv_label_set_text(lv_label_16, "65%");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_16, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 326);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 144);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 334);
        lv_obj_set_width(lv_label_17, 220);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "Dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 272);
        lv_obj_set_y(lv_image_6, 332);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 24);
        lv_obj_set_y(lv_label_18, 352);
        lv_obj_set_width(lv_label_18, 250);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Chạm để xem chi tiết mưa, gió, nhiệt độ");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 76);
        lv_obj_set_y(lv_obj_9, 383);
        lv_obj_set_width(lv_obj_9, 1);
        lv_obj_set_height(lv_obj_9, 70);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 131);
        lv_obj_set_y(lv_obj_10, 383);
        lv_obj_set_width(lv_obj_10, 1);
        lv_obj_set_height(lv_obj_10, 70);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 186);
        lv_obj_set_y(lv_obj_11, 383);
        lv_obj_set_width(lv_obj_11, 1);
        lv_obj_set_height(lv_obj_11, 70);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 241);
        lv_obj_set_y(lv_obj_12, 383);
        lv_obj_set_width(lv_obj_12, 1);
        lv_obj_set_height(lv_obj_12, 70);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 24);
        lv_obj_set_y(lv_label_19, 381);
        lv_obj_set_width(lv_label_19, 50);
        lv_obj_set_height(lv_label_19, 17);
        lv_label_set_text(lv_label_19, "CN");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 33);
        lv_obj_set_y(lv_image_7, 401);
        lv_obj_set_width(lv_image_7, 32);
        lv_obj_set_height(lv_image_7, 32);
        lv_image_set_src(lv_image_7, forecast_cloudy);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 24);
        lv_obj_set_y(lv_label_20, 441);
        lv_obj_set_width(lv_label_20, 50);
        lv_obj_set_height(lv_label_20, 17);
        lv_label_set_text(lv_label_20, "31°/24°");
        lv_obj_set_style_text_font(lv_label_20, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 79);
        lv_obj_set_y(lv_label_21, 381);
        lv_obj_set_width(lv_label_21, 50);
        lv_obj_set_height(lv_label_21, 17);
        lv_label_set_text(lv_label_21, "T2");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 88);
        lv_obj_set_y(lv_image_8, 401);
        lv_obj_set_width(lv_image_8, 32);
        lv_obj_set_height(lv_image_8, 32);
        lv_image_set_src(lv_image_8, forecast_rain);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 79);
        lv_obj_set_y(lv_label_22, 441);
        lv_obj_set_width(lv_label_22, 50);
        lv_obj_set_height(lv_label_22, 17);
        lv_label_set_text(lv_label_22, "29°/23°");
        lv_obj_set_style_text_font(lv_label_22, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_22, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 134);
        lv_obj_set_y(lv_label_23, 381);
        lv_obj_set_width(lv_label_23, 50);
        lv_obj_set_height(lv_label_23, 17);
        lv_label_set_text(lv_label_23, "T3");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_23, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_9 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_9, 143);
        lv_obj_set_y(lv_image_9, 401);
        lv_obj_set_width(lv_image_9, 32);
        lv_obj_set_height(lv_image_9, 32);
        lv_image_set_src(lv_image_9, forecast_sun);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 134);
        lv_obj_set_y(lv_label_24, 441);
        lv_obj_set_width(lv_label_24, 50);
        lv_obj_set_height(lv_label_24, 17);
        lv_label_set_text(lv_label_24, "32°/25°");
        lv_obj_set_style_text_font(lv_label_24, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_24, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 189);
        lv_obj_set_y(lv_label_25, 381);
        lv_obj_set_width(lv_label_25, 50);
        lv_obj_set_height(lv_label_25, 17);
        lv_label_set_text(lv_label_25, "T4");
        lv_obj_set_style_text_font(lv_label_25, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_25, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_10 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_10, 198);
        lv_obj_set_y(lv_image_10, 401);
        lv_obj_set_width(lv_image_10, 32);
        lv_obj_set_height(lv_image_10, 32);
        lv_image_set_src(lv_image_10, forecast_heavy_rain);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 189);
        lv_obj_set_y(lv_label_26, 441);
        lv_obj_set_width(lv_label_26, 50);
        lv_obj_set_height(lv_label_26, 17);
        lv_label_set_text(lv_label_26, "28°/23°");
        lv_obj_set_style_text_font(lv_label_26, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_26, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 244);
        lv_obj_set_y(lv_label_27, 381);
        lv_obj_set_width(lv_label_27, 50);
        lv_obj_set_height(lv_label_27, 17);
        lv_label_set_text(lv_label_27, "T5");
        lv_obj_set_style_text_font(lv_label_27, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_27, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_11 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_11, 253);
        lv_obj_set_y(lv_image_11, 401);
        lv_obj_set_width(lv_image_11, 32);
        lv_obj_set_height(lv_image_11, 32);
        lv_image_set_src(lv_image_11, forecast_cloud_sun);

        lv_obj_t * lv_label_28 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_28, 244);
        lv_obj_set_y(lv_label_28, 441);
        lv_obj_set_width(lv_label_28, 50);
        lv_obj_set_height(lv_label_28, 17);
        lv_label_set_text(lv_label_28, "30°/24°");
        lv_obj_set_style_text_font(lv_label_28, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_28, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_28, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

