/**
 * @file api_config_portrait_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "api_config_portrait_gen.h"
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

lv_obj_t * api_config_portrait_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "api_config_portrait_#");
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
        lv_obj_set_width(lv_label_0, 247);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình API");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 59);
        lv_obj_set_y(lv_label_1, 36);
        lv_obj_set_width(lv_label_1, 238);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Endpoint và xác thực dịch vụ");
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
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 68);
        lv_obj_set_width(lv_obj_3, 296);
        lv_obj_set_height(lv_obj_3, 62);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 79);
        lv_obj_set_width(lv_obj_4, 39);
        lv_obj_set_height(lv_obj_4, 39);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_2, 23);
        lv_obj_set_y(lv_label_2, 88);
        lv_obj_set_width(lv_label_2, 39);
        lv_obj_set_height(lv_label_2, 22);
        lv_label_set_text(lv_label_2, "API");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 72);
        lv_obj_set_y(lv_label_3, 76);
        lv_obj_set_width(lv_label_3, 183);
        lv_obj_set_height(lv_label_3, 21);
        lv_label_set_text(lv_label_3, "Xóm Coding API");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 72);
        lv_obj_set_y(lv_label_4, 101);
        lv_obj_set_width(lv_label_4, 182);
        lv_obj_set_height(lv_label_4, 18);
        lv_label_set_text(lv_label_4, "Dịch vụ dữ liệu từ xa");
        lv_obj_set_style_text_font(lv_label_4, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 260);
        lv_obj_set_y(lv_obj_5, 92);
        lv_obj_set_width(lv_obj_5, 7);
        lv_obj_set_height(lv_obj_5, 7);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_radius(lv_obj_5, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 272);
        lv_obj_set_y(lv_label_5, 86);
        lv_obj_set_width(lv_label_5, 25);
        lv_obj_set_height(lv_label_5, 18);
        lv_label_set_text(lv_label_5, "OK");
        lv_obj_set_style_text_font(lv_label_5, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x34d399), 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 13);
        lv_obj_set_y(lv_label_6, 138);
        lv_obj_set_width(lv_label_6, 250);
        lv_obj_set_height(lv_label_6, 19);
        lv_label_set_text(lv_label_6, "THÔNG TIN API");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 12);
        lv_obj_set_y(lv_obj_6, 160);
        lv_obj_set_width(lv_obj_6, 296);
        lv_obj_set_height(lv_obj_6, 211);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 24);
        lv_obj_set_y(lv_label_7, 169);
        lv_obj_set_width(lv_label_7, 222);
        lv_obj_set_height(lv_label_7, 19);
        lv_label_set_text(lv_label_7, "API Endpoint");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_endpoint = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(api_config_endpoint, "api_config_endpoint");
        lv_obj_set_x(api_config_endpoint, 24);
        lv_obj_set_y(api_config_endpoint, 190);
        lv_obj_set_width(api_config_endpoint, 272);
        lv_obj_set_height(api_config_endpoint, 33);
        lv_textarea_set_text(api_config_endpoint, "https://api.example.com");
        lv_obj_set_style_text_font(api_config_endpoint, be_medium_12, 0);
        lv_obj_set_style_text_color(api_config_endpoint, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(api_config_endpoint, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(api_config_endpoint, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_endpoint, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(api_config_endpoint, 1, 0);
        lv_obj_set_style_radius(api_config_endpoint, 8, 0);
        lv_obj_set_style_pad_left(api_config_endpoint, 10, 0);
        lv_obj_set_style_pad_right(api_config_endpoint, 10, 0);
        lv_obj_set_style_pad_top(api_config_endpoint, 6, 0);
        lv_obj_set_style_pad_bottom(api_config_endpoint, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 24);
        lv_obj_set_y(lv_label_8, 232);
        lv_obj_set_width(lv_label_8, 242);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Phương thức xác thực");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_auth_none = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_none, "api_config_auth_none");
        lv_obj_set_x(api_config_auth_none, 24);
        lv_obj_set_y(api_config_auth_none, 255);
        lv_obj_set_width(api_config_auth_none, 82);
        lv_obj_set_height(api_config_auth_none, 31);
        lv_obj_set_style_bg_color(api_config_auth_none, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(api_config_auth_none, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_none, 0, 0);
        lv_obj_set_style_radius(api_config_auth_none, 8, 0);
        lv_obj_set_style_shadow_width(api_config_auth_none, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_none, 0, 0);
        lv_obj_t * lv_label_9 = lv_label_create(api_config_auth_none);
        lv_obj_set_align(lv_label_9, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_9, "Không");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * api_config_auth_bearer = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_bearer, "api_config_auth_bearer");
        lv_obj_set_x(api_config_auth_bearer, 112);
        lv_obj_set_y(api_config_auth_bearer, 255);
        lv_obj_set_width(api_config_auth_bearer, 88);
        lv_obj_set_height(api_config_auth_bearer, 31);
        lv_obj_set_style_bg_color(api_config_auth_bearer, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(api_config_auth_bearer, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_bearer, 0, 0);
        lv_obj_set_style_radius(api_config_auth_bearer, 8, 0);
        lv_obj_set_style_shadow_width(api_config_auth_bearer, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_bearer, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(api_config_auth_bearer);
        lv_obj_set_align(lv_label_10, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_10, "Bearer");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * api_config_auth_key = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_key, "api_config_auth_key");
        lv_obj_set_x(api_config_auth_key, 206);
        lv_obj_set_y(api_config_auth_key, 255);
        lv_obj_set_width(api_config_auth_key, 90);
        lv_obj_set_height(api_config_auth_key, 31);
        lv_obj_set_style_bg_color(api_config_auth_key, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(api_config_auth_key, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_key, 0, 0);
        lv_obj_set_style_radius(api_config_auth_key, 8, 0);
        lv_obj_set_style_shadow_width(api_config_auth_key, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_key, 0, 0);
        lv_obj_t * lv_label_11 = lv_label_create(api_config_auth_key);
        lv_obj_set_align(lv_label_11, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_11, "API Key");
        lv_obj_set_style_text_font(lv_label_11, be_medium_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 24);
        lv_obj_set_y(lv_label_12, 295);
        lv_obj_set_width(lv_label_12, 235);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Token / API Key");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_token = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(api_config_token, "api_config_token");
        lv_obj_set_x(api_config_token, 24);
        lv_obj_set_y(api_config_token, 317);
        lv_obj_set_width(api_config_token, 272);
        lv_obj_set_height(api_config_token, 33);
        lv_textarea_set_text(api_config_token, "");
        lv_obj_set_style_text_font(api_config_token, be_medium_12, 0);
        lv_obj_set_style_text_color(api_config_token, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(api_config_token, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(api_config_token, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_token, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(api_config_token, 1, 0);
        lv_obj_set_style_radius(api_config_token, 8, 0);
        lv_obj_set_style_pad_left(api_config_token, 10, 0);
        lv_obj_set_style_pad_right(api_config_token, 10, 0);
        lv_obj_set_style_pad_top(api_config_token, 6, 0);
        lv_obj_set_style_pad_bottom(api_config_token, 0, 0);

        lv_obj_t * lv_label_13 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_13, 24);
        lv_obj_set_y(lv_label_13, 353);
        lv_obj_set_width(lv_label_13, 270);
        lv_obj_set_height(lv_label_13, 16);
        lv_label_set_text(lv_label_13, "Không hiển thị token trong nhật ký.");
        lv_obj_set_style_text_font(lv_label_13, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 381);
        lv_obj_set_width(lv_obj_7, 296);
        lv_obj_set_height(lv_obj_7, 43);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 23);
        lv_obj_set_y(lv_obj_8, 392);
        lv_obj_set_width(lv_obj_8, 7);
        lv_obj_set_height(lv_obj_8, 7);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x34d399), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_14 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_14, 36);
        lv_obj_set_y(lv_label_14, 385);
        lv_obj_set_width(lv_label_14, 258);
        lv_obj_set_height(lv_label_14, 19);
        lv_label_set_text(lv_label_14, "Trạng thái API");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_15 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_15, 36);
        lv_obj_set_y(lv_label_15, 404);
        lv_obj_set_width(lv_label_15, 258);
        lv_obj_set_height(lv_label_15, 16);
        lv_label_set_text(lv_label_15, "Chưa kiểm tra kết nối");
        lv_obj_set_style_text_font(lv_label_15, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * api_config_test = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_test, "api_config_test");
        lv_obj_set_x(api_config_test, 12);
        lv_obj_set_y(api_config_test, 434);
        lv_obj_set_width(api_config_test, 140);
        lv_obj_set_height(api_config_test, 36);
        lv_obj_set_style_bg_color(api_config_test, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(api_config_test, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_test, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(api_config_test, 1, 0);
        lv_obj_set_style_radius(api_config_test, 10, 0);
        lv_obj_set_style_shadow_width(api_config_test, 0, 0);
        lv_obj_set_style_pad_all(api_config_test, 0, 0);
        lv_obj_t * lv_label_16 = lv_label_create(api_config_test);
        lv_obj_set_align(lv_label_16, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_16, "Kiểm tra");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_save = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_save, "api_config_save");
        lv_obj_set_x(api_config_save, 160);
        lv_obj_set_y(api_config_save, 434);
        lv_obj_set_width(api_config_save, 148);
        lv_obj_set_height(api_config_save, 36);
        lv_obj_set_style_bg_color(api_config_save, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(api_config_save, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_save, 0, 0);
        lv_obj_set_style_radius(api_config_save, 10, 0);
        lv_obj_set_style_shadow_width(api_config_save, 0, 0);
        lv_obj_set_style_pad_all(api_config_save, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(api_config_save);
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_17, "Lưu cấu hình");
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

