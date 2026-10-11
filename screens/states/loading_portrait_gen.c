/**
 * @file loading_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "loading_portrait_gen.h"
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

lv_obj_t * loading_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t loading_fill;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&loading_fill);

        lv_style_set_bg_color(&loading_fill, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&loading_fill, (255 * 100 / 100));
        lv_style_set_radius(&loading_fill, 999);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "loading_portrait_#");
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
        lv_obj_set_width(lv_label_0, 238);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Đang tải");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Trạng thái demo");
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

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 32);
        lv_obj_set_y(lv_obj_3, 110);
        lv_obj_set_width(lv_obj_3, 256);
        lv_obj_set_height(lv_obj_3, 238);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 14, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_spinner_0 = lv_spinner_create(lv_obj_0);
        lv_obj_set_x(lv_spinner_0, 132);
        lv_obj_set_y(lv_spinner_0, 150);
        lv_obj_set_width(lv_spinner_0, 56);
        lv_obj_set_height(lv_spinner_0, 56);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 52);
        lv_obj_set_y(lv_label_2, 224);
        lv_obj_set_width(lv_label_2, 216);
        lv_obj_set_height(lv_label_2, 24);
        lv_label_set_text(lv_label_2, "Đang chuẩn bị dữ liệu demo");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 58);
        lv_obj_set_y(lv_label_3, 258);
        lv_obj_set_width(lv_label_3, 204);
        lv_obj_set_height(lv_label_3, 34);
        lv_label_set_text(lv_label_3, "Không có kết nối mạng thật trong giai đoạn UI.");
        lv_obj_set_style_text_font(lv_label_3, be_medium_11, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_bar_0 = lv_bar_create(lv_obj_0);
        lv_obj_set_x(lv_bar_0, 58);
        lv_obj_set_y(lv_bar_0, 312);
        lv_obj_set_width(lv_bar_0, 204);
        lv_obj_set_height(lv_bar_0, 8);
        lv_bar_set_min_value(lv_bar_0, 0);
        lv_bar_set_max_value(lv_bar_0, 100);
        lv_bar_set_value(lv_bar_0, 62, false);
        lv_obj_set_style_bg_color(lv_bar_0, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_bar_0, (255 * 100 / 100), 0);
        lv_obj_set_style_radius(lv_bar_0, 999, 0);
        lv_obj_add_style(lv_bar_0, &loading_fill, LV_PART_INDICATOR);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

