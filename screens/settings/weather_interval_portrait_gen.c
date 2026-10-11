/**
 * @file weather_interval_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_interval_portrait_gen.h"
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

lv_obj_t * weather_interval_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_interval_portrait_#");
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
        lv_label_set_text(lv_label_0, "Cập nhật thời tiết");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập chu kỳ lấy dữ liệu");
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
        lv_obj_set_y(lv_label_2, 67);
        lv_obj_set_width(lv_label_2, 250);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "CẤU HÌNH HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 89);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 67);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 102);
        lv_obj_set_width(lv_obj_4, 42);
        lv_obj_set_height(lv_obj_4, 42);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 113);
        lv_obj_set_width(lv_label_3, 42);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "15m");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 75);
        lv_obj_set_y(lv_label_4, 98);
        lv_obj_set_width(lv_label_4, 217);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Cập nhật tự động");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 75);
        lv_obj_set_y(lv_label_5, 123);
        lv_obj_set_width(lv_label_5, 217);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Mỗi 15 phút qua Open-Meteo");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 165);
        lv_obj_set_width(lv_label_6, 250);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "CHỌN CHU KỲ CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 187);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 191);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * btn_weather_interval_5m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_5m, "btn_weather_interval_5m");
        lv_obj_set_x(btn_weather_interval_5m, 22);
        lv_obj_set_y(btn_weather_interval_5m, 196);
        lv_obj_set_width(btn_weather_interval_5m, 276);
        lv_obj_set_height(btn_weather_interval_5m, 39);
        lv_obj_set_style_bg_color(btn_weather_interval_5m, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_5m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_5m, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_5m, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_5m, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_5m, 0, 0);
        lv_obj_t * lv_label_7 = lv_label_create(btn_weather_interval_5m);
        lv_obj_set_x(lv_label_7, 12);
        lv_obj_set_y(lv_label_7, 8);
        lv_obj_set_width(lv_label_7, 155);
        lv_obj_set_height(lv_label_7, 22);
        lv_label_set_text(lv_label_7, "5 phút");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(btn_weather_interval_5m);
        lv_obj_set_x(lv_label_8, 172);
        lv_obj_set_y(lv_label_8, 9);
        lv_obj_set_width(lv_label_8, 92);
        lv_obj_set_height(lv_label_8, 20);
        lv_label_set_text(lv_label_8, "Rất thường xuyên");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_15m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_15m, "btn_weather_interval_15m");
        lv_obj_set_x(btn_weather_interval_15m, 22);
        lv_obj_set_y(btn_weather_interval_15m, 241);
        lv_obj_set_width(btn_weather_interval_15m, 276);
        lv_obj_set_height(btn_weather_interval_15m, 39);
        lv_obj_set_style_bg_color(btn_weather_interval_15m, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_15m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_weather_interval_15m, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(btn_weather_interval_15m, 1, 0);
        lv_obj_set_style_radius(btn_weather_interval_15m, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_15m, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_15m, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(btn_weather_interval_15m);
        lv_obj_set_x(lv_label_9, 12);
        lv_obj_set_y(lv_label_9, 8);
        lv_obj_set_width(lv_label_9, 160);
        lv_obj_set_height(lv_label_9, 22);
        lv_label_set_text(lv_label_9, "15 phút");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(btn_weather_interval_15m);
        lv_obj_set_x(lv_label_10, 181);
        lv_obj_set_y(lv_label_10, 9);
        lv_obj_set_width(lv_label_10, 83);
        lv_obj_set_height(lv_label_10, 20);
        lv_label_set_text(lv_label_10, "Đã chọn");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_weather_interval_30m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_30m, "btn_weather_interval_30m");
        lv_obj_set_x(btn_weather_interval_30m, 22);
        lv_obj_set_y(btn_weather_interval_30m, 286);
        lv_obj_set_width(btn_weather_interval_30m, 276);
        lv_obj_set_height(btn_weather_interval_30m, 39);
        lv_obj_set_style_bg_color(btn_weather_interval_30m, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_30m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_30m, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_30m, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_30m, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_30m, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_weather_interval_30m);
        lv_obj_set_x(lv_label_11, 12);
        lv_obj_set_y(lv_label_11, 8);
        lv_obj_set_width(lv_label_11, 160);
        lv_obj_set_height(lv_label_11, 22);
        lv_label_set_text(lv_label_11, "30 phút");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(btn_weather_interval_30m);
        lv_obj_set_x(lv_label_12, 181);
        lv_obj_set_y(lv_label_12, 9);
        lv_obj_set_width(lv_label_12, 83);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Tiết kiệm");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_60m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_60m, "btn_weather_interval_60m");
        lv_obj_set_x(btn_weather_interval_60m, 22);
        lv_obj_set_y(btn_weather_interval_60m, 331);
        lv_obj_set_width(btn_weather_interval_60m, 276);
        lv_obj_set_height(btn_weather_interval_60m, 39);
        lv_obj_set_style_bg_color(btn_weather_interval_60m, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_60m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_60m, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_60m, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_60m, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_60m, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_weather_interval_60m);
        lv_obj_set_x(lv_label_13, 12);
        lv_obj_set_y(lv_label_13, 8);
        lv_obj_set_width(lv_label_13, 160);
        lv_obj_set_height(lv_label_13, 22);
        lv_label_set_text(lv_label_13, "60 phút");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(btn_weather_interval_60m);
        lv_obj_set_x(lv_label_14, 181);
        lv_obj_set_y(lv_label_14, 9);
        lv_obj_set_width(lv_label_14, 83);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Ít cập nhật");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 389);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 35);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 23);
        lv_obj_set_y(lv_obj_7, 398);
        lv_obj_set_width(lv_obj_7, 3);
        lv_obj_set_height(lv_obj_7, 17);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 35);
        lv_obj_set_y(lv_label_15, 394);
        lv_obj_set_width(lv_label_15, 258);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "Chu kỳ ngắn sẽ gọi API thường xuyên hơn");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_cancel, "btn_weather_interval_cancel");
        lv_obj_set_x(btn_weather_interval_cancel, 12);
        lv_obj_set_y(btn_weather_interval_cancel, 434);
        lv_obj_set_width(btn_weather_interval_cancel, 140);
        lv_obj_set_height(btn_weather_interval_cancel, 37);
        lv_obj_set_style_bg_color(btn_weather_interval_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_weather_interval_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_weather_interval_cancel, 1, 0);
        lv_obj_set_style_radius(btn_weather_interval_cancel, 10, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_cancel, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_weather_interval_cancel);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Hủy");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_weather_interval_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_save, "btn_weather_interval_save");
        lv_obj_set_x(btn_weather_interval_save, 160);
        lv_obj_set_y(btn_weather_interval_save, 434);
        lv_obj_set_width(btn_weather_interval_save, 148);
        lv_obj_set_height(btn_weather_interval_save, 37);
        lv_obj_set_style_bg_color(btn_weather_interval_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_save, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_save, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_save, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(btn_weather_interval_save);
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_17, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

