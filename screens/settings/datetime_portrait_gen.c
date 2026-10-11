/**
 * @file datetime_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "datetime_portrait_gen.h"
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

lv_obj_t * datetime_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t datetime_switch_main;
    static lv_style_t datetime_switch_checked;
    static lv_style_t datetime_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&datetime_switch_main);
        lv_style_init(&datetime_switch_checked);
        lv_style_init(&datetime_switch_knob);

        lv_style_set_bg_color(&datetime_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&datetime_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&datetime_switch_main, 999);
        lv_style_set_pad_all(&datetime_switch_main, 3);
        lv_style_set_border_width(&datetime_switch_main, 0);
        lv_style_set_bg_color(&datetime_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&datetime_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&datetime_switch_checked, 999);
        lv_style_set_bg_color(&datetime_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&datetime_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&datetime_switch_knob, 999);
        lv_style_set_pad_all(&datetime_switch_knob, 0);
        lv_style_set_border_width(&datetime_switch_knob, 0);
        lv_style_set_shadow_color(&datetime_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&datetime_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&datetime_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "datetime_portrait_#");
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
        lv_label_set_text(lv_label_0, "Ngày giờ và múi giờ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Đồng bộ và định dạng thời gian");
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
        lv_label_set_text(lv_label_2, "ĐỒNG BỘ THỜI GIAN");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 91);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 66);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 102);
        lv_obj_set_width(lv_label_3, 194);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Tự động qua NTP");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 126);
        lv_obj_set_width(lv_label_4, 213);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Cập nhật giờ qua Internet");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * datetime_ntp_enabled = lv_switch_create(lv_obj_0);
        lv_obj_set_name(datetime_ntp_enabled, "datetime_ntp_enabled");
        lv_obj_set_x(datetime_ntp_enabled, 252);
        lv_obj_set_y(datetime_ntp_enabled, 112);
        lv_obj_set_width(datetime_ntp_enabled, 43);
        lv_obj_set_height(datetime_ntp_enabled, 23);
        lv_obj_set_state(datetime_ntp_enabled, LV_STATE_CHECKED, true);
        lv_obj_add_style(datetime_ntp_enabled, &datetime_switch_main, LV_PART_MAIN);
        lv_obj_add_style(datetime_ntp_enabled, &datetime_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(datetime_ntp_enabled, &datetime_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 166);
        lv_obj_set_width(lv_label_5, 237);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "MÁY CHỦ VÀ MÚI GIỜ");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 188);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 105);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 196);
        lv_obj_set_width(lv_label_6, 218);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Máy chủ NTP");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * datetime_ntp_server = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(datetime_ntp_server, "datetime_ntp_server");
        lv_obj_set_x(datetime_ntp_server, 24);
        lv_obj_set_y(datetime_ntp_server, 218);
        lv_obj_set_width(datetime_ntp_server, 272);
        lv_obj_set_height(datetime_ntp_server, 30);
        lv_textarea_set_text(datetime_ntp_server, "pool.ntp.org");
        lv_obj_set_style_text_font(datetime_ntp_server, be_medium_12, 0);
        lv_obj_set_style_text_color(datetime_ntp_server, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(datetime_ntp_server, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(datetime_ntp_server, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(datetime_ntp_server, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(datetime_ntp_server, 1, 0);
        lv_obj_set_style_radius(datetime_ntp_server, 8, 0);
        lv_obj_set_style_pad_left(datetime_ntp_server, 10, 0);
        lv_obj_set_style_pad_right(datetime_ntp_server, 10, 0);
        lv_obj_set_style_pad_top(datetime_ntp_server, 5, 0);
        lv_obj_set_style_pad_bottom(datetime_ntp_server, 0, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 24);
        lv_obj_set_y(lv_obj_5, 256);
        lv_obj_set_width(lv_obj_5, 272);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 265);
        lv_obj_set_width(lv_label_7, 104);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Múi giờ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 119);
        lv_obj_set_y(lv_label_8, 265);
        lv_obj_set_width(lv_label_8, 151);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Việt Nam · UTC+7");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 273);
        lv_obj_set_y(lv_image_1, 261);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 13);
        lv_obj_set_y(lv_label_9, 302);
        lv_obj_set_width(lv_label_9, 237);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "ĐỊNH DẠNG HIỂN THỊ");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 324);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 49);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 24);
        lv_obj_set_y(lv_label_10, 339);
        lv_obj_set_width(lv_label_10, 106);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Định dạng giờ");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * datetime_format_12h = lv_button_create(lv_obj_0);
        lv_obj_set_name(datetime_format_12h, "datetime_format_12h");
        lv_obj_set_x(datetime_format_12h, 148);
        lv_obj_set_y(datetime_format_12h, 333);
        lv_obj_set_width(datetime_format_12h, 69);
        lv_obj_set_height(datetime_format_12h, 31);
        lv_obj_set_style_bg_color(datetime_format_12h, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(datetime_format_12h, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(datetime_format_12h, 0, 0);
        lv_obj_set_style_radius(datetime_format_12h, 8, 0);
        lv_obj_set_style_shadow_width(datetime_format_12h, 0, 0);
        lv_obj_set_style_pad_all(datetime_format_12h, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(datetime_format_12h);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "12 giờ");
        lv_obj_set_style_text_font(lv_label_11, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * datetime_format_24h = lv_button_create(lv_obj_0);
        lv_obj_set_name(datetime_format_24h, "datetime_format_24h");
        lv_obj_set_x(datetime_format_24h, 223);
        lv_obj_set_y(datetime_format_24h, 333);
        lv_obj_set_width(datetime_format_24h, 73);
        lv_obj_set_height(datetime_format_24h, 31);
        lv_obj_set_style_bg_color(datetime_format_24h, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(datetime_format_24h, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(datetime_format_24h, 0, 0);
        lv_obj_set_style_radius(datetime_format_24h, 8, 0);
        lv_obj_set_style_shadow_width(datetime_format_24h, 0, 0);
        lv_obj_set_style_pad_all(datetime_format_24h, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(datetime_format_24h);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "24 giờ");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 384);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 47);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 23);
        lv_obj_set_y(lv_obj_8, 397);
        lv_obj_set_width(lv_obj_8, 7);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 36);
        lv_obj_set_y(lv_label_13, 390);
        lv_obj_set_width(lv_label_13, 259);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Trạng thái đồng bộ NTP");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 36);
        lv_obj_set_y(lv_label_14, 411);
        lv_obj_set_width(lv_label_14, 259);
        lv_obj_set_height(lv_label_14, 17);
        lv_label_set_text(lv_label_14, "Chưa kiểm tra · Giờ mẫu 10:35:28");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_datetime_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_datetime_save, "btn_datetime_save");
        lv_obj_set_x(btn_datetime_save, 12);
        lv_obj_set_y(btn_datetime_save, 440);
        lv_obj_set_width(btn_datetime_save, 296);
        lv_obj_set_height(btn_datetime_save, 30);
        lv_obj_set_style_bg_color(btn_datetime_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_datetime_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_datetime_save, 0, 0);
        lv_obj_set_style_radius(btn_datetime_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_datetime_save, 0, 0);
        lv_obj_set_style_pad_all(btn_datetime_save, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_datetime_save);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "Lưu cài đặt thời gian");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

