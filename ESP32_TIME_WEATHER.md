# ESP32 NTP Time & Weather (Open-Meteo) — Task 18

Date: 2026-10-11

## Scope
Implement real time (NTP + Asia/Ho_Chi_Minh) and weather (Open-Meteo Forecast v1), then bind the generated LVGL screens to real snapshots instead of mock values.

## Files Added
- `firmware/esp32-3248s035r/main/xom_time.h/c` — NTP (SNTP), TZ, states, 1s poll.
- `firmware/esp32-3248s035r/main/xom_weather.h/c` — Open-Meteo HTTPS fetch, cJSON parse, lightweight cache, periodic refresh.
- `firmware/esp32-3248s035r/main/xom_time_ui.h/c` — Home + Date/Time screen binding.
- `firmware/esp32-3248s035r/main/xom_weather_ui.h/c` — Home weather card, Weather detail, Forecast, Weather Settings, Weather Interval binding.
- `firmware/esp32-3248s035r/main/xom_settings.h/c` — schema v2: added weather_city, weather_lat, weather_lon, temp_unit (C/F), weather_refresh_sec; migration preserves existing Wi-Fi keys.
- `firmware/esp32-3248s035r/main/xom_firmware.c` — wired new modules in start path.

## Modified
- `firmware/esp32-3248s035r/main/CMakeLists.txt` — added sources + `esp_http_client json mbedtls`.
- `firmware/esp32-3248s035r/main/ui_navigation.c` — attach time/weather UI on screen switch.

## Key Points
- Time: SNTP (pool.ntp.org/time.google.com/time.cloudflare.com), TZ "ICT-7", states UN/SYNCING/SYNCED/ERROR, no LVGL in SNTP callbacks (updates read via snapshot).
- Weather: `https://api.open-meteo.com/v1/forecast` (HTTPS, `esp_crt_bundle_attach`). Parses current/hourly/daily (limited). RAM cache only; periodic timer + manual refresh. City/default Hà Nội (21.0278,105.8342). Unit C/F stored.
- Settings: namespace `xomcfg`, schema v2. Loading tolerates missing keys; migration safe (older schema values preserved where present).
- Threading: use mutex-protected snapshots; UI attached from navigation (LVGL context). HTTP in task.

## UI Binding (Task 18.1)
- Home Portrait: `12:34` and `T7, 10/10/2026` are rebound to real NTP time/date. Weather card labels (`THỜI TIẾT · HÀ NỘI`, `28.5°C`, `Trời có mây`, high/low/humidity) are rebound to `xom_weather` data.
- Weather Detail: location/status/header/current temp/description/feels-like/high/low/rain probability/wind/humidity and the 5-day mini strip are updated from the weather snapshot.
- Forecast: subtitle and five daily cards are updated from daily forecast (weekday, date, description, max/min, rain probability). The generated bottom summary area is rebound to the next hourly forecast (`Giờ tới`, next-hour temperature, next-hour rain probability, current wind) because the audited screen has no dedicated hourly card/list widgets. Existing generated objects are reused; no generated C/H edited.
- Date & Time Settings: NTP status line is updated with sync state and real local time. Save button triggers a real NTP refresh and suppresses demo toast.
- Weather Settings: generated city textarea and unit buttons are wired. Because the XML has no generated latitude/longitude textareas, two small runtime textareas are created in the coordinate row (`xw_cfg_lat`, `xw_cfg_lon`) and attached to the shared keyboard. Save validates coordinates, writes schema v2 without touching Wi-Fi credentials, updates the service location/unit, and requests a fetch.
- Weather Interval: 5/15/30/60 minute buttons are wired; Save persists `weather_refresh_sec` and reprograms the weather service timer. Cancel goes back.

## Loading / Error / Cache Behaviour
- Unsynced time never displays 1970 as real time; Home shows `--:--` and a syncing message until SNTP is valid.
- Weather with no data shows loading/empty/error text rather than mock temperature.
- On API error with old data, existing snapshot remains available and UI marks cache/status where possible.
- Network fetch runs in a worker task and UI reads mutex-protected snapshots only.

## Build
- Target esp32. No generated files edited. No auto-flash.
- App binary: `0x3d7960` bytes. Factory partition: `0x3f0000`. Free: `0x186a0` bytes (2%). `check_sizes.py` warns that the partition is nearly full.
- `idf.py size`: Flash Data 2,724,240; Flash Code 1,179,138; IRAM 108,351 used / 22,721 free (82.67%); DRAM 105,204 used / 75,532 free (58.21%).

## Hardware Verification (pending)
1. Wi-Fi up → NTP sync within reasonable time.
2. Home shows real time/date (UTC+7).
3. Weather fetch succeeds (Internet).
4. Daily cards render on Weather/Forecast screens; hourly data appears in the Forecast summary area.
5. Stale/cache shown on Wi-Fi/API failure and refresh recovers.
6. Weather Settings save/load; keyboard input for city/latitude/longitude (no password logging).
7. Interval settings reprogram timer.
8. No mock data remains on bound labels; no crash/leak.

## Notes
- App partition is now critically tight (2% free). Further HTTPS/API features will likely require size optimization before more functionality.
- Weather icons are not changed dynamically yet; text/status is real. Existing generated icon assets are reused to avoid Flash growth.
- Static IP not applied to netif yet (unchanged). NVS encryption unchanged.

## Task 18.3 Corrections

- Date & Time Save no longer triggers NTP sync. It validates and persists Date/Time settings to NVS, then applies timezone/NTP server/enabled state to the time service.
- Sync Now is a separate runtime button on the Date & Time screen and only requests SNTP sync.
- NVS schema is now v3 and adds `timezone`, `ntp_server`, `ntp_enabled`, and `time_24h`; Wi-Fi and weather keys are preserved.
- Default timezone remains `Asia/Ho_Chi_Minh`, applied as POSIX `ICT-7` with `tzset()` at boot and after changes.
- Time display still refuses to show 1970/mock time before SNTP is valid.
- Weather Settings no longer injects Latitude/Longitude textareas into the fixed XML coordinate row. The row displays saved coordinates and opens an Advanced Location modal for editing.
- Weather Settings Save now commits NVS first, then applies location/unit to the weather service and requests refresh. Success is shown only if all steps return `ESP_OK`.
- Weather Interval Save now commits NVS and reprograms the service timer, then shows success/failure without immediately navigating away.
- Shared save feedback is implemented in `xom_ui_feedback.c/.h`; functional buttons are marked `LV_OBJ_FLAG_USER_1` and navigation ignores those buttons so demo toast/coordinate back regions do not double-handle Save.

## Task 18.3 Build

- App binary: `0x2e4170` bytes. Factory partition: `0x3f0000`. Free: `0x10be90` bytes (27%).
- `idf.py size`: Flash Data 1,722,448; Flash Code 1,183,534; IRAM 108,351 used / 22,721 free; DRAM 105,348 used / 75,388 free.

## Task 18.5 Weather Startup Race

- Code PASS: Weather no longer calls HTTPS from `xom_weather_init()`. Fetches are gated by Wi-Fi state and require `CONNECTED + have_ip + ip != ""`.
- Code PASS: `xom_wifi` exposes a non-LVGL status callback. `xom_firmware` wires it to `xom_weather_wifi_status_changed()` after weather init and before Wi-Fi autostart.
- Code PASS: On GOT_IP, Weather triggers one real fetch path and logs `WIFI GOT_IP -> weather refresh`, then `WEATHER fetch started`, `WEATHER HTTP 200`, `WEATHER updated` on success.
- Code PASS: Timer/manual refresh skip HTTP when network is not ready, keep cache, and mark stale/offline state instead of doing DNS before IP.
- Code PASS: HTTP/DNS failures while network is ready use a retry timer with exponential backoff, capped at 60 seconds.
- Build PASS: app binary `0x2e52d0`, partition `0x3f0000`, free `0x10ad30` (26%). IRAM 108,351 used / 22,721 free. DRAM 105,428 used / 75,308 free.
- Hardware PASS: pending. Must verify serial order on board after flash: `WIFI GOT_IP`, `WEATHER fetch started`, `WEATHER HTTP 200`, `WEATHER updated`.
