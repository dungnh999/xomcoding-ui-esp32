#pragma once

#include <stdbool.h>
#include "esp_err.h"
#include <stdint.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

#define XOM_WEATHER_HOURLY_MAX 12
#define XOM_WEATHER_DAILY_MAX  7
#define XOM_WEATHER_CITY_MAX   48

typedef enum {
    XOM_WF_IDLE = 0,
    XOM_WF_FETCHING,
    XOM_WF_OK,
    XOM_WF_ERROR,
    XOM_WF_STALE,
} xom_weather_state_t;

typedef struct {
    int8_t  temp_c;        /* approx */
    uint8_t humidity;      /* 0-100 */
    uint8_t precip_prob;   /* 0-100 */
    int16_t wind_kmh;      /* scaled */
    uint16_t wmo_code;
    time_t  time;
} xom_weather_hour_t;

typedef struct {
    int8_t  temp_min_c;
    int8_t  temp_max_c;
    uint8_t precip_prob;
    uint16_t wmo_code;
    time_t  time;
} xom_weather_day_t;

typedef struct {
    xom_weather_state_t state;
    bool fresh;
    int64_t last_fetch_us;
    time_t  last_update_t;
    char city[XOM_WEATHER_CITY_MAX];
    float lat;
    float lon;
    bool unit_c; /* true C, false F */
    /* current */
    int8_t temp_c;
    int8_t temp_feels_c;
    uint8_t humidity;
    uint8_t precip_prob;
    int16_t wind_kmh;
    uint16_t wmo_code;
    time_t  current_time;
    uint16_t hourly_count;
    uint16_t daily_count;
    xom_weather_hour_t hourly[XOM_WEATHER_HOURLY_MAX];
    xom_weather_day_t  daily[XOM_WEATHER_DAILY_MAX];
} xom_weather_status_t;

esp_err_t xom_weather_init(void);
void xom_weather_deinit(void);
void xom_weather_wifi_status_changed(bool connected);
void xom_weather_get_status(xom_weather_status_t * out);
esp_err_t xom_weather_request_refresh(void);
esp_err_t xom_weather_set_location(const char *city, float lat, float lon);
esp_err_t xom_weather_set_unit(bool celsius);
esp_err_t xom_weather_set_refresh_interval(uint32_t seconds);

#ifdef __cplusplus
}
#endif
