/**
 * @file factory_reset_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "factory_reset_landscape_gen.h"
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

lv_obj_t * factory_reset_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t factory_reset_land_checkbox_main;
    static lv_style_t factory_reset_land_checkbox_indicator;
    static lv_style_t factory_reset_land_checkbox_checked;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&factory_reset_land_checkbox_main);
        lv_style_init(&factory_reset_land_checkbox_indicator);
        lv_style_init(&factory_reset_land_checkbox_checked);

        lv_style_set_text_color(&factory_reset_land_checkbox_main, lv_color_hex(0xe2e8f0));
        lv_style_set_text_font(&factory_reset_land_checkbox_main, be_medium_11);
        lv_style_set_pad_column(&factory_reset_land_checkbox_main, 8);
        lv_style_set_bg_color(&factory_reset_land_checkbox_indicator, lv_color_hex(0x0f1b2a));
        lv_style_set_bg_opa(&factory_reset_land_checkbox_indicator, (255 * 100 / 100));
        lv_style_set_border_color(&factory_reset_land_checkbox_indicator, lv_color_hex(0x70403d));
        lv_style_set_border_width(&factory_reset_land_checkbox_indicator, 1);
        lv_style_set_radius(&factory_reset_land_checkbox_indicator, 5);
        lv_style_set_bg_color(&factory_reset_land_checkbox_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&factory_reset_land_checkbox_checked, (255 * 100 / 100));
        lv_style_set_border_color(&factory_reset_land_checkbox_checked, lv_color_hex(0xa52a26));
        lv_style_set_border_width(&factory_reset_land_checkbox_checked, 1);
        lv_style_set_radius(&factory_reset_land_checkbox_checked, 5);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "factory_reset_landscape_#");
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
        lv_obj_set_width(lv_label_0, 350);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Khôi phục cài đặt");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 360);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Xác nhận đưa thiết bị về mặc định");
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
        lv_obj_set_width(lv_label_2, 210);
        lv_obj_set_height(lv_label_2, 19);
        lv_label_set_text(lv_label_2, "THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 83);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 68);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 96);
        lv_obj_set_width(lv_obj_4, 40);
        lv_obj_set_height(lv_obj_4, 40);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 107);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "S3");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_16, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 70);
        lv_obj_set_y(lv_label_4, 94);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 20);
        lv_label_set_text(lv_label_4, "Xóm Coding ESP32-S3");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 70);
        lv_obj_set_y(lv_label_5, 118);
        lv_obj_set_width(lv_label_5, 151);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "Khôi phục mặc định");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 160);
        lv_obj_set_width(lv_label_6, 210);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "DỮ LIỆU SẼ BỊ XÓA");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 12);
        lv_obj_set_y(lv_obj_5, 182);
        lv_obj_set_width(lv_obj_5, 220);
        lv_obj_set_height(lv_obj_5, 85);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(lv_obj_5, 1, 0);
        lv_obj_set_style_radius(lv_obj_5, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 193);
        lv_obj_set_width(lv_obj_6, 3);
        lv_obj_set_height(lv_obj_6, 62);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0xe28d88), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 33);
        lv_obj_set_y(lv_label_7, 187);
        lv_obj_set_width(lv_label_7, 187);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "Xóa cấu hình đã lưu");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 33);
        lv_obj_set_y(lv_label_8, 209);
        lv_obj_set_width(lv_label_8, 187);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Wi-Fi và mật khẩu");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 33);
        lv_obj_set_y(lv_label_9, 228);
        lv_obj_set_width(lv_label_9, 187);
        lv_obj_set_height(lv_label_9, 17);
        lv_label_set_text(lv_label_9, "NAS, API và đồng bộ");
        lv_obj_set_style_text_font(lv_label_9, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 33);
        lv_obj_set_y(lv_label_10, 247);
        lv_obj_set_width(lv_label_10, 187);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "Các tùy chọn cá nhân");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 241);
        lv_obj_set_y(lv_label_11, 61);
        lv_obj_set_width(lv_label_11, 216);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "XÁC NHẬN THAO TÁC");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 240);
        lv_obj_set_y(lv_obj_7, 83);
        lv_obj_set_width(lv_obj_7, 228);
        lv_obj_set_height(lv_obj_7, 116);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 251);
        lv_obj_set_y(lv_label_12, 91);
        lv_obj_set_width(lv_label_12, 205);
        lv_obj_set_height(lv_label_12, 20);
        lv_label_set_text(lv_label_12, "Khôi phục thiết bị?");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 251);
        lv_obj_set_y(lv_label_13, 116);
        lv_obj_set_width(lv_label_13, 205);
        lv_obj_set_height(lv_label_13, 17);
        lv_label_set_text(lv_label_13, "Đưa về cấu hình ban đầu");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 251);
        lv_obj_set_y(lv_obj_8, 140);
        lv_obj_set_width(lv_obj_8, 206);
        lv_obj_set_height(lv_obj_8, 1);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * factory_reset_acknowledge_landscape = lv_checkbox_create(lv_obj_0);
        lv_obj_set_name(factory_reset_acknowledge_landscape, "factory_reset_acknowledge_landscape");
        lv_obj_set_x(factory_reset_acknowledge_landscape, 251);
        lv_obj_set_y(factory_reset_acknowledge_landscape, 153);
        lv_checkbox_set_text(factory_reset_acknowledge_landscape, "Tôi hiểu dữ liệu sẽ bị xóa");
        lv_obj_set_state(factory_reset_acknowledge_landscape, LV_STATE_CHECKED, false);
        lv_obj_add_style(factory_reset_acknowledge_landscape, &factory_reset_land_checkbox_main, LV_PART_MAIN);
        lv_obj_add_style(factory_reset_acknowledge_landscape, &factory_reset_land_checkbox_indicator, LV_PART_INDICATOR);
        lv_obj_add_style(factory_reset_acknowledge_landscape, &factory_reset_land_checkbox_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 241);
        lv_obj_set_y(lv_label_14, 208);
        lv_obj_set_width(lv_label_14, 216);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "LƯU Ý QUAN TRỌNG");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 230);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 37);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_10, 251);
        lv_obj_set_y(lv_obj_10, 240);
        lv_obj_set_width(lv_obj_10, 3);
        lv_obj_set_height(lv_obj_10, 17);
        lv_obj_set_style_bg_color(lv_obj_10, lv_color_hex(0xe28d88), 0);
        lv_obj_set_style_bg_opa(lv_obj_10, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_10, 0, 0);
        lv_obj_set_style_radius(lv_obj_10, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_10, 0, 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 263);
        lv_obj_set_y(lv_label_15, 236);
        lv_obj_set_width(lv_label_15, 192);
        lv_obj_set_height(lv_label_15, 20);
        lv_label_set_text(lv_label_15, "Không thể hoàn tác.");
        lv_obj_set_style_text_font(lv_label_15, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_factory_reset_cancel_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_factory_reset_cancel_landscape, "btn_factory_reset_cancel_landscape");
        lv_obj_set_x(btn_factory_reset_cancel_landscape, 12);
        lv_obj_set_y(btn_factory_reset_cancel_landscape, 270);
        lv_obj_set_width(btn_factory_reset_cancel_landscape, 220);
        lv_obj_set_height(btn_factory_reset_cancel_landscape, 38);
        lv_obj_set_style_bg_color(btn_factory_reset_cancel_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(btn_factory_reset_cancel_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_factory_reset_cancel_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(btn_factory_reset_cancel_landscape, 1, 0);
        lv_obj_set_style_radius(btn_factory_reset_cancel_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_factory_reset_cancel_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_factory_reset_cancel_landscape, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(btn_factory_reset_cancel_landscape);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Hủy");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * btn_factory_reset_confirm_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_factory_reset_confirm_landscape, "btn_factory_reset_confirm_landscape");
        lv_obj_set_x(btn_factory_reset_confirm_landscape, 240);
        lv_obj_set_y(btn_factory_reset_confirm_landscape, 270);
        lv_obj_set_width(btn_factory_reset_confirm_landscape, 228);
        lv_obj_set_height(btn_factory_reset_confirm_landscape, 38);
        lv_obj_set_style_bg_color(btn_factory_reset_confirm_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_factory_reset_confirm_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_factory_reset_confirm_landscape, 0, 0);
        lv_obj_set_style_radius(btn_factory_reset_confirm_landscape, 10, 0);
        lv_obj_set_style_shadow_width(btn_factory_reset_confirm_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_factory_reset_confirm_landscape, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(btn_factory_reset_confirm_landscape);
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_17, "Khôi phục cài đặt gốc");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

