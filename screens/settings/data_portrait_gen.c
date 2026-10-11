/**
 * @file data_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "data_portrait_gen.h"
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

lv_obj_t * data_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t data_switch_main;
    static lv_style_t data_switch_checked;
    static lv_style_t data_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&data_switch_main);
        lv_style_init(&data_switch_checked);
        lv_style_init(&data_switch_knob);

        lv_style_set_bg_color(&data_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&data_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&data_switch_main, 999);
        lv_style_set_pad_all(&data_switch_main, 3);
        lv_style_set_border_width(&data_switch_main, 0);
        lv_style_set_bg_color(&data_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&data_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&data_switch_checked, 999);
        lv_style_set_bg_color(&data_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&data_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&data_switch_knob, 999);
        lv_style_set_pad_all(&data_switch_knob, 0);
        lv_style_set_border_width(&data_switch_knob, 0);
        lv_style_set_shadow_color(&data_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&data_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&data_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "data_portrait_#");
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
        lv_obj_set_width(lv_label_0, 247);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Dữ liệu và dịch vụ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "NAS, API và đồng bộ dữ liệu");
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
        lv_obj_set_width(lv_label_2, 228);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "KẾT NỐI NAS");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 91);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 92);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 102);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 27);
        lv_obj_set_y(lv_image_1, 107);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_nas);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 69);
        lv_obj_set_y(lv_label_3, 100);
        lv_obj_set_width(lv_label_3, 177);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "XomCoding NAS");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 69);
        lv_obj_set_y(lv_label_4, 122);
        lv_obj_set_width(lv_label_4, 177);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "192.168.1.100");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 258);
        lv_obj_set_y(lv_obj_5, 110);
        lv_obj_set_width(lv_obj_5, 7);
        lv_obj_set_height(lv_obj_5, 7);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 269);
        lv_obj_set_y(lv_label_5, 104);
        lv_obj_set_width(lv_label_5, 27);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "OK");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 147);
        lv_obj_set_width(lv_obj_6, 274);
        lv_obj_set_height(lv_obj_6, 1);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 157);
        lv_obj_set_width(lv_label_6, 224);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Cấu hình máy chủ NAS");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 272);
        lv_obj_set_y(lv_image_2, 154);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 190);
        lv_obj_set_width(lv_label_7, 230);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "API VÀ DỊCH VỤ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 211);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 85);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 218);
        lv_obj_set_width(lv_label_8, 194);
        lv_obj_set_height(lv_label_8, 20);
        lv_label_set_text(lv_label_8, "Kết nối API");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 24);
        lv_obj_set_y(lv_label_9, 238);
        lv_obj_set_width(lv_label_9, 194);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Dữ liệu từ máy chủ");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * data_api_enabled = lv_switch_create(lv_obj_0);
        lv_obj_set_name(data_api_enabled, "data_api_enabled");
        lv_obj_set_x(data_api_enabled, 252);
        lv_obj_set_y(data_api_enabled, 225);
        lv_obj_set_width(data_api_enabled, 43);
        lv_obj_set_height(data_api_enabled, 23);
        lv_obj_set_state(data_api_enabled, LV_STATE_CHECKED, true);
        lv_obj_add_style(data_api_enabled, &data_switch_main, LV_PART_MAIN);
        lv_obj_add_style(data_api_enabled, &data_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(data_api_enabled, &data_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 24);
        lv_obj_set_y(lv_obj_8, 261);
        lv_obj_set_width(lv_obj_8, 272);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 24);
        lv_obj_set_y(lv_label_10, 270);
        lv_obj_set_width(lv_label_10, 225);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Cấu hình API và Token");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 272);
        lv_obj_set_y(lv_image_3, 267);
        lv_obj_set_width(lv_image_3, 24);
        lv_obj_set_height(lv_image_3, 24);
        lv_image_set_src(lv_image_3, ui_next);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 13);
        lv_obj_set_y(lv_label_11, 302);
        lv_obj_set_width(lv_label_11, 230);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "ĐỒNG BỘ DỮ LIỆU");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 12);
        lv_obj_set_y(lv_obj_9, 322);
        lv_obj_set_width(lv_obj_9, 296);
        lv_obj_set_height(lv_obj_9, 82);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 333);
        lv_obj_set_width(lv_label_12, 187);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Tự động đồng bộ");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * data_auto_sync = lv_switch_create(lv_obj_0);
        lv_obj_set_name(data_auto_sync, "data_auto_sync");
        lv_obj_set_x(data_auto_sync, 252);
        lv_obj_set_y(data_auto_sync, 330);
        lv_obj_set_width(data_auto_sync, 43);
        lv_obj_set_height(data_auto_sync, 23);
        lv_obj_set_state(data_auto_sync, LV_STATE_CHECKED, true);
        lv_obj_add_style(data_auto_sync, &data_switch_main, LV_PART_MAIN);
        lv_obj_add_style(data_auto_sync, &data_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(data_auto_sync, &data_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 24);
        lv_obj_set_y(lv_obj_10, 361);
        lv_obj_set_width(lv_obj_10, 272);
        lv_obj_set_height(lv_obj_10, 1);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 24);
        lv_obj_set_y(lv_label_13, 373);
        lv_obj_set_width(lv_label_13, 166);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Chu kỳ đồng bộ");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 196);
        lv_obj_set_y(lv_label_14, 373);
        lv_obj_set_width(lv_label_14, 76);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "30 giây");
        lv_obj_set_style_text_font(lv_label_14, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_4 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_4, 273);
        lv_obj_set_y(lv_image_4, 370);
        lv_obj_set_width(lv_image_4, 24);
        lv_obj_set_height(lv_image_4, 24);
        lv_image_set_src(lv_image_4, ui_next);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 411);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 20);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 7, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_12, 22);
        lv_obj_set_y(lv_obj_12, 418);
        lv_obj_set_width(lv_obj_12, 6);
        lv_obj_set_height(lv_obj_12, 6);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 35);
        lv_obj_set_y(lv_label_15, 412);
        lv_obj_set_width(lv_label_15, 261);
        lv_obj_set_height(lv_label_15, 18);
        lv_label_set_text(lv_label_15, "Dịch vụ đang hoạt động");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_data_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_data_save, "btn_data_save");
        lv_obj_set_x(btn_data_save, 12);
        lv_obj_set_y(btn_data_save, 439);
        lv_obj_set_width(btn_data_save, 296);
        lv_obj_set_height(btn_data_save, 31);
        lv_obj_set_style_bg_color(btn_data_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_data_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_data_save, 0, 0);
        lv_obj_set_style_radius(btn_data_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_data_save, 0, 0);
        lv_obj_set_style_pad_all(btn_data_save, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_data_save);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Lưu cài đặt dữ liệu");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

