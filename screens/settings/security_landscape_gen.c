/**
 * @file security_landscape_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "security_landscape_gen.h"
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

lv_obj_t * security_landscape_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t security_land_switch_main;
    static lv_style_t security_land_switch_checked;
    static lv_style_t security_land_switch_knob;

    static bool style_inited = false;

    if (!style_inited) {
        /*Init all styles*/
        lv_style_init(&security_land_switch_main);
        lv_style_init(&security_land_switch_checked);
        lv_style_init(&security_land_switch_knob);

        lv_style_set_bg_color(&security_land_switch_main, lv_color_hex(0x344256));
        lv_style_set_bg_opa(&security_land_switch_main, (255 * 100 / 100));
        lv_style_set_radius(&security_land_switch_main, 999);
        lv_style_set_pad_all(&security_land_switch_main, 3);
        lv_style_set_border_width(&security_land_switch_main, 0);
        lv_style_set_bg_color(&security_land_switch_checked, lv_color_hex(0xa52a26));
        lv_style_set_bg_opa(&security_land_switch_checked, (255 * 100 / 100));
        lv_style_set_radius(&security_land_switch_checked, 999);
        lv_style_set_bg_color(&security_land_switch_knob, lv_color_hex(0xffffff));
        lv_style_set_bg_opa(&security_land_switch_knob, (255 * 100 / 100));
        lv_style_set_radius(&security_land_switch_knob, 999);
        lv_style_set_pad_all(&security_land_switch_knob, 0);
        lv_style_set_border_width(&security_land_switch_knob, 0);
        lv_style_set_shadow_color(&security_land_switch_knob, lv_color_hex(0x000000));
        lv_style_set_shadow_opa(&security_land_switch_knob, (255 * 25 / 100));
        lv_style_set_shadow_width(&security_land_switch_knob, 4);

        style_inited = true;
    }


    lv_obj_t * the_root = NULL;

    #if XOMCODINGUI_CHECK_COMPILE_TARGET(XOMCODINGUI_TARGET_ALL)
    if (xomcodingui_check_target(XOMCODINGUI_TARGET_ALL)) {
        lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
        lv_obj_set_name_static(lv_obj_0, "security_landscape_#");
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
        lv_label_set_text(lv_label_0, "Bảo mật và hệ thống");
        lv_obj_set_style_text_font(lv_label_0, be_semibold_20, 0);
        lv_obj_set_style_text_color(lv_label_0, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_1, 57);
        lv_obj_set_y(lv_label_1, 32);
        lv_obj_set_width(lv_label_1, 290);
        lv_obj_set_height(lv_label_1, 17);
        lv_label_set_text(lv_label_1, "Bảo vệ, cập nhật và bảo trì");
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
        lv_label_set_text(lv_label_2, "BẢO MẬT THIẾT BỊ");
        lv_obj_set_style_text_font(lv_label_2, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_2, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_3, 12);
        lv_obj_set_y(lv_obj_3, 84);
        lv_obj_set_width(lv_obj_3, 220);
        lv_obj_set_height(lv_obj_3, 184);
        lv_obj_set_style_bg_color(lv_obj_3, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_3, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_3, 1, 0);
        lv_obj_set_style_radius(lv_obj_3, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_3, 23);
        lv_obj_set_y(lv_label_3, 95);
        lv_obj_set_width(lv_label_3, 149);
        lv_obj_set_height(lv_label_3, 19);
        lv_label_set_text(lv_label_3, "Khóa màn hình");
        lv_obj_set_style_text_font(lv_label_3, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_3, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_4, 23);
        lv_obj_set_y(lv_label_4, 118);
        lv_obj_set_width(lv_label_4, 192);
        lv_obj_set_height(lv_label_4, 16);
        lv_label_set_text(lv_label_4, "Yêu cầu PIN khi mở khóa");
        lv_obj_set_style_text_font(lv_label_4, be_medium_10, 0);
        lv_obj_set_style_text_color(lv_label_4, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * security_screen_lock_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(security_screen_lock_enabled_landscape, "security_screen_lock_enabled_landscape");
        lv_obj_set_x(security_screen_lock_enabled_landscape, 181);
        lv_obj_set_y(security_screen_lock_enabled_landscape, 95);
        lv_obj_set_width(security_screen_lock_enabled_landscape, 40);
        lv_obj_set_height(security_screen_lock_enabled_landscape, 22);
        lv_obj_set_state(security_screen_lock_enabled_landscape, LV_STATE_CHECKED, false);
        lv_obj_add_style(security_screen_lock_enabled_landscape, &security_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(security_screen_lock_enabled_landscape, &security_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(security_screen_lock_enabled_landscape, &security_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_4, 23);
        lv_obj_set_y(lv_obj_4, 143);
        lv_obj_set_width(lv_obj_4, 198);
        lv_obj_set_height(lv_obj_4, 1);
        lv_obj_set_style_bg_color(lv_obj_4, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_5, 23);
        lv_obj_set_y(lv_label_5, 157);
        lv_obj_set_width(lv_label_5, 155);
        lv_obj_set_height(lv_label_5, 19);
        lv_label_set_text(lv_label_5, "Xác thực truy cập");
        lv_obj_set_style_text_font(lv_label_5, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_5, lv_color_hex(0xffffff), 0);

        lv_obj_t * security_auth_enabled_landscape = lv_switch_create(lv_obj_0);
        lv_obj_set_name(security_auth_enabled_landscape, "security_auth_enabled_landscape");
        lv_obj_set_x(security_auth_enabled_landscape, 181);
        lv_obj_set_y(security_auth_enabled_landscape, 155);
        lv_obj_set_width(security_auth_enabled_landscape, 40);
        lv_obj_set_height(security_auth_enabled_landscape, 22);
        lv_obj_set_state(security_auth_enabled_landscape, LV_STATE_CHECKED, true);
        lv_obj_add_style(security_auth_enabled_landscape, &security_land_switch_main, LV_PART_MAIN);
        lv_obj_add_style(security_auth_enabled_landscape, &security_land_switch_checked, LV_PART_INDICATOR | LV_STATE_CHECKED);
        lv_obj_add_style(security_auth_enabled_landscape, &security_land_switch_knob, LV_PART_KNOB);

        lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_5, 23);
        lv_obj_set_y(lv_obj_5, 190);
        lv_obj_set_width(lv_obj_5, 198);
        lv_obj_set_height(lv_obj_5, 1);
        lv_obj_set_style_bg_color(lv_obj_5, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_5, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_5, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

        lv_obj_t * btn_security_change_pin_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_security_change_pin_landscape, "btn_security_change_pin_landscape");
        lv_obj_set_x(btn_security_change_pin_landscape, 22);
        lv_obj_set_y(btn_security_change_pin_landscape, 203);
        lv_obj_set_width(btn_security_change_pin_landscape, 200);
        lv_obj_set_height(btn_security_change_pin_landscape, 43);
        lv_obj_set_style_bg_color(btn_security_change_pin_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_security_change_pin_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_security_change_pin_landscape, 0, 0);
        lv_obj_set_style_radius(btn_security_change_pin_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_security_change_pin_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_security_change_pin_landscape, 0, 0);
        lv_obj_t * lv_label_6 = lv_label_create(btn_security_change_pin_landscape);
        lv_obj_set_x(lv_label_6, 11);
        lv_obj_set_y(lv_label_6, 12);
        lv_obj_set_width(lv_label_6, 157);
        lv_obj_set_height(lv_label_6, 20);
        lv_label_set_text(lv_label_6, "Thay đổi mã PIN");
        lv_obj_set_style_text_font(lv_label_6, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_6, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_1 = lv_image_create(btn_security_change_pin_landscape);
        lv_obj_set_x(lv_image_1, 172);
        lv_obj_set_y(lv_image_1, 10);
        lv_obj_set_width(lv_image_1, 24);
        lv_obj_set_height(lv_image_1, 24);
        lv_image_set_src(lv_image_1, ui_next);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_7, 241);
        lv_obj_set_y(lv_label_7, 62);
        lv_obj_set_width(lv_label_7, 215);
        lv_obj_set_height(lv_label_7, 18);
        lv_label_set_text(lv_label_7, "CẬP NHẬT FIRMWARE");
        lv_obj_set_style_text_font(lv_label_7, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_7, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_6, 240);
        lv_obj_set_y(lv_obj_6, 84);
        lv_obj_set_width(lv_obj_6, 228);
        lv_obj_set_height(lv_obj_6, 75);
        lv_obj_set_style_bg_color(lv_obj_6, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_6, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_6, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_6, 1, 0);
        lv_obj_set_style_radius(lv_obj_6, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_6, 0, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_8, 251);
        lv_obj_set_y(lv_label_8, 94);
        lv_obj_set_width(lv_label_8, 136);
        lv_obj_set_height(lv_label_8, 19);
        lv_label_set_text(lv_label_8, "Phiên bản hiện tại");
        lv_obj_set_style_text_font(lv_label_8, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_8, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_label_9 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_9, 389);
        lv_obj_set_y(lv_label_9, 94);
        lv_obj_set_width(lv_label_9, 67);
        lv_obj_set_height(lv_label_9, 19);
        lv_label_set_text(lv_label_9, "v1.0.0");
        lv_obj_set_style_text_font(lv_label_9, be_medium_12, 0);
        lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_RIGHT, 0);
        lv_obj_set_style_text_color(lv_label_9, lv_color_hex(0xe28d88), 0);

        lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_7, 251);
        lv_obj_set_y(lv_obj_7, 121);
        lv_obj_set_width(lv_obj_7, 206);
        lv_obj_set_height(lv_obj_7, 1);
        lv_obj_set_style_bg_color(lv_obj_7, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_bg_opa(lv_obj_7, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_7, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_7, 0, 0);

        lv_obj_t * btn_security_ota_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_security_ota_landscape, "btn_security_ota_landscape");
        lv_obj_set_x(btn_security_ota_landscape, 250);
        lv_obj_set_y(btn_security_ota_landscape, 126);
        lv_obj_set_width(btn_security_ota_landscape, 207);
        lv_obj_set_height(btn_security_ota_landscape, 28);
        lv_obj_set_style_bg_color(btn_security_ota_landscape, lv_color_hex(0x213247), 0);
        lv_obj_set_style_bg_opa(btn_security_ota_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_security_ota_landscape, 0, 0);
        lv_obj_set_style_radius(btn_security_ota_landscape, 7, 0);
        lv_obj_set_style_shadow_width(btn_security_ota_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_security_ota_landscape, 0, 0);
        lv_obj_t * lv_label_10 = lv_label_create(btn_security_ota_landscape);
        lv_obj_set_x(lv_label_10, 8);
        lv_obj_set_y(lv_label_10, 6);
        lv_obj_set_width(lv_label_10, 166);
        lv_obj_set_height(lv_label_10, 18);
        lv_label_set_text(lv_label_10, "Kiểm tra cập nhật OTA");
        lv_obj_set_style_text_font(lv_label_10, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_10, lv_color_hex(0xffffff), 0);

        lv_obj_t * lv_image_2 = lv_image_create(btn_security_ota_landscape);
        lv_obj_set_x(lv_image_2, 180);
        lv_obj_set_y(lv_image_2, 2);
        lv_obj_set_width(lv_image_2, 24);
        lv_obj_set_height(lv_image_2, 24);
        lv_image_set_src(lv_image_2, ui_next);

        lv_obj_t * lv_label_11 = lv_label_create(lv_obj_0);
        lv_obj_set_x(lv_label_11, 241);
        lv_obj_set_y(lv_label_11, 169);
        lv_obj_set_width(lv_label_11, 210);
        lv_obj_set_height(lv_label_11, 18);
        lv_label_set_text(lv_label_11, "BẢO TRÌ HỆ THỐNG");
        lv_obj_set_style_text_font(lv_label_11, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_11, lv_color_hex(0x94a3b8), 0);

        lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
        lv_obj_set_x(lv_obj_8, 240);
        lv_obj_set_y(lv_obj_8, 191);
        lv_obj_set_width(lv_obj_8, 228);
        lv_obj_set_height(lv_obj_8, 77);
        lv_obj_set_style_bg_color(lv_obj_8, lv_color_hex(0x172332), 0);
        lv_obj_set_style_bg_opa(lv_obj_8, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(lv_obj_8, lv_color_hex(0x29394d), 0);
        lv_obj_set_style_border_width(lv_obj_8, 1, 0);
        lv_obj_set_style_radius(lv_obj_8, 11, 0);
        lv_obj_set_style_pad_all(lv_obj_8, 0, 0);

        lv_obj_t * btn_security_restart_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_security_restart_landscape, "btn_security_restart_landscape");
        lv_obj_set_x(btn_security_restart_landscape, 251);
        lv_obj_set_y(btn_security_restart_landscape, 197);
        lv_obj_set_width(btn_security_restart_landscape, 206);
        lv_obj_set_height(btn_security_restart_landscape, 30);
        lv_obj_set_style_bg_color(btn_security_restart_landscape, lv_color_hex(0x233247), 0);
        lv_obj_set_style_bg_opa(btn_security_restart_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_security_restart_landscape, 0, 0);
        lv_obj_set_style_radius(btn_security_restart_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_security_restart_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_security_restart_landscape, 0, 0);
        lv_obj_t * lv_label_12 = lv_label_create(btn_security_restart_landscape);
        lv_obj_set_align(lv_label_12, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_12, "Khởi động lại thiết bị");
        lv_obj_set_style_text_font(lv_label_12, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_12, lv_color_hex(0xffffff), 0);

        lv_obj_t * btn_security_reset_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_security_reset_landscape, "btn_security_reset_landscape");
        lv_obj_set_x(btn_security_reset_landscape, 251);
        lv_obj_set_y(btn_security_reset_landscape, 232);
        lv_obj_set_width(btn_security_reset_landscape, 206);
        lv_obj_set_height(btn_security_reset_landscape, 30);
        lv_obj_set_style_bg_color(btn_security_reset_landscape, lv_color_hex(0x39272a), 0);
        lv_obj_set_style_bg_opa(btn_security_reset_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_color(btn_security_reset_landscape, lv_color_hex(0x70403d), 0);
        lv_obj_set_style_border_width(btn_security_reset_landscape, 1, 0);
        lv_obj_set_style_radius(btn_security_reset_landscape, 8, 0);
        lv_obj_set_style_shadow_width(btn_security_reset_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_security_reset_landscape, 0, 0);
        lv_obj_t * lv_label_13 = lv_label_create(btn_security_reset_landscape);
        lv_obj_set_align(lv_label_13, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_13, "Khôi phục cài đặt gốc");
        lv_obj_set_style_text_font(lv_label_13, be_semibold_12, 0);
        lv_obj_set_style_text_color(lv_label_13, lv_color_hex(0xe28d88), 0);

        lv_obj_t * btn_security_save_landscape = lv_button_create(lv_obj_0);
        lv_obj_set_name(btn_security_save_landscape, "btn_security_save_landscape");
        lv_obj_set_x(btn_security_save_landscape, 12);
        lv_obj_set_y(btn_security_save_landscape, 278);
        lv_obj_set_width(btn_security_save_landscape, 456);
        lv_obj_set_height(btn_security_save_landscape, 30);
        lv_obj_set_style_bg_color(btn_security_save_landscape, lv_color_hex(0xa52a26), 0);
        lv_obj_set_style_bg_opa(btn_security_save_landscape, (255 * 100 / 100), 0);
        lv_obj_set_style_border_width(btn_security_save_landscape, 0, 0);
        lv_obj_set_style_radius(btn_security_save_landscape, 9, 0);
        lv_obj_set_style_shadow_width(btn_security_save_landscape, 0, 0);
        lv_obj_set_style_pad_all(btn_security_save_landscape, 0, 0);
        lv_obj_t * lv_label_14 = lv_label_create(btn_security_save_landscape);
        lv_obj_set_align(lv_label_14, LV_ALIGN_CENTER);
        lv_label_set_text(lv_label_14, "Lưu cài đặt bảo mật");
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

