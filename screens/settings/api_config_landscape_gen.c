/**
 * @file api_config_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "api_config_landscape_gen.h"
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

lv_obj_t * api_config_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "api_config_landscape_#");
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
        lv_obj_set_width(lv_label_0, 280);
        lv_obj_set_height(lv_label_0, 28);
        lv_label_set_text(lv_label_0, "Cấu hình API");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 280);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Endpoint và xác thực dịch vụ");
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
        lv_obj_set_y(lv_label_2, 62);
        lv_obj_set_width(lv_label_2, 210);
        lv_obj_set_height(lv_label_2, 18);
        lv_label_set_text(lv_label_2, "DỊCH VỤ API");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 108);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 22);
        lv_obj_set_y(lv_obj_4, 98);
        lv_obj_set_width(lv_obj_4, 38);
        lv_obj_set_height(lv_obj_4, 38);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_radius(lv_obj_4, 9, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 22);
        lv_obj_set_y(lv_label_3, 107);
        lv_obj_set_width(lv_label_3, 38);
        lv_obj_set_height(lv_label_3, 20);
        lv_label_set_text(lv_label_3, "API");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_14, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 69);
        lv_obj_set_y(lv_label_4, 97);
        lv_obj_set_width(lv_label_4, 151);
        lv_obj_set_height(lv_label_4, 22);
        lv_label_set_text(lv_label_4, "Xóm Coding API");
        lv_obj_set_style_text_font(lv_label_4, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 69);
        lv_obj_set_y(lv_label_5, 123);
        lv_obj_set_width(lv_label_5, 150);
        lv_obj_set_height(lv_label_5, 17);
        lv_label_set_text(lv_label_5, "Dịch vụ dữ liệu từ xa");
        lv_obj_set_style_text_font(lv_label_5, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 22);
        lv_obj_set_y(lv_obj_5, 149);
        lv_obj_set_width(lv_obj_5, 200);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 22);
        lv_obj_set_y(lv_obj_6, 170);
        lv_obj_set_width(lv_obj_6, 7);
        lv_obj_set_height(lv_obj_6, 7);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x64748b), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_6, 0, 0);
        lv_obj_set_style_radius(lv_obj_6, 4, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_6, 35);
        lv_obj_set_y(lv_label_6, 164);
        lv_obj_set_width(lv_label_6, 184);
        lv_obj_set_height(lv_label_6, 20);
        lv_label_set_text(lv_label_6, "Chưa kiểm tra kết nối");
        lv_obj_set_style_text_font(lv_label_6, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 13);
        lv_obj_set_y(lv_label_7, 202);
        lv_obj_set_width(lv_label_7, 215);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "TRẠNG THÁI KẾT NỐI");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 12);
        lv_obj_set_y(lv_obj_7, 224);
        lv_obj_set_width(lv_obj_7, 220);
        lv_obj_set_height(lv_obj_7, 44);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x121f2d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_7, 1, 0);
        lv_obj_set_style_radius(lv_obj_7, 10, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 22);
        lv_obj_set_y(lv_obj_8, 232);
        lv_obj_set_width(lv_obj_8, 3);
        lv_obj_set_height(lv_obj_8, 27);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_8, 0, 0);
        lv_obj_set_style_radius(lv_obj_8, 2, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 34);
        lv_obj_set_y(lv_label_8, 229);
        lv_obj_set_width(lv_label_8, 184);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Sẵn sàng kiểm tra");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 34);
        lv_obj_set_y(lv_label_9, 250);
        lv_obj_set_width(lv_label_9, 184);
        lv_obj_set_height(lv_label_9, 16);
        lv_label_set_text(lv_label_9, "Chưa gửi yêu cầu API");
        lv_obj_set_style_text_font(lv_label_9, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_10 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_10, 241);
        lv_obj_set_y(lv_label_10, 62);
        lv_obj_set_width(lv_label_10, 218);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "THÔNG TIN API");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_9, 240);
        lv_obj_set_y(lv_obj_9, 84);
        lv_obj_set_width(lv_obj_9, 228);
        lv_obj_set_height(lv_obj_9, 184);
        lv_obj_set_style_bg_color(lv_obj_9, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_9, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_9, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_9, 1, 0);
        lv_obj_set_style_radius(lv_obj_9, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_9, 0, 0);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 251);
        lv_obj_set_y(lv_label_11, 91);
        lv_obj_set_width(lv_label_11, 206);
        lv_obj_set_height(lv_label_11, 19);
        lv_label_set_text(lv_label_11, "API Endpoint");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_endpoint_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(api_config_endpoint_landscape, "api_config_endpoint_landscape");
        lv_obj_set_x(api_config_endpoint_landscape, 251);
        lv_obj_set_y(api_config_endpoint_landscape, 114);
        lv_obj_set_width(api_config_endpoint_landscape, 206);
        lv_obj_set_height(api_config_endpoint_landscape, 29);
        lv_textarea_set_text(api_config_endpoint_landscape, "https://api.example.com");
        lv_obj_set_style_text_font(api_config_endpoint_landscape, be_medium_11, 0);
        lv_obj_set_style_text_color(api_config_endpoint_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(api_config_endpoint_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(api_config_endpoint_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_endpoint_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(api_config_endpoint_landscape, 1, 0);
        lv_obj_set_style_radius(api_config_endpoint_landscape, 7, 0);
        lv_obj_set_style_pad_left(api_config_endpoint_landscape, 8, 0);
        lv_obj_set_style_pad_right(api_config_endpoint_landscape, 8, 0);
        lv_obj_set_style_pad_top(api_config_endpoint_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(api_config_endpoint_landscape, 0, 0);

        lv_obj_t * lv_label_12 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_12, 251);
        lv_obj_set_y(lv_label_12, 150);
        lv_obj_set_width(lv_label_12, 206);
        lv_obj_set_height(lv_label_12, 19);
        lv_label_set_text(lv_label_12, "Phương thức xác thực");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_auth_none_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_none_landscape, "api_config_auth_none_landscape");
        lv_obj_set_x(api_config_auth_none_landscape, 251);
        lv_obj_set_y(api_config_auth_none_landscape, 174);
        lv_obj_set_width(api_config_auth_none_landscape, 63);
        lv_obj_set_height(api_config_auth_none_landscape, 28);
        lv_obj_set_style_bg_color(api_config_auth_none_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(api_config_auth_none_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_none_landscape, 0, 0);
        lv_obj_set_style_radius(api_config_auth_none_landscape, 7, 0);
        lv_obj_set_style_shadow_width(api_config_auth_none_landscape, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_none_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(api_config_auth_none_landscape);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "Không");
        lv_obj_set_style_text_font(lv_label_13, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * api_config_auth_bearer_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_bearer_landscape, "api_config_auth_bearer_landscape");
        lv_obj_set_x(api_config_auth_bearer_landscape, 319);
        lv_obj_set_y(api_config_auth_bearer_landscape, 174);
        lv_obj_set_width(api_config_auth_bearer_landscape, 67);
        lv_obj_set_height(api_config_auth_bearer_landscape, 28);
        lv_obj_set_style_bg_color(api_config_auth_bearer_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(api_config_auth_bearer_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_bearer_landscape, 0, 0);
        lv_obj_set_style_radius(api_config_auth_bearer_landscape, 7, 0);
        lv_obj_set_style_shadow_width(api_config_auth_bearer_landscape, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_bearer_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(api_config_auth_bearer_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Bearer");
        lv_obj_set_style_text_font(lv_label_14, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_14, lv_color_hex(0xffffff), 0);

        lv_obj_t * api_config_auth_key_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_auth_key_landscape, "api_config_auth_key_landscape");
        lv_obj_set_x(api_config_auth_key_landscape, 391);
        lv_obj_set_y(api_config_auth_key_landscape, 174);
        lv_obj_set_width(api_config_auth_key_landscape, 66);
        lv_obj_set_height(api_config_auth_key_landscape, 28);
        lv_obj_set_style_bg_color(api_config_auth_key_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(api_config_auth_key_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_auth_key_landscape, 0, 0);
        lv_obj_set_style_radius(api_config_auth_key_landscape, 7, 0);
        lv_obj_set_style_shadow_width(api_config_auth_key_landscape, 0, 0);
        lv_obj_set_style_pad_all(api_config_auth_key_landscape, 0, 0);
        lv_obj_t * lv_label_15 = lv_label_create(api_config_auth_key_landscape);
        lv_obj_set_align(lv_label_15, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_15, "API Key");
        lv_obj_set_style_text_font(lv_label_15, be_medium_11, 0);
        lv_obj_set_style_text_color(lv_label_15, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_label_16 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_16, 251);
        lv_obj_set_y(lv_label_16, 211);
        lv_obj_set_width(lv_label_16, 206);
        lv_obj_set_height(lv_label_16, 19);
        lv_label_set_text(lv_label_16, "Token / API Key");
        lv_obj_set_style_text_font(lv_label_16, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_16, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_token_landscape = lv_textarea_create(lv_obj_0);
        lv_obj_set_name(api_config_token_landscape, "api_config_token_landscape");
        lv_obj_set_x(api_config_token_landscape, 251);
        lv_obj_set_y(api_config_token_landscape, 234);
        lv_obj_set_width(api_config_token_landscape, 206);
        lv_obj_set_height(api_config_token_landscape, 29);
        lv_textarea_set_text(api_config_token_landscape, "");
        lv_obj_set_style_text_font(api_config_token_landscape, be_medium_12, 0);
        lv_obj_set_style_text_color(api_config_token_landscape, lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_color(api_config_token_landscape, lv_color_hex(0x0f1b2a), 0);
        lv_obj_set_style_bg_opa(api_config_token_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_token_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(api_config_token_landscape, 1, 0);
        lv_obj_set_style_radius(api_config_token_landscape, 7, 0);
        lv_obj_set_style_pad_left(api_config_token_landscape, 9, 0);
        lv_obj_set_style_pad_right(api_config_token_landscape, 9, 0);
        lv_obj_set_style_pad_top(api_config_token_landscape, 5, 0);
        lv_obj_set_style_pad_bottom(api_config_token_landscape, 0, 0);

        lv_obj_t * api_config_test_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_test_landscape, "api_config_test_landscape");
        lv_obj_set_x(api_config_test_landscape, 12);
        lv_obj_set_y(api_config_test_landscape, 278);
        lv_obj_set_width(api_config_test_landscape, 220);
        lv_obj_set_height(api_config_test_landscape, 30);
        lv_obj_set_style_bg_color(api_config_test_landscape, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(api_config_test_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(api_config_test_landscape, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(api_config_test_landscape, 1, 0);
        lv_obj_set_style_radius(api_config_test_landscape, 9, 0);
        lv_obj_set_style_shadow_width(api_config_test_landscape, 0, 0);
        lv_obj_set_style_pad_all(api_config_test_landscape, 0, 0);
        lv_obj_t * lv_label_17 = lv_label_create(api_config_test_landscape);
        lv_obj_set_align(lv_label_17, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_17, "Kiểm tra kết nối");
        lv_obj_set_style_text_font(lv_label_17, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_17, lv_color_hex(0xe2e8f0), 0);

        lv_obj_t * api_config_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(api_config_save_landscape, "api_config_save_landscape");
        lv_obj_set_x(api_config_save_landscape, 240);
        lv_obj_set_y(api_config_save_landscape, 278);
        lv_obj_set_width(api_config_save_landscape, 228);
        lv_obj_set_height(api_config_save_landscape, 30);
        lv_obj_set_style_bg_color(api_config_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(api_config_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(api_config_save_landscape, 0, 0);
        lv_obj_set_style_radius(api_config_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(api_config_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(api_config_save_landscape, 0, 0);
        lv_obj_t * lv_label_18 = lv_label_create(api_config_save_landscape);
        lv_obj_set_align(lv_label_18, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_18, "Lưu cấu hình");
        lv_obj_set_style_text_font(lv_label_18, be_semibold_14, 0);
        lv_obj_set_style_text_color(lv_label_18, lv_color_hex(0xffffff), 0);

        the_root = lv_obj_0;
    }
    #endif

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

