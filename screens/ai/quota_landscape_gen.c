/**
 * @file quota_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "quota_landscape_gen.h"
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

lv_obj_t * quota_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "quota_landscape_#");
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
        lv_label_set_text(lv_label_0, "AI Quota");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 290);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Hạn mức 5 giờ và hàng tuần");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 378);
        lv_obj_set_y(lv_label_2, 19);
        lv_obj_set_width(lv_label_2, 89);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "DEMO");
        lv_obj_set_style_text_font(lv_label_2, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xf5b942), 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 12);
        lv_obj_set_y(lv_obj_2, 53);
        lv_obj_set_width(lv_obj_2, 456);
        lv_obj_set_height(lv_obj_2, 1);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * ai_quota_tabview_landscape = lv_tabview_create(lv_obj_0);
        lv_obj_set_name(ai_quota_tabview_landscape, "ai_quota_tabview_landscape");
        lv_obj_set_x(ai_quota_tabview_landscape, 12);
        lv_obj_set_y(ai_quota_tabview_landscape, 61);
        lv_obj_set_width(ai_quota_tabview_landscape, 456);
        lv_obj_set_height(ai_quota_tabview_landscape, 207);
        lv_tabview_set_active(ai_quota_tabview_landscape, 0, false);
        lv_tabview_set_tab_bar_position(ai_quota_tabview_landscape, LV_DIR_TOP);
        lv_obj_set_style_bg_color(ai_quota_tabview_landscape, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(ai_quota_tabview_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(ai_quota_tabview_landscape, 0, 0);
        lv_obj_set_style_radius(ai_quota_tabview_landscape, 0, 0);
        lv_obj_set_style_pad_all(ai_quota_tabview_landscape, 0, 0);
        lv_obj_t * lv_tabview_tab_bar_0 = lv_tabview_get_tab_bar(ai_quota_tabview_landscape);
        lv_obj_set_height(lv_tabview_tab_bar_0, 32);
        lv_obj_set_style_bg_color(lv_tabview_tab_bar_0, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_bar_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_tabview_tab_bar_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_bar_0, 1, 0);
        lv_obj_set_style_radius(lv_tabview_tab_bar_0, 9, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_bar_0, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_bar_0, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_bar_0, lv_color_hex(0xffffff), 0);
        lv_obj_t * lv_tabview_tab_0 = lv_tabview_add_tab(ai_quota_tabview_landscape, "Claude");
        lv_obj_set_style_bg_color(lv_tabview_tab_0, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_0, 0, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_0, 0, 0);
        lv_obj_t * lv_label_3 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_3, 2);
        lv_obj_set_y(lv_label_3, 3);
        lv_obj_set_width(lv_label_3, 186);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "Claude");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_4, 238);
        lv_obj_set_y(lv_label_4, 5);
        lv_obj_set_width(lv_label_4, 215);
        lv_obj_set_height(lv_label_4, 17);
        lv_label_set_text(lv_label_4, "Usage limits");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_5, 1);
        lv_obj_set_y(lv_label_5, 27);
        lv_obj_set_width(lv_label_5, 210);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "HẠN MỨC 5 GIỜ");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_6, 237);
        lv_obj_set_y(lv_label_6, 27);
        lv_obj_set_width(lv_label_6, 215);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "HẠN MỨC HÀNG TUẦN");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_3, 0);
        lv_obj_set_y(lv_obj_3, 49);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 116);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_7, 12);
        lv_obj_set_y(lv_label_7, 56);
        lv_obj_set_width(lv_label_7, 118);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Quota 5h");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * claude_5h_remaining_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_5h_remaining_landscape, "claude_5h_remaining_landscape");
        lv_obj_set_x(claude_5h_remaining_landscape, 145);
        lv_obj_set_y(claude_5h_remaining_landscape, 55);
        lv_obj_set_width(claude_5h_remaining_landscape, 63);
        lv_obj_set_height(claude_5h_remaining_landscape, 26);
        lv_label_set_text(claude_5h_remaining_landscape, "58%");
        lv_obj_set_style_text_font(claude_5h_remaining_landscape, be_semibold_20, 0);
        lv_obj_set_style_text_align(claude_5h_remaining_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(claude_5h_remaining_landscape, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_4, 12);
        lv_obj_set_y(lv_obj_4, 87);
        lv_obj_set_width(lv_obj_4, 196);
        lv_obj_set_height(lv_obj_4, 9);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * claude_5h_bar_landscape = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_5h_bar_landscape, "claude_5h_bar_landscape");
        lv_obj_set_x(claude_5h_bar_landscape, 12);
        lv_obj_set_y(claude_5h_bar_landscape, 87);
        lv_obj_set_width(claude_5h_bar_landscape, 82);
        lv_obj_set_height(claude_5h_bar_landscape, 9);
        lv_obj_set_style_bg_color(claude_5h_bar_landscape, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(claude_5h_bar_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(claude_5h_bar_landscape, 0, 0);
        lv_obj_set_style_radius(claude_5h_bar_landscape, 5, 0);
        lv_obj_set_style_pad_all(claude_5h_bar_landscape, 0, 0);

        lv_obj_t * claude_5h_used_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_5h_used_landscape, "claude_5h_used_landscape");
        lv_obj_set_x(claude_5h_used_landscape, 12);
        lv_obj_set_y(claude_5h_used_landscape, 103);
        lv_obj_set_width(claude_5h_used_landscape, 97);
        lv_obj_set_height(claude_5h_used_landscape, 17);
        lv_label_set_text(claude_5h_used_landscape, "Đã dùng 42%");
        lv_obj_set_style_text_font(claude_5h_used_landscape, be_medium_10, 0);
        lv_obj_set_style_text_color(claude_5h_used_landscape, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_8, 114);
        lv_obj_set_y(lv_label_8, 103);
        lv_obj_set_width(lv_label_8, 94);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Còn lại 58%");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 126);
        lv_obj_set_width(lv_obj_5, 196);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * claude_5h_reset_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_5h_reset_landscape, "claude_5h_reset_landscape");
        lv_obj_set_x(claude_5h_reset_landscape, 12);
        lv_obj_set_y(claude_5h_reset_landscape, 136);
        lv_obj_set_width(claude_5h_reset_landscape, 196);
        lv_obj_set_height(claude_5h_reset_landscape, 18);
        lv_label_set_text(claude_5h_reset_landscape, "Reset: 2 giờ 15 phút");
        lv_obj_set_style_text_font(claude_5h_reset_landscape, be_medium_11, 0);
        lv_obj_set_style_text_color(claude_5h_reset_landscape, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_6, 228);
        lv_obj_set_y(lv_obj_6, 49);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 116);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_9, 240);
        lv_obj_set_y(lv_label_9, 56);
        lv_obj_set_width(lv_label_9, 125);
        lv_obj_set_height(lv_label_9, 20);
        lv_label_set_text(lv_label_9, "Quota Week");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * claude_week_remaining_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_week_remaining_landscape, "claude_week_remaining_landscape");
        lv_obj_set_x(claude_week_remaining_landscape, 373);
        lv_obj_set_y(claude_week_remaining_landscape, 55);
        lv_obj_set_width(claude_week_remaining_landscape, 71);
        lv_obj_set_height(claude_week_remaining_landscape, 26);
        lv_label_set_text(claude_week_remaining_landscape, "24%");
        lv_obj_set_style_text_font(claude_week_remaining_landscape, be_semibold_20, 0);
        lv_obj_set_style_text_align(claude_week_remaining_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(claude_week_remaining_landscape, lv_color_hex(0xe8a487), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 87);
        lv_obj_set_width(lv_obj_7, 204);
        lv_obj_set_height(lv_obj_7, 9);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * claude_week_bar_landscape = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_week_bar_landscape, "claude_week_bar_landscape");
        lv_obj_set_x(claude_week_bar_landscape, 240);
        lv_obj_set_y(claude_week_bar_landscape, 87);
        lv_obj_set_width(claude_week_bar_landscape, 155);
        lv_obj_set_height(claude_week_bar_landscape, 9);
        lv_obj_set_style_bg_color(claude_week_bar_landscape, lv_color_hex(0xe8a487), 0);
        lv_obj_set_style_bg_opa(claude_week_bar_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(claude_week_bar_landscape, 0, 0);
        lv_obj_set_style_radius(claude_week_bar_landscape, 5, 0);
        lv_obj_set_style_pad_all(claude_week_bar_landscape, 0, 0);

        lv_obj_t * claude_week_used_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_week_used_landscape, "claude_week_used_landscape");
        lv_obj_set_x(claude_week_used_landscape, 240);
        lv_obj_set_y(claude_week_used_landscape, 103);
        lv_obj_set_width(claude_week_used_landscape, 100);
        lv_obj_set_height(claude_week_used_landscape, 17);
        lv_label_set_text(claude_week_used_landscape, "Đã dùng 76%");
        lv_obj_set_style_text_font(claude_week_used_landscape, be_medium_10, 0);
        lv_obj_set_style_text_color(claude_week_used_landscape, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_label_10, 345);
        lv_obj_set_y(lv_label_10, 103);
        lv_obj_set_width(lv_label_10, 99);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "Còn lại 24%");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe8a487), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_tabview_tab_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 126);
        lv_obj_set_width(lv_obj_8, 204);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * claude_week_reset_landscape = lv_label_create(lv_tabview_tab_0);
        lv_obj_set_name(claude_week_reset_landscape, "claude_week_reset_landscape");
        lv_obj_set_x(claude_week_reset_landscape, 240);
        lv_obj_set_y(claude_week_reset_landscape, 136);
        lv_obj_set_width(claude_week_reset_landscape, 204);
        lv_obj_set_height(claude_week_reset_landscape, 18);
        lv_label_set_text(claude_week_reset_landscape, "Reset: 3 ngày 12 giờ");
        lv_obj_set_style_text_font(claude_week_reset_landscape, be_medium_11, 0);
        lv_obj_set_style_text_color(claude_week_reset_landscape, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_tabview_tab_1 = lv_tabview_add_tab(ai_quota_tabview_landscape, "ChatGPT");
        lv_obj_set_style_bg_color(lv_tabview_tab_1, lv_color_hex(0x0b111b), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_1, 0, 0);
        lv_obj_set_style_pad_all(lv_tabview_tab_1, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_11, 2);
        lv_obj_set_y(lv_label_11, 3);
        lv_obj_set_width(lv_label_11, 186);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "ChatGPT");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_12, 238);
        lv_obj_set_y(lv_label_12, 5);
        lv_obj_set_width(lv_label_12, 215);
        lv_obj_set_height(lv_label_12, 17);
        lv_label_set_text(lv_label_12, "Usage limits");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_13, 1);
        lv_obj_set_y(lv_label_13, 27);
        lv_obj_set_width(lv_label_13, 210);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "HẠN MỨC 5 GIỜ");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_14, 237);
        lv_obj_set_y(lv_label_14, 27);
        lv_obj_set_width(lv_label_14, 215);
        lv_obj_set_height(lv_label_14, 18);
        lv_label_set_text(lv_label_14, "HẠN MỨC HÀNG TUẦN");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_9, 0);
        lv_obj_set_y(lv_obj_9, 49);
        lv_obj_set_width(lv_obj_9, 220);
        lv_obj_set_height(lv_obj_9, 116);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_15, 12);
        lv_obj_set_y(lv_label_15, 56);
        lv_obj_set_width(lv_label_15, 118);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "Quota 5h");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * chatgpt_5h_remaining_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_5h_remaining_landscape, "chatgpt_5h_remaining_landscape");
        lv_obj_set_x(chatgpt_5h_remaining_landscape, 145);
        lv_obj_set_y(chatgpt_5h_remaining_landscape, 55);
        lv_obj_set_width(chatgpt_5h_remaining_landscape, 63);
        lv_obj_set_height(chatgpt_5h_remaining_landscape, 26);
        lv_label_set_text(chatgpt_5h_remaining_landscape, "70%");
        lv_obj_set_style_text_font(chatgpt_5h_remaining_landscape, be_semibold_20, 0);
        lv_obj_set_style_text_align(chatgpt_5h_remaining_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(chatgpt_5h_remaining_landscape, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_10, 12);
        lv_obj_set_y(lv_obj_10, 87);
        lv_obj_set_width(lv_obj_10, 196);
        lv_obj_set_height(lv_obj_10, 9);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * chatgpt_5h_bar_landscape = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_5h_bar_landscape, "chatgpt_5h_bar_landscape");
        lv_obj_set_x(chatgpt_5h_bar_landscape, 12);
        lv_obj_set_y(chatgpt_5h_bar_landscape, 87);
        lv_obj_set_width(chatgpt_5h_bar_landscape, 59);
        lv_obj_set_height(chatgpt_5h_bar_landscape, 9);
        lv_obj_set_style_bg_color(chatgpt_5h_bar_landscape, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(chatgpt_5h_bar_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(chatgpt_5h_bar_landscape, 0, 0);
        lv_obj_set_style_radius(chatgpt_5h_bar_landscape, 5, 0);
        lv_obj_set_style_pad_all(chatgpt_5h_bar_landscape, 0, 0);

        lv_obj_t * chatgpt_5h_used_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_5h_used_landscape, "chatgpt_5h_used_landscape");
        lv_obj_set_x(chatgpt_5h_used_landscape, 12);
        lv_obj_set_y(chatgpt_5h_used_landscape, 103);
        lv_obj_set_width(chatgpt_5h_used_landscape, 97);
        lv_obj_set_height(chatgpt_5h_used_landscape, 17);
        lv_label_set_text(chatgpt_5h_used_landscape, "Đã dùng 30%");
        lv_obj_set_style_text_font(chatgpt_5h_used_landscape, be_medium_10, 0);
        lv_obj_set_style_text_color(chatgpt_5h_used_landscape, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_16, 114);
        lv_obj_set_y(lv_label_16, 103);
        lv_obj_set_width(lv_label_16, 94);
        lv_obj_set_height(lv_label_16, 17);
        lv_label_set_text(lv_label_16, "Còn lại 70%");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_11 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_11, 12);
        lv_obj_set_y(lv_obj_11, 126);
        lv_obj_set_width(lv_obj_11, 196);
        lv_obj_set_height(lv_obj_11, 1);
        lv_obj_set_style_bg_color(lv_obj_11, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_11, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_11, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_11, 0, 0);

        lv_obj_t * chatgpt_5h_reset_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_5h_reset_landscape, "chatgpt_5h_reset_landscape");
        lv_obj_set_x(chatgpt_5h_reset_landscape, 12);
        lv_obj_set_y(chatgpt_5h_reset_landscape, 136);
        lv_obj_set_width(chatgpt_5h_reset_landscape, 196);
        lv_obj_set_height(chatgpt_5h_reset_landscape, 18);
        lv_label_set_text(chatgpt_5h_reset_landscape, "Reset: 3 giờ 20 phút");
        lv_obj_set_style_text_font(chatgpt_5h_reset_landscape, be_medium_11, 0);
        lv_obj_set_style_text_color(chatgpt_5h_reset_landscape, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_obj_12 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_12, 228);
        lv_obj_set_y(lv_obj_12, 49);
        lv_obj_set_width(lv_obj_12, 228);
        lv_obj_set_height(lv_obj_12, 116);
        lv_obj_set_style_bg_color(lv_obj_12, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_12, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_12, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_12, 1, 0);
        lv_obj_set_style_radius(lv_obj_12, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_12, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_17, 240);
        lv_obj_set_y(lv_label_17, 56);
        lv_obj_set_width(lv_label_17, 125);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "Quota Week");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * chatgpt_week_remaining_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_week_remaining_landscape, "chatgpt_week_remaining_landscape");
        lv_obj_set_x(chatgpt_week_remaining_landscape, 373);
        lv_obj_set_y(chatgpt_week_remaining_landscape, 55);
        lv_obj_set_width(chatgpt_week_remaining_landscape, 71);
        lv_obj_set_height(chatgpt_week_remaining_landscape, 26);
        lv_label_set_text(chatgpt_week_remaining_landscape, "55%");
        lv_obj_set_style_text_font(chatgpt_week_remaining_landscape, be_semibold_20, 0);
        lv_obj_set_style_text_align(chatgpt_week_remaining_landscape, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(chatgpt_week_remaining_landscape, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_13 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_13, 240);
        lv_obj_set_y(lv_obj_13, 87);
        lv_obj_set_width(lv_obj_13, 204);
        lv_obj_set_height(lv_obj_13, 9);
        lv_obj_set_style_bg_color(lv_obj_13, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_13, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_13, 0, 0);
        lv_obj_set_style_radius(lv_obj_13, 5, 0);
        lv_obj_set_style_pad_all(lv_obj_13, 0, 0);

        lv_obj_t * chatgpt_week_bar_landscape = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_week_bar_landscape, "chatgpt_week_bar_landscape");
        lv_obj_set_x(chatgpt_week_bar_landscape, 240);
        lv_obj_set_y(chatgpt_week_bar_landscape, 87);
        lv_obj_set_width(chatgpt_week_bar_landscape, 92);
        lv_obj_set_height(chatgpt_week_bar_landscape, 9);
        lv_obj_set_style_bg_color(chatgpt_week_bar_landscape, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(chatgpt_week_bar_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(chatgpt_week_bar_landscape, 0, 0);
        lv_obj_set_style_radius(chatgpt_week_bar_landscape, 5, 0);
        lv_obj_set_style_pad_all(chatgpt_week_bar_landscape, 0, 0);

        lv_obj_t * chatgpt_week_used_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_week_used_landscape, "chatgpt_week_used_landscape");
        lv_obj_set_x(chatgpt_week_used_landscape, 240);
        lv_obj_set_y(chatgpt_week_used_landscape, 103);
        lv_obj_set_width(chatgpt_week_used_landscape, 100);
        lv_obj_set_height(chatgpt_week_used_landscape, 17);
        lv_label_set_text(chatgpt_week_used_landscape, "Đã dùng 45%");
        lv_obj_set_style_text_font(chatgpt_week_used_landscape, be_medium_10, 0);
        lv_obj_set_style_text_color(chatgpt_week_used_landscape, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_label_18, 345);
        lv_obj_set_y(lv_label_18, 103);
        lv_obj_set_width(lv_label_18, 99);
        lv_obj_set_height(lv_label_18, 17);
        lv_label_set_text(lv_label_18, "Còn lại 55%");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_obj_14 = lv_obj_create(lv_tabview_tab_1);
        lv_obj_set_x(lv_obj_14, 240);
        lv_obj_set_y(lv_obj_14, 126);
        lv_obj_set_width(lv_obj_14, 204);
        lv_obj_set_height(lv_obj_14, 1);
        lv_obj_set_style_bg_color(lv_obj_14, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_14, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_14, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_14, 0, 0);

        lv_obj_t * chatgpt_week_reset_landscape = lv_label_create(lv_tabview_tab_1);
        lv_obj_set_name(chatgpt_week_reset_landscape, "chatgpt_week_reset_landscape");
        lv_obj_set_x(chatgpt_week_reset_landscape, 240);
        lv_obj_set_y(chatgpt_week_reset_landscape, 136);
        lv_obj_set_width(chatgpt_week_reset_landscape, 204);
        lv_obj_set_height(chatgpt_week_reset_landscape, 18);
        lv_label_set_text(chatgpt_week_reset_landscape, "Reset: 4 ngày 6 giờ");
        lv_obj_set_style_text_font(chatgpt_week_reset_landscape, be_medium_11, 0);
        lv_obj_set_style_text_color(chatgpt_week_reset_landscape, lv_color_hex(0x38bdf8), 0);

        lv_obj_t * lv_tabview_tab_button_0 = lv_tabview_get_tab_button(ai_quota_tabview_landscape, 0);
        lv_obj_set_style_bg_color(lv_tabview_tab_button_0, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_button_0, 0, 0);
        lv_obj_set_style_radius(lv_tabview_tab_button_0, 7, 0);
        lv_obj_set_style_shadow_width(lv_tabview_tab_button_0, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_button_0, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_button_0, lv_color_hex(0xffffff), 0);
        lv_obj_t * lv_tabview_tab_button_1 = lv_tabview_get_tab_button(ai_quota_tabview_landscape, 1);
        lv_obj_set_style_bg_color(lv_tabview_tab_button_1, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_tabview_tab_button_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_tabview_tab_button_1, 0, 0);
        lv_obj_set_style_radius(lv_tabview_tab_button_1, 7, 0);
        lv_obj_set_style_shadow_width(lv_tabview_tab_button_1, 0, 0);
        lv_obj_set_style_text_font(lv_tabview_tab_button_1, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_tabview_tab_button_1, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_19, 12);
        lv_obj_set_y(lv_label_19, 262);
        lv_obj_set_width(lv_label_19, 456);
        lv_obj_set_height(lv_label_19, 15);
        lv_label_set_text(lv_label_19, "Dữ liệu minh họa, chưa kết nối");
        lv_obj_set_style_text_font(lv_label_19, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_ai_quota_refresh_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_ai_quota_refresh_landscape, "btn_ai_quota_refresh_landscape");
        lv_obj_set_x(btn_ai_quota_refresh_landscape, 12);
        lv_obj_set_y(btn_ai_quota_refresh_landscape, 284);
        lv_obj_set_width(btn_ai_quota_refresh_landscape, 456);
        lv_obj_set_height(btn_ai_quota_refresh_landscape, 27);
        lv_obj_set_style_bg_color(btn_ai_quota_refresh_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_ai_quota_refresh_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_ai_quota_refresh_landscape, 0, 0);
        lv_obj_set_style_radius(btn_ai_quota_refresh_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_ai_quota_refresh_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_ai_quota_refresh_landscape, 0, 0);
        lv_obj_t * lv_label_20 = lv_label_create(btn_ai_quota_refresh_landscape);
        lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_20, "Làm mới dữ liệu");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

