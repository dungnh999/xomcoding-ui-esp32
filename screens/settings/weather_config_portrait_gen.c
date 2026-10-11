/**
 * @file weather_config_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "weather_config_portrait_gen.h"
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

lv_obj_t * weather_config_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t weather_cfg_switch_main;
    static lv_style_t weather_cfg_switch_checked;
    static lv_style_t weather_cfg_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&weather_cfg_switch_main);
        lv_style_init(&weather_cfg_switch_checked);
        lv_style_init(&weather_cfg_switch_knob);

        lv_style_set_bg_color(&weather_cfg_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&weather_cfg_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&weather_cfg_switch_main, 999);
        lv_style_set_pad_all(&weather_cfg_switch_main, 3);
        lv_style_set_border_width(&weather_cfg_switch_main, 0);
        lv_style_set_bg_color(&weather_cfg_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&weather_cfg_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&weather_cfg_switch_checked, 999);
        lv_style_set_bg_color(&weather_cfg_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&weather_cfg_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&weather_cfg_switch_knob, 999);
        lv_style_set_pad_all(&weather_cfg_switch_knob, 0);
        lv_style_set_border_width(&weather_cfg_switch_knob, 0);
        lv_style_set_shadow_color(&weather_cfg_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&weather_cfg_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&weather_cfg_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "weather_config_portrait_#");
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
        lv_label_set_text(lv_label_0, "Thời tiết và vị trí");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 235);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập dữ liệu dự báo");
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
        lv_obj_set_width(lv_label_2, 225);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "VỊ TRÍ DỰ BÁO");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 88);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 116);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 96);
        lv_obj_set_width(lv_label_3, 160);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Thành phố");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 204);
        lv_obj_set_y(lv_label_4, 96);
        lv_obj_set_width(lv_label_4, 92);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "Việt Nam");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * weather_cfg_city = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_city, "weather_cfg_city");
        lv_obj_set_x(weather_cfg_city, 24);
        lv_obj_set_y(weather_cfg_city, 119);
        lv_obj_set_width(weather_cfg_city, 272);
        lv_obj_set_height(weather_cfg_city, 34);
        lv_textarea_set_text(weather_cfg_city, "Hà Nội");
        lv_obj_set_style_text_font(weather_cfg_city, be_medium_14, 0);
        lv_obj_set_style_text_color(weather_cfg_city, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(weather_cfg_city, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(weather_cfg_city, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(weather_cfg_city, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(weather_cfg_city, 1, 0);
        lv_obj_set_style_radius(weather_cfg_city, 8, 0);
        lv_obj_set_style_pad_left(weather_cfg_city, 10, 0);
        lv_obj_set_style_pad_right(weather_cfg_city, 10, 0);
        lv_obj_set_style_pad_top(weather_cfg_city, 6, 0);
        lv_obj_set_style_pad_bottom(weather_cfg_city, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 24);
        lv_obj_set_y(lv_obj_4, 161);
        lv_obj_set_width(lv_obj_4, 272);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 24);
        lv_obj_set_y(lv_label_5, 168);
        lv_obj_set_width(lv_label_5, 92);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Tọa độ");
        lv_obj_set_style_text_font(lv_label_5, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 120);
        lv_obj_set_y(lv_label_6, 168);
        lv_obj_set_width(lv_label_6, 176);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "21.0285, 105.8542");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 185);
        lv_obj_set_width(lv_label_7, 272);
        lv_obj_set_height(lv_label_7, 16);
        lv_label_set_text(lv_label_7, "Vị trí mẫu: Hà Nội, Việt Nam");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 13);
        lv_obj_set_y(lv_label_8, 212);
        lv_obj_set_width(lv_label_8, 225);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "ĐƠN VỊ NHIỆT ĐỘ");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 235);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 45);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 248);
        lv_obj_set_width(lv_label_9, 110);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "Nhiệt độ");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * weather_cfg_celsius = lv_button_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_celsius, "weather_cfg_celsius");
        lv_obj_set_x(weather_cfg_celsius, 153);
        lv_obj_set_y(weather_cfg_celsius, 243);
        lv_obj_set_width(weather_cfg_celsius, 70);
        lv_obj_set_height(weather_cfg_celsius, 29);
        lv_obj_set_style_bg_color(weather_cfg_celsius, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(weather_cfg_celsius, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(weather_cfg_celsius, 0, 0);
        lv_obj_set_style_radius(weather_cfg_celsius, 8, 0);
        lv_obj_set_style_shadow_width(weather_cfg_celsius, 0, 0);
        lv_obj_set_style_pad_all(weather_cfg_celsius, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(weather_cfg_celsius);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "°C");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * weather_cfg_fahrenheit = lv_button_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_fahrenheit, "weather_cfg_fahrenheit");
        lv_obj_set_x(weather_cfg_fahrenheit, 228);
        lv_obj_set_y(weather_cfg_fahrenheit, 243);
        lv_obj_set_width(weather_cfg_fahrenheit, 70);
        lv_obj_set_height(weather_cfg_fahrenheit, 29);
        lv_obj_set_style_bg_color(weather_cfg_fahrenheit, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(weather_cfg_fahrenheit, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(weather_cfg_fahrenheit, 0, 0);
        lv_obj_set_style_radius(weather_cfg_fahrenheit, 8, 0);
        lv_obj_set_style_shadow_width(weather_cfg_fahrenheit, 0, 0);
        lv_obj_set_style_pad_all(weather_cfg_fahrenheit, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(weather_cfg_fahrenheit);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "°F");
        lv_obj_set_style_text_font(lv_label_11, be_medium_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 13);
        lv_obj_set_y(lv_label_12, 289);
        lv_obj_set_width(lv_label_12, 245);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "DỮ LIỆU THỜI TIẾT");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 312);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 116);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 24);
        lv_obj_set_y(lv_label_13, 319);
        lv_obj_set_width(lv_label_13, 143);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "Nguồn dữ liệu");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 171);
        lv_obj_set_y(lv_label_14, 319);
        lv_obj_set_width(lv_label_14, 125);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Open-Meteo");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 345);
        lv_obj_set_width(lv_obj_7, 272);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 353);
        lv_obj_set_width(lv_label_15, 159);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "Chu kỳ cập nhật");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 192);
        lv_obj_set_y(lv_label_16, 353);
        lv_obj_set_width(lv_label_16, 78);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "15 phút");
        lv_obj_set_style_text_font(lv_label_16, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 274);
        lv_obj_set_y(lv_image_1, 350);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 24);
        lv_obj_set_y(lv_obj_8, 379);
        lv_obj_set_width(lv_obj_8, 272);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 386);
        lv_obj_set_width(lv_label_17, 206);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "Hiển thị dự báo 5 ngày");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 24);
        lv_obj_set_y(lv_label_18, 405);
        lv_obj_set_width(lv_label_18, 215);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Trên màn hình thời tiết");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * weather_cfg_show_forecast = lv_switch_create(lv_obj_0);
        lv_obj_set_name(weather_cfg_show_forecast, "weather_cfg_show_forecast");
        lv_obj_set_x(weather_cfg_show_forecast, 252);
        lv_obj_set_y(weather_cfg_show_forecast, 392);
        lv_obj_set_width(weather_cfg_show_forecast, 43);
        lv_obj_set_height(weather_cfg_show_forecast, 23);
        lv_obj_set_state(weather_cfg_show_forecast, LV_STATE_CHECKED, true);
        lv_obj_add_style(weather_cfg_show_forecast, &weather_cfg_switch_main, LV_PART_MAIN);
        lv_obj_add_style(weather_cfg_show_forecast, &weather_cfg_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(weather_cfg_show_forecast, &weather_cfg_switch_knob, LV_PART_KNOB);

        lv_obj_t * btn_weather_cfg_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_weather_cfg_save, "btn_weather_cfg_save");
        lv_obj_set_x(btn_weather_cfg_save, 12);
        lv_obj_set_y(btn_weather_cfg_save, 438);
        lv_obj_set_width(btn_weather_cfg_save, 296);
        lv_obj_set_height(btn_weather_cfg_save, 32);
        lv_obj_set_style_bg_color(btn_weather_cfg_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_weather_cfg_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_weather_cfg_save, 0, 0);
        lv_obj_set_style_radius(btn_weather_cfg_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_weather_cfg_save, 0, 0);
        lv_obj_set_style_pad_all(btn_weather_cfg_save, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_weather_cfg_save);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "Lưu cài đặt thời tiết");
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

