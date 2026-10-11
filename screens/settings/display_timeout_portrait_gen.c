/**
 * @file display_timeout_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "display_timeout_portrait_gen.h"
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

lv_obj_t * display_timeout_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "display_timeout_portrait_#");
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
        lv_obj_set_width(lv_label_0, 248);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Tự tắt màn hình");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 239);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập thời gian chờ");
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
        lv_obj_set_width(lv_label_2, 250);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "CẤU HÌNH HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 89);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 59);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 101);
        lv_obj_set_width(lv_obj_4, 36);
        lv_obj_set_height(lv_obj_4, 36);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 110);
        lv_obj_set_width(lv_label_3, 36);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "5m");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 69);
        lv_obj_set_y(lv_label_4, 97);
        lv_obj_set_width(lv_label_4, 220);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Tắt màn hình tự động");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 69);
        lv_obj_set_y(lv_label_5, 122);
        lv_obj_set_width(lv_label_5, 220);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Sau 5 phút không thao tác");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 158);
        lv_obj_set_width(lv_label_6, 250);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "CHỌN THỜI GIAN CHỜ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 180);
        lv_obj_set_width(lv_obj_5, 296);
        lv_obj_set_height(lv_obj_5, 225);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * btn_display_timeout_30s = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_30s, "btn_display_timeout_30s");
        lv_obj_set_x(btn_display_timeout_30s, 22);
        lv_obj_set_y(btn_display_timeout_30s, 188);
        lv_obj_set_width(btn_display_timeout_30s, 276);
        lv_obj_set_height(btn_display_timeout_30s, 38);
        lv_obj_set_style_bg_color(btn_display_timeout_30s, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_30s, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_30s, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_30s, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_30s, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_30s, 0, 0);
        lv_obj_t * lv_label_7 = lv_label_create(btn_display_timeout_30s);
        lv_obj_set_x(lv_label_7, 12);
        lv_obj_set_y(lv_label_7, 8);
        lv_obj_set_width(lv_label_7, 156);
        lv_obj_set_height(lv_label_7, 21);
        lv_label_set_text(lv_label_7, "30 giây");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(btn_display_timeout_30s);
        lv_obj_set_x(lv_label_8, 173);
        lv_obj_set_y(lv_label_8, 9);
        lv_obj_set_width(lv_label_8, 91);
        lv_obj_set_height(lv_label_8, 20);
        lv_label_set_text(lv_label_8, "Tiết kiệm điện");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_1m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_1m, "btn_display_timeout_1m");
        lv_obj_set_x(btn_display_timeout_1m, 22);
        lv_obj_set_y(btn_display_timeout_1m, 231);
        lv_obj_set_width(btn_display_timeout_1m, 276);
        lv_obj_set_height(btn_display_timeout_1m, 38);
        lv_obj_set_style_bg_color(btn_display_timeout_1m, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_1m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_1m, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_1m, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_1m, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_1m, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(btn_display_timeout_1m);
        lv_obj_set_x(lv_label_9, 12);
        lv_obj_set_y(lv_label_9, 8);
        lv_obj_set_width(lv_label_9, 156);
        lv_obj_set_height(lv_label_9, 21);
        lv_label_set_text(lv_label_9, "1 phút");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(btn_display_timeout_1m);
        lv_obj_set_x(lv_label_10, 173);
        lv_obj_set_y(lv_label_10, 9);
        lv_obj_set_width(lv_label_10, 91);
        lv_obj_set_height(lv_label_10, 20);
        lv_label_set_text(lv_label_10, "Nhanh");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_5m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_5m, "btn_display_timeout_5m");
        lv_obj_set_x(btn_display_timeout_5m, 22);
        lv_obj_set_y(btn_display_timeout_5m, 274);
        lv_obj_set_width(btn_display_timeout_5m, 276);
        lv_obj_set_height(btn_display_timeout_5m, 38);
        lv_obj_set_style_bg_color(btn_display_timeout_5m, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_5m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_display_timeout_5m, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(btn_display_timeout_5m, 1, 0);
        lv_obj_set_style_radius(btn_display_timeout_5m, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_5m, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_5m, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_display_timeout_5m);
        lv_obj_set_x(lv_label_11, 12);
        lv_obj_set_y(lv_label_11, 8);
        lv_obj_set_width(lv_label_11, 156);
        lv_obj_set_height(lv_label_11, 21);
        lv_label_set_text(lv_label_11, "5 phút");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(btn_display_timeout_5m);
        lv_obj_set_x(lv_label_12, 173);
        lv_obj_set_y(lv_label_12, 9);
        lv_obj_set_width(lv_label_12, 91);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Đã chọn");
        lv_obj_set_style_text_font(lv_label_12, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_display_timeout_10m = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_10m, "btn_display_timeout_10m");
        lv_obj_set_x(btn_display_timeout_10m, 22);
        lv_obj_set_y(btn_display_timeout_10m, 317);
        lv_obj_set_width(btn_display_timeout_10m, 276);
        lv_obj_set_height(btn_display_timeout_10m, 38);
        lv_obj_set_style_bg_color(btn_display_timeout_10m, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_10m, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_10m, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_10m, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_10m, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_10m, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_display_timeout_10m);
        lv_obj_set_x(lv_label_13, 12);
        lv_obj_set_y(lv_label_13, 8);
        lv_obj_set_width(lv_label_13, 156);
        lv_obj_set_height(lv_label_13, 21);
        lv_label_set_text(lv_label_13, "10 phút");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(btn_display_timeout_10m);
        lv_obj_set_x(lv_label_14, 173);
        lv_obj_set_y(lv_label_14, 9);
        lv_obj_set_width(lv_label_14, 91);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Dài hơn");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_never = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_never, "btn_display_timeout_never");
        lv_obj_set_x(btn_display_timeout_never, 22);
        lv_obj_set_y(btn_display_timeout_never, 360);
        lv_obj_set_width(btn_display_timeout_never, 276);
        lv_obj_set_height(btn_display_timeout_never, 38);
        lv_obj_set_style_bg_color(btn_display_timeout_never, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_never, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_never, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_never, 8, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_never, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_never, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_display_timeout_never);
        lv_obj_set_x(lv_label_15, 12);
        lv_obj_set_y(lv_label_15, 8);
        lv_obj_set_width(lv_label_15, 156);
        lv_obj_set_height(lv_label_15, 21);
        lv_label_set_text(lv_label_15, "Không bao giờ");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(btn_display_timeout_never);
        lv_obj_set_x(lv_label_16, 173);
        lv_obj_set_y(lv_label_16, 9);
        lv_obj_set_width(lv_label_16, 91);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "Luôn bật");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 412);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 20);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 7, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 22);
        lv_obj_set_y(lv_obj_7, 418);
        lv_obj_set_width(lv_obj_7, 3);
        lv_obj_set_height(lv_obj_7, 8);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_radius(lv_obj_7, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 32);
        lv_obj_set_y(lv_label_17, 412);
        lv_obj_set_width(lv_label_17, 265);
        lv_obj_set_height(lv_label_17, 18);
        lv_label_set_text(lv_label_17, "Chạm màn hình để bật lại khi tắt");
        lv_obj_set_style_text_font(lv_label_17, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_cancel = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_cancel, "btn_display_timeout_cancel");
        lv_obj_set_x(btn_display_timeout_cancel, 12);
        lv_obj_set_y(btn_display_timeout_cancel, 439);
        lv_obj_set_width(btn_display_timeout_cancel, 140);
        lv_obj_set_height(btn_display_timeout_cancel, 32);
        lv_obj_set_style_bg_color(btn_display_timeout_cancel, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_cancel, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_display_timeout_cancel, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_display_timeout_cancel, 1, 0);
        lv_obj_set_style_radius(btn_display_timeout_cancel, 9, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_cancel, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_cancel, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(btn_display_timeout_cancel);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Hủy");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_display_timeout_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_save, "btn_display_timeout_save");
        lv_obj_set_x(btn_display_timeout_save, 160);
        lv_obj_set_y(btn_display_timeout_save, 439);
        lv_obj_set_width(btn_display_timeout_save, 148);
        lv_obj_set_height(btn_display_timeout_save, 32);
        lv_obj_set_style_bg_color(btn_display_timeout_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_save, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_save, 9, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_save, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_save, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_display_timeout_save);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_19, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

