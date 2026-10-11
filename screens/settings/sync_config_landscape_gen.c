/**
 * @file sync_config_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sync_config_landscape_gen.h"
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

lv_obj_t * sync_config_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t sync_land_switch_main;
    static lv_style_t sync_land_switch_checked;
    static lv_style_t sync_land_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&sync_land_switch_main);
        lv_style_init(&sync_land_switch_checked);
        lv_style_init(&sync_land_switch_knob);

        lv_style_set_bg_color(&sync_land_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&sync_land_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&sync_land_switch_main, 999);
        lv_style_set_pad_all(&sync_land_switch_main, 3);
        lv_style_set_border_width(&sync_land_switch_main, 0);
        lv_style_set_bg_color(&sync_land_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&sync_land_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&sync_land_switch_checked, 999);
        lv_style_set_bg_color(&sync_land_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&sync_land_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&sync_land_switch_knob, 999);
        lv_style_set_pad_all(&sync_land_switch_knob, 0);
        lv_style_set_border_width(&sync_land_switch_knob, 0);
        lv_style_set_shadow_color(&sync_land_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&sync_land_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&sync_land_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "sync_config_landscape_#");
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
        lv_obj_set_width(lv_label_0, 280);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Đồng bộ dữ liệu");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Chu kỳ, timeout và thử lại");
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
        lv_label_set_text(lv_label_2, "ĐỒNG BỘ TỰ ĐỘNG");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 71);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 94);
        lv_obj_set_width(lv_label_3, 158);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Tự động đồng bộ");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 22);
        lv_obj_set_y(lv_label_4, 120);
        lv_obj_set_width(lv_label_4, 186);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Cập nhật dữ liệu theo chu kỳ");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * sync_auto_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(sync_auto_enabled_landscape, "sync_auto_enabled_landscape");
        lv_obj_set_x(sync_auto_enabled_landscape, 181);
        lv_obj_set_y(sync_auto_enabled_landscape, 91);
        lv_obj_set_width(sync_auto_enabled_landscape, 40);
        lv_obj_set_height(sync_auto_enabled_landscape, 22);
        lv_obj_set_state(sync_auto_enabled_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(sync_auto_enabled_landscape, &sync_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(sync_auto_enabled_landscape, &sync_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(sync_auto_enabled_landscape, &sync_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 162);
        lv_obj_set_width(lv_label_5, 211);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "CHU KỲ VÀ KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 184);
        lv_obj_set_width(lv_obj_4, 220);
        lv_obj_set_height(lv_obj_4, 84);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 22);
        lv_obj_set_y(lv_label_6, 195);
        lv_obj_set_width(lv_label_6, 117);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Chu kỳ đồng bộ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 142);
        lv_obj_set_y(lv_label_7, 195);
        lv_obj_set_width(lv_label_7, 60);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "30 giây");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_7, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 199);
        lv_obj_set_y(lv_image_1, 192);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 224);
        lv_obj_set_width(lv_obj_5, 200);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 238);
        lv_obj_set_width(lv_label_8, 117);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Thời gian chờ");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 142);
        lv_obj_set_y(lv_label_9, 238);
        lv_obj_set_width(lv_label_9, 60);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "10 giây");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 199);
        lv_obj_set_y(lv_image_2, 234);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 210);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "XỬ LÝ KHI LỖI");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 83);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 105);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 98);
        lv_obj_set_width(lv_label_11, 155);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "Tự thử lại khi lỗi");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * sync_retry_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(sync_retry_enabled_landscape, "sync_retry_enabled_landscape");
        lv_obj_set_x(sync_retry_enabled_landscape, 415);
        lv_obj_set_y(sync_retry_enabled_landscape, 95);
        lv_obj_set_width(sync_retry_enabled_landscape, 42);
        lv_obj_set_height(sync_retry_enabled_landscape, 23);
        lv_obj_set_state(sync_retry_enabled_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(sync_retry_enabled_landscape, &sync_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(sync_retry_enabled_landscape, &sync_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(sync_retry_enabled_landscape, &sync_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 251);
        lv_obj_set_y(lv_label_12, 122);
        lv_obj_set_width(lv_label_12, 205);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "Thử lại khi mất kết nối");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 251);
        lv_obj_set_y(lv_obj_7, 146);
        lv_obj_set_width(lv_obj_7, 206);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 157);
        lv_obj_set_width(lv_label_13, 119);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "Số lần thử lại");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 375);
        lv_obj_set_y(lv_label_14, 157);
        lv_obj_set_width(lv_label_14, 59);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "3 lần");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 436);
        lv_obj_set_y(lv_image_3, 153);
        lv_obj_set_width(lv_image_3, 24);
        lv_obj_set_height(lv_image_3, 24);
        lv_image_set_src(lv_image_3, ui_next);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 241);
        lv_obj_set_y(lv_label_15, 197);
        lv_obj_set_width(lv_label_15, 210);
        lv_obj_set_height(lv_label_15, 19);
        lv_label_set_text(lv_label_15, "TRẠNG THÁI ĐỒNG BỘ");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 219);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 49);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 251);
        lv_obj_set_y(lv_obj_9, 232);
        lv_obj_set_width(lv_obj_9, 7);
        lv_obj_set_height(lv_obj_9, 7);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 264);
        lv_obj_set_y(lv_label_16, 225);
        lv_obj_set_width(lv_label_16, 190);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Đồng bộ gần nhất");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 264);
        lv_obj_set_y(lv_label_17, 246);
        lv_obj_set_width(lv_label_17, 191);
        lv_obj_set_height(lv_label_17, 17);
        lv_label_set_text(lv_label_17, "Thành công · 10:35:28");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x34d399), 0);

        lv_obj_t * btn_sync_config_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_config_save_landscape, "btn_sync_config_save_landscape");
        lv_obj_set_x(btn_sync_config_save_landscape, 12);
        lv_obj_set_y(btn_sync_config_save_landscape, 278);
        lv_obj_set_width(btn_sync_config_save_landscape, 456);
        lv_obj_set_height(btn_sync_config_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_sync_config_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_config_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_config_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_config_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_sync_config_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_config_save_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_sync_config_save_landscape);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Lưu cài đặt đồng bộ");
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

