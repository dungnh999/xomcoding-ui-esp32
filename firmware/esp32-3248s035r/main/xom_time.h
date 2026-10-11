#pragma once

#include <stdbool.h>
#include "esp_err.h"
#include <stdint.h>
#include <time.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    XOM_TIME_UNSYNCED = 0,
    XOM_TIME_SYNCING,
    XOM_TIME_SYNCED,
    XOM_TIME_ERROR,
} xom_time_state_t;

typedef struct {
    xom_time_state_t state;
    bool synced;
    struct tm tm_local;  /* local time (UTC+7) */
    time_t epoch;        /* UTC epoch */
    char iso8601[40];    /* HH:MM:SS YYYY-MM-DD or short */
    int64_t last_sync_us;
    char timezone[32];
    char ntp_server[64];
    bool ntp_enabled;
} xom_time_status_t;

esp_err_t xom_time_init(void);
void xom_time_deinit(void);
void xom_time_get_status(xom_time_status_t * out);
esp_err_t xom_time_apply_settings(const char * timezone, const char * ntp_server, bool ntp_enabled);
esp_err_t xom_time_refresh_now(void); /* force sync attempt if connected */
const char * xom_time_state_label(xom_time_state_t s);
const char * xom_time_posix_tz(const char * timezone);

#ifdef __cplusplus
}
#endif
