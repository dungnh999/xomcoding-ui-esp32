/**
 * @file display_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "display_landscape_gen.h"
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

lv_obj_t * display_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t display_land_slider_main;
    static lv_style_t display_land_slider_indicator;
    static lv_style_t display_land_slider_knob;
    static lv_style_t display_land_switch_main;
    static lv_style_t display_land_switch_checked;
    static lv_style_t display_land_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&display_land_slider_main);
        lv_style_init(&display_land_slider_indicator);
        lv_style_init(&display_land_slider_knob);
        lv_style_init(&display_land_switch_main);
        lv_style_init(&display_land_switch_checked);
        lv_style_init(&display_land_switch_knob);

        lv_style_set_bg_color(&display_land_slider_main, lv_color_hex(0x29394d));
        lv_style_set_bg_opa(&display_land_slider_main, (255 * 100 / 100));
        lv_style_set_radius(&display_land_slider_main, 999);
        lv_style_set_border_width(&display_land_slider_main, 0);
        lv_style_set_pad_all(&display_land_slider_main, 0);
        lv_style_set_bg_color(&display_land_slider_indicator, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&display_land_slider_indicator, (255 * 100 / 100));
        lv_style_set_radius(&display_land_slider_indicator, 999);
        lv_style_set_bg_color(&display_land_slider_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&display_land_slider_knob, (255 * 100 / 100));
        lv_style_set_radius(&display_land_slider_knob, 999);
        lv_style_set_pad_all(&display_land_slider_knob, 5);
        lv_style_set_border_width(&display_land_slider_knob, 1);
        lv_style_set_border_color(&display_land_slider_knob, lv_color_hex(0xd1d5db));
        lv_style_set_shadow_color(&display_land_slider_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&display_land_slider_knob, (255 * 30 / 100));
        lv_style_set_shadow_width(&display_land_slider_knob, 5);
        lv_style_set_bg_color(&display_land_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&display_land_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&display_land_switch_main, 999);
        lv_style_set_pad_all(&display_land_switch_main, 3);
        lv_style_set_border_width(&display_land_switch_main, 0);
        lv_style_set_bg_color(&display_land_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&display_land_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&display_land_switch_checked, 999);
        lv_style_set_bg_color(&display_land_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&display_land_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&display_land_switch_knob, 999);
        lv_style_set_pad_all(&display_land_switch_knob, 0);
        lv_style_set_border_width(&display_land_switch_knob, 0);
        lv_style_set_shadow_color(&display_land_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&display_land_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&display_land_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "display_landscape_#");
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
        lv_obj_set_width(lv_label_0, 270);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Màn hình");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hiển thị và giao diện");
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
        lv_label_set_text(lv_label_2, "ĐỘ SÁNG");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 94);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 94);
        lv_obj_set_width(lv_label_3, 152);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Độ sáng màn hình");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * label_brightness_landscape = lv_label_create(lv_obj_0);
        lv_obj_set_name(label_brightness_landscape, "label_brightness_landscape");
        lv_obj_set_x(label_brightness_landscape, 177);
        lv_obj_set_y(label_brightness_landscape, 94);
        lv_obj_set_width(label_brightness_landscape, 44);
        lv_obj_set_height(label_brightness_landscape, 19);
        lv_label_set_text(label_brightness_landscape, "75%");
        lv_obj_set_style_text_font(label_brightness_landscape, be_semibold_12, 0);
        lv_obj_set_style_text_align(label_brightness_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(label_brightness_landscape, lv_color_hex(0xe28d88), 0);

        lv_obj_t * slider_display_brightness_landscape = lv_slider_create(lv_obj_0);
        lv_obj_set_name(slider_display_brightness_landscape, "slider_display_brightness_landscape");
        lv_obj_set_x(slider_display_brightness_landscape, 30);
        lv_obj_set_y(slider_display_brightness_landscape, 136);
        lv_obj_set_width(slider_display_brightness_landscape, 185);
        lv_obj_set_height(slider_display_brightness_landscape, 8);
        lv_slider_set_min_value(slider_display_brightness_landscape, 0);
        lv_slider_set_max_value(slider_display_brightness_landscape, 100);
        lv_slider_set_value(slider_display_brightness_landscape, 75, false);
        lv_obj_add_style(slider_display_brightness_landscape, &display_land_slider_main, LV_PART_MAIN);
        lv_obj_add_style(slider_display_brightness_landscape, &display_land_slider_indicator, LV_PART_INDICATOR);
        lv_obj_add_style(slider_display_brightness_landscape, &display_land_slider_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 154);
        lv_obj_set_width(lv_label_4, 84);
        lv_obj_set_height(lv_label_4, 16);
        lv_label_set_text(lv_label_4, "Thấp");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 145);
        lv_obj_set_y(lv_label_5, 154);
        lv_obj_set_width(lv_label_5, 76);
        lv_obj_set_height(lv_label_5, 16);
        lv_label_set_text(lv_label_5, "Cao");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 187);
        lv_obj_set_width(lv_label_6, 211);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "HƯỚNG MÀN HÌNH");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 210);
        lv_obj_set_width(lv_obj_4, 220);
        lv_obj_set_height(lv_obj_4, 49);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 225);
        lv_obj_set_width(lv_label_7, 65);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Xoay");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_display_portrait_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_portrait_landscape, "btn_display_portrait_landscape");
        lv_obj_set_x(btn_display_portrait_landscape, 94);
        lv_obj_set_y(btn_display_portrait_landscape, 219);
        lv_obj_set_width(btn_display_portrait_landscape, 59);
        lv_obj_set_height(btn_display_portrait_landscape, 31);
        lv_obj_set_style_bg_color(btn_display_portrait_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_portrait_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_portrait_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_portrait_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_portrait_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_portrait_landscape, 0, 0);
        lv_obj_t * lv_label_8 = lv_label_create(btn_display_portrait_landscape);
        lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_8, "Dọc");
        lv_obj_set_style_text_font(lv_label_8, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_landscape_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_landscape_landscape, "btn_display_landscape_landscape");
        lv_obj_set_x(btn_display_landscape_landscape, 158);
        lv_obj_set_y(btn_display_landscape_landscape, 219);
        lv_obj_set_width(btn_display_landscape_landscape, 64);
        lv_obj_set_height(btn_display_landscape_landscape, 31);
        lv_obj_set_style_bg_color(btn_display_landscape_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_landscape_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_landscape_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_landscape_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_landscape_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_landscape_landscape, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(btn_display_landscape_landscape);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "Ngang");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 211);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "GIAO DIỆN");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 240);
        lv_obj_set_y(lv_obj_5, 84);
        lv_obj_set_width(lv_obj_5, 228);
        lv_obj_set_height(lv_obj_5, 49);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 99);
        lv_obj_set_width(lv_label_11, 78);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "Chế độ màu");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_theme_dark_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_theme_dark_landscape, "btn_theme_dark_landscape");
        lv_obj_set_x(btn_theme_dark_landscape, 335);
        lv_obj_set_y(btn_theme_dark_landscape, 93);
        lv_obj_set_width(btn_theme_dark_landscape, 59);
        lv_obj_set_height(btn_theme_dark_landscape, 31);
        lv_obj_set_style_bg_color(btn_theme_dark_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_theme_dark_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_theme_dark_landscape, 0, 0);
        lv_obj_set_style_radius(btn_theme_dark_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_theme_dark_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_theme_dark_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_theme_dark_landscape);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "Tối");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_theme_light_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_theme_light_landscape, "btn_theme_light_landscape");
        lv_obj_set_x(btn_theme_light_landscape, 399);
        lv_obj_set_y(btn_theme_light_landscape, 93);
        lv_obj_set_width(btn_theme_light_landscape, 59);
        lv_obj_set_height(btn_theme_light_landscape, 31);
        lv_obj_set_style_bg_color(btn_theme_light_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_theme_light_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_theme_light_landscape, 0, 0);
        lv_obj_set_style_radius(btn_theme_light_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_theme_light_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_theme_light_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_theme_light_landscape);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "Sáng");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 241);
        lv_obj_set_y(lv_label_14, 141);
        lv_obj_set_width(lv_label_14, 211);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "TÙY CHỌN KHÁC");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 164);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 95);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 251);
        lv_obj_set_y(lv_label_15, 177);
        lv_obj_set_width(lv_label_15, 138);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Tự tắt màn hình");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 391);
        lv_obj_set_y(lv_label_16, 177);
        lv_obj_set_width(lv_label_16, 48);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "5 phút");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 438);
        lv_obj_set_y(lv_image_1, 174);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 251);
        lv_obj_set_y(lv_obj_7, 207);
        lv_obj_set_width(lv_obj_7, 206);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 251);
        lv_obj_set_y(lv_label_17, 223);
        lv_obj_set_width(lv_label_17, 164);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "Phản hồi cảm ứng");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * display_touch_feedback_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(display_touch_feedback_landscape, "display_touch_feedback_landscape");
        lv_obj_set_x(display_touch_feedback_landscape, 415);
        lv_obj_set_y(display_touch_feedback_landscape, 220);
        lv_obj_set_width(display_touch_feedback_landscape, 43);
        lv_obj_set_height(display_touch_feedback_landscape, 23);
        lv_obj_set_state(display_touch_feedback_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(display_touch_feedback_landscape, &display_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(display_touch_feedback_landscape, &display_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(display_touch_feedback_landscape, &display_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * btn_display_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_save_landscape, "btn_display_save_landscape");
        lv_obj_set_x(btn_display_save_landscape, 12);
        lv_obj_set_y(btn_display_save_landscape, 270);
        lv_obj_set_width(btn_display_save_landscape, 456);
        lv_obj_set_height(btn_display_save_landscape, 38);
        lv_obj_set_style_bg_color(btn_display_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_save_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_display_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_save_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_display_save_landscape);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Lưu cài đặt màn hình");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

