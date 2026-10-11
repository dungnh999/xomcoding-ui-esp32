/**
 * @file boot_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "boot_landscape_gen.h"
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

lv_obj_t * boot_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "boot_landscape_#");
        lv_obj_set_width(lv_obj_0, 480);
        lv_obj_set_height(lv_obj_0, 320);
        lv_obj_set_style_bg_color(lv_obj_0, lv_color_hex(0x0f1720), 0);
        lv_obj_set_style_bg_opa(lv_obj_0, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_0, 0, 0);
        lv_obj_set_style_radius(lv_obj_0, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_0, 0, 0);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_1, 22);
        lv_obj_set_y(lv_obj_1, 19);
        lv_obj_set_width(lv_obj_1, 3);
        lv_obj_set_height(lv_obj_1, 53);
        lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_radius(lv_obj_1, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);

        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_2, 44);
        lv_obj_set_y(lv_obj_2, 17);
        lv_obj_set_width(lv_obj_2, 85);
        lv_obj_set_height(lv_obj_2, 85);
        lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0x17212e), 0);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_2, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_border_width(lv_obj_2, 2, 0);
        lv_obj_set_style_radius(lv_obj_2, 43, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_0, 49);
        lv_obj_set_y(lv_image_0, 22);
        lv_obj_set_width(lv_image_0, 75);
        lv_obj_set_height(lv_image_0, 75);
        lv_image_set_src(lv_image_0, xom_boot_logo_landscape);

        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_0, 148);
        lv_obj_set_y(lv_label_0, 30);
        lv_obj_set_width(lv_label_0, 305);
        lv_obj_set_height(lv_label_0, 30);
        lv_label_set_text(lv_label_0, "XOM DASHBOARD");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 149);
        lv_obj_set_y(lv_label_1, 64);
        lv_obj_set_width(lv_label_1, 305);
        lv_obj_set_height(lv_label_1, 20);
        lv_label_set_text(lv_label_1, "HỆ THỐNG GIÁM SÁT");
        lv_obj_set_style_text_font(lv_label_1, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_1, lv_color_hex(0xcbd5e1), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 20);
        lv_obj_set_y(lv_obj_3, 117);
        lv_obj_set_width(lv_obj_3, 440);
        lv_obj_set_height(lv_obj_3, 78);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 12, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 37);
        lv_obj_set_y(lv_label_2, 130);
        lv_obj_set_width(lv_label_2, 250);
        lv_obj_set_height(lv_label_2, 22);
        lv_label_set_text(lv_label_2, "Đang khởi động");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 401);
        lv_obj_set_y(lv_label_3, 130);
        lv_obj_set_width(lv_label_3, 40);
        lv_obj_set_height(lv_label_3, 22);
        lv_label_set_text(lv_label_3, "68%");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe17873), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 37);
        lv_obj_set_y(lv_label_4, 153);
        lv_obj_set_width(lv_label_4, 320);
        lv_obj_set_height(lv_label_4, 19);
        lv_label_set_text(lv_label_4, "Đang kết nối dịch vụ...");
        lv_obj_set_style_text_font(lv_label_4, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xc5cfdb), 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 37);
        lv_obj_set_y(lv_obj_4, 177);
        lv_obj_set_width(lv_obj_4, 406);
        lv_obj_set_height(lv_obj_4, 6);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x334155), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 37);
        lv_obj_set_y(lv_obj_5, 177);
        lv_obj_set_width(lv_obj_5, 276);
        lv_obj_set_height(lv_obj_5, 6);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 3, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 20);
        lv_obj_set_y(lv_obj_6, 211);
        lv_obj_set_width(lv_obj_6, 140);
        lv_obj_set_height(lv_obj_6, 72);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_1, 34);
        lv_obj_set_y(lv_image_1, 229);
        lv_obj_set_width(lv_image_1, 28);
        lv_obj_set_height(lv_image_1, 28);
        lv_image_set_src(lv_image_1, boot_icon_wifi);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 72);
        lv_obj_set_y(lv_label_5, 223);
        lv_obj_set_width(lv_label_5, 78);
        lv_obj_set_height(lv_label_5, 20);
        lv_label_set_text(lv_label_5, "Wi-Fi");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 72);
        lv_obj_set_y(lv_label_6, 246);
        lv_obj_set_width(lv_label_6, 78);
        lv_obj_set_height(lv_label_6, 18);
        lv_label_set_text(lv_label_6, "Kết nối...");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xc5cfdb), 0);
        lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_DOTS);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 170);
        lv_obj_set_y(lv_obj_7, 211);
        lv_obj_set_width(lv_obj_7, 140);
        lv_obj_set_height(lv_obj_7, 72);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_2, 184);
        lv_obj_set_y(lv_image_2, 229);
        lv_obj_set_width(lv_image_2, 28);
        lv_obj_set_height(lv_image_2, 28);
        lv_image_set_src(lv_image_2, boot_icon_weather);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 222);
        lv_obj_set_y(lv_label_7, 223);
        lv_obj_set_width(lv_label_7, 78);
        lv_obj_set_height(lv_label_7, 20);
        lv_label_set_text(lv_label_7, "Thời tiết");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 222);
        lv_obj_set_y(lv_label_8, 246);
        lv_obj_set_width(lv_label_8, 78);
        lv_obj_set_height(lv_label_8, 18);
        lv_label_set_text(lv_label_8, "Đang tải");
        lv_obj_set_style_text_font(lv_label_8, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xc5cfdb), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 320);
        lv_obj_set_y(lv_obj_8, 211);
        lv_obj_set_width(lv_obj_8, 140);
        lv_obj_set_height(lv_obj_8, 72);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x182230), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x344256), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_image_3 = lv_image_create(lv_obj_0);
        lv_obj_set_x(lv_image_3, 334);
        lv_obj_set_y(lv_image_3, 229);
        lv_obj_set_width(lv_image_3, 28);
        lv_obj_set_height(lv_image_3, 28);
        lv_image_set_src(lv_image_3, boot_icon_nas);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 372);
        lv_obj_set_y(lv_label_9, 223);
        lv_obj_set_width(lv_label_9, 78);
        lv_obj_set_height(lv_label_9, 20);
        lv_label_set_text(lv_label_9, "NAS");
        lv_obj_set_style_text_font(lv_label_9, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 372);
        lv_obj_set_y(lv_label_10, 246);
        lv_obj_set_width(lv_label_10, 78);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Kiểm tra...");
        lv_obj_set_style_text_font(lv_label_10, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xc5cfdb), 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 0);
        lv_obj_set_y(lv_label_11, 298);
        lv_obj_set_width(lv_label_11, 480);
        lv_obj_set_height(lv_label_11, 17);
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

