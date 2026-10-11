/**
 * @file weather_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_landscape_gen.h"
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

lv_obj_t * weather_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 12);
        lv_obj_set_y(lv_label_0, 3);
        lv_obj_set_width(lv_label_0, 180);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "Thời tiết");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 13);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 230);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hà Nội · Chi tiết dự báo");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 399);
        lv_obj_set_y(lv_obj_1, 18);
        lv_obj_set_width(lv_obj_1, 6);
        lv_obj_set_height(lv_obj_1, 6);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 409);
        lv_obj_set_y(lv_label_2, 12);
        lv_obj_set_width(lv_label_2, 59);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "Mới nhất");
        lv_obj_set_style_text_font(lv_label_2, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 52);
        lv_obj_set_width(lv_obj_2, 456);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 12);
        lv_obj_set_y(lv_image_0, 61);
        lv_obj_set_width(lv_image_0, 296);
        lv_obj_set_height(lv_image_0, 122);
        lv_image_set_src(lv_image_0, weather_bg_cloudy);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 61);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 122);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 0 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 70);
        lv_obj_set_width(lv_label_3, 180);
        lv_obj_set_height(lv_label_3, 18);
        lv_label_set_text(lv_label_3, "THỜI TIẾT · HÀ NỘI");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 89);
        lv_obj_set_width(lv_label_4, 150);
        lv_obj_set_height(lv_label_4, 31);
        lv_label_set_text(lv_label_4, "28.5°C");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 119);
        lv_obj_set_width(lv_label_5, 160);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Trời có mây");
        lv_obj_set_style_text_font(lv_label_5, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 136);
        lv_obj_set_width(lv_label_6, 170);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "Cảm giác như 31°C");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 220);
        lv_obj_set_y(lv_image_1, 79);
        lv_obj_set_width(lv_image_1, 64);
        lv_obj_set_height(lv_image_1, 64);
        lv_image_set_src(lv_image_1, weather_cloud_sun);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 161);
        lv_obj_set_width(lv_label_7, 86);
        lv_obj_set_height(lv_label_7, 17);
        lv_label_set_text(lv_label_7, "Cao 32°C");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xfb7185), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 117);
        lv_obj_set_y(lv_label_8, 161);
        lv_obj_set_width(lv_label_8, 96);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Thấp 24°C");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x60a5fa), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 191);
        lv_obj_set_width(lv_obj_4, 144);
        lv_obj_set_height(lv_obj_4, 53);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 19);
        lv_obj_set_y(lv_image_2, 201);
        lv_obj_set_width(lv_image_2, 32);
        lv_obj_set_height(lv_image_2, 32);
        lv_image_set_src(lv_image_2, weather_metric_rain);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 58);
        lv_obj_set_y(lv_label_9, 198);
        lv_obj_set_width(lv_label_9, 92);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Lượng mưa");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 58);
        lv_obj_set_y(lv_label_10, 216);
        lv_obj_set_width(lv_label_10, 90);
        lv_obj_set_height(lv_label_10, 23);
        lv_label_set_text(lv_label_10, "2.4 mm");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 164);
        lv_obj_set_y(lv_obj_5, 191);
        lv_obj_set_width(lv_obj_5, 144);
        lv_obj_set_height(lv_obj_5, 53);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 171);
        lv_obj_set_y(lv_image_3, 201);
        lv_obj_set_width(lv_image_3, 32);
        lv_obj_set_height(lv_image_3, 32);
        lv_image_set_src(lv_image_3, weather_metric_rain_chance);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 210);
        lv_obj_set_y(lv_label_11, 198);
        lv_obj_set_width(lv_label_11, 93);
        lv_obj_set_height(lv_label_11, 17);
        lv_label_set_text(lv_label_11, "Khả năng mưa");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 210);
        lv_obj_set_y(lv_label_12, 216);
        lv_obj_set_width(lv_label_12, 90);
        lv_obj_set_height(lv_label_12, 23);
        lv_label_set_text(lv_label_12, "65%");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x818cf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 251);
        lv_obj_set_width(lv_obj_6, 144);
        lv_obj_set_height(lv_obj_6, 53);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 19);
        lv_obj_set_y(lv_image_4, 261);
        lv_obj_set_width(lv_image_4, 32);
        lv_obj_set_height(lv_image_4, 32);
        lv_image_set_src(lv_image_4, weather_metric_wind);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 58);
        lv_obj_set_y(lv_label_13, 258);
        lv_obj_set_width(lv_label_13, 92);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "Tốc độ gió");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 58);
        lv_obj_set_y(lv_label_14, 276);
        lv_obj_set_width(lv_label_14, 91);
        lv_obj_set_height(lv_label_14, 23);
        lv_label_set_text(lv_label_14, "12 km/h");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 164);
        lv_obj_set_y(lv_obj_7, 251);
        lv_obj_set_width(lv_obj_7, 144);
        lv_obj_set_height(lv_obj_7, 53);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_5 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_5, 171);
        lv_obj_set_y(lv_image_5, 261);
        lv_obj_set_width(lv_image_5, 32);
        lv_obj_set_height(lv_image_5, 32);
        lv_image_set_src(lv_image_5, weather_metric_humidity);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 210);
        lv_obj_set_y(lv_label_15, 258);
        lv_obj_set_width(lv_label_15, 90);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Độ ẩm");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 210);
        lv_obj_set_y(lv_label_16, 276);
        lv_obj_set_width(lv_label_16, 90);
        lv_obj_set_height(lv_label_16, 23);
        lv_label_set_text(lv_label_16, "65%");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 316);
        lv_obj_set_y(lv_obj_8, 61);
        lv_obj_set_width(lv_obj_8, 152);
        lv_obj_set_height(lv_obj_8, 243);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 328);
        lv_obj_set_y(lv_label_17, 70);
        lv_obj_set_width(lv_label_17, 117);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "Dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_6 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_6, 440);
        lv_obj_set_y(lv_image_6, 68);
        lv_obj_set_width(lv_image_6, 24);
        lv_obj_set_height(lv_image_6, 24);
        lv_image_set_src(lv_image_6, ui_next);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 328);
        lv_obj_set_y(lv_obj_9, 94);
        lv_obj_set_width(lv_obj_9, 128);
        lv_obj_set_height(lv_obj_9, 1);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 327);
        lv_obj_set_y(lv_label_18, 103);
        lv_obj_set_width(lv_label_18, 27);
        lv_obj_set_height(lv_label_18, 18);
        lv_label_set_text(lv_label_18, "CN");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_7 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_7, 359);
        lv_obj_set_y(lv_image_7, 99);
        lv_obj_set_width(lv_image_7, 32);
        lv_obj_set_height(lv_image_7, 32);
        lv_image_set_src(lv_image_7, forecast_cloudy);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 397);
        lv_obj_set_y(lv_label_19, 104);
        lv_obj_set_width(lv_label_19, 65);
        lv_obj_set_height(lv_label_19, 18);
        lv_label_set_text(lv_label_19, "31°/24°");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 328);
        lv_obj_set_y(lv_obj_10, 135);
        lv_obj_set_width(lv_obj_10, 128);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 327);
        lv_obj_set_y(lv_label_20, 143);
        lv_obj_set_width(lv_label_20, 27);
        lv_obj_set_height(lv_label_20, 18);
        lv_label_set_text(lv_label_20, "T2");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_8 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_8, 359);
        lv_obj_set_y(lv_image_8, 139);
        lv_obj_set_width(lv_image_8, 32);
        lv_obj_set_height(lv_image_8, 32);
        lv_image_set_src(lv_image_8, forecast_rain);

        lv_obj_t * lv_label_21 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_21, 397);
        lv_obj_set_y(lv_label_21, 144);
        lv_obj_set_width(lv_label_21, 65);
        lv_obj_set_height(lv_label_21, 18);
        lv_label_set_text(lv_label_21, "29°/23°");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 328);
        lv_obj_set_y(lv_obj_11, 175);
        lv_obj_set_width(lv_obj_11, 128);
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_22 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_22, 327);
        lv_obj_set_y(lv_label_22, 183);
        lv_obj_set_width(lv_label_22, 27);
        lv_obj_set_height(lv_label_22, 18);
        lv_label_set_text(lv_label_22, "T3");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_9 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_9, 359);
        lv_obj_set_y(lv_image_9, 179);
        lv_obj_set_width(lv_image_9, 32);
        lv_obj_set_height(lv_image_9, 32);
        lv_image_set_src(lv_image_9, forecast_sun);

        lv_obj_t * lv_label_23 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_23, 397);
        lv_obj_set_y(lv_label_23, 184);
        lv_obj_set_width(lv_label_23, 65);
        lv_obj_set_height(lv_label_23, 18);
        lv_label_set_text(lv_label_23, "32°/25°");
        lv_obj_set_style_text_font(lv_label_23, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 328);
        lv_obj_set_y(lv_obj_12, 215);
        lv_obj_set_width(lv_obj_12, 128);
        lv_obj_set_height(lv_obj_12, 1);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_24 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_24, 327);
        lv_obj_set_y(lv_label_24, 223);
        lv_obj_set_width(lv_label_24, 27);
        lv_obj_set_height(lv_label_24, 18);
        lv_label_set_text(lv_label_24, "T4");
        lv_obj_set_style_text_font(lv_label_24, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_24, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_10 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_10, 359);
        lv_obj_set_y(lv_image_10, 219);
        lv_obj_set_width(lv_image_10, 32);
        lv_obj_set_height(lv_image_10, 32);
        lv_image_set_src(lv_image_10, forecast_heavy_rain);

        lv_obj_t * lv_label_25 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_25, 397);
        lv_obj_set_y(lv_label_25, 224);
        lv_obj_set_width(lv_label_25, 65);
        lv_obj_set_height(lv_label_25, 18);
        lv_label_set_text(lv_label_25, "28°/23°");
        lv_obj_set_style_text_font(lv_label_25, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_25, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_13, 328);
        lv_obj_set_y(lv_obj_13, 255);
        lv_obj_set_width(lv_obj_13, 128);
        lv_obj_set_height(lv_obj_13, 1);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_26 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_26, 327);
        lv_obj_set_y(lv_label_26, 263);
        lv_obj_set_width(lv_label_26, 27);
        lv_obj_set_height(lv_label_26, 18);
        lv_label_set_text(lv_label_26, "T5");
        lv_obj_set_style_text_font(lv_label_26, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_26, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_11 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_11, 359);
        lv_obj_set_y(lv_image_11, 259);
        lv_obj_set_width(lv_image_11, 32);
        lv_obj_set_height(lv_image_11, 32);
        lv_image_set_src(lv_image_11, forecast_cloud_sun);

        lv_obj_t * lv_label_27 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_27, 397);
        lv_obj_set_y(lv_label_27, 264);
        lv_obj_set_width(lv_label_27, 65);
        lv_obj_set_height(lv_label_27, 18);
        lv_label_set_text(lv_label_27, "30°/24°");
        lv_obj_set_style_text_font(lv_label_27, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_27, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

