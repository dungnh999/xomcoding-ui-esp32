/**
 * @file quota_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "quota_portrait_gen.h"
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

lv_obj_t * quota_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "quota_portrait_#");
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
        lv_obj_set_width(lv_label_0, 245);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "AI Quota");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 240);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hạn mức 5 giờ và hàng tuần");
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

        lv_obj_t * ai_quota_tabview = lv_tabview_create(lv_obj_0);
        lv_obj_set_name(ai_quota_tabview, "ai_quota_tabview");
        lv_obj_set_x(ai_quota_tabview, 12);
        lv_obj_set_y(ai_quota_tabview, 68);
        lv_obj_set_width(ai_quota_tabview, 296);
        lv_obj_set_height(ai_quota_tabview, 354);
        lv_tabview_set_active(ai_quota_tabview, 0, false);
        lv_tabview_set_tab_bar_position(ai_quota_tabview, LV_DIR_TOP);
        lv_obj_set_style_bg_color(ai_quota_tabview, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(ai_quota_tabview, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(ai_quota_tabview, 0, 0);
        lv_obj_set_style_radius(ai_quota_tabview, 0, 0);
        lv_obj_set_style_pad_all(ai_quota_tabview, 0, 0);
        lv_obj_t * lv_tabview_tab_bar_0 = lv_tabview_get_tab_bar(ai_quota_tabview);
        lv_obj_set_height(lv_tabview_tab_bar_0, 36);
        lv_obj_set_style_bg_color(lv_tabview_tab_bar_0, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_bar_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_tabview_tab_bar_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_bar_0, 1, 0);
        lv_obj_set_style_radius(lv_tabview_tab_bar_0, 9, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_bar_0, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_bar_0, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_bar_0, lv_color_hex(0xffffff), 0);
        lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(ai_quota_tabview, "Claude");
        lv_obj_set_style_bg_color(lv_tabview_tab_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_0, 0, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_0, 0, 0);
        lv_obj_t * lv_obj_3 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_3, 0);
        lv_obj_set_y(lv_obj_3, 8);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 45);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 16);
        lv_obj_set_width(lv_obj_4, 29);
        lv_obj_set_height(lv_obj_4, 29);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x392b27), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_2, 12);
        lv_obj_set_y(lv_label_2, 22);
        lv_obj_set_width(lv_label_2, 29);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "AI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xe8a487), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_3, 52);
        lv_obj_set_y(lv_label_3, 11);
        lv_obj_set_width(lv_label_3, 160);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Claude");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_4, 52);
        lv_obj_set_y(lv_label_4, 32);
        lv_obj_set_width(lv_label_4, 160);
        lv_obj_set_height(lv_label_4, 15);
        lv_label_set_text(lv_label_4, "Usage limits");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_5, 230);
        lv_obj_set_y(lv_label_5, 20);
        lv_obj_set_width(lv_label_5, 53);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "DEMO");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_6, 1);
        lv_obj_set_y(lv_label_6, 59);
        lv_obj_set_width(lv_label_6, 230);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "HẠN MỨC 5 GIỜ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_5, 0);
        lv_obj_set_y(lv_obj_5, 80);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 99);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_7, 12);
        lv_obj_set_y(lv_label_7, 85);
        lv_obj_set_width(lv_label_7, 165);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Quota 5h");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * claude_quota_5h_remaining = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_5h_remaining, "claude_quota_5h_remaining");
        lv_obj_set_x(claude_quota_5h_remaining, 204);
        lv_obj_set_y(claude_quota_5h_remaining, 84);
        lv_obj_set_width(claude_quota_5h_remaining, 80);
        lv_obj_set_height(claude_quota_5h_remaining, 27);
        lv_label_set_text(claude_quota_5h_remaining, "58%");
        lv_obj_set_style_text_font(claude_quota_5h_remaining, be_semibold_20, 0);
        lv_obj_set_style_text_align(claude_quota_5h_remaining, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(claude_quota_5h_remaining, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 117);
        lv_obj_set_width(lv_obj_6, 272);
        lv_obj_set_height(lv_obj_6, 9);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * claude_quota_5h_bar = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_5h_bar, "claude_quota_5h_bar");
        lv_obj_set_x(claude_quota_5h_bar, 12);
        lv_obj_set_y(claude_quota_5h_bar, 117);
        lv_obj_set_width(claude_quota_5h_bar, 114);
        lv_obj_set_height(claude_quota_5h_bar, 9);
        lv_obj_set_style_bg_color(claude_quota_5h_bar, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(claude_quota_5h_bar, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(claude_quota_5h_bar, 0, 0);
        lv_obj_set_style_radius(claude_quota_5h_bar, 5, 0);
        lv_obj_set_style_pad_all(claude_quota_5h_bar, 0, 0);

        lv_obj_t * claude_quota_5h_used = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_5h_used, "claude_quota_5h_used");
        lv_obj_set_x(claude_quota_5h_used, 12);
        lv_obj_set_y(claude_quota_5h_used, 134);
        lv_obj_set_width(claude_quota_5h_used, 133);
        lv_obj_set_height(claude_quota_5h_used, 18);
        lv_label_set_text(claude_quota_5h_used, "Đã dùng 42%");
        lv_obj_set_style_text_font(claude_quota_5h_used, be_medium_11, 0);
        lv_obj_set_style_text_color(claude_quota_5h_used, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_8, 150);
        lv_obj_set_y(lv_label_8, 134);
        lv_obj_set_width(lv_label_8, 134);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Còn lại 58%");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * claude_quota_5h_reset = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_5h_reset, "claude_quota_5h_reset");
        lv_obj_set_x(claude_quota_5h_reset, 12);
        lv_obj_set_y(claude_quota_5h_reset, 157);
        lv_obj_set_width(claude_quota_5h_reset, 272);
        lv_obj_set_height(claude_quota_5h_reset, 17);
        lv_label_set_text(claude_quota_5h_reset, "Reset sau: 2 giờ 15 phút");
        lv_obj_set_style_text_font(claude_quota_5h_reset, be_medium_10, 0);
        lv_obj_set_style_text_color(claude_quota_5h_reset, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_9, 1);
        lv_obj_set_y(lv_label_9, 185);
        lv_obj_set_width(lv_label_9, 250);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "HẠN MỨC HÀNG TUẦN");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_7, 0);
        lv_obj_set_y(lv_obj_7, 207);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 99);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_10, 12);
        lv_obj_set_y(lv_label_10, 212);
        lv_obj_set_width(lv_label_10, 165);
        lv_obj_set_height(lv_label_10, 20);
        lv_label_set_text(lv_label_10, "Quota Week");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * claude_quota_week_remaining = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_week_remaining, "claude_quota_week_remaining");
        lv_obj_set_x(claude_quota_week_remaining, 204);
        lv_obj_set_y(claude_quota_week_remaining, 211);
        lv_obj_set_width(claude_quota_week_remaining, 80);
        lv_obj_set_height(claude_quota_week_remaining, 27);
        lv_label_set_text(claude_quota_week_remaining, "24%");
        lv_obj_set_style_text_font(claude_quota_week_remaining, be_semibold_20, 0);
        lv_obj_set_style_text_align(claude_quota_week_remaining, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(claude_quota_week_remaining, lv_color_hex(0xe8a487), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_8, 12);
        lv_obj_set_y(lv_obj_8, 244);
        lv_obj_set_width(lv_obj_8, 272);
        lv_obj_set_height(lv_obj_8, 9);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * claude_quota_week_bar = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_week_bar, "claude_quota_week_bar");
        lv_obj_set_x(claude_quota_week_bar, 12);
        lv_obj_set_y(claude_quota_week_bar, 244);
        lv_obj_set_width(claude_quota_week_bar, 207);
        lv_obj_set_height(claude_quota_week_bar, 9);
        lv_obj_set_style_bg_color(claude_quota_week_bar, lv_color_hex(0xe8a487), 0);
        lv_obj_set_style_bg_opa(claude_quota_week_bar, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(claude_quota_week_bar, 0, 0);
        lv_obj_set_style_radius(claude_quota_week_bar, 5, 0);
        lv_obj_set_style_pad_all(claude_quota_week_bar, 0, 0);

        lv_obj_t * claude_quota_week_used = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_week_used, "claude_quota_week_used");
        lv_obj_set_x(claude_quota_week_used, 12);
        lv_obj_set_y(claude_quota_week_used, 261);
        lv_obj_set_width(claude_quota_week_used, 133);
        lv_obj_set_height(claude_quota_week_used, 18);
        lv_label_set_text(claude_quota_week_used, "Đã dùng 76%");
        lv_obj_set_style_text_font(claude_quota_week_used, be_medium_11, 0);
        lv_obj_set_style_text_color(claude_quota_week_used, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_11, 150);
        lv_obj_set_y(lv_label_11, 261);
        lv_obj_set_width(lv_label_11, 134);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "Còn lại 24%");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe8a487), 0);

        lv_obj_t * claude_quota_week_reset = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_quota_week_reset, "claude_quota_week_reset");
        lv_obj_set_x(claude_quota_week_reset, 12);
        lv_obj_set_y(claude_quota_week_reset, 284);
        lv_obj_set_width(claude_quota_week_reset, 272);
        lv_obj_set_height(claude_quota_week_reset, 17);
        lv_label_set_text(claude_quota_week_reset, "Reset sau: 3 ngày 12 giờ");
        lv_obj_set_style_text_font(claude_quota_week_reset, be_medium_10, 0);
        lv_obj_set_style_text_color(claude_quota_week_reset, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(ai_quota_tabview, "ChatGPT");
        lv_obj_set_style_bg_color(lv_tabview_tab_1, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_1, 0, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_1, 0, 0);
        lv_obj_t * lv_obj_9 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_9, 0);
        lv_obj_set_y(lv_obj_9, 8);
        lv_obj_set_width(lv_obj_9, 296);
        lv_obj_set_height(lv_obj_9, 45);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_10, 12);
        lv_obj_set_y(lv_obj_10, 16);
        lv_obj_set_width(lv_obj_10, 29);
        lv_obj_set_height(lv_obj_10, 29);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x173d35), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 8, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_12, 12);
        lv_obj_set_y(lv_label_12, 22);
        lv_obj_set_width(lv_label_12, 29);
        lv_obj_set_height(lv_label_12, 18);
        lv_label_set_text(lv_label_12, "GPT");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_13, 52);
        lv_obj_set_y(lv_label_13, 11);
        lv_obj_set_width(lv_label_13, 160);
        lv_obj_set_height(lv_label_13, 19);
        lv_label_set_text(lv_label_13, "ChatGPT");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_14, 52);
        lv_obj_set_y(lv_label_14, 32);
        lv_obj_set_width(lv_label_14, 160);
        lv_obj_set_height(lv_label_14, 15);
        lv_label_set_text(lv_label_14, "Usage limits");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_15, 230);
        lv_obj_set_y(lv_label_15, 20);
        lv_obj_set_width(lv_label_15, 53);
        lv_obj_set_height(lv_label_15, 18);
        lv_label_set_text(lv_label_15, "DEMO");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_16, 1);
        lv_obj_set_y(lv_label_16, 59);
        lv_obj_set_width(lv_label_16, 230);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "HẠN MỨC 5 GIỜ");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_11, 0);
        lv_obj_set_y(lv_obj_11, 80);
        lv_obj_set_width(lv_obj_11, 296);
        lv_obj_set_height(lv_obj_11, 99);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_11, 1, 0);
        lv_obj_set_style_radius(lv_obj_11, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_17, 12);
        lv_obj_set_y(lv_label_17, 85);
        lv_obj_set_width(lv_label_17, 165);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "Quota 5h");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * chatgpt_quota_5h_remaining = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_5h_remaining, "chatgpt_quota_5h_remaining");
        lv_obj_set_x(chatgpt_quota_5h_remaining, 204);
        lv_obj_set_y(chatgpt_quota_5h_remaining, 84);
        lv_obj_set_width(chatgpt_quota_5h_remaining, 80);
        lv_obj_set_height(chatgpt_quota_5h_remaining, 27);
        lv_label_set_text(chatgpt_quota_5h_remaining, "70%");
        lv_obj_set_style_text_font(chatgpt_quota_5h_remaining, be_semibold_20, 0);
        lv_obj_set_style_text_align(chatgpt_quota_5h_remaining, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(chatgpt_quota_5h_remaining, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_12, 12);
        lv_obj_set_y(lv_obj_12, 117);
        lv_obj_set_width(lv_obj_12, 272);
        lv_obj_set_height(lv_obj_12, 9);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_12, 0, 0);
        lv_obj_set_style_radius(lv_obj_12, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * chatgpt_quota_5h_bar = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_5h_bar, "chatgpt_quota_5h_bar");
        lv_obj_set_x(chatgpt_quota_5h_bar, 12);
        lv_obj_set_y(chatgpt_quota_5h_bar, 117);
        lv_obj_set_width(chatgpt_quota_5h_bar, 82);
        lv_obj_set_height(chatgpt_quota_5h_bar, 9);
        lv_obj_set_style_bg_color(chatgpt_quota_5h_bar, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(chatgpt_quota_5h_bar, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(chatgpt_quota_5h_bar, 0, 0);
        lv_obj_set_style_radius(chatgpt_quota_5h_bar, 5, 0);
        lv_obj_set_style_pad_all(chatgpt_quota_5h_bar, 0, 0);

        lv_obj_t * chatgpt_quota_5h_used = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_5h_used, "chatgpt_quota_5h_used");
        lv_obj_set_x(chatgpt_quota_5h_used, 12);
        lv_obj_set_y(chatgpt_quota_5h_used, 134);
        lv_obj_set_width(chatgpt_quota_5h_used, 133);
        lv_obj_set_height(chatgpt_quota_5h_used, 18);
        lv_label_set_text(chatgpt_quota_5h_used, "Đã dùng 30%");
        lv_obj_set_style_text_font(chatgpt_quota_5h_used, be_medium_11, 0);
        lv_obj_set_style_text_color(chatgpt_quota_5h_used, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_18, 150);
        lv_obj_set_y(lv_label_18, 134);
        lv_obj_set_width(lv_label_18, 134);
        lv_obj_set_height(lv_label_18, 18);
        lv_label_set_text(lv_label_18, "Còn lại 70%");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x34d399), 0);

        lv_obj_t * chatgpt_quota_5h_reset = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_5h_reset, "chatgpt_quota_5h_reset");
        lv_obj_set_x(chatgpt_quota_5h_reset, 12);
        lv_obj_set_y(chatgpt_quota_5h_reset, 157);
        lv_obj_set_width(chatgpt_quota_5h_reset, 272);
        lv_obj_set_height(chatgpt_quota_5h_reset, 17);
        lv_label_set_text(chatgpt_quota_5h_reset, "Reset sau: 3 giờ 20 phút");
        lv_obj_set_style_text_font(chatgpt_quota_5h_reset, be_medium_10, 0);
        lv_obj_set_style_text_color(chatgpt_quota_5h_reset, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_19, 1);
        lv_obj_set_y(lv_label_19, 185);
        lv_obj_set_width(lv_label_19, 250);
        lv_obj_set_height(lv_label_19, 19);
        lv_label_set_text(lv_label_19, "HẠN MỨC HÀNG TUẦN");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_13, 0);
        lv_obj_set_y(lv_obj_13, 207);
        lv_obj_set_width(lv_obj_13, 296);
        lv_obj_set_height(lv_obj_13, 99);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_13, 1, 0);
        lv_obj_set_style_radius(lv_obj_13, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * lv_label_20 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_20, 12);
        lv_obj_set_y(lv_label_20, 212);
        lv_obj_set_width(lv_label_20, 165);
        lv_obj_set_height(lv_label_20, 20);
        lv_label_set_text(lv_label_20, "Quota Week");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * chatgpt_quota_week_remaining = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_week_remaining, "chatgpt_quota_week_remaining");
        lv_obj_set_x(chatgpt_quota_week_remaining, 204);
        lv_obj_set_y(chatgpt_quota_week_remaining, 211);
        lv_obj_set_width(chatgpt_quota_week_remaining, 80);
        lv_obj_set_height(chatgpt_quota_week_remaining, 27);
        lv_label_set_text(chatgpt_quota_week_remaining, "55%");
        lv_obj_set_style_text_font(chatgpt_quota_week_remaining, be_semibold_20, 0);
        lv_obj_set_style_text_align(chatgpt_quota_week_remaining, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(chatgpt_quota_week_remaining, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_14, 12);
        lv_obj_set_y(lv_obj_14, 244);
        lv_obj_set_width(lv_obj_14, 272);
        lv_obj_set_height(lv_obj_14, 9);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_radius(lv_obj_14, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * chatgpt_quota_week_bar = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_week_bar, "chatgpt_quota_week_bar");
        lv_obj_set_x(chatgpt_quota_week_bar, 12);
        lv_obj_set_y(chatgpt_quota_week_bar, 244);
        lv_obj_set_width(chatgpt_quota_week_bar, 122);
        lv_obj_set_height(chatgpt_quota_week_bar, 9);
        lv_obj_set_style_bg_color(chatgpt_quota_week_bar, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(chatgpt_quota_week_bar, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(chatgpt_quota_week_bar, 0, 0);
        lv_obj_set_style_radius(chatgpt_quota_week_bar, 5, 0);
        lv_obj_set_style_pad_all(chatgpt_quota_week_bar, 0, 0);

        lv_obj_t * chatgpt_quota_week_used = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_week_used, "chatgpt_quota_week_used");
        lv_obj_set_x(chatgpt_quota_week_used, 12);
        lv_obj_set_y(chatgpt_quota_week_used, 261);
        lv_obj_set_width(chatgpt_quota_week_used, 133);
        lv_obj_set_height(chatgpt_quota_week_used, 18);
        lv_label_set_text(chatgpt_quota_week_used, "Đã dùng 45%");
        lv_obj_set_style_text_font(chatgpt_quota_week_used, be_medium_11, 0);
        lv_obj_set_style_text_color(chatgpt_quota_week_used, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_21 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_21, 150);
        lv_obj_set_y(lv_label_21, 261);
        lv_obj_set_width(lv_label_21, 134);
        lv_obj_set_height(lv_label_21, 18);
        lv_label_set_text(lv_label_21, "Còn lại 55%");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x34d399), 0);

        lv_obj_t * chatgpt_quota_week_reset = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_quota_week_reset, "chatgpt_quota_week_reset");
        lv_obj_set_x(chatgpt_quota_week_reset, 12);
        lv_obj_set_y(chatgpt_quota_week_reset, 284);
        lv_obj_set_width(chatgpt_quota_week_reset, 272);
        lv_obj_set_height(chatgpt_quota_week_reset, 17);
        lv_label_set_text(chatgpt_quota_week_reset, "Reset sau: 4 ngày 6 giờ");
        lv_obj_set_style_text_font(chatgpt_quota_week_reset, be_medium_10, 0);
        lv_obj_set_style_text_color(chatgpt_quota_week_reset, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_tabview_tab_button_0 = lv_tabview_get_tab_button(ai_quota_tabview, 0);
        lv_obj_set_style_bg_color(lv_tabview_tab_button_0, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_button_0, 0, 0);
        lv_obj_set_style_radius(lv_tabview_tab_button_0, 7, 0);
        lv_obj_set_style_shadow_width(lv_tabview_tab_button_0, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_button_0, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_button_0, lv_color_hex(0xffffff), 0);
        lv_obj_t * lv_tabview_tab_button_1 = lv_tabview_get_tab_button(ai_quota_tabview, 1);
        lv_obj_set_style_bg_color(lv_tabview_tab_button_1, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_button_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_button_1, 0, 0);
        lv_obj_set_style_radius(lv_tabview_tab_button_1, 7, 0);
        lv_obj_set_style_shadow_width(lv_tabview_tab_button_1, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_button_1, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_button_1, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_ai_quota_refresh = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ai_quota_refresh, "btn_ai_quota_refresh");
        lv_obj_set_x(btn_ai_quota_refresh, 12);
        lv_obj_set_y(btn_ai_quota_refresh, 432);
        lv_obj_set_width(btn_ai_quota_refresh, 296);
        lv_obj_set_height(btn_ai_quota_refresh, 38);
        lv_obj_set_style_bg_color(btn_ai_quota_refresh, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_ai_quota_refresh, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ai_quota_refresh, 0, 0);
        lv_obj_set_style_radius(btn_ai_quota_refresh, 10, 0);
        lv_obj_set_style_shadow_width(btn_ai_quota_refresh, 0, 0);
        lv_obj_set_style_pad_all(btn_ai_quota_refresh, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_ai_quota_refresh);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Làm mới dữ liệu");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

