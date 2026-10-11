
#include "xom_touch.h"

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "board_esp32_3248s035r.h"
#include "esp_log.h"
#include "nvs.h"
#include "xom_ui_style.h"

static const char *TAG = "xom_touch";

#define TOUCH_NS "xomtouch"
#define TOUCH_VER 1

/*
 * Filter sudden XPT2046 raw-coordinate jumps.
 *
 * Applies only during a continuous touch.
 * Does not change calibration data or NVS.
 *
 * A large jump in a single sample is treated as noise.
 * Normal gradual finger movement remains supported.
 */
#define XOM_TOUCH_MAX_RAW_JUMP 650

static xom_touch_calibration_t s_calibration = {
    .raw_min_x = 0,
    .raw_max_x = XOM_TOUCH_RAW_LIMIT,
    .raw_min_y = 0,
    .raw_max_y = XOM_TOUCH_RAW_LIMIT,
    .swap_xy = false,
    .invert_x = true,
    .invert_y = true,
    .calibrated = false,
};

static uint16_t s_last_raw_x;
static uint16_t s_last_raw_y;
static bool s_have_raw;

static uint32_t s_press_count;
static uint32_t s_release_count;
static uint32_t s_move_count;

static uint16_t s_raw_min_seen[2] = {
    XOM_TOUCH_RAW_LIMIT,
    XOM_TOUCH_RAW_LIMIT
};

static uint16_t s_raw_max_seen[2] = {0, 0};
static bool s_seen_any;

/*
 * Per-contact filtering state.
 * Reset when LVGL reports RELEASED.
 */
static bool s_filter_active;
static uint16_t s_filter_x;
static uint16_t s_filter_y;
static uint32_t s_filtered_spikes;

#if XOM_TOUCH_CALIBRATION_WIZARD

typedef struct {
    lv_obj_t *overlay;
    lv_obj_t *label;
    lv_obj_t *markers[5];
    uint16_t points[5][2];
    int index;
    bool active;
} xom_touch_wizard_t;

static xom_touch_wizard_t s_wizard;

static const char * const WIZARD_POINT_NAMES[5] = {
    "TREN - TRAI",
    "TREN - PHAI",
    "DUOI - TRAI",
    "DUOI - PHAI",
    "GIUA MAN HINH",
};

static const lv_coord_t WIZARD_POINT_X[5] = {
    30, 290, 30, 290, 160
};

static const lv_coord_t WIZARD_POINT_Y[5] = {
    30, 30, 450, 450, 240
};

#endif

static void xom_touch_filter_reset(void)
{
    s_filter_active = false;
    s_filter_x = 0;
    s_filter_y = 0;
}

/*
 * Filter one raw touch sample before coordinate mapping.
 *
 * A new contact accepts its first sample.
 * Subsequent samples are compared with the last accepted
 * sample, not with the last noisy sample.
 *
 * This prevents one bad XPT2046 sample from moving a
 * CLICK into an unrelated navigation region.
 */
static void xom_touch_filter_sample(
    uint16_t *raw_x,
    uint16_t *raw_y
)
{
    if (raw_x == NULL || raw_y == NULL) {
        return;
    }

#if XOM_TOUCH_CALIBRATION_WIZARD
    /*
     * Calibration needs original raw coordinates.
     * Do not filter wizard measurements.
     */
    if (s_wizard.active) {
        return;
    }
#endif

    if (!s_calibration.calibrated) {
        return;
    }

    if (!s_filter_active) {
        s_filter_x = *raw_x;
        s_filter_y = *raw_y;
        s_filter_active = true;
        return;
    }

    int32_t dx = (int32_t)*raw_x - (int32_t)s_filter_x;
    int32_t dy = (int32_t)*raw_y - (int32_t)s_filter_y;

    if (dx < 0) {
        dx = -dx;
    }

    if (dy < 0) {
        dy = -dy;
    }

    if (dx > XOM_TOUCH_MAX_RAW_JUMP ||
        dy > XOM_TOUCH_MAX_RAW_JUMP) {

        s_filtered_spikes++;

#if XOM_TOUCH_DEBUG
        ESP_LOGW(
            TAG,
            "TOUCH spike rejected: raw=(%u,%u)"
            " previous=(%u,%u) delta=(%ld,%ld)",
            (unsigned)*raw_x,
            (unsigned)*raw_y,
            (unsigned)s_filter_x,
            (unsigned)s_filter_y,
            (long)dx,
            (long)dy
        );
#endif

        /*
         * Keep last valid coordinates so LVGL does not
         * receive a sudden jump across the screen.
         */
        *raw_x = s_filter_x;
        *raw_y = s_filter_y;

        return;
    }

    s_filter_x = *raw_x;
    s_filter_y = *raw_y;
}

static bool xom_touch_load_calibration(void)
{
    nvs_handle_t h;

    if (nvs_open(TOUCH_NS, NVS_READONLY, &h) != ESP_OK) {
        return false;
    }

    uint8_t ver = 0;
    uint8_t flags = 0;

    uint16_t min_x = 0;
    uint16_t max_x = 0;
    uint16_t min_y = 0;
    uint16_t max_y = 0;

    esp_err_t err = nvs_get_u8(h, "ver", &ver);

    if (err == ESP_OK) {
        err = nvs_get_u16(h, "minx", &min_x);
    }

    if (err == ESP_OK) {
        err = nvs_get_u16(h, "maxx", &max_x);
    }

    if (err == ESP_OK) {
        err = nvs_get_u16(h, "miny", &min_y);
    }

    if (err == ESP_OK) {
        err = nvs_get_u16(h, "maxy", &max_y);
    }

    if (err == ESP_OK) {
        err = nvs_get_u8(h, "flags", &flags);
    }

    nvs_close(h);

    if (err != ESP_OK ||
        ver != TOUCH_VER ||
        max_x <= min_x ||
        max_y <= min_y) {
        return false;
    }

    s_calibration.raw_min_x = min_x;
    s_calibration.raw_max_x = max_x;
    s_calibration.raw_min_y = min_y;
    s_calibration.raw_max_y = max_y;

    s_calibration.swap_xy = (flags & 0x01) != 0;
    s_calibration.invert_x = (flags & 0x02) != 0;
    s_calibration.invert_y = (flags & 0x04) != 0;

    s_calibration.calibrated = true;

    return true;
}

static esp_err_t xom_touch_save_calibration(
    const xom_touch_calibration_t *cal
)
{
    if (cal == NULL || !cal->calibrated) {
        return ESP_ERR_INVALID_ARG;
    }

    nvs_handle_t h;

    esp_err_t err = nvs_open(
        TOUCH_NS,
        NVS_READWRITE,
        &h
    );

    if (err != ESP_OK) {
        return err;
    }

    uint8_t flags =
        (cal->swap_xy ? 0x01 : 0) |
        (cal->invert_x ? 0x02 : 0) |
        (cal->invert_y ? 0x04 : 0);

    err = nvs_set_u8(h, "ver", TOUCH_VER);

    if (err == ESP_OK) {
        err = nvs_set_u16(
            h, "minx", cal->raw_min_x
        );
    }

    if (err == ESP_OK) {
        err = nvs_set_u16(
            h, "maxx", cal->raw_max_x
        );
    }

    if (err == ESP_OK) {
        err = nvs_set_u16(
            h, "miny", cal->raw_min_y
        );
    }

    if (err == ESP_OK) {
        err = nvs_set_u16(
            h, "maxy", cal->raw_max_y
        );
    }

    if (err == ESP_OK) {
        err = nvs_set_u8(h, "flags", flags);
    }

    if (err == ESP_OK) {
        err = nvs_commit(h);
    }

    nvs_close(h);

    return err;
}

static inline uint16_t xom_touch_map_axis(
    uint16_t raw,
    uint16_t in_min,
    uint16_t in_max,
    uint16_t out_size,
    bool invert
)
{
    if (in_max <= in_min || out_size == 0) {
        return 0;
    }

    if (raw < in_min) {
        raw = in_min;
    }

    if (raw > in_max) {
        raw = in_max;
    }

    uint32_t span =
        (uint32_t)(in_max - in_min);

    uint32_t pos =
        ((uint32_t)(raw - in_min) * (out_size - 1)) /
        span;

    if (invert) {
        pos = (out_size - 1) - pos;
    }

    return (uint16_t)pos;
}

static void xom_touch_track_raw(
    uint16_t raw_x,
    uint16_t raw_y
)
{
    if (raw_x < s_raw_min_seen[0]) {
        s_raw_min_seen[0] = raw_x;
    }

    if (raw_x > s_raw_max_seen[0]) {
        s_raw_max_seen[0] = raw_x;
    }

    if (raw_y < s_raw_min_seen[1]) {
        s_raw_min_seen[1] = raw_y;
    }

    if (raw_y > s_raw_max_seen[1]) {
        s_raw_max_seen[1] = raw_y;
    }

    s_seen_any = true;
}

void xom_touch_process_coordinates(
    esp_lcd_touch_handle_t tp,
    uint16_t *x,
    uint16_t *y,
    uint16_t *strength,
    uint8_t *point_num,
    uint8_t max_point_num
)
{
    (void)tp;
    (void)strength;

    if (point_num == NULL ||
        *point_num == 0 ||
        x == NULL ||
        y == NULL) {
        return;
    }

    uint8_t count = *point_num;

    if (count > max_point_num) {
        count = max_point_num;
    }

    for (uint8_t i = 0; i < count; i++) {
        uint16_t raw_x = x[i];
        uint16_t raw_y = y[i];

        /*
         * Resistive touch panel normally reports
         * a single contact.
         */
        if (i == 0) {
            xom_touch_track_raw(raw_x, raw_y);

            xom_touch_filter_sample(
                &raw_x,
                &raw_y
            );

            s_last_raw_x = raw_x;
            s_last_raw_y = raw_y;
            s_have_raw = true;
        }

        uint16_t mnx = s_calibration.raw_min_x;
        uint16_t mxx = s_calibration.raw_max_x;
        uint16_t mny = s_calibration.raw_min_y;
        uint16_t mxy = s_calibration.raw_max_y;

        if (s_calibration.swap_xy) {
            uint16_t t;

            t = raw_x;
            raw_x = raw_y;
            raw_y = t;

            t = mnx;
            mnx = mny;
            mny = t;

            t = mxx;
            mxx = mxy;
            mxy = t;
        }

        x[i] = xom_touch_map_axis(
            raw_x,
            mnx,
            mxx,
            XOM_LCD_H_RES,
            s_calibration.invert_x
        );

        y[i] = xom_touch_map_axis(
            raw_y,
            mny,
            mxy,
            XOM_LCD_V_RES,
            s_calibration.invert_y
        );
    }
}

const xom_touch_calibration_t *
xom_touch_get_calibration(void)
{
    return &s_calibration;
}

bool xom_touch_get_last_raw(
    uint16_t *raw_x,
    uint16_t *raw_y
)
{
    if (!s_have_raw) {
        return false;
    }

    if (raw_x != NULL) {
        *raw_x = s_last_raw_x;
    }

    if (raw_y != NULL) {
        *raw_y = s_last_raw_y;
    }

    return true;
}

void xom_touch_set_calibration(
    const xom_touch_calibration_t *calibration
)
{
    if (calibration == NULL) {
        return;
    }

    s_calibration = *calibration;

    xom_touch_filter_reset();
}

bool xom_touch_compute_calibration(
    const uint16_t corners[4][2],
    xom_touch_calibration_t *out
)
{
    if (corners == NULL || out == NULL) {
        return false;
    }

    /*
     * corners:
     * 0 = top-left
     * 1 = top-right
     * 2 = bottom-left
     * 3 = bottom-right
     */

    int dx_top =
        (int)corners[1][0] -
        (int)corners[0][0];

    int dy_top =
        (int)corners[1][1] -
        (int)corners[0][1];

    bool swap =
        abs(dy_top) > abs(dx_top);

    int32_t sx[4];
    int32_t sy[4];

    for (int i = 0; i < 4; i++) {
        sx[i] = swap
            ? corners[i][1]
            : corners[i][0];

        sy[i] = swap
            ? corners[i][0]
            : corners[i][1];
    }

    int32_t x_left =
        (sx[0] + sx[2]) / 2;

    int32_t x_right =
        (sx[1] + sx[3]) / 2;

    int32_t y_top =
        (sy[0] + sy[1]) / 2;

    int32_t y_bottom =
        (sy[2] + sy[3]) / 2;

    if (labs((long)(x_right - x_left)) < 200 ||
        labs((long)(y_bottom - y_top)) < 200) {
        return false;
    }

    out->swap_xy = swap;

    out->invert_x =
        x_left > x_right;

    out->raw_min_x = (uint16_t)(
        x_left < x_right
            ? x_left
            : x_right
    );

    out->raw_max_x = (uint16_t)(
        x_left > x_right
            ? x_left
            : x_right
    );

    out->invert_y =
        y_top > y_bottom;

    out->raw_min_y = (uint16_t)(
        y_top < y_bottom
            ? y_top
            : y_bottom
    );

    out->raw_max_y = (uint16_t)(
        y_top > y_bottom
            ? y_top
            : y_bottom
    );

    out->calibrated = true;

    return true;
}

void xom_touch_log_stats(void)
{
    ESP_LOGI(
        TAG,
        "stats presses=%lu releases=%lu moves=%lu"
        " spikes=%lu raw_x=[%u..%u] raw_y=[%u..%u]%s",
        (unsigned long)s_press_count,
        (unsigned long)s_release_count,
        (unsigned long)s_move_count,
        (unsigned long)s_filtered_spikes,
        (unsigned)s_raw_min_seen[0],
        (unsigned)s_raw_max_seen[0],
        (unsigned)s_raw_min_seen[1],
        (unsigned)s_raw_max_seen[1],
        s_seen_any ? "" : " (no samples yet)"
    );
}

static void xom_touch_log_event(
    const char *kind,
    lv_indev_t *indev
)
{
#if XOM_TOUCH_DEBUG
    lv_point_t point = {0, 0};

    lv_indev_get_point(
        indev,
        &point
    );

    ESP_LOGI(
        TAG,
        "TOUCH %s raw=(%u,%u)"
        " mapped=(%d,%d) screen=(%d,%d)"
        " swap=%d inv_x=%d inv_y=%d%s",
        kind,
        (unsigned)s_last_raw_x,
        (unsigned)s_last_raw_y,
        (int)point.x,
        (int)point.y,
        (int)XOM_LCD_H_RES,
        (int)XOM_LCD_V_RES,
        s_calibration.swap_xy,
        s_calibration.invert_x,
        s_calibration.invert_y,
        s_calibration.calibrated
            ? ""
            : " [UNCALIBRATED]"
    );
#else
    (void)kind;
    (void)indev;
#endif
}

#if XOM_TOUCH_CALIBRATION_WIZARD

static void xom_touch_wizard_update(void)
{
    if (!s_wizard.active) {
        return;
    }

    for (int i = 0; i < 5; i++) {
        bool done =
            i < s_wizard.index;

        bool current =
            i == s_wizard.index;

        lv_obj_set_style_border_color(
            s_wizard.markers[i],
            current
                ? lv_color_hex(0xff6464)
                : lv_color_hex(0x38bdf8),
            0
        );

        lv_obj_set_style_bg_opa(
            s_wizard.markers[i],
            done ? LV_OPA_COVER : LV_OPA_30,
            0
        );
    }

    if (s_wizard.index < 5) {
        lv_label_set_text_fmt(
            s_wizard.label,
            "Hieu chuan cam ung (%d/5)\n"
            "Cham vao diem %s\n"
            "roi tha tay",
            s_wizard.index + 1,
            WIZARD_POINT_NAMES[s_wizard.index]
        );
    } else {
        lv_label_set_text(
            s_wizard.label,
            "Dang tinh toan..."
        );
    }
}

static void map_with_calibration(
    const xom_touch_calibration_t *cal,
    uint16_t in_x,
    uint16_t in_y,
    uint16_t *out_x,
    uint16_t *out_y
)
{
    uint16_t raw_x = in_x;
    uint16_t raw_y = in_y;

    uint16_t mnx = cal->raw_min_x;
    uint16_t mxx = cal->raw_max_x;
    uint16_t mny = cal->raw_min_y;
    uint16_t mxy = cal->raw_max_y;

    if (cal->swap_xy) {
        uint16_t t;

        t = raw_x;
        raw_x = raw_y;
        raw_y = t;

        t = mnx;
        mnx = mny;
        mny = t;

        t = mxx;
        mxx = mxy;
        mxy = t;
    }

    *out_x = xom_touch_map_axis(
        raw_x,
        mnx,
        mxx,
        XOM_LCD_H_RES,
        cal->invert_x
    );

    *out_y = xom_touch_map_axis(
        raw_y,
        mny,
        mxy,
        XOM_LCD_V_RES,
        cal->invert_y
    );
}

static void xom_touch_wizard_finish(void)
{
    xom_touch_calibration_t cal;

    if (xom_touch_compute_calibration(
            s_wizard.points,
            &cal
        )) {

        uint16_t cx = 0;
        uint16_t cy = 0;

        map_with_calibration(
            &cal,
            s_wizard.points[4][0],
            s_wizard.points[4][1],
            &cx,
            &cy
        );

        int err_x =
            abs((int)cx - (XOM_LCD_H_RES / 2));

        int err_y =
            abs((int)cy - (XOM_LCD_V_RES / 2));

        if (err_x > 45 || err_y > 45) {
            ESP_LOGE(
                TAG,
                "calibration center validation failed"
                " raw=(%u,%u) mapped=(%u,%u)"
                " err=(%d,%d)",
                s_wizard.points[4][0],
                s_wizard.points[4][1],
                cx,
                cy,
                err_x,
                err_y
            );

            lv_label_set_text(
                s_wizard.label,
                "That bai!\n"
                "Diem giua sai so qua lon."
            );

            s_wizard.active = false;
            return;
        }

        xom_touch_set_calibration(&cal);

        esp_err_t save_err =
            xom_touch_save_calibration(&cal);

        ESP_LOGI(
            TAG,
            "calibrated swap=%d invert_x=%d"
            " invert_y=%d raw_x=[%u..%u]"
            " raw_y=[%u..%u]",
            cal.swap_xy,
            cal.invert_x,
            cal.invert_y,
            cal.raw_min_x,
            cal.raw_max_x,
            cal.raw_min_y,
            cal.raw_max_y
        );

        ESP_LOGI(
            TAG,
            "center validation raw=(%u,%u)"
            " mapped=(%u,%u) err=(%d,%d)",
            s_wizard.points[4][0],
            s_wizard.points[4][1],
            cx,
            cy,
            err_x,
            err_y
        );

        ESP_LOGI(
            TAG,
            "CAL: { .raw_min_x=%u,"
            " .raw_max_x=%u,"
            " .raw_min_y=%u,"
            " .raw_max_y=%u,"
            " .swap_xy=%s,"
            " .invert_x=%s,"
            " .invert_y=%s,"
            " .calibrated=true }",
            cal.raw_min_x,
            cal.raw_max_x,
            cal.raw_min_y,
            cal.raw_max_y,
            cal.swap_xy ? "true" : "false",
            cal.invert_x ? "true" : "false",
            cal.invert_y ? "true" : "false"
        );

        if (save_err == ESP_OK) {
            lv_label_set_text(
                s_wizard.label,
                "Hoan tat!\n"
                "Da luu hieu chuan vao NVS."
            );
        } else {
            lv_label_set_text_fmt(
                s_wizard.label,
                "Da tinh xong nhung luu NVS loi: %s",
                esp_err_to_name(save_err)
            );
        }
    } else {
        ESP_LOGE(
            TAG,
            "calibration failed:"
            " raw samples too close together"
        );

        lv_label_set_text(
            s_wizard.label,
            "That bai!\n"
            "Cac diem qua gan nhau."
        );
    }

    s_wizard.active = false;

    if (s_wizard.overlay != NULL) {
        lv_obj_delete_delayed(
            s_wizard.overlay,
            3000
        );

        s_wizard.overlay = NULL;
    }
}

static void xom_touch_wizard_capture(
    uint16_t raw_x,
    uint16_t raw_y
)
{
    if (!s_wizard.active ||
        s_wizard.index >= 5) {
        return;
    }

    s_wizard.points[s_wizard.index][0] =
        raw_x;

    s_wizard.points[s_wizard.index][1] =
        raw_y;

    ESP_LOGI(
        TAG,
        "wizard point %d raw=(%u,%u)",
        s_wizard.index,
        raw_x,
        raw_y
    );

    s_wizard.index++;

    xom_touch_wizard_update();

    if (s_wizard.index >= 5) {
        xom_touch_wizard_finish();
    }
}

static lv_obj_t *xom_touch_wizard_marker(
    lv_obj_t *parent,
    lv_coord_t x,
    lv_coord_t y
)
{
    lv_obj_t *marker = lv_obj_create(parent);

    lv_obj_set_size(marker, 40, 40);

    lv_obj_set_pos(
        marker,
        x - 20,
        y - 20
    );

    lv_obj_set_style_radius(
        marker,
        LV_RADIUS_CIRCLE,
        0
    );

    lv_obj_set_style_bg_color(
        marker,
        lv_color_hex(0x38bdf8),
        0
    );

    lv_obj_set_style_bg_opa(
        marker,
        LV_OPA_30,
        0
    );

    lv_obj_set_style_border_width(
        marker,
        2,
        0
    );

    lv_obj_set_style_border_color(
        marker,
        lv_color_hex(0x38bdf8),
        0
    );

    lv_obj_remove_flag(
        marker,
        LV_OBJ_FLAG_SCROLLABLE
    );

    return marker;
}

static void xom_touch_calibration_wizard_start(void)
{
    if (s_wizard.active) {
        return;
    }

    s_wizard.overlay = lv_obj_create(
        lv_layer_top()
    );

    lv_obj_set_size(
        s_wizard.overlay,
        XOM_LCD_H_RES,
        XOM_LCD_V_RES
    );

    lv_obj_set_style_bg_color(
        s_wizard.overlay,
        lv_color_hex(0x0b111b),
        0
    );

    lv_obj_set_style_bg_opa(
        s_wizard.overlay,
        LV_OPA_COVER,
        0
    );

    lv_obj_set_style_border_width(
        s_wizard.overlay,
        0,
        0
    );

    lv_obj_set_style_radius(
        s_wizard.overlay,
        0,
        0
    );

    lv_obj_set_style_pad_all(
        s_wizard.overlay,
        0,
        0
    );

    lv_obj_remove_flag(
        s_wizard.overlay,
        LV_OBJ_FLAG_SCROLLABLE
    );

    for (int i = 0; i < 5; i++) {
        s_wizard.markers[i] =
            xom_touch_wizard_marker(
                s_wizard.overlay,
                WIZARD_POINT_X[i],
                WIZARD_POINT_Y[i]
            );
    }

    s_wizard.label = lv_label_create(
        s_wizard.overlay
    );

    lv_obj_set_width(
        s_wizard.label,
        XOM_LCD_H_RES - 40
    );

    lv_obj_set_pos(
        s_wizard.label,
        20,
        210
    );

    lv_obj_set_style_text_align(
        s_wizard.label,
        LV_TEXT_ALIGN_CENTER,
        0
    );

    xom_ui_style_label(
        s_wizard.label,
        xom_ui_font_body(),
        XOM_UI_COLOR_TEXT
    );

    s_wizard.index = 0;
    s_wizard.active = true;

    xom_touch_filter_reset();

    xom_touch_wizard_update();
}

#endif

void xom_touch_start_calibration(void)
{
#if XOM_TOUCH_CALIBRATION_WIZARD
    xom_touch_calibration_wizard_start();
#else
    ESP_LOGW(
        TAG,
        "calibration wizard disabled"
    );
#endif
}

static void xom_touch_indev_event_cb(
    lv_event_t *event
)
{
    lv_event_code_t code =
        lv_event_get_code(event);

    lv_indev_t *indev =
        (lv_indev_t *)lv_event_get_user_data(event);

    switch (code) {
        case LV_EVENT_PRESSED:
            s_press_count++;

            xom_touch_log_event(
                "PRESS",
                indev
            );

#if XOM_TOUCH_CALIBRATION_WIZARD
            if (s_wizard.active) {
                xom_touch_wizard_capture(
                    s_last_raw_x,
                    s_last_raw_y
                );
            }
#endif
            break;

        case LV_EVENT_RELEASED:
            s_release_count++;

            xom_touch_log_event(
                "RELEASE",
                indev
            );

            /*
             * New touch starts with a fresh anchor.
             */
            xom_touch_filter_reset();

            break;

        case LV_EVENT_CLICKED:
            xom_touch_log_event(
                "CLICK",
                indev
            );
            break;

        default:
            break;
    }
}

void xom_touch_init(lv_indev_t *indev)
{
    if (indev == NULL) {
        ESP_LOGE(TAG, "invalid indev");
        return;
    }

    xom_touch_filter_reset();
    s_filtered_spikes = 0;

    lv_indev_add_event_cb(
        indev,
        xom_touch_indev_event_cb,
        LV_EVENT_ALL,
        indev
    );

    if (xom_touch_load_calibration()) {
        ESP_LOGI(
            TAG,
            "touch calibration restored from NVS"
        );
    }

    if (s_calibration.calibrated) {
        ESP_LOGI(
            TAG,
            "touch calibration loaded:"
            " raw_x=[%u..%u]"
            " raw_y=[%u..%u]"
            " swap=%d inv_x=%d inv_y=%d",
            s_calibration.raw_min_x,
            s_calibration.raw_max_x,
            s_calibration.raw_min_y,
            s_calibration.raw_max_y,
            s_calibration.swap_xy,
            s_calibration.invert_x,
            s_calibration.invert_y
        );
    } else {
        ESP_LOGW(
            TAG,
            "touch running UNCALIBRATED"
            " (raw 0..%d -> full panel);"
            " starting calibration wizard",
            XOM_TOUCH_RAW_LIMIT
        );
    }

#if XOM_TOUCH_CALIBRATION_WIZARD
    if (!s_calibration.calibrated) {
        xom_touch_calibration_wizard_start();
    }
#endif
}
