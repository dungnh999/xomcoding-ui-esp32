/**
 * @file logs_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "logs_landscape_gen.h"
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

lv_obj_t * logs_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "logs_landscape_#");
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
        lv_obj_set_width(lv_label_0, 260);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "System Logs");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Nhật ký demo · không ghi flash");
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

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 68);
        lv_obj_set_width(lv_obj_3, 456);
        lv_obj_set_height(lv_obj_3, 170);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 26);
        lv_obj_set_y(lv_label_2, 84);
        lv_obj_set_width(lv_label_2, 48);
        lv_obj_set_height(lv_label_2, 16);
        lv_label_set_text(lv_label_2, "11:05");
        lv_obj_set_style_text_font(lv_label_2, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 88);
        lv_obj_set_y(lv_label_3, 84);
        lv_obj_set_width(lv_label_3, 54);
        lv_obj_set_height(lv_label_3, 16);
        lv_label_set_text(lv_label_3, "INFO");
        lv_obj_set_style_text_font(lv_label_3, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 154);
        lv_obj_set_y(lv_label_4, 84);
        lv_obj_set_width(lv_label_4, 260);
        lv_obj_set_height(lv_label_4, 16);
        lv_label_set_text(lv_label_4, "Preview runtime ready");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 26);
        lv_obj_set_y(lv_label_5, 114);
        lv_obj_set_width(lv_label_5, 48);
        lv_obj_set_height(lv_label_5, 16);
        lv_label_set_text(lv_label_5, "11:02");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 88);
        lv_obj_set_y(lv_label_6, 114);
        lv_obj_set_width(lv_label_6, 54);
        lv_obj_set_height(lv_label_6, 16);
        lv_label_set_text(lv_label_6, "WARN");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xf59e0b), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 154);
        lv_obj_set_y(lv_label_7, 114);
        lv_obj_set_width(lv_label_7, 260);
        lv_obj_set_height(lv_label_7, 16);
        lv_label_set_text(lv_label_7, "RSSI demo thấp");
        lv_obj_set_style_text_font(lv_label_7, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 26);
        lv_obj_set_y(lv_label_8, 144);
        lv_obj_set_width(lv_label_8, 48);
        lv_obj_set_height(lv_label_8, 16);
        lv_label_set_text(lv_label_8, "10:58");
        lv_obj_set_style_text_font(lv_label_8, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 88);
        lv_obj_set_y(lv_label_9, 144);
        lv_obj_set_width(lv_label_9, 54);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "INFO");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 154);
        lv_obj_set_y(lv_label_10, 144);
        lv_obj_set_width(lv_label_10, 260);
        lv_obj_set_height(lv_label_10, 16);
        lv_label_set_text(lv_label_10, "LVGL v9.5.0 start");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 26);
        lv_obj_set_y(lv_label_11, 174);
        lv_obj_set_width(lv_label_11, 48);
        lv_obj_set_height(lv_label_11, 16);
        lv_label_set_text(lv_label_11, "10:55");
        lv_obj_set_style_text_font(lv_label_11, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 88);
        lv_obj_set_y(lv_label_12, 174);
        lv_obj_set_width(lv_label_12, 54);
        lv_obj_set_height(lv_label_12, 16);
        lv_label_set_text(lv_label_12, "ERROR");
        lv_obj_set_style_text_font(lv_label_12, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xef4444), 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 154);
        lv_obj_set_y(lv_label_13, 174);
        lv_obj_set_width(lv_label_13, 260);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "API demo timeout");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_x(lv_button_0, 12);
        lv_obj_set_y(lv_button_0, 276);
        lv_obj_set_width(lv_button_0, 456);
        lv_obj_set_height(lv_button_0, 34);
        lv_obj_set_style_bg_color(lv_button_0, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_button_0, 0, 0);
        lv_obj_set_style_radius(lv_button_0, 10, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_style_pad_all(lv_button_0, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(lv_button_0);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Làm mới log demo");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

