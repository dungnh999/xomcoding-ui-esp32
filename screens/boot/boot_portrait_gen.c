/**
 * @file boot_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "boot_portrait_gen.h"
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

lv_obj_t * boot_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "boot_portrait_#");
        lv_obj_set_width(lv_obj_0, 320);
        lv_obj_set_height(lv_obj_0, 480);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0f1720), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 136);
        lv_obj_set_y(lv_obj_1, 20);
        lv_obj_set_width(lv_obj_1, 48);
        lv_obj_set_height(lv_obj_1, 3);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 108);
        lv_obj_set_y(lv_obj_2, 44);
        lv_obj_set_width(lv_obj_2, 104);
        lv_obj_set_height(lv_obj_2, 104);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x17212e), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_2, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(lv_obj_2, 2, 0);
        lv_obj_set_style_radius(lv_obj_2, 52, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 114);
        lv_obj_set_y(lv_image_0, 50);
        lv_obj_set_width(lv_image_0, 92);
        lv_obj_set_height(lv_image_0, 92);
        lv_image_set_src(lv_image_0, xom_boot_logo);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 0);
        lv_obj_set_y(lv_label_0, 168);
        lv_obj_set_width(lv_label_0, 320);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "XOM DASHBOARD");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 0);
        lv_obj_set_y(lv_label_1, 205);
        lv_obj_set_width(lv_label_1, 320);
        lv_obj_set_height(lv_label_1, 20);
        lv_label_set_text(lv_label_1, "HỆ THỐNG GIÁM SÁT");
        lv_obj_set_style_text_font(lv_label_1, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0xcbd5e1), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 20);
        lv_obj_set_y(lv_obj_3, 247);
        lv_obj_set_width(lv_obj_3, 280);
        lv_obj_set_height(lv_obj_3, 82);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 36);
        lv_obj_set_y(lv_label_2, 260);
        lv_obj_set_width(lv_label_2, 190);
        lv_obj_set_height(lv_label_2, 22);
        lv_label_set_text(lv_label_2, "Đang khởi động");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 240);
        lv_obj_set_y(lv_label_3, 260);
        lv_obj_set_width(lv_label_3, 42);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "68%");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe17873), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 36);
        lv_obj_set_y(lv_label_4, 285);
        lv_obj_set_width(lv_label_4, 245);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "Đang kết nối dịch vụ...");
        lv_obj_set_style_text_font(lv_label_4, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xc5cfdb), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 36);
        lv_obj_set_y(lv_obj_4, 311);
        lv_obj_set_width(lv_obj_4, 248);
        lv_obj_set_height(lv_obj_4, 6);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 36);
        lv_obj_set_y(lv_obj_5, 311);
        lv_obj_set_width(lv_obj_5, 169);
        lv_obj_set_height(lv_obj_5, 6);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 20);
        lv_obj_set_y(lv_obj_6, 350);
        lv_obj_set_width(lv_obj_6, 88);
        lv_obj_set_height(lv_obj_6, 88);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 50);
        lv_obj_set_y(lv_image_1, 360);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 20);
        lv_obj_set_y(lv_label_5, 392);
        lv_obj_set_width(lv_label_5, 88);
        lv_obj_set_height(lv_label_5, 20);
        lv_label_set_text(lv_label_5, "Wi-Fi");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 20);
        lv_obj_set_y(lv_label_6, 415);
        lv_obj_set_width(lv_label_6, 88);
        lv_obj_set_height(lv_label_6, 17);
        lv_label_set_text(lv_label_6, "Đang kết nối");
        lv_obj_set_style_text_font(lv_label_6, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xc5cfdb), 0);
        lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_DOTS);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 116);
        lv_obj_set_y(lv_obj_7, 350);
        lv_obj_set_width(lv_obj_7, 88);
        lv_obj_set_height(lv_obj_7, 88);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 146);
        lv_obj_set_y(lv_image_2, 360);
        lv_obj_set_width(lv_image_2, 28);
        lv_obj_set_height(lv_image_2, 28);
        lv_image_set_src(lv_image_2, boot_icon_weather);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 116);
        lv_obj_set_y(lv_label_7, 392);
        lv_obj_set_width(lv_label_7, 88);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Thời tiết");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_7, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 116);
        lv_obj_set_y(lv_label_8, 415);
        lv_obj_set_width(lv_label_8, 88);
        lv_obj_set_height(lv_label_8, 17);
        lv_label_set_text(lv_label_8, "Đang tải");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xc5cfdb), 0);
        lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_DOTS);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 212);
        lv_obj_set_y(lv_obj_8, 350);
        lv_obj_set_width(lv_obj_8, 88);
        lv_obj_set_height(lv_obj_8, 88);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 242);
        lv_obj_set_y(lv_image_3, 360);
        lv_obj_set_width(lv_image_3, 28);
        lv_obj_set_height(lv_image_3, 28);
        lv_image_set_src(lv_image_3, boot_icon_nas);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 212);
        lv_obj_set_y(lv_label_9, 392);
        lv_obj_set_width(lv_label_9, 88);
        lv_obj_set_height(lv_label_9, 20);
        lv_label_set_text(lv_label_9, "NAS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 212);
        lv_obj_set_y(lv_label_10, 415);
        lv_obj_set_width(lv_label_10, 88);
        lv_obj_set_height(lv_label_10, 17);
        lv_label_set_text(lv_label_10, "Đang kiểm tra");
        lv_obj_set_style_text_font(lv_label_10, be_medium_10, 0);
        lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xc5cfdb), 0);
        lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_DOTS);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 0);
        lv_obj_set_y(lv_label_11, 451);
        lv_obj_set_width(lv_label_11, 320);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "v1.0.0");
        lv_obj_set_style_text_font(lv_label_11, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x64748b), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

