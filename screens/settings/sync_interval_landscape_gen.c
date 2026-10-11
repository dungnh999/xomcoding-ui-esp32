/**
 * @file sync_interval_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "sync_interval_landscape_gen.h"
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

lv_obj_t * sync_interval_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "sync_interval_landscape_#");
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
        lv_label_set_text(lv_label_0, "Chu kỳ đồng bộ");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Thời gian chờ và thử lại");
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
        lv_obj_set_width(lv_label_2, 208);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "CẤU HÌNH HIỆN TẠI");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 63);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 96);
        lv_obj_set_width(lv_obj_4, 36);
        lv_obj_set_height(lv_obj_4, 36);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 105);
        lv_obj_set_width(lv_label_3, 36);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "30s");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 68);
        lv_obj_set_y(lv_label_4, 91);
        lv_obj_set_width(lv_label_4, 153);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Đồng bộ tự động");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 68);
        lv_obj_set_y(lv_label_5, 116);
        lv_obj_set_width(lv_label_5, 154);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Mỗi 30 giây");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 155);
        lv_obj_set_width(lv_label_6, 208);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "CHU KỲ ĐỒNG BỘ");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 177);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 91);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 22);
        lv_obj_set_y(lv_label_7, 184);
        lv_obj_set_width(lv_label_7, 198);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "Tần suất đồng bộ dữ liệu");
        lv_obj_set_style_text_font(lv_label_7, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_sync_interval_15s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_15s_landscape, "btn_sync_interval_15s_landscape");
        lv_obj_set_x(btn_sync_interval_15s_landscape, 22);
        lv_obj_set_y(btn_sync_interval_15s_landscape, 207);
        lv_obj_set_width(btn_sync_interval_15s_landscape, 96);
        lv_obj_set_height(btn_sync_interval_15s_landscape, 24);
        lv_obj_set_style_bg_color(btn_sync_interval_15s_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_15s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_interval_15s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_interval_15s_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_15s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_15s_landscape, 0, 0);
        lv_obj_t * lv_label_8 = lv_label_create(btn_sync_interval_15s_landscape);
        lv_obj_set_align(lv_label_8, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_8, "15 giây");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_interval_30s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_30s_landscape, "btn_sync_interval_30s_landscape");
        lv_obj_set_x(btn_sync_interval_30s_landscape, 126);
        lv_obj_set_y(btn_sync_interval_30s_landscape, 207);
        lv_obj_set_width(btn_sync_interval_30s_landscape, 96);
        lv_obj_set_height(btn_sync_interval_30s_landscape, 24);
        lv_obj_set_style_bg_color(btn_sync_interval_30s_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_30s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_interval_30s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_interval_30s_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_30s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_30s_landscape, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(btn_sync_interval_30s_landscape);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "30 giây");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_sync_interval_1m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_1m_landscape, "btn_sync_interval_1m_landscape");
        lv_obj_set_x(btn_sync_interval_1m_landscape, 22);
        lv_obj_set_y(btn_sync_interval_1m_landscape, 237);
        lv_obj_set_width(btn_sync_interval_1m_landscape, 96);
        lv_obj_set_height(btn_sync_interval_1m_landscape, 24);
        lv_obj_set_style_bg_color(btn_sync_interval_1m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_1m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_interval_1m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_interval_1m_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_1m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_1m_landscape, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(btn_sync_interval_1m_landscape);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "1 phút");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_interval_5m_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_5m_landscape, "btn_sync_interval_5m_landscape");
        lv_obj_set_x(btn_sync_interval_5m_landscape, 126);
        lv_obj_set_y(btn_sync_interval_5m_landscape, 237);
        lv_obj_set_width(btn_sync_interval_5m_landscape, 96);
        lv_obj_set_height(btn_sync_interval_5m_landscape, 24);
        lv_obj_set_style_bg_color(btn_sync_interval_5m_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_5m_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_interval_5m_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_interval_5m_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_5m_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_5m_landscape, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(btn_sync_interval_5m_landscape);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "5 phút");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 241);
        lv_obj_set_y(lv_label_12, 61);
        lv_obj_set_width(lv_label_12, 216);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "THỜI GIAN CHỜ");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 83);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 85);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 91);
        lv_obj_set_width(lv_label_13, 205);
        lv_obj_set_height(lv_label_13, 18);
        lv_label_set_text(lv_label_13, "Giới hạn phản hồi máy chủ");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_sync_timeout_5s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_timeout_5s_landscape, "btn_sync_timeout_5s_landscape");
        lv_obj_set_x(btn_sync_timeout_5s_landscape, 250);
        lv_obj_set_y(btn_sync_timeout_5s_landscape, 122);
        lv_obj_set_width(btn_sync_timeout_5s_landscape, 66);
        lv_obj_set_height(btn_sync_timeout_5s_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_timeout_5s_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_timeout_5s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_timeout_5s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_timeout_5s_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_timeout_5s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_timeout_5s_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_sync_timeout_5s_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "5 giây");
        lv_obj_set_style_text_font(lv_label_14, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_timeout_10s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_timeout_10s_landscape, "btn_sync_timeout_10s_landscape");
        lv_obj_set_x(btn_sync_timeout_10s_landscape, 321);
        lv_obj_set_y(btn_sync_timeout_10s_landscape, 122);
        lv_obj_set_width(btn_sync_timeout_10s_landscape, 66);
        lv_obj_set_height(btn_sync_timeout_10s_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_timeout_10s_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_timeout_10s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_timeout_10s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_timeout_10s_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_timeout_10s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_timeout_10s_landscape, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(btn_sync_timeout_10s_landscape);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "10 giây");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_sync_timeout_20s_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_timeout_20s_landscape, "btn_sync_timeout_20s_landscape");
        lv_obj_set_x(btn_sync_timeout_20s_landscape, 392);
        lv_obj_set_y(btn_sync_timeout_20s_landscape, 122);
        lv_obj_set_width(btn_sync_timeout_20s_landscape, 66);
        lv_obj_set_height(btn_sync_timeout_20s_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_timeout_20s_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_timeout_20s_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_timeout_20s_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_timeout_20s_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_timeout_20s_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_timeout_20s_landscape, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_sync_timeout_20s_landscape);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "20 giây");
        lv_obj_set_style_text_font(lv_label_16, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_17 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_17, 241);
        lv_obj_set_y(lv_label_17, 177);
        lv_obj_set_width(lv_label_17, 216);
        lv_obj_set_height(lv_label_17, 19);
        lv_label_set_text(lv_label_17, "SỐ LẦN THỬ LẠI");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 199);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 69);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_18 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_18, 251);
        lv_obj_set_y(lv_label_18, 204);
        lv_obj_set_width(lv_label_18, 205);
        lv_obj_set_height(lv_label_18, 18);
        lv_label_set_text(lv_label_18, "Thử lại khi kết nối lỗi");
        lv_obj_set_style_text_font(lv_label_18, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * btn_sync_retry_1_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_retry_1_landscape, "btn_sync_retry_1_landscape");
        lv_obj_set_x(btn_sync_retry_1_landscape, 250);
        lv_obj_set_y(btn_sync_retry_1_landscape, 226);
        lv_obj_set_width(btn_sync_retry_1_landscape, 66);
        lv_obj_set_height(btn_sync_retry_1_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_retry_1_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_retry_1_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_retry_1_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_retry_1_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_retry_1_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_retry_1_landscape, 0, 0);
        lv_obj_t * lv_label_19 = lv_label_create(btn_sync_retry_1_landscape);
        lv_obj_set_align(lv_label_19, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_19, "1 lần");
        lv_obj_set_style_text_font(lv_label_19, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_19, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_retry_3_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_retry_3_landscape, "btn_sync_retry_3_landscape");
        lv_obj_set_x(btn_sync_retry_3_landscape, 321);
        lv_obj_set_y(btn_sync_retry_3_landscape, 226);
        lv_obj_set_width(btn_sync_retry_3_landscape, 66);
        lv_obj_set_height(btn_sync_retry_3_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_retry_3_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_retry_3_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_retry_3_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_retry_3_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_retry_3_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_retry_3_landscape, 0, 0);
        lv_obj_t * lv_label_20 = lv_label_create(btn_sync_retry_3_landscape);
        lv_obj_set_align(lv_label_20, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_20, "3 lần");
        lv_obj_set_style_text_font(lv_label_20, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_20, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_sync_retry_5_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_retry_5_landscape, "btn_sync_retry_5_landscape");
        lv_obj_set_x(btn_sync_retry_5_landscape, 392);
        lv_obj_set_y(btn_sync_retry_5_landscape, 226);
        lv_obj_set_width(btn_sync_retry_5_landscape, 66);
        lv_obj_set_height(btn_sync_retry_5_landscape, 35);
        lv_obj_set_style_bg_color(btn_sync_retry_5_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_sync_retry_5_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_retry_5_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_retry_5_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_sync_retry_5_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_retry_5_landscape, 0, 0);
        lv_obj_t * lv_label_21 = lv_label_create(btn_sync_retry_5_landscape);
        lv_obj_set_align(lv_label_21, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_21, "5 lần");
        lv_obj_set_style_text_font(lv_label_21, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_21, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_interval_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_cancel_landscape, "btn_sync_interval_cancel_landscape");
        lv_obj_set_x(btn_sync_interval_cancel_landscape, 12);
        lv_obj_set_y(btn_sync_interval_cancel_landscape, 277);
        lv_obj_set_width(btn_sync_interval_cancel_landscape, 220);
        lv_obj_set_height(btn_sync_interval_cancel_landscape, 31);
        lv_obj_set_style_bg_color(btn_sync_interval_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_sync_interval_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_sync_interval_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_sync_interval_cancel_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_22 = lv_label_create(btn_sync_interval_cancel_landscape);
        lv_obj_set_align(lv_label_22, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_22, "Hủy");
        lv_obj_set_style_text_font(lv_label_22, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_22, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_sync_interval_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_sync_interval_save_landscape, "btn_sync_interval_save_landscape");
        lv_obj_set_x(btn_sync_interval_save_landscape, 240);
        lv_obj_set_y(btn_sync_interval_save_landscape, 277);
        lv_obj_set_width(btn_sync_interval_save_landscape, 228);
        lv_obj_set_height(btn_sync_interval_save_landscape, 31);
        lv_obj_set_style_bg_color(btn_sync_interval_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_sync_interval_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_sync_interval_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_sync_interval_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_sync_interval_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_sync_interval_save_landscape, 0, 0);
        lv_obj_t * lv_label_23 = lv_label_create(btn_sync_interval_save_landscape);
        lv_obj_set_align(lv_label_23, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_23, "Lưu cấu hình");
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

