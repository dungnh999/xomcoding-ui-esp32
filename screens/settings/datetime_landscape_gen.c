/**
 * @file datetime_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "datetime_landscape_gen.h"
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

lv_obj_t * datetime_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t datetime_land_switch_main;
    static lv_style_t datetime_land_switch_checked;
    static lv_style_t datetime_land_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&datetime_land_switch_main);
        lv_style_init(&datetime_land_switch_checked);
        lv_style_init(&datetime_land_switch_knob);

        lv_style_set_bg_color(&datetime_land_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&datetime_land_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&datetime_land_switch_main, 999);
        lv_style_set_pad_all(&datetime_land_switch_main, 3);
        lv_style_set_border_width(&datetime_land_switch_main, 0);
        lv_style_set_bg_color(&datetime_land_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&datetime_land_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&datetime_land_switch_checked, 999);
        lv_style_set_bg_color(&datetime_land_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&datetime_land_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&datetime_land_switch_knob, 999);
        lv_style_set_pad_all(&datetime_land_switch_knob, 0);
        lv_style_set_border_width(&datetime_land_switch_knob, 0);
        lv_style_set_shadow_color(&datetime_land_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&datetime_land_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&datetime_land_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "datetime_landscape_#");
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
        lv_obj_set_width(lv_label_0, 310);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Ngày giờ và múi giờ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 285);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Đồng bộ và định dạng thời gian");
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
        lv_label_set_text(lv_label_2, "ĐỒNG BỘ THỜI GIAN");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 76);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 95);
        lv_obj_set_width(lv_label_3, 155);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Tự động qua NTP");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 122);
        lv_obj_set_width(lv_label_4, 186);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Cập nhật giờ qua Internet");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * datetime_ntp_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(datetime_ntp_enabled_landscape, "datetime_ntp_enabled_landscape");
        lv_obj_set_x(datetime_ntp_enabled_landscape, 181);
        lv_obj_set_y(datetime_ntp_enabled_landscape, 94);
        lv_obj_set_width(datetime_ntp_enabled_landscape, 40);
        lv_obj_set_height(datetime_ntp_enabled_landscape, 22);
        lv_obj_set_state(datetime_ntp_enabled_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(datetime_ntp_enabled_landscape, &datetime_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(datetime_ntp_enabled_landscape, &datetime_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(datetime_ntp_enabled_landscape, &datetime_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 169);
        lv_obj_set_width(lv_label_5, 211);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "MÁY CHỦ THỜI GIAN");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 191);
        lv_obj_set_width(lv_obj_4, 220);
        lv_obj_set_height(lv_obj_4, 77);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 22);
        lv_obj_set_y(lv_label_6, 199);
        lv_obj_set_width(lv_label_6, 198);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Máy chủ NTP");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * datetime_ntp_server_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(datetime_ntp_server_landscape, "datetime_ntp_server_landscape");
        lv_obj_set_x(datetime_ntp_server_landscape, 22);
        lv_obj_set_y(datetime_ntp_server_landscape, 224);
        lv_obj_set_width(datetime_ntp_server_landscape, 200);
        lv_obj_set_height(datetime_ntp_server_landscape, 32);
        lv_textarea_set_text(datetime_ntp_server_landscape, "pool.ntp.org");
        lv_obj_set_style_text_font(datetime_ntp_server_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(datetime_ntp_server_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(datetime_ntp_server_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(datetime_ntp_server_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(datetime_ntp_server_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(datetime_ntp_server_landscape, 1, 0);
        lv_obj_set_style_radius(datetime_ntp_server_landscape, 8, 0);
        lv_obj_set_style_pad_left(datetime_ntp_server_landscape, 9, 0);
        lv_obj_set_style_pad_right(datetime_ntp_server_landscape, 9, 0);
        lv_obj_set_style_pad_top(datetime_ntp_server_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(datetime_ntp_server_landscape, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 241);
        lv_obj_set_y(lv_label_7, 61);
        lv_obj_set_width(lv_label_7, 218);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "MÚI GIỜ VÀ HIỂN THỊ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 240);
        lv_obj_set_y(lv_obj_5, 83);
        lv_obj_set_width(lv_obj_5, 228);
        lv_obj_set_height(lv_obj_5, 96);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 251);
        lv_obj_set_y(lv_label_8, 94);
        lv_obj_set_width(lv_label_8, 85);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Múi giờ");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 329);
        lv_obj_set_y(lv_label_9, 94);
        lv_obj_set_width(lv_label_9, 105);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "UTC+7");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 436);
        lv_obj_set_y(lv_image_1, 90);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 251);
        lv_obj_set_y(lv_obj_6, 122);
        lv_obj_set_width(lv_obj_6, 206);
        lv_obj_set_height(lv_obj_6, 1);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 251);
        lv_obj_set_y(lv_label_10, 141);
        lv_obj_set_width(lv_label_10, 79);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "Giờ");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * datetime_format_12h_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(datetime_format_12h_landscape, "datetime_format_12h_landscape");
        lv_obj_set_x(datetime_format_12h_landscape, 325);
        lv_obj_set_y(datetime_format_12h_landscape, 134);
        lv_obj_set_width(datetime_format_12h_landscape, 61);
        lv_obj_set_height(datetime_format_12h_landscape, 30);
        lv_obj_set_style_bg_color(datetime_format_12h_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(datetime_format_12h_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(datetime_format_12h_landscape, 0, 0);
        lv_obj_set_style_radius(datetime_format_12h_landscape, 8, 0);
        lv_obj_set_style_shadow_width(datetime_format_12h_landscape, 0, 0);
        lv_obj_set_style_pad_all(datetime_format_12h_landscape, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(datetime_format_12h_landscape);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "12 giờ");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * datetime_format_24h_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(datetime_format_24h_landscape, "datetime_format_24h_landscape");
        lv_obj_set_x(datetime_format_24h_landscape, 391);
        lv_obj_set_y(datetime_format_24h_landscape, 134);
        lv_obj_set_width(datetime_format_24h_landscape, 66);
        lv_obj_set_height(datetime_format_24h_landscape, 30);
        lv_obj_set_style_bg_color(datetime_format_24h_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(datetime_format_24h_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(datetime_format_24h_landscape, 0, 0);
        lv_obj_set_style_radius(datetime_format_24h_landscape, 8, 0);
        lv_obj_set_style_shadow_width(datetime_format_24h_landscape, 0, 0);
        lv_obj_set_style_pad_all(datetime_format_24h_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(datetime_format_24h_landscape);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "24 giờ");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 241);
        lv_obj_set_y(lv_label_13, 189);
        lv_obj_set_width(lv_label_13, 218);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "TRẠNG THÁI ĐỒNG BỘ");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 211);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 57);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 251);
        lv_obj_set_y(lv_obj_8, 227);
        lv_obj_set_width(lv_obj_8, 7);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 264);
        lv_obj_set_y(lv_label_14, 219);
        lv_obj_set_width(lv_label_14, 190);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Chưa kiểm tra NTP");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 264);
        lv_obj_set_y(lv_label_15, 241);
        lv_obj_set_width(lv_label_15, 190);
        lv_obj_set_height(lv_label_15, 18);
        lv_label_set_text(lv_label_15, "Giờ mẫu: 10:35:28");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_datetime_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_datetime_save_landscape, "btn_datetime_save_landscape");
        lv_obj_set_x(btn_datetime_save_landscape, 12);
        lv_obj_set_y(btn_datetime_save_landscape, 278);
        lv_obj_set_width(btn_datetime_save_landscape, 456);
        lv_obj_set_height(btn_datetime_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_datetime_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_datetime_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_datetime_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_datetime_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_datetime_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_datetime_save_landscape, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_datetime_save_landscape);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Lưu cài đặt thời gian");
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

