/**
 * @file weather_interval_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_interval_landscape_gen.h"
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

lv_obj_t * weather_interval_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_interval_landscape_#");
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
        lv_obj_set_width(lv_label_0, 320);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cập nhật thời tiết");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 290);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập chu kỳ lấy dữ liệu");
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
        lv_obj_set_y(lv_label_2, 61);
        lv_obj_set_width(lv_label_2, 211);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "CẤU HÌNH HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 73);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 97);
        lv_obj_set_width(lv_obj_4, 42);
        lv_obj_set_height(lv_obj_4, 42);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 108);
        lv_obj_set_width(lv_label_3, 42);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "15m");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 73);
        lv_obj_set_y(lv_label_4, 94);
        lv_obj_set_width(lv_label_4, 149);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Cập nhật tự động");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 73);
        lv_obj_set_y(lv_label_5, 120);
        lv_obj_set_width(lv_label_5, 149);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Mỗi 15 phút");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 166);
        lv_obj_set_width(lv_label_6, 210);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "NGUỒN DỮ LIỆU");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 188);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 38);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 203);
        lv_obj_set_width(lv_obj_6, 7);
        lv_obj_set_height(lv_obj_6, 7);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 38);
        lv_obj_set_y(lv_label_7, 196);
        lv_obj_set_width(lv_label_7, 177);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Open-Meteo");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 235);
        lv_obj_set_width(lv_obj_7, 220);
        lv_obj_set_height(lv_obj_7, 34);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 244);
        lv_obj_set_width(lv_obj_8, 3);
        lv_obj_set_height(lv_obj_8, 16);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 33);
        lv_obj_set_y(lv_label_8, 240);
        lv_obj_set_width(lv_label_8, 187);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Chu kỳ ngắn gọi API nhiều hơn");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 241);
        lv_obj_set_y(lv_label_9, 61);
        lv_obj_set_width(lv_label_9, 218);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "CHỌN CHU KỲ CẬP NHẬT");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 83);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 186);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * btn_weather_interval_5m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_5m_landscape, "btn_weather_interval_5m_landscape");
        lv_obj_set_x(btn_weather_interval_5m_landscape, 250);
        lv_obj_set_y(btn_weather_interval_5m_landscape, 92);
        lv_obj_set_width(btn_weather_interval_5m_landscape, 208);
        lv_obj_set_height(btn_weather_interval_5m_landscape, 35);
        lv_obj_set_style_bg_color(btn_weather_interval_5m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_5m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_5m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_5m_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_5m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_5m_landscape, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(btn_weather_interval_5m_landscape);
        lv_obj_set_x(lv_label_10, 10);
        lv_obj_set_y(lv_label_10, 7);
        lv_obj_set_width(lv_label_10, 85);
        lv_obj_set_height(lv_label_10, 21);
        lv_label_set_text(lv_label_10, "5 phút");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_11 = lv_label_create(btn_weather_interval_5m_landscape);
        lv_obj_set_x(lv_label_11, 97);
        lv_obj_set_y(lv_label_11, 8);
        lv_obj_set_width(lv_label_11, 100);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "Thường xuyên");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_15m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_15m_landscape, "btn_weather_interval_15m_landscape");
        lv_obj_set_x(btn_weather_interval_15m_landscape, 250);
        lv_obj_set_y(btn_weather_interval_15m_landscape, 136);
        lv_obj_set_width(btn_weather_interval_15m_landscape, 208);
        lv_obj_set_height(btn_weather_interval_15m_landscape, 35);
        lv_obj_set_style_bg_color(btn_weather_interval_15m_landscape, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_15m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_weather_interval_15m_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(btn_weather_interval_15m_landscape, 1, 0);
        lv_obj_set_style_radius(btn_weather_interval_15m_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_15m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_15m_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_weather_interval_15m_landscape);
        lv_obj_set_x(lv_label_12, 10);
        lv_obj_set_y(lv_label_12, 7);
        lv_obj_set_width(lv_label_12, 85);
        lv_obj_set_height(lv_label_12, 21);
        lv_label_set_text(lv_label_12, "15 phút");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(btn_weather_interval_15m_landscape);
        lv_obj_set_x(lv_label_13, 108);
        lv_obj_set_y(lv_label_13, 8);
        lv_obj_set_width(lv_label_13, 89);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Đã chọn");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_weather_interval_30m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_30m_landscape, "btn_weather_interval_30m_landscape");
        lv_obj_set_x(btn_weather_interval_30m_landscape, 250);
        lv_obj_set_y(btn_weather_interval_30m_landscape, 180);
        lv_obj_set_width(btn_weather_interval_30m_landscape, 208);
        lv_obj_set_height(btn_weather_interval_30m_landscape, 35);
        lv_obj_set_style_bg_color(btn_weather_interval_30m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_30m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_30m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_30m_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_30m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_30m_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_weather_interval_30m_landscape);
        lv_obj_set_x(lv_label_14, 10);
        lv_obj_set_y(lv_label_14, 7);
        lv_obj_set_width(lv_label_14, 85);
        lv_obj_set_height(lv_label_14, 21);
        lv_label_set_text(lv_label_14, "30 phút");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(btn_weather_interval_30m_landscape);
        lv_obj_set_x(lv_label_15, 108);
        lv_obj_set_y(lv_label_15, 8);
        lv_obj_set_width(lv_label_15, 89);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Tiết kiệm");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_60m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_60m_landscape, "btn_weather_interval_60m_landscape");
        lv_obj_set_x(btn_weather_interval_60m_landscape, 250);
        lv_obj_set_y(btn_weather_interval_60m_landscape, 224);
        lv_obj_set_width(btn_weather_interval_60m_landscape, 208);
        lv_obj_set_height(btn_weather_interval_60m_landscape, 35);
        lv_obj_set_style_bg_color(btn_weather_interval_60m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_60m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_60m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_60m_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_60m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_60m_landscape, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_weather_interval_60m_landscape);
        lv_obj_set_x(lv_label_16, 10);
        lv_obj_set_y(lv_label_16, 7);
        lv_obj_set_width(lv_label_16, 85);
        lv_obj_set_height(lv_label_16, 21);
        lv_label_set_text(lv_label_16, "60 phút");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(btn_weather_interval_60m_landscape);
        lv_obj_set_x(lv_label_17, 108);
        lv_obj_set_y(lv_label_17, 8);
        lv_obj_set_width(lv_label_17, 89);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "Ít cập nhật");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_weather_interval_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_cancel_landscape, "btn_weather_interval_cancel_landscape");
        lv_obj_set_x(btn_weather_interval_cancel_landscape, 12);
        lv_obj_set_y(btn_weather_interval_cancel_landscape, 278);
        lv_obj_set_width(btn_weather_interval_cancel_landscape, 220);
        lv_obj_set_height(btn_weather_interval_cancel_landscape, 30);
        lv_obj_set_style_bg_color(btn_weather_interval_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_weather_interval_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_weather_interval_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_weather_interval_cancel_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_weather_interval_cancel_landscape);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Hủy");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_weather_interval_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_interval_save_landscape, "btn_weather_interval_save_landscape");
        lv_obj_set_x(btn_weather_interval_save_landscape, 240);
        lv_obj_set_y(btn_weather_interval_save_landscape, 278);
        lv_obj_set_width(btn_weather_interval_save_landscape, 228);
        lv_obj_set_height(btn_weather_interval_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_weather_interval_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_weather_interval_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_interval_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_weather_interval_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_weather_interval_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_interval_save_landscape, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_weather_interval_save_landscape);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

