/**
 * @file display_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "display_portrait_gen.h"
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

lv_obj_t * display_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t display_slider_main;
    static lv_style_t display_slider_indicator;
    static lv_style_t display_slider_knob;
    static lv_style_t display_switch_main;
    static lv_style_t display_switch_indicator;
    static lv_style_t display_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&display_slider_main);
        lv_style_init(&display_slider_indicator);
        lv_style_init(&display_slider_knob);
        lv_style_init(&display_switch_main);
        lv_style_init(&display_switch_indicator);
        lv_style_init(&display_switch_knob);

        lv_style_set_bg_color(&display_slider_main, lv_color_hex(0x29394d));
        lv_style_set_bg_opa(&display_slider_main, (255 * 100 / 100));
        lv_style_set_radius(&display_slider_main, 999);
        lv_style_set_border_width(&display_slider_main, 0);
        lv_style_set_pad_all(&display_slider_main, 0);
        lv_style_set_bg_color(&display_slider_indicator, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&display_slider_indicator, (255 * 100 / 100));
        lv_style_set_radius(&display_slider_indicator, 999);
        lv_style_set_bg_color(&display_slider_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&display_slider_knob, (255 * 100 / 100));
        lv_style_set_radius(&display_slider_knob, 999);
        lv_style_set_pad_all(&display_slider_knob, 5);
        lv_style_set_border_width(&display_slider_knob, 1);
        lv_style_set_border_color(&display_slider_knob, lv_color_hex(0xd1d5db));
        lv_style_set_shadow_color(&display_slider_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&display_slider_knob, (255 * 30 / 100));
        lv_style_set_shadow_width(&display_slider_knob, 5);
        lv_style_set_bg_color(&display_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&display_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&display_switch_main, 999);
        lv_style_set_pad_all(&display_switch_main, 3);
        lv_style_set_border_width(&display_switch_main, 0);
        lv_style_set_bg_color(&display_switch_indicator, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&display_switch_indicator, (255 * 100 / 100));
        lv_style_set_radius(&display_switch_indicator, 999);
        lv_style_set_bg_color(&display_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&display_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&display_switch_knob, 999);
        lv_style_set_pad_all(&display_switch_knob, 0);
        lv_style_set_border_width(&display_switch_knob, 0);
        lv_style_set_shadow_color(&display_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&display_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&display_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "display_portrait_#");
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
        lv_obj_set_width(lv_label_0, 244);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Màn hình");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 239);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hiển thị và giao diện");
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
        lv_obj_set_y(lv_label_2, 68);
        lv_obj_set_width(lv_label_2, 230);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "ĐỘ SÁNG");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 91);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 75);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 100);
        lv_obj_set_width(lv_label_3, 197);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Độ sáng màn hình");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * label_brightness_value = lv_label_create(lv_obj_0);
        lv_obj_set_name(label_brightness_value, "label_brightness_value");
        lv_obj_set_x(label_brightness_value, 242);
        lv_obj_set_y(label_brightness_value, 101);
        lv_obj_set_width(label_brightness_value, 53);
        lv_obj_set_height(label_brightness_value, 20);
        lv_label_set_text(label_brightness_value, "75%");
        lv_obj_set_style_text_font(label_brightness_value, be_semibold_14, 0);
        lv_obj_set_style_text_align(label_brightness_value, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(label_brightness_value, lv_color_hex(0xe28d88), 0);

        lv_obj_t * slider_display_brightness = lv_slider_create(lv_obj_0);
        lv_obj_set_name(slider_display_brightness, "slider_display_brightness");
        lv_obj_set_x(slider_display_brightness, 30);
        lv_obj_set_y(slider_display_brightness, 135);
        lv_obj_set_width(slider_display_brightness, 260);
        lv_obj_set_height(slider_display_brightness, 8);
        lv_slider_set_min_value(slider_display_brightness, 0);
        lv_slider_set_max_value(slider_display_brightness, 100);
        lv_slider_set_value(slider_display_brightness, 75, false);
        lv_obj_add_style(slider_display_brightness, &display_slider_main, LV_PART_MAIN);
        lv_obj_add_style(slider_display_brightness, &display_slider_indicator, LV_PART_INDICATOR);
        lv_obj_add_style(slider_display_brightness, &display_slider_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 148);
        lv_obj_set_width(lv_label_4, 110);
        lv_obj_set_height(lv_label_4, 15);
        lv_label_set_text(lv_label_4, "Thấp");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 195);
        lv_obj_set_y(lv_label_5, 148);
        lv_obj_set_width(lv_label_5, 101);
        lv_obj_set_height(lv_label_5, 15);
        lv_label_set_text(lv_label_5, "Cao");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 174);
        lv_obj_set_width(lv_label_6, 230);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "HƯỚNG MÀN HÌNH");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 197);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 52);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 213);
        lv_obj_set_width(lv_label_7, 102);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Xoay màn");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_display_portrait = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_portrait, "btn_display_portrait");
        lv_obj_set_x(btn_display_portrait, 135);
        lv_obj_set_y(btn_display_portrait, 206);
        lv_obj_set_width(btn_display_portrait, 76);
        lv_obj_set_height(btn_display_portrait, 33);
        lv_obj_set_style_bg_color(btn_display_portrait, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_portrait, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_portrait, 0, 0);
        lv_obj_set_style_radius(btn_display_portrait, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_portrait, 0, 0);
        lv_obj_set_style_pad_all(btn_display_portrait, 0, 0);
        lv_obj_t * lv_label_8 = lv_label_create(btn_display_portrait);
        lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_8, "Dọc");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_display_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_landscape, "btn_display_landscape");
        lv_obj_set_x(btn_display_landscape, 216);
        lv_obj_set_y(btn_display_landscape, 206);
        lv_obj_set_width(btn_display_landscape, 82);
        lv_obj_set_height(btn_display_landscape, 33);
        lv_obj_set_style_bg_color(btn_display_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_landscape, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(btn_display_landscape);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "Ngang");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 13);
        lv_obj_set_y(lv_label_10, 257);
        lv_obj_set_width(lv_label_10, 230);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "GIAO DIỆN");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 280);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 52);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 24);
        lv_obj_set_y(lv_label_11, 296);
        lv_obj_set_width(lv_label_11, 102);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "Chế độ màu");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_theme_dark = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_theme_dark, "btn_theme_dark");
        lv_obj_set_x(btn_theme_dark, 135);
        lv_obj_set_y(btn_theme_dark, 289);
        lv_obj_set_width(btn_theme_dark, 76);
        lv_obj_set_height(btn_theme_dark, 33);
        lv_obj_set_style_bg_color(btn_theme_dark, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_theme_dark, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_theme_dark, 0, 0);
        lv_obj_set_style_radius(btn_theme_dark, 8, 0);
        lv_obj_set_style_shadow_width(btn_theme_dark, 0, 0);
        lv_obj_set_style_pad_all(btn_theme_dark, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_theme_dark);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "Tối");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_theme_light = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_theme_light, "btn_theme_light");
        lv_obj_set_x(btn_theme_light, 216);
        lv_obj_set_y(btn_theme_light, 289);
        lv_obj_set_width(btn_theme_light, 82);
        lv_obj_set_height(btn_theme_light, 33);
        lv_obj_set_style_bg_color(btn_theme_light, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_theme_light, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_theme_light, 0, 0);
        lv_obj_set_style_radius(btn_theme_light, 8, 0);
        lv_obj_set_style_shadow_width(btn_theme_light, 0, 0);
        lv_obj_set_style_pad_all(btn_theme_light, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_theme_light);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "Sáng");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 13);
        lv_obj_set_y(lv_label_14, 340);
        lv_obj_set_width(lv_label_14, 230);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "TÙY CHỌN KHÁC");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 362);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 67);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 24);
        lv_obj_set_y(lv_label_15, 370);
        lv_obj_set_width(lv_label_15, 160);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "Tự tắt màn hình");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 208);
        lv_obj_set_y(lv_label_16, 370);
        lv_obj_set_width(lv_label_16, 67);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "5 phút");
        lv_obj_set_style_text_font(lv_label_16, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 274);
        lv_obj_set_y(lv_image_1, 367);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 396);
        lv_obj_set_width(lv_obj_7, 272);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 24);
        lv_obj_set_y(lv_label_17, 404);
        lv_obj_set_width(lv_label_17, 193);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "Phản hồi cảm ứng");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * display_touch_feedback = lv_switch_create(lv_obj_0);
        lv_obj_set_name(display_touch_feedback, "display_touch_feedback");
        lv_obj_set_x(display_touch_feedback, 252);
        lv_obj_set_y(display_touch_feedback, 400);
        lv_obj_set_width(display_touch_feedback, 43);
        lv_obj_set_height(display_touch_feedback, 23);
        lv_obj_set_state(display_touch_feedback, LV_STATE_CHECKED, true);
        lv_obj_add_style(display_touch_feedback, &display_switch_main, LV_PART_MAIN);
        lv_obj_add_style(display_touch_feedback, &display_switch_indicator, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(display_touch_feedback, &display_switch_knob, LV_PART_KNOB);

        lv_obj_t * btn_display_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_save, "btn_display_save");
        lv_obj_set_x(btn_display_save, 12);
        lv_obj_set_y(btn_display_save, 438);
        lv_obj_set_width(btn_display_save, 296);
        lv_obj_set_height(btn_display_save, 32);
        lv_obj_set_style_bg_color(btn_display_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_save, 0, 0);
        lv_obj_set_style_radius(btn_display_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_display_save, 0, 0);
        lv_obj_set_style_pad_all(btn_display_save, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_display_save);
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

