/**
 * @file display_timeout_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "display_timeout_landscape_gen.h"
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

lv_obj_t * display_timeout_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "display_timeout_landscape_#");
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
        lv_obj_set_width(lv_label_0, 330);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Tự tắt màn hình");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thiết lập thời gian chờ");
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
        lv_label_set_text(lv_label_2, "CẤU HÌNH HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 75);
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
        lv_label_set_text(lv_label_3, "5m");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 73);
        lv_obj_set_y(lv_label_4, 93);
        lv_obj_set_width(lv_label_4, 149);
        lv_obj_set_height(lv_label_4, 21);
        lv_label_set_text(lv_label_4, "Tắt tự động");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 73);
        lv_obj_set_y(lv_label_5, 120);
        lv_obj_set_width(lv_label_5, 149);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Sau 5 phút");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 168);
        lv_obj_set_width(lv_label_6, 211);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "THÔNG TIN HIỂN THỊ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 190);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 79);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 203);
        lv_obj_set_width(lv_obj_6, 3);
        lv_obj_set_height(lv_obj_6, 52);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x38bdf8), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 33);
        lv_obj_set_y(lv_label_7, 196);
        lv_obj_set_width(lv_label_7, 187);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Tiết kiệm năng lượng");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 33);
        lv_obj_set_y(lv_label_8, 220);
        lv_obj_set_width(lv_label_8, 187);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Tắt khi không thao tác");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 33);
        lv_obj_set_y(lv_label_9, 242);
        lv_obj_set_width(lv_label_9, 187);
        lv_obj_set_height(lv_label_9, 18);
        lv_label_set_text(lv_label_9, "Chạm để bật màn hình");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 61);
        lv_obj_set_width(lv_label_10, 218);
        lv_obj_set_height(lv_label_10, 19);
        lv_label_set_text(lv_label_10, "CHỌN THỜI GIAN CHỜ");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 83);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 186);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * btn_display_timeout_30s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_30s_landscape, "btn_display_timeout_30s_landscape");
        lv_obj_set_x(btn_display_timeout_30s_landscape, 249);
        lv_obj_set_y(btn_display_timeout_30s_landscape, 90);
        lv_obj_set_width(btn_display_timeout_30s_landscape, 210);
        lv_obj_set_height(btn_display_timeout_30s_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_30s_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_30s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_30s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_30s_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_30s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_30s_landscape, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_display_timeout_30s_landscape);
        lv_obj_set_x(lv_label_11, 9);
        lv_obj_set_y(lv_label_11, 5);
        lv_obj_set_width(lv_label_11, 103);
        lv_obj_set_height(lv_label_11, 20);
        lv_label_set_text(lv_label_11, "30 giây");
        lv_obj_set_style_text_font(lv_label_11, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_12 = lv_label_create(btn_display_timeout_30s_landscape);
        lv_obj_set_x(lv_label_12, 114);
        lv_obj_set_y(lv_label_12, 5);
        lv_obj_set_width(lv_label_12, 86);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Tiết kiệm điện");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_1m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_1m_landscape, "btn_display_timeout_1m_landscape");
        lv_obj_set_x(btn_display_timeout_1m_landscape, 249);
        lv_obj_set_y(btn_display_timeout_1m_landscape, 124);
        lv_obj_set_width(btn_display_timeout_1m_landscape, 210);
        lv_obj_set_height(btn_display_timeout_1m_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_1m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_1m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_1m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_1m_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_1m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_1m_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_display_timeout_1m_landscape);
        lv_obj_set_x(lv_label_13, 9);
        lv_obj_set_y(lv_label_13, 5);
        lv_obj_set_width(lv_label_13, 103);
        lv_obj_set_height(lv_label_13, 20);
        lv_label_set_text(lv_label_13, "1 phút");
        lv_obj_set_style_text_font(lv_label_13, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_14 = lv_label_create(btn_display_timeout_1m_landscape);
        lv_obj_set_x(lv_label_14, 114);
        lv_obj_set_y(lv_label_14, 5);
        lv_obj_set_width(lv_label_14, 86);
        lv_obj_set_height(lv_label_14, 20);
        lv_label_set_text(lv_label_14, "Nhanh");
        lv_obj_set_style_text_font(lv_label_14, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_5m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_5m_landscape, "btn_display_timeout_5m_landscape");
        lv_obj_set_x(btn_display_timeout_5m_landscape, 249);
        lv_obj_set_y(btn_display_timeout_5m_landscape, 158);
        lv_obj_set_width(btn_display_timeout_5m_landscape, 210);
        lv_obj_set_height(btn_display_timeout_5m_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_5m_landscape, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_5m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_display_timeout_5m_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(btn_display_timeout_5m_landscape, 1, 0);
        lv_obj_set_style_radius(btn_display_timeout_5m_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_5m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_5m_landscape, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_display_timeout_5m_landscape);
        lv_obj_set_x(lv_label_15, 9);
        lv_obj_set_y(lv_label_15, 5);
        lv_obj_set_width(lv_label_15, 103);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "5 phút");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_16 = lv_label_create(btn_display_timeout_5m_landscape);
        lv_obj_set_x(lv_label_16, 114);
        lv_obj_set_y(lv_label_16, 5);
        lv_obj_set_width(lv_label_16, 86);
        lv_obj_set_height(lv_label_16, 20);
        lv_label_set_text(lv_label_16, "Đã chọn");
        lv_obj_set_style_text_font(lv_label_16, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_display_timeout_10m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_10m_landscape, "btn_display_timeout_10m_landscape");
        lv_obj_set_x(btn_display_timeout_10m_landscape, 249);
        lv_obj_set_y(btn_display_timeout_10m_landscape, 192);
        lv_obj_set_width(btn_display_timeout_10m_landscape, 210);
        lv_obj_set_height(btn_display_timeout_10m_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_10m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_10m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_10m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_10m_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_10m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_10m_landscape, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(btn_display_timeout_10m_landscape);
        lv_obj_set_x(lv_label_17, 9);
        lv_obj_set_y(lv_label_17, 5);
        lv_obj_set_width(lv_label_17, 103);
        lv_obj_set_height(lv_label_17, 20);
        lv_label_set_text(lv_label_17, "10 phút");
        lv_obj_set_style_text_font(lv_label_17, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_18 = lv_label_create(btn_display_timeout_10m_landscape);
        lv_obj_set_x(lv_label_18, 114);
        lv_obj_set_y(lv_label_18, 5);
        lv_obj_set_width(lv_label_18, 86);
        lv_obj_set_height(lv_label_18, 20);
        lv_label_set_text(lv_label_18, "Dài hơn");
        lv_obj_set_style_text_font(lv_label_18, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_never_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_never_landscape, "btn_display_timeout_never_landscape");
        lv_obj_set_x(btn_display_timeout_never_landscape, 249);
        lv_obj_set_y(btn_display_timeout_never_landscape, 226);
        lv_obj_set_width(btn_display_timeout_never_landscape, 210);
        lv_obj_set_height(btn_display_timeout_never_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_never_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_never_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_never_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_never_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_never_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_never_landscape, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_display_timeout_never_landscape);
        lv_obj_set_x(lv_label_19, 9);
        lv_obj_set_y(lv_label_19, 5);
        lv_obj_set_width(lv_label_19, 122);
        lv_obj_set_height(lv_label_19, 20);
        lv_label_set_text(lv_label_19, "Không bao giờ");
        lv_obj_set_style_text_font(lv_label_19, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_20 = lv_label_create(btn_display_timeout_never_landscape);
        lv_obj_set_x(lv_label_20, 135);
        lv_obj_set_y(lv_label_20, 5);
        lv_obj_set_width(lv_label_20, 65);
        lv_obj_set_height(lv_label_20, 20);
        lv_label_set_text(lv_label_20, "Luôn bật");
        lv_obj_set_style_text_font(lv_label_20, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_display_timeout_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_cancel_landscape, "btn_display_timeout_cancel_landscape");
        lv_obj_set_x(btn_display_timeout_cancel_landscape, 12);
        lv_obj_set_y(btn_display_timeout_cancel_landscape, 278);
        lv_obj_set_width(btn_display_timeout_cancel_landscape, 220);
        lv_obj_set_height(btn_display_timeout_cancel_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_display_timeout_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_display_timeout_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_display_timeout_cancel_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_21 = lv_label_create(btn_display_timeout_cancel_landscape);
        lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_21, "Hủy");
        lv_obj_set_style_text_font(lv_label_21, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_display_timeout_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_display_timeout_save_landscape, "btn_display_timeout_save_landscape");
        lv_obj_set_x(btn_display_timeout_save_landscape, 240);
        lv_obj_set_y(btn_display_timeout_save_landscape, 278);
        lv_obj_set_width(btn_display_timeout_save_landscape, 228);
        lv_obj_set_height(btn_display_timeout_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_display_timeout_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_display_timeout_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_display_timeout_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_display_timeout_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_display_timeout_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_display_timeout_save_landscape, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_display_timeout_save_landscape);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Lưu cấu hình");
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

