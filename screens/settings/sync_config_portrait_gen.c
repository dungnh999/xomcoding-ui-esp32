/**
 * @file sync_config_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sync_config_portrait_gen.h"
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

lv_obj_t * sync_config_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t sync_switch_main;
    static lv_style_t sync_switch_checked;
    static lv_style_t sync_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&sync_switch_main);
        lv_style_init(&sync_switch_checked);
        lv_style_init(&sync_switch_knob);

        lv_style_set_bg_color(&sync_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&sync_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&sync_switch_main, 999);
        lv_style_set_pad_all(&sync_switch_main, 3);
        lv_style_set_border_width(&sync_switch_main, 0);
        lv_style_set_bg_color(&sync_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&sync_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&sync_switch_checked, 999);
        lv_style_set_bg_color(&sync_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&sync_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&sync_switch_knob, 999);
        lv_style_set_pad_all(&sync_switch_knob, 0);
        lv_style_set_border_width(&sync_switch_knob, 0);
        lv_style_set_shadow_color(&sync_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&sync_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&sync_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "sync_config_portrait_#");
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
        lv_label_set_text(lv_label_0, "Đồng bộ dữ liệu");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Chu kỳ, timeout và thử lại");
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
        lv_obj_set_width(lv_label_2, 230);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "ĐỒNG BỘ TỰ ĐỘNG");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 89);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 69);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 24);
        lv_obj_set_y(lv_label_3, 99);
        lv_obj_set_width(lv_label_3, 190);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Tự động đồng bộ");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 24);
        lv_obj_set_y(lv_label_4, 122);
        lv_obj_set_width(lv_label_4, 212);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Cập nhật dữ liệu theo chu kỳ");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * sync_auto_enabled = lv_switch_create(lv_obj_0);
        lv_obj_set_name(sync_auto_enabled, "sync_auto_enabled");
        lv_obj_set_x(sync_auto_enabled, 252);
        lv_obj_set_y(sync_auto_enabled, 109);
        lv_obj_set_width(sync_auto_enabled, 43);
        lv_obj_set_height(sync_auto_enabled, 23);
        lv_obj_set_state(sync_auto_enabled, LV_STATE_CHECKED, true);
        lv_obj_add_style(sync_auto_enabled, &sync_switch_main, LV_PART_MAIN);
        lv_obj_add_style(sync_auto_enabled, &sync_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(sync_auto_enabled, &sync_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 13);
        lv_obj_set_y(lv_label_5, 168);
        lv_obj_set_width(lv_label_5, 230);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "CHU KỲ VÀ KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 190);
        lv_obj_set_width(lv_obj_4, 296);
        lv_obj_set_height(lv_obj_4, 81);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_4, 1, 0);
        lv_obj_set_style_radius(lv_obj_4, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 24);
        lv_obj_set_y(lv_label_6, 199);
        lv_obj_set_width(lv_label_6, 163);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "Chu kỳ đồng bộ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 192);
        lv_obj_set_y(lv_label_7, 199);
        lv_obj_set_width(lv_label_7, 80);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "30 giây");
        lv_obj_set_style_text_font(lv_label_7, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_7, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 273);
        lv_obj_set_y(lv_image_1, 195);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 24);
        lv_obj_set_y(lv_obj_5, 227);
        lv_obj_set_width(lv_obj_5, 272);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 238);
        lv_obj_set_width(lv_label_8, 163);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Thời gian chờ");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 192);
        lv_obj_set_y(lv_label_9, 238);
        lv_obj_set_width(lv_label_9, 80);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "10 giây");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 273);
        lv_obj_set_y(lv_image_2, 234);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 13);
        lv_obj_set_y(lv_label_10, 280);
        lv_obj_set_width(lv_label_10, 230);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "XỬ LÝ KHI LỖI");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 302);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 79);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 24);
        lv_obj_set_y(lv_label_11, 312);
        lv_obj_set_width(lv_label_11, 188);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "Tự thử lại khi lỗi");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * sync_retry_enabled = lv_switch_create(lv_obj_0);
        lv_obj_set_name(sync_retry_enabled, "sync_retry_enabled");
        lv_obj_set_x(sync_retry_enabled, 252);
        lv_obj_set_y(sync_retry_enabled, 311);
        lv_obj_set_width(sync_retry_enabled, 43);
        lv_obj_set_height(sync_retry_enabled, 23);
        lv_obj_set_state(sync_retry_enabled, LV_STATE_CHECKED, true);
        lv_obj_add_style(sync_retry_enabled, &sync_switch_main, LV_PART_MAIN);
        lv_obj_add_style(sync_retry_enabled, &sync_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(sync_retry_enabled, &sync_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 24);
        lv_obj_set_y(lv_obj_7, 342);
        lv_obj_set_width(lv_obj_7, 272);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 353);
        lv_obj_set_width(lv_label_12, 158);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Số lần thử lại");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 190);
        lv_obj_set_y(lv_label_13, 353);
        lv_obj_set_width(lv_label_13, 82);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "3 lần");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 273);
        lv_obj_set_y(lv_image_3, 349);
        lv_obj_set_width(lv_image_3, 24);
        lv_obj_set_height(lv_image_3, 24);
        lv_image_set_src(lv_image_3, ui_next);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 386);
        lv_obj_set_width(lv_obj_8, 296);
        lv_obj_set_height(lv_obj_8, 46);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 23);
        lv_obj_set_y(lv_obj_9, 398);
        lv_obj_set_width(lv_obj_9, 7);
        lv_obj_set_height(lv_obj_9, 7);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_9, 0, 0);
        lv_obj_set_style_radius(lv_obj_9, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 36);
        lv_obj_set_y(lv_label_14, 391);
        lv_obj_set_width(lv_label_14, 258);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Đồng bộ gần nhất");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 36);
        lv_obj_set_y(lv_label_15, 412);
        lv_obj_set_width(lv_label_15, 258);
        lv_obj_set_height(lv_label_15, 17);
        lv_label_set_text(lv_label_15, "Thành công · 10:35:28");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x34d399), 0);

        lv_obj_t * btn_sync_config_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_config_save, "btn_sync_config_save");
        lv_obj_set_x(btn_sync_config_save, 12);
        lv_obj_set_y(btn_sync_config_save, 440);
        lv_obj_set_width(btn_sync_config_save, 296);
        lv_obj_set_height(btn_sync_config_save, 30);
        lv_obj_set_style_bg_color(btn_sync_config_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_config_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_config_save, 0, 0);
        lv_obj_set_style_radius(btn_sync_config_save, 10, 0);
        lv_obj_set_style_shadow_width(btn_sync_config_save, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_config_save, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_sync_config_save);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Lưu cài đặt đồng bộ");
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

