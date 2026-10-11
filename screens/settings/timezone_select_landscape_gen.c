/**
 * @file timezone_select_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "timezone_select_landscape_gen.h"
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

lv_obj_t * timezone_select_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "timezone_select_landscape_#");
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
        lv_obj_set_width(lv_label_0, 305);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Chọn múi giờ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập thời gian địa phương");
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
        lv_label_set_text(lv_label_2, "MÚI GIỜ HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 79);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 99);
        lv_obj_set_width(lv_obj_4, 42);
        lv_obj_set_height(lv_obj_4, 42);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 110);
        lv_obj_set_width(lv_label_3, 42);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "+7");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 73);
        lv_obj_set_y(lv_label_4, 93);
        lv_obj_set_width(lv_label_4, 148);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Việt Nam");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 73);
        lv_obj_set_y(lv_label_5, 119);
        lv_obj_set_width(lv_label_5, 148);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Asia/Ho_Chi_Minh");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 73);
        lv_obj_set_y(lv_label_6, 139);
        lv_obj_set_width(lv_label_6, 148);
        lv_obj_set_height(lv_label_6, 16);
        lv_label_set_text(lv_label_6, "UTC+7");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 173);
        lv_obj_set_width(lv_label_7, 211);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "THÔNG TIN MÚI GIỜ");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 195);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 70);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 22);
        lv_obj_set_y(lv_label_8, 202);
        lv_obj_set_width(lv_label_8, 199);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Giờ địa phương");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 22);
        lv_obj_set_y(lv_label_9, 224);
        lv_obj_set_width(lv_label_9, 199);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "Áp dụng cho đồng hồ");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 22);
        lv_obj_set_y(lv_label_10, 243);
        lv_obj_set_width(lv_label_10, 199);
        lv_obj_set_height(lv_label_10, 16);
        lv_label_set_text(lv_label_10, "Và lịch đồng bộ thiết bị");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 241);
        lv_obj_set_y(lv_label_11, 61);
        lv_obj_set_width(lv_label_11, 216);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "CHỌN MÚI GIỜ");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 83);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 182);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * btn_timezone_utc7_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_utc7_landscape, "btn_timezone_utc7_landscape");
        lv_obj_set_x(btn_timezone_utc7_landscape, 249);
        lv_obj_set_y(btn_timezone_utc7_landscape, 90);
        lv_obj_set_width(btn_timezone_utc7_landscape, 210);
        lv_obj_set_height(btn_timezone_utc7_landscape, 30);
        lv_obj_set_style_bg_color(btn_timezone_utc7_landscape, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_timezone_utc7_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_timezone_utc7_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(btn_timezone_utc7_landscape, 1, 0);
        lv_obj_set_style_radius(btn_timezone_utc7_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_timezone_utc7_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_utc7_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_timezone_utc7_landscape);
        lv_obj_set_x(lv_label_12, 8);
        lv_obj_set_y(lv_label_12, 5);
        lv_obj_set_width(lv_label_12, 146);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Việt Nam, Bangkok");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(btn_timezone_utc7_landscape);
        lv_obj_set_x(lv_label_13, 155);
        lv_obj_set_y(lv_label_13, 5);
        lv_obj_set_width(lv_label_13, 46);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "UTC+7");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_timezone_utc8_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_utc8_landscape, "btn_timezone_utc8_landscape");
        lv_obj_set_x(btn_timezone_utc8_landscape, 249);
        lv_obj_set_y(btn_timezone_utc8_landscape, 124);
        lv_obj_set_width(btn_timezone_utc8_landscape, 210);
        lv_obj_set_height(btn_timezone_utc8_landscape, 30);
        lv_obj_set_style_bg_color(btn_timezone_utc8_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_timezone_utc8_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_timezone_utc8_landscape, 0, 0);
        lv_obj_set_style_radius(btn_timezone_utc8_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_timezone_utc8_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_utc8_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_timezone_utc8_landscape);
        lv_obj_set_x(lv_label_14, 8);
        lv_obj_set_y(lv_label_14, 5);
        lv_obj_set_width(lv_label_14, 146);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Singapore, Bắc Kinh");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(btn_timezone_utc8_landscape);
        lv_obj_set_x(lv_label_15, 155);
        lv_obj_set_y(lv_label_15, 5);
        lv_obj_set_width(lv_label_15, 46);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "UTC+8");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_timezone_utc9_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_utc9_landscape, "btn_timezone_utc9_landscape");
        lv_obj_set_x(btn_timezone_utc9_landscape, 249);
        lv_obj_set_y(btn_timezone_utc9_landscape, 158);
        lv_obj_set_width(btn_timezone_utc9_landscape, 210);
        lv_obj_set_height(btn_timezone_utc9_landscape, 30);
        lv_obj_set_style_bg_color(btn_timezone_utc9_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_timezone_utc9_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_timezone_utc9_landscape, 0, 0);
        lv_obj_set_style_radius(btn_timezone_utc9_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_timezone_utc9_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_utc9_landscape, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_timezone_utc9_landscape);
        lv_obj_set_x(lv_label_16, 8);
        lv_obj_set_y(lv_label_16, 5);
        lv_obj_set_width(lv_label_16, 146);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "Tokyo, Seoul");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_17 = lv_label_create(btn_timezone_utc9_landscape);
        lv_obj_set_x(lv_label_17, 155);
        lv_obj_set_y(lv_label_17, 5);
        lv_obj_set_width(lv_label_17, 46);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "UTC+9");
        lv_obj_set_style_text_font(lv_label_17, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_timezone_utc530_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_utc530_landscape, "btn_timezone_utc530_landscape");
        lv_obj_set_x(btn_timezone_utc530_landscape, 249);
        lv_obj_set_y(btn_timezone_utc530_landscape, 192);
        lv_obj_set_width(btn_timezone_utc530_landscape, 210);
        lv_obj_set_height(btn_timezone_utc530_landscape, 30);
        lv_obj_set_style_bg_color(btn_timezone_utc530_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_timezone_utc530_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_timezone_utc530_landscape, 0, 0);
        lv_obj_set_style_radius(btn_timezone_utc530_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_timezone_utc530_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_utc530_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_timezone_utc530_landscape);
        lv_obj_set_x(lv_label_18, 8);
        lv_obj_set_y(lv_label_18, 5);
        lv_obj_set_width(lv_label_18, 132);
        lv_obj_set_height(lv_label_18, 20);
        lv_label_set_text(lv_label_18, "Ấn Độ");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_19 = lv_label_create(btn_timezone_utc530_landscape);
        lv_obj_set_x(lv_label_19, 144);
        lv_obj_set_y(lv_label_19, 5);
        lv_obj_set_width(lv_label_19, 57);
        lv_obj_set_height(lv_label_19, 20);
        lv_label_set_text(lv_label_19, "UTC+5:30");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_timezone_utc0_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_utc0_landscape, "btn_timezone_utc0_landscape");
        lv_obj_set_x(btn_timezone_utc0_landscape, 249);
        lv_obj_set_y(btn_timezone_utc0_landscape, 226);
        lv_obj_set_width(btn_timezone_utc0_landscape, 210);
        lv_obj_set_height(btn_timezone_utc0_landscape, 30);
        lv_obj_set_style_bg_color(btn_timezone_utc0_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_timezone_utc0_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_timezone_utc0_landscape, 0, 0);
        lv_obj_set_style_radius(btn_timezone_utc0_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_timezone_utc0_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_utc0_landscape, 0, 0);
        lv_obj_t * lv_label_20 = lv_label_create(btn_timezone_utc0_landscape);
        lv_obj_set_x(lv_label_20, 8);
        lv_obj_set_y(lv_label_20, 5);
        lv_obj_set_width(lv_label_20, 146);
        lv_obj_set_height(lv_label_20, 20);
        lv_label_set_text(lv_label_20, "UTC quốc tế");
        lv_obj_set_style_text_font(lv_label_20, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_21 = lv_label_create(btn_timezone_utc0_landscape);
        lv_obj_set_x(lv_label_21, 155);
        lv_obj_set_y(lv_label_21, 5);
        lv_obj_set_width(lv_label_21, 46);
        lv_obj_set_height(lv_label_21, 20);
        lv_label_set_text(lv_label_21, "UTC+0");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_21, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_timezone_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_cancel_landscape, "btn_timezone_cancel_landscape");
        lv_obj_set_x(btn_timezone_cancel_landscape, 12);
        lv_obj_set_y(btn_timezone_cancel_landscape, 274);
        lv_obj_set_width(btn_timezone_cancel_landscape, 220);
        lv_obj_set_height(btn_timezone_cancel_landscape, 34);
        lv_obj_set_style_bg_color(btn_timezone_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_timezone_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_timezone_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_timezone_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_timezone_cancel_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_timezone_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_timezone_cancel_landscape);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Hủy");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_timezone_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_timezone_save_landscape, "btn_timezone_save_landscape");
        lv_obj_set_x(btn_timezone_save_landscape, 240);
        lv_obj_set_y(btn_timezone_save_landscape, 274);
        lv_obj_set_width(btn_timezone_save_landscape, 228);
        lv_obj_set_height(btn_timezone_save_landscape, 34);
        lv_obj_set_style_bg_color(btn_timezone_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_timezone_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_timezone_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_timezone_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_timezone_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_timezone_save_landscape, 0, 0);
        lv_obj_t * lv_label_23 = lv_label_create(btn_timezone_save_landscape);
        lv_obj_set_align(lv_label_23, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_23, "Lưu múi giờ");
        lv_obj_set_style_text_font(lv_label_23, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_23, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

