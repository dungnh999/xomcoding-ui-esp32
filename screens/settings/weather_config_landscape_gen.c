/**
 * @file weather_config_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_config_landscape_gen.h"
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

lv_obj_t * weather_config_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t weather_land_switch_main;
    static lv_style_t weather_land_switch_checked;
    static lv_style_t weather_land_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&weather_land_switch_main);
        lv_style_init(&weather_land_switch_checked);
        lv_style_init(&weather_land_switch_knob);

        lv_style_set_bg_color(&weather_land_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&weather_land_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&weather_land_switch_main, 999);
        lv_style_set_pad_all(&weather_land_switch_main, 3);
        lv_style_set_border_width(&weather_land_switch_main, 0);
        lv_style_set_bg_color(&weather_land_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&weather_land_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&weather_land_switch_checked, 999);
        lv_style_set_bg_color(&weather_land_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&weather_land_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&weather_land_switch_knob, 999);
        lv_style_set_pad_all(&weather_land_switch_knob, 0);
        lv_style_set_border_width(&weather_land_switch_knob, 0);
        lv_style_set_shadow_color(&weather_land_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&weather_land_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&weather_land_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_config_landscape_#");
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
        lv_obj_set_width(lv_label_0, 290);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Thời tiết và vị trí");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập dữ liệu dự báo");
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
        lv_obj_set_y(lv_label_2, 60);
        lv_obj_set_width(lv_label_2, 210);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "VỊ TRÍ DỰ BÁO");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 82);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 120);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 89);
        lv_obj_set_width(lv_label_3, 117);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Thành phố");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 142);
        lv_obj_set_y(lv_label_4, 89);
        lv_obj_set_width(lv_label_4, 80);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "Việt Nam");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * weather_cfg_city_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_city_landscape, "weather_cfg_city_landscape");
        lv_obj_set_x(weather_cfg_city_landscape, 22);
        lv_obj_set_y(weather_cfg_city_landscape, 111);
        lv_obj_set_width(weather_cfg_city_landscape, 200);
        lv_obj_set_height(weather_cfg_city_landscape, 34);
        lv_textarea_set_text(weather_cfg_city_landscape, "Hà Nội");
        lv_obj_set_style_text_font(weather_cfg_city_landscape, be_medium_14, 0);
        lv_obj_set_style_text_color(weather_cfg_city_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(weather_cfg_city_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(weather_cfg_city_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(weather_cfg_city_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(weather_cfg_city_landscape, 1, 0);
        lv_obj_set_style_radius(weather_cfg_city_landscape, 8, 0);
        lv_obj_set_style_pad_left(weather_cfg_city_landscape, 10, 0);
        lv_obj_set_style_pad_right(weather_cfg_city_landscape, 10, 0);
        lv_obj_set_style_pad_top(weather_cfg_city_landscape, 6, 0);
        lv_obj_set_style_pad_bottom(weather_cfg_city_landscape, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 152);
        lv_obj_set_width(lv_obj_4, 200);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 22);
        lv_obj_set_y(lv_label_5, 160);
        lv_obj_set_width(lv_label_5, 75);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Tọa độ");
        lv_obj_set_style_text_font(lv_label_5, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 91);
        lv_obj_set_y(lv_label_6, 160);
        lv_obj_set_width(lv_label_6, 131);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "21.0285, 105.8542");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 181);
        lv_obj_set_width(lv_label_7, 198);
        lv_obj_set_height(lv_label_7, 16);
        lv_label_set_text(lv_label_7, "Vị trí mẫu: Hà Nội");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 13);
        lv_obj_set_y(lv_label_8, 210);
        lv_obj_set_width(lv_label_8, 210);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "ĐƠN VỊ NHIỆT ĐỘ");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 232);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 36);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 22);
        lv_obj_set_y(lv_label_9, 242);
        lv_obj_set_width(lv_label_9, 67);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "Nhiệt độ");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * weather_cfg_celsius_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_celsius_landscape, "weather_cfg_celsius_landscape");
        lv_obj_set_x(weather_cfg_celsius_landscape, 98);
        lv_obj_set_y(weather_cfg_celsius_landscape, 237);
        lv_obj_set_width(weather_cfg_celsius_landscape, 57);
        lv_obj_set_height(weather_cfg_celsius_landscape, 26);
        lv_obj_set_style_bg_color(weather_cfg_celsius_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(weather_cfg_celsius_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(weather_cfg_celsius_landscape, 0, 0);
        lv_obj_set_style_radius(weather_cfg_celsius_landscape, 7, 0);
        lv_obj_set_style_shadow_width(weather_cfg_celsius_landscape, 0, 0);
        lv_obj_set_style_pad_all(weather_cfg_celsius_landscape, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(weather_cfg_celsius_landscape);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "°C");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * weather_cfg_fahrenheit_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_fahrenheit_landscape, "weather_cfg_fahrenheit_landscape");
        lv_obj_set_x(weather_cfg_fahrenheit_landscape, 161);
        lv_obj_set_y(weather_cfg_fahrenheit_landscape, 237);
        lv_obj_set_width(weather_cfg_fahrenheit_landscape, 61);
        lv_obj_set_height(weather_cfg_fahrenheit_landscape, 26);
        lv_obj_set_style_bg_color(weather_cfg_fahrenheit_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(weather_cfg_fahrenheit_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(weather_cfg_fahrenheit_landscape, 0, 0);
        lv_obj_set_style_radius(weather_cfg_fahrenheit_landscape, 7, 0);
        lv_obj_set_style_shadow_width(weather_cfg_fahrenheit_landscape, 0, 0);
        lv_obj_set_style_pad_all(weather_cfg_fahrenheit_landscape, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(weather_cfg_fahrenheit_landscape);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "°F");
        lv_obj_set_style_text_font(lv_label_11, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 241);
        lv_obj_set_y(lv_label_12, 60);
        lv_obj_set_width(lv_label_12, 220);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "DỮ LIỆU THỜI TIẾT");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 82);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 186);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 93);
        lv_obj_set_width(lv_label_13, 105);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Nguồn dữ liệu");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 358);
        lv_obj_set_y(lv_label_14, 93);
        lv_obj_set_width(lv_label_14, 99);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Open-Meteo");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 251);
        lv_obj_set_y(lv_label_15, 115);
        lv_obj_set_width(lv_label_15, 206);
        lv_obj_set_height(lv_label_15, 16);
        lv_label_set_text(lv_label_15, "Dự báo hiện tại và 5 ngày");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 251);
        lv_obj_set_y(lv_obj_7, 137);
        lv_obj_set_width(lv_obj_7, 206);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 251);
        lv_obj_set_y(lv_label_16, 145);
        lv_obj_set_width(lv_label_16, 115);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Chu kỳ cập nhật");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 370);
        lv_obj_set_y(lv_label_17, 145);
        lv_obj_set_width(lv_label_17, 66);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "15 phút");
        lv_obj_set_style_text_font(lv_label_17, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 436);
        lv_obj_set_y(lv_image_1, 141);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 251);
        lv_obj_set_y(lv_label_18, 167);
        lv_obj_set_width(lv_label_18, 206);
        lv_obj_set_height(lv_label_18, 16);
        lv_label_set_text(lv_label_18, "Tự làm mới dữ liệu thời tiết");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 251);
        lv_obj_set_y(lv_obj_8, 189);
        lv_obj_set_width(lv_obj_8, 206);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 251);
        lv_obj_set_y(lv_label_19, 198);
        lv_obj_set_width(lv_label_19, 162);
        lv_obj_set_height(lv_label_19, 19);
        lv_label_set_text(lv_label_19, "Dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_20, 251);
        lv_obj_set_y(lv_label_20, 223);
        lv_obj_set_width(lv_label_20, 163);
        lv_obj_set_height(lv_label_20, 30);
        lv_label_set_text(lv_label_20, "Hiển thị trên màn thời tiết");
        lv_obj_set_style_text_font(lv_label_20, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * weather_cfg_show_forecast_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_show_forecast_landscape, "weather_cfg_show_forecast_landscape");
        lv_obj_set_x(weather_cfg_show_forecast_landscape, 414);
        lv_obj_set_y(weather_cfg_show_forecast_landscape, 207);
        lv_obj_set_width(weather_cfg_show_forecast_landscape, 43);
        lv_obj_set_height(weather_cfg_show_forecast_landscape, 23);
        lv_obj_set_state(weather_cfg_show_forecast_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(weather_cfg_show_forecast_landscape, &weather_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(weather_cfg_show_forecast_landscape, &weather_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(weather_cfg_show_forecast_landscape, &weather_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * btn_weather_cfg_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_cfg_save_landscape, "btn_weather_cfg_save_landscape");
        lv_obj_set_x(btn_weather_cfg_save_landscape, 12);
        lv_obj_set_y(btn_weather_cfg_save_landscape, 277);
        lv_obj_set_width(btn_weather_cfg_save_landscape, 456);
        lv_obj_set_height(btn_weather_cfg_save_landscape, 31);
        lv_obj_set_style_bg_color(btn_weather_cfg_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_weather_cfg_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_cfg_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_weather_cfg_save_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_weather_cfg_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_cfg_save_landscape, 0, 0);
        lv_obj_t * lv_label_21 = lv_label_create(btn_weather_cfg_save_landscape);
        lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_21, "Lưu cài đặt thời tiết");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

