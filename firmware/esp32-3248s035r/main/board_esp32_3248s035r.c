#include "board_esp32_3248s035r.h"

#include "driver/gpio.h"
#include "driver/spi_master.h"
#include "esp_check.h"
#include "esp_heap_caps.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_st7796.h"
#include "esp_lcd_touch.h"
#include "esp_lcd_touch_xpt2046.h"
#include "esp_log.h"
#include "esp_lvgl_port.h"

#include "xom_touch.h"

static const char * TAG = "xom_board";

#define XOM_SPI_HOST SPI2_HOST

#define XOM_PIN_LCD_MOSI GPIO_NUM_13
#define XOM_PIN_LCD_MISO GPIO_NUM_12
#define XOM_PIN_LCD_SCLK GPIO_NUM_14
#define XOM_PIN_LCD_CS GPIO_NUM_15
#define XOM_PIN_LCD_DC GPIO_NUM_2
#define XOM_PIN_LCD_RST GPIO_NUM_NC
#define XOM_PIN_LCD_BK_LIGHT GPIO_NUM_27
#define XOM_LCD_BK_LIGHT_ON_LEVEL 1
#define XOM_LCD_BK_LIGHT_OFF_LEVEL 0

#define XOM_PIN_TOUCH_CS GPIO_NUM_33
#define XOM_PIN_TOUCH_IRQ GPIO_NUM_36
#define XOM_PIN_TOUCH_RST GPIO_NUM_NC

#define XOM_LCD_PIXEL_CLOCK_HZ (24 * 1000 * 1000)
#define XOM_TOUCH_PIXEL_CLOCK_HZ (2 * 1000 * 1000)
#define XOM_LVGL_DRAW_BUF_LINES 40
#define XOM_LVGL_DRAW_BUF_PIXELS (XOM_LCD_H_RES * XOM_LVGL_DRAW_BUF_LINES)
#define XOM_LCD_MAX_TRANSFER_BYTES (XOM_LVGL_DRAW_BUF_PIXELS * 2)

static esp_err_t xom_backlight_init(void)
{
    gpio_config_t bk_gpio_config = {
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = 1ULL << XOM_PIN_LCD_BK_LIGHT,
    };
    ESP_RETURN_ON_ERROR(gpio_config(&bk_gpio_config), TAG, "Configure backlight GPIO failed");
    ESP_RETURN_ON_ERROR(gpio_set_level(XOM_PIN_LCD_BK_LIGHT, XOM_LCD_BK_LIGHT_OFF_LEVEL),
                        TAG, "Set backlight off failed");
    return ESP_OK;
}

static esp_err_t xom_backlight_set(bool on)
{
    return gpio_set_level(XOM_PIN_LCD_BK_LIGHT,
                          on ? XOM_LCD_BK_LIGHT_ON_LEVEL : XOM_LCD_BK_LIGHT_OFF_LEVEL);
}

esp_err_t xom_board_display_start(xom_board_display_t * out_display)
{
    ESP_RETURN_ON_FALSE(out_display != NULL, ESP_ERR_INVALID_ARG, TAG, "out_display is NULL");
    *out_display = (xom_board_display_t) {
        .hor_res = XOM_LCD_H_RES,
        .ver_res = XOM_LCD_V_RES,
        .has_touch = true,
    };

    ESP_LOGI(TAG, "Initialize ESP32-3248S035R ST7796 + XPT2046 display path");
    ESP_RETURN_ON_ERROR(xom_backlight_init(), TAG, "Backlight init failed");

    spi_bus_config_t buscfg = {
        .sclk_io_num = XOM_PIN_LCD_SCLK,
        .mosi_io_num = XOM_PIN_LCD_MOSI,
        .miso_io_num = XOM_PIN_LCD_MISO,
        .quadwp_io_num = GPIO_NUM_NC,
        .quadhd_io_num = GPIO_NUM_NC,
        .max_transfer_sz = XOM_LCD_MAX_TRANSFER_BYTES,
    };
    ESP_RETURN_ON_ERROR(spi_bus_initialize(XOM_SPI_HOST, &buscfg, SPI_DMA_CH_AUTO),
                        TAG, "SPI bus init failed");

    esp_lcd_panel_io_handle_t lcd_io = NULL;
    esp_lcd_panel_io_spi_config_t lcd_io_config = {
        .cs_gpio_num = XOM_PIN_LCD_CS,
        .dc_gpio_num = XOM_PIN_LCD_DC,
        .spi_mode = 0,
        .pclk_hz = XOM_LCD_PIXEL_CLOCK_HZ,
        .trans_queue_depth = 2,
        .lcd_cmd_bits = 8,
        .lcd_param_bits = 8,
    };
    ESP_RETURN_ON_ERROR(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)XOM_SPI_HOST,
                                                &lcd_io_config, &lcd_io),
                        TAG, "LCD panel IO init failed");

    esp_lcd_panel_handle_t lcd_panel = NULL;
    esp_lcd_panel_dev_config_t panel_config = {
        .reset_gpio_num = XOM_PIN_LCD_RST,
        .rgb_ele_order = LCD_RGB_ELEMENT_ORDER_BGR,
        .bits_per_pixel = 16,
    };
    ESP_RETURN_ON_ERROR(esp_lcd_new_panel_st7796(lcd_io, &panel_config, &lcd_panel),
                        TAG, "ST7796 panel create failed");
    ESP_RETURN_ON_ERROR(esp_lcd_panel_reset(lcd_panel), TAG, "LCD reset failed");
    ESP_RETURN_ON_ERROR(esp_lcd_panel_init(lcd_panel), TAG, "LCD init failed");
    ESP_RETURN_ON_ERROR(esp_lcd_panel_swap_xy(lcd_panel, false), TAG, "LCD swap_xy failed");
    ESP_RETURN_ON_ERROR(esp_lcd_panel_mirror(lcd_panel, true, false), TAG, "LCD mirror failed");
    ESP_RETURN_ON_ERROR(esp_lcd_panel_disp_on_off(lcd_panel, true), TAG, "LCD display on failed");

    lvgl_port_cfg_t lvgl_cfg = ESP_LVGL_PORT_INIT_CONFIG();
    lvgl_cfg.task_stack = 8192;
    lvgl_cfg.task_priority = 4;
    lvgl_cfg.timer_period_ms = 5;
    ESP_RETURN_ON_ERROR(lvgl_port_init(&lvgl_cfg), TAG, "LVGL port init failed");

    lvgl_port_display_cfg_t disp_cfg = {
        .io_handle = lcd_io,
        .panel_handle = lcd_panel,
        .buffer_size = XOM_LVGL_DRAW_BUF_PIXELS,
        .double_buffer = true,
        .hres = XOM_LCD_H_RES,
        .vres = XOM_LCD_V_RES,
        .monochrome = false,
        .rotation = {
            .swap_xy = false,
            .mirror_x = true,
            .mirror_y = false,
        },
        .color_format = LV_COLOR_FORMAT_RGB565,
        .flags = {
            .buff_dma = true,
            .buff_spiram = false,
            .swap_bytes = true,
        },
    };
    out_display->display = lvgl_port_add_disp(&disp_cfg);
    ESP_RETURN_ON_FALSE(out_display->display != NULL, ESP_ERR_NO_MEM, TAG, "LVGL display add failed");

    esp_lcd_panel_io_handle_t touch_io = NULL;
    esp_lcd_panel_io_spi_config_t touch_io_config =
        ESP_LCD_TOUCH_IO_SPI_XPT2046_CONFIG(XOM_PIN_TOUCH_CS);
    touch_io_config.pclk_hz = XOM_TOUCH_PIXEL_CLOCK_HZ;
    ESP_RETURN_ON_ERROR(esp_lcd_new_panel_io_spi((esp_lcd_spi_bus_handle_t)XOM_SPI_HOST,
                                                &touch_io_config, &touch_io),
                        TAG, "Touch panel IO init failed");

    esp_lcd_touch_handle_t touch_handle = NULL;
    esp_lcd_touch_config_t touch_config = {
        .x_max = XOM_LCD_H_RES,
        .y_max = XOM_LCD_V_RES,
        .rst_gpio_num = XOM_PIN_TOUCH_RST,
        .int_gpio_num = XOM_PIN_TOUCH_IRQ,
        .levels = {
            .reset = 0,
            .interrupt = 0,
        },
        .flags = {
            .swap_xy = false,
            .mirror_x = false,
            .mirror_y = false,
        },
        /*
         * Raw 12-bit ADC samples are delivered by the XPT2046 driver
         * (CONFIG_XPT2046_CONVERT_ADC_TO_COORDS disabled). This callback maps
         * them to calibrated screen pixels.
         */
        .process_coordinates = xom_touch_process_coordinates,
    };
    ESP_RETURN_ON_ERROR(esp_lcd_touch_new_spi_xpt2046(touch_io, &touch_config, &touch_handle),
                        TAG, "XPT2046 touch create failed");

    lvgl_port_touch_cfg_t touch_cfg = {
        .disp = out_display->display,
        .handle = touch_handle,
        .scale = {
            .x = 1.0f,
            .y = 1.0f,
        },
    };
    out_display->touch_indev = lvgl_port_add_touch(&touch_cfg);
    ESP_RETURN_ON_FALSE(out_display->touch_indev != NULL, ESP_ERR_NO_MEM,
                        TAG, "LVGL touch add failed");

    ESP_RETURN_ON_ERROR(xom_backlight_set(true), TAG, "Backlight on failed");

    ESP_LOGI(TAG, "Display ready, free heap=%lu, DMA heap=%lu",
             (unsigned long)heap_caps_get_free_size(MALLOC_CAP_8BIT),
             (unsigned long)heap_caps_get_free_size(MALLOC_CAP_DMA));

    return ESP_OK;
}
