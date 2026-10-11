#include "xom_weather.h"
#include "xom_settings.h"
#include "xom_wifi.h"
#include "esp_crt_bundle.h"
#include "esp_http_client.h"
#include "esp_log.h"
#include "esp_timer.h"
#include "cJSON.h"
#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define BUF_SZ 12288
#define RETRY_MIN_US (5ULL * 1000000ULL)
#define RETRY_MAX_US (60ULL * 1000000ULL)
static SemaphoreHandle_t s_lock;
static xom_weather_status_t s_st;
static bool s_inited;
static esp_timer_handle_t s_timer;
static esp_timer_handle_t s_retry_timer;
static bool s_network_ready;
static uint8_t s_retry_count;

static void update_defaults(void)
{
    xom_settings_t cfg;
    if (xom_settings_load(&cfg)==ESP_OK) {
        strncpy(s_st.city, cfg.weather_city, sizeof(s_st.city)-1);
        s_st.lat=cfg.weather_lat; s_st.lon=cfg.weather_lon; s_st.unit_c = (cfg.temp_unit==XOM_SETTINGS_TEMP_C);
    } else {
        strncpy(s_st.city,"Hà Nội",sizeof(s_st.city)-1); s_st.lat=21.0278f;s_st.lon=105.8342f;s_st.unit_c=true;
    }
}

static void copy_status_locked(xom_weather_status_t *out)
{
    *out = s_st;
}

typedef struct {
    char *body;
    size_t length;
    size_t capacity;
    bool overflow;
} weather_http_body_t;

static esp_err_t _http_event(esp_http_client_event_t *evt)
{
    if (evt->event_id != HTTP_EVENT_ON_DATA) return ESP_OK;
    weather_http_body_t *ctx = (weather_http_body_t *)evt->user_data;
    if (ctx == NULL || evt->data_len <= 0) return ESP_OK;
    size_t incoming = (size_t)evt->data_len;
    if (ctx->body == NULL || ctx->length + incoming >= ctx->capacity) {
        if (ctx != NULL) ctx->overflow = true;
        return ESP_FAIL;
    }
    memcpy(ctx->body + ctx->length, evt->data, incoming);
    ctx->length += incoming;
    ctx->body[ctx->length] = '\0';
    return ESP_OK;
}

static bool wifi_ready(void)
{
    xom_wifi_status_t wifi;
    xom_wifi_get_status(&wifi);
    return wifi.state == XOM_WIFI_STATE_CONNECTED && wifi.have_ip && wifi.ip[0] != '\0';
}

static bool parse_json(const char *json)
{
    cJSON *root=cJSON_Parse(json);
    if (!root) return false;
    cJSON *current=cJSON_GetObjectItem(root,"current");
    if (current) {
        cJSON *t=cJSON_GetObjectItem(current,"temperature_2m"); if (t&&t->type==cJSON_Number) s_st.temp_c=(int8_t)round(t->valuedouble);
        cJSON *ap=cJSON_GetObjectItem(current,"apparent_temperature"); if (ap&&ap->type==cJSON_Number) s_st.temp_feels_c=(int8_t)round(ap->valuedouble);
        cJSON *h=cJSON_GetObjectItem(current,"relative_humidity_2m"); if (h&&h->type==cJSON_Number) s_st.humidity=(uint8_t)h->valuedouble;
        cJSON *w=cJSON_GetObjectItem(current,"weather_code"); if (w&&w->type==cJSON_Number) s_st.wmo_code=(uint16_t)w->valuedouble;
        cJSON *ws=cJSON_GetObjectItem(current,"wind_speed_10m"); if (ws&&ws->type==cJSON_Number) s_st.wind_kmh=(int16_t)round(ws->valuedouble);
        cJSON *pcp=cJSON_GetObjectItem(current,"precipitation_probability"); if (pcp&&pcp->type==cJSON_Number) s_st.precip_prob=(uint8_t)pcp->valuedouble;
    }
    cJSON *hourly=cJSON_GetObjectItem(root,"hourly");
    if (hourly) {
        cJSON *times=cJSON_GetObjectItem(hourly,"time"); cJSON *temps=cJSON_GetObjectItem(hourly,"temperature_2m"); cJSON *pcp=cJSON_GetObjectItem(hourly,"precipitation_probability"); cJSON *wc=cJSON_GetObjectItem(hourly,"weather_code");
        int n=0; if (cJSON_IsArray(times) && cJSON_IsArray(temps) && cJSON_IsArray(pcp) && cJSON_IsArray(wc)) {
            n = cJSON_GetArraySize(times);
            if (cJSON_GetArraySize(temps)<n) n=cJSON_GetArraySize(temps);
            if (cJSON_GetArraySize(pcp)<n) n=cJSON_GetArraySize(pcp);
            if (cJSON_GetArraySize(wc)<n) n=cJSON_GetArraySize(wc);
        }
        if (n>12)n=12;
        int parsed=0;
        for (int i=0;i<n;i++) {
            cJSON *ti=cJSON_GetArrayItem(times,i), *te=cJSON_GetArrayItem(temps,i),
                  *pr=cJSON_GetArrayItem(pcp,i), *we=cJSON_GetArrayItem(wc,i);
            if (!cJSON_IsString(ti)||!cJSON_IsNumber(te)||!cJSON_IsNumber(pr)||!cJSON_IsNumber(we)) break;
            struct tm tm={0}; strptime(ti->valuestring,"%Y-%m-%dT%H:%M",&tm); s_st.hourly[i].time=mktime(&tm); s_st.hourly[i].temp_c=(int8_t)round(te->valuedouble); s_st.hourly[i].precip_prob=(uint8_t)pr->valuedouble; s_st.hourly[i].wmo_code=(uint16_t)we->valuedouble; parsed++;
        }
        s_st.hourly_count=(uint16_t)parsed;
    }
    cJSON *daily=cJSON_GetObjectItem(root,"daily");
    if (daily) {
        cJSON *times=cJSON_GetObjectItem(daily,"time"); cJSON *tmin=cJSON_GetObjectItem(daily,"temperature_2m_min"); cJSON *tmax=cJSON_GetObjectItem(daily,"temperature_2m_max"); cJSON *pcp=cJSON_GetObjectItem(daily,"precipitation_probability_max"); cJSON *wc=cJSON_GetObjectItem(daily,"weather_code");
        int n=0; if (cJSON_IsArray(times) && cJSON_IsArray(tmin) && cJSON_IsArray(tmax) && cJSON_IsArray(pcp) && cJSON_IsArray(wc)) {
            n = cJSON_GetArraySize(times);
            if (cJSON_GetArraySize(tmin)<n) n=cJSON_GetArraySize(tmin);
            if (cJSON_GetArraySize(tmax)<n) n=cJSON_GetArraySize(tmax);
            if (cJSON_GetArraySize(pcp)<n) n=cJSON_GetArraySize(pcp);
            if (cJSON_GetArraySize(wc)<n) n=cJSON_GetArraySize(wc);
        }
        if (n>7)n=7;
        int parsed=0;
        for (int i=0;i<n;i++) {
            cJSON *ti=cJSON_GetArrayItem(times,i), *lo=cJSON_GetArrayItem(tmin,i),
                  *hi=cJSON_GetArrayItem(tmax,i), *pr=cJSON_GetArrayItem(pcp,i),
                  *we=cJSON_GetArrayItem(wc,i);
            if (!cJSON_IsString(ti)||!cJSON_IsNumber(lo)||!cJSON_IsNumber(hi)||
                !cJSON_IsNumber(pr)||!cJSON_IsNumber(we)) break;
            struct tm tm={0}; strptime(ti->valuestring,"%Y-%m-%d",&tm); s_st.daily[i].time=mktime(&tm); s_st.daily[i].temp_min_c=(int8_t)round(lo->valuedouble); s_st.daily[i].temp_max_c=(int8_t)round(hi->valuedouble); s_st.daily[i].precip_prob=(uint8_t)pr->valuedouble; s_st.daily[i].wmo_code=(uint16_t)we->valuedouble; parsed++;
        }
        s_st.daily_count=(uint16_t)parsed;
    }
    cJSON_Delete(root);
    s_st.state=XOM_WF_OK; s_st.fresh=true; s_st.last_fetch_us=esp_timer_get_time(); s_st.last_update_t=time(NULL);
    ESP_LOGI("xom_weather", "WEATHER updated");
    return true;
}

static void schedule_retry(void);

static void fetch_task(void *arg)
{
    (void)arg;
    char url[512];
    float lat, lon;
    xSemaphoreTake(s_lock, portMAX_DELAY);
    lat = s_st.lat;
    lon = s_st.lon;
    xSemaphoreGive(s_lock);
    snprintf(url, sizeof(url),
             "https://api.open-meteo.com/v1/forecast?latitude=%.4f&longitude=%.4f"
             "&current=temperature_2m,relative_humidity_2m,apparent_temperature,weather_code,wind_speed_10m"
             "&hourly=temperature_2m,precipitation_probability,weather_code"
             "&daily=temperature_2m_min,temperature_2m_max,precipitation_probability_max,weather_code"
             "&timezone=Asia%%2FHo_Chi_Minh&forecast_days=5&forecast_hours=12", lat, lon);

    weather_http_body_t body = { .capacity = BUF_SZ };
    body.body = malloc(body.capacity);
    bool ok = false;
    if (body.body == NULL) {
        ESP_LOGE("xom_weather", "No heap for HTTP body");
        goto finished;
    }
    body.body[0] = '\0';
    esp_http_client_config_t cfg = {
        .url = url,
        .event_handler = _http_event,
        .user_data = &body,
        .timeout_ms = 10000,
        .buffer_size = 1024,
        .crt_bundle_attach = esp_crt_bundle_attach,
    };
    esp_http_client_handle_t client = esp_http_client_init(&cfg);
    if (client == NULL) {
        ESP_LOGE("xom_weather", "HTTP client init failed");
        goto finished;
    }
    ESP_LOGI("xom_weather", "WEATHER request host=api.open-meteo.com");
    esp_err_t err = esp_http_client_perform(client);
    int status = err == ESP_OK ? esp_http_client_get_status_code(client) : 0;
    ESP_LOGI("xom_weather", "WEATHER HTTP result=%s status=%d bytes=%u overflow=%d",
             esp_err_to_name(err), status, (unsigned)body.length, body.overflow);
    if (err == ESP_OK && status == 200 && !body.overflow && body.length > 0) {
        xSemaphoreTake(s_lock, portMAX_DELAY);
        ok = parse_json(body.body);
        xSemaphoreGive(s_lock);
        if (!ok) ESP_LOGE("xom_weather", "WEATHER JSON parse failed");
    }
    esp_http_client_cleanup(client);
finished:
    free(body.body);
    if (ok) {
        s_retry_count = 0;
    } else {
        xSemaphoreTake(s_lock, portMAX_DELAY);
        bool has_data = s_st.daily_count > 0 || s_st.hourly_count > 0 || s_st.last_update_t > 0;
        s_st.state = has_data ? XOM_WF_STALE : XOM_WF_ERROR;
        xSemaphoreGive(s_lock);
        schedule_retry();
    }
    vTaskDelete(NULL);
}

static esp_err_t request_fetch(void)
{
    if (!wifi_ready()) {
        xSemaphoreTake(s_lock, portMAX_DELAY);
        s_network_ready = false;
        if (s_st.state == XOM_WF_FETCHING) s_st.state = s_st.fresh ? XOM_WF_STALE : XOM_WF_IDLE;
        else if (s_st.fresh) s_st.state = XOM_WF_STALE;
        xSemaphoreGive(s_lock);
        ESP_LOGI("xom_weather", "WEATHER fetch skipped: Wi-Fi not ready");
        return ESP_ERR_INVALID_STATE;
    }
    xSemaphoreTake(s_lock,portMAX_DELAY);
    if (s_st.state==XOM_WF_FETCHING) { xSemaphoreGive(s_lock); return ESP_OK; }
    s_network_ready = true;
    s_st.state=XOM_WF_FETCHING; s_st.fresh=false;
    xSemaphoreGive(s_lock);
    ESP_LOGI("xom_weather", "WEATHER fetch started");
    if (xTaskCreate(fetch_task, "wf", 6144, NULL, 5, NULL) == pdPASS) return ESP_OK;
    xSemaphoreTake(s_lock, portMAX_DELAY);
    s_st.state = XOM_WF_ERROR;
    xSemaphoreGive(s_lock);
    return ESP_ERR_NO_MEM;
}

static void timer_cb(void *arg){ (void)arg; request_fetch(); }
static void retry_cb(void *arg){ (void)arg; request_fetch(); }

static void schedule_retry(void)
{
    if (!s_inited || !wifi_ready() || s_retry_timer == NULL) return;
    if (s_retry_count < 6) s_retry_count++;
    uint64_t delay = RETRY_MIN_US << (s_retry_count - 1);
    if (delay > RETRY_MAX_US) delay = RETRY_MAX_US;
    esp_timer_stop(s_retry_timer);
    esp_timer_start_once(s_retry_timer, delay);
    ESP_LOGW("xom_weather", "WEATHER retry in %llu ms", delay / 1000ULL);
}

esp_err_t xom_weather_init(void)
{
    if (s_inited) return ESP_OK;
    s_lock=xSemaphoreCreateMutex();
    memset(&s_st,0,sizeof(s_st)); update_defaults(); s_st.state=XOM_WF_IDLE;
    xom_settings_t cfg;
    uint32_t refresh_sec = (xom_settings_load(&cfg) == ESP_OK && cfg.weather_refresh_sec >= 300) ? cfg.weather_refresh_sec : 1800;
    const esp_timer_create_args_t a={.callback=timer_cb,.name="xom_wf"};
    esp_timer_create(&a,&s_timer);
    const esp_timer_create_args_t ra={.callback=retry_cb,.name="xom_wf_retry"};
    esp_timer_create(&ra,&s_retry_timer);
    esp_timer_start_periodic(s_timer, (uint64_t)refresh_sec * 1000000ULL);
    s_inited=true; return ESP_OK;
}

void xom_weather_deinit(void)
{
    if (!s_inited) return;
    if (s_timer){ esp_timer_stop(s_timer); esp_timer_delete(s_timer); s_timer=NULL; }
    if (s_retry_timer){ esp_timer_stop(s_retry_timer); esp_timer_delete(s_retry_timer); s_retry_timer=NULL; }
    s_inited=false;
}

void xom_weather_wifi_status_changed(bool connected)
{
    if (!s_inited) return;
    if (connected && wifi_ready()) {
        ESP_LOGI("xom_weather", "WIFI GOT_IP -> weather refresh");
        s_retry_count = 0;
        if (s_retry_timer) esp_timer_stop(s_retry_timer);
        request_fetch();
        return;
    }
    xSemaphoreTake(s_lock, portMAX_DELAY);
    s_network_ready = false;
    if (s_st.state == XOM_WF_FETCHING) s_st.state = s_st.fresh ? XOM_WF_STALE : XOM_WF_IDLE;
    else if (s_st.fresh) s_st.state = XOM_WF_STALE;
    xSemaphoreGive(s_lock);
    if (s_retry_timer) esp_timer_stop(s_retry_timer);
}

void xom_weather_get_status(xom_weather_status_t *out)
{
    if (!out) return;
    if (!s_inited){ memset(out,0,sizeof(*out)); return; }
    xSemaphoreTake(s_lock,portMAX_DELAY); copy_status_locked(out); xSemaphoreGive(s_lock);
}

esp_err_t xom_weather_request_refresh(void){ return s_inited ? request_fetch() : ESP_ERR_INVALID_STATE; }
esp_err_t xom_weather_set_location(const char *city,float lat,float lon){ if (!s_inited || city == NULL || lat < -90.0f || lat > 90.0f || lon < -180.0f || lon > 180.0f) return ESP_ERR_INVALID_ARG; xSemaphoreTake(s_lock,portMAX_DELAY); strncpy(s_st.city,city,sizeof(s_st.city)-1); s_st.city[sizeof(s_st.city)-1]='\0'; s_st.lat=lat;s_st.lon=lon; xSemaphoreGive(s_lock); return ESP_OK; }
esp_err_t xom_weather_set_unit(bool celsius){ if (!s_inited) return ESP_ERR_INVALID_STATE; xSemaphoreTake(s_lock,portMAX_DELAY); s_st.unit_c=celsius; xSemaphoreGive(s_lock); return ESP_OK; }
esp_err_t xom_weather_set_refresh_interval(uint32_t seconds){ if (!s_timer || seconds < 300) return ESP_ERR_INVALID_ARG; esp_err_t err = esp_timer_stop(s_timer); if (err != ESP_OK && err != ESP_ERR_INVALID_STATE) return err; return esp_timer_start_periodic(s_timer, (uint64_t)seconds * 1000000ULL); }

