# ESP32 Wi-Fi Manager & NVS Settings

Date: 2026-10-11

## Scope

Task 17 turns the Wi-Fi settings screens from DEMO placeholders into a real
Wi-Fi station backed by ESP-IDF `esp_wifi`, plus persistent settings stored in
NVS:

- Enable/disable the Wi-Fi station from `wifi_enabled`.
- Asynchronous network scan; the scan screen builds a real, scrollable list of
  found networks (SSID + security + RSSI).
- Select a network, enter its password on the shared runtime keyboard, and
  connect.
- Live status on the Wi-Fi screen: state, SSID, RSSI, MAC, IP, gateway, netmask,
  DNS.
- Auto-reconnect on boot from saved credentials; bounded, backed-off retries;
  explicit failure states; no retry loop on wrong passwords.
- Static IP fields persisted to NVS.
- Settings stored in a single namespaced, versioned NVS record.

No generated C/H file and no screen XML is hand-edited. All UI access to Wi-Fi
state happens through a 300 ms LVGL poll timer; **no LVGL call is made from an
ESP event handler**. No hardware PASS is claimed — see
[Hardware verification](#hardware-verification-pending).

## Files changed

| File | Status | Purpose |
| --- | --- | --- |
| `firmware/esp32-3248s035r/main/xom_settings.h` | NEW | NVS settings API (`xom_settings_wifi_t`, schema v1) |
| `firmware/esp32-3248s035r/main/xom_settings.c` | NEW | NVS namespace `xomcfg`, load/save/defaults, `nvs_flash_init` |
| `firmware/esp32-3248s035r/main/xom_wifi.h` | NEW | Station manager contract (states, snapshots, helpers) |
| `firmware/esp32-3248s035r/main/xom_wifi.c` | NEW | Event-driven station: async scan, connect, retry/backoff/timeout |
| `firmware/esp32-3248s035r/main/xom_wifi_ui.h` | NEW | Wi-Fi UI binding API |
| `firmware/esp32-3248s035r/main/xom_wifi_ui.c` | NEW | Poll timer, screen binding, runtime scan list, connect flow |
| `firmware/esp32-3248s035r/main/ui_navigation.c` | MODIFIED | `ui_navigation_request[_back]`; empty WIFI_SCAN/WIFI_PASSWORD regions; call `xom_wifi_ui_attach` |
| `firmware/esp32-3248s035r/main/ui_navigation.h` | MODIFIED | Declare the two deferred request functions |
| `firmware/esp32-3248s035r/main/xom_widgets.c` | MODIFIED | Skip DEMO toast for buttons flagged `LV_OBJ_FLAG_USER_1` (real handlers) |
| `firmware/esp32-3248s035r/main/xom_firmware.c` | MODIFIED | `xom_settings_init` + `xom_wifi_init` + `xom_wifi_ui_init` + autostart |
| `firmware/esp32-3248s035r/main/CMakeLists.txt` | MODIFIED | Add sources + `nvs_flash esp_wifi esp_netif esp_event esp_timer` |
| `firmware/esp32-3248s035r/partitions.csv` | MODIFIED | `factory` grows `0x380000` → `0x3f0000` (Wi-Fi image no longer fits) |

## NVS settings

- Namespace: `xomcfg`. Schema: `XOM_SETTINGS_SCHEMA_VERSION = 1`.
- Keys: `schema` (u8), `wifi_en` (u8), `auto` (u8), `ipmode` (u8),
  `ssid`/`pass`/`ip`/`mask`/`gw`/`dns` (strings).
- `xom_settings_init()` calls `nvs_flash_init()` once. The two documented
  re-init cases (`ESP_ERR_NVS_NO_FREE_PAGES`, `ESP_ERR_NVS_NEW_VERSION_FOUND`)
  are handled by erasing **only the NVS partition** (`nvs_flash_erase()`), logged
  loudly with `ESP_LOGW`. This is not a device factory reset and is not silent.
  `nvs_flash_init` failure is returned to the caller, not swallowed.
- `xom_settings_wifi_load()` returns defaults when the namespace/keys are
  missing (first boot is not an error). A stored schema **newer** than the
  firmware is warned about and defaults are used.
- `xom_settings_wifi_save()` writes every key and calls `nvs_commit()`.
- Defaults: `wifi_enabled = true`, `auto_reconnect = true`, `ip_mode = DHCP`.

### Security limitation (important)

**NVS encryption is NOT enabled.** `partitions.csv` has no `nvs_keys` partition
and `CONFIG_NVS_ENCRYPTION` is off, so the Wi-Fi password is stored **in
plaintext** in normal NVS flash. It is never written to a log or to a plaintext
file, but it is only as protected as the flash itself. Enabling encryption
requires adding an `nvs_keys` partition (and typically re-provisioning, which
erases the existing NVS) — deliberately out of scope here.

## Wi-Fi station manager (`xom_wifi.c`)

- Event driven via the default event loop: `WIFI_EVENT` (any id) and
  `IP_EVENT_STA_GOT_IP`. All state lives in a mutex-protected snapshot
  (`xom_wifi_get_status` / `..._scan_state` / `..._scan_results`) so the UI can
  poll without touching the driver.
- `esp_wifi_set_storage(WIFI_STORAGE_RAM)` — the driver never persists anything;
  persistence is owned by `xom_settings`.
- Scan: `esp_wifi_scan_start(cfg, false)` (non-blocking). On `SCAN_DONE`, records
  are fetched into a heap buffer (up to `XOM_WIFI_SCAN_FETCH = 24`, cleared on
  allocation failure), de-duplicated by SSID (keeping the strongest RSSI), sorted
  descending, and at most `XOM_WIFI_MAX_SCAN = 16` are published with a new scan
  `epoch`.
- Connect: `esp_wifi_set_config(WIFI_IF_STA, ...)` + `esp_wifi_connect()`.
  Switching networks while connected first disconnects (suppressed so the retry
  state machine does not fire on our own teardown), then connects.
- Retries: `MAX_RETRY = 5`, backoff `1s, 2s, 4s, 8s, 16s` (capped). A 20 s
  attempt timeout aborts a stuck connect via `esp_wifi_disconnect()`.
- Failure policy:
  - wrong password / handshake errors (`AUTH_FAIL`, `4WAY_HANDSHAKE_TIMEOUT`,
    `HANDSHAKE_TIMEOUT`, `AUTH_EXPIRE`) → `FAILED` immediately, **no retry**;
  - a deliberate `ASSOC_LEAVE` (reason 8) → `DISCONNECTED`, no retry;
  - disabling bumps a generation counter and cancels any in-flight retry/backoff.
- `GOT_IP` fills IP/netmask/gateway (netif), DNS (`esp_netif_get_dns_info`) and
  RSSI (`esp_wifi_sta_get_ap_info`).

## UI binding (`xom_wifi_ui.c`)

The generated screens expose only a few named widgets and leave every value label
**unnamed**, so the module:

1. Finds each value label by its placeholder text and renames it with
   `lv_obj_set_name_static` (`xw_status`, `xw_ssid`, `xw_ip`, `xw_scan_list`, …).
2. Updates those labels from a single 300 ms `lv_timer` callback that runs with
   the LVGL lock already held (the esp_lvgl_port timer task), reading snapshots
   only.

Screen specifics:

- **Wi-Fi**: drives the `wifi_enabled` switch, `btn_save_wifi` (persist), and
  `btn_scan_wifi` (start scan). Status label colour reflects the state.
- **Scan**: deletes the five fixed placeholder rows (flat direct children with
  `150 ≤ y < 425`) and replaces them with a flex-column, vertically scrollable
  list. Each row is a button; tapping reads the row's SSID label, matches it
  against the current scan results, calls `xom_wifi_select()` and defers to the
  password screen. The list is rebuilt only when the scan `epoch` changes.
  `btn_wifi_rescan` rescans; `btn_wifi_scan_back` goes back.
- **Password**: binds selected SSID/RSSI/security, clears and masks the textarea.
  `btn_wifi_password_connect` validates (empty password only allowed for open
  networks), saves credentials to NVS, connects, and navigates back to Wi-Fi;
  the button is disabled while `CONNECTING`. `btn_wifi_password_cancel` goes back.
  The password is never logged.
- **Static IP**: prefills `input_static_{ip,gateway,subnet,dns}` from NVS;
  save persists them with `ip_mode = STATIC` (fields are stored, not yet applied
  to the live netif).

Buttons owned by this module are flagged `LV_OBJ_FLAG_USER_1`; `xom_widgets.c`
keeps their segment styling but suppresses the DEMO toast so real actions are not
masked by a demo message.

## Navigation

`ui_navigation_request(screen)` and `ui_navigation_request_back()` were added.
They reuse the existing deferred `lv_async_call` path (destroying the active
screen from inside its own event callback is unsafe), and coalesce rapid taps.
`ui_navigation_request` pops back to a target already on the stack (so returning
from the password screen to Wi-Fi does not duplicate entries) instead of always
pushing. The WIFI_SCAN and WIFI_PASSWORD coordinate region tables were emptied
because those screens are now fully handled by `xom_wifi_ui`.

## Build

Built with the local ESP-IDF v5.5.1 wrapper (env dir is named `py3.12` while the
interpreter is 3.14; `idf.py` is not on `PATH`):

```sh
cd firmware/esp32-3248s035r
IDF_PYTHON_ENV_PATH=/Users/dungndev/.espressif/python_env/idf5.5_py3.12_env \
/Users/dungndev/.espressif/python_env/idf5.5_py3.12_env/bin/python \
/Users/dungndev/esp/esp-idf-v5.5.1/tools/idf.py build
```

Result: **PASS**, no warnings/errors.

| Metric | Before (16.2) | After (17) |
| --- | --- | --- |
| App binary | `0x30c7b0` | `0x39d070` |
| Factory partition | `0x380000` | `0x3f0000` (grown) |
| Free in partition | 13% | 8% (`0x52f90`) |
| IRAM | 51.54% | 82.63% (22761 B free) |
| DRAM | 44.35% | 56.93% (77844 B free) |

The app partition had to grow from `0x380000` to `0x3f0000`: the Wi-Fi stack
(`esp_wifi`, `wpa_supplicant`, `esp_netif`, `lwip`) added ~590 KB. The `nvs`
partition offset/size are unchanged, so existing NVS data survives a re-flash;
flashing the new partition table is required for the larger app.

## Hardware verification (pending)

No board was attached, so the following are **not** verified on hardware:

- Enabling/disabling the radio and `wifi_enabled` reflecting real state.
- A real scan populating the list, row selection, and connect with a correct and
  a deliberately wrong password (failure state, no retry loop).
- Boot auto-reconnect from saved credentials; retry/backoff behaviour; IP/DNS/
  RSSI/MAC values; static-IP round-trip through NVS.
- Touch scrolling of a long scan list on the resistive panel.

## Notes / follow-ups

- The station is started on demand (`esp_wifi_start` in the enable path); the
  first enable can briefly block the LVGL task during PHY bring-up. If this is
  noticeable on hardware, pre-start the driver at boot.
- Static IP is persisted but not yet applied to the live `esp_netif`.
- NVS encryption is intentionally not enabled (see the security limitation).

## Wi-Fi Connection Behaviour (Task 17.2 updates)

- Reason code `210` (`WIFI_REASON_NO_AP_FOUND_W_COMPATIBLE_SECURITY`) is treated as **non-retryable**. It produces `FAILED` state immediately (no backoff retry loop), with log: `security/compatibility mismatch (reason=210: NO_AP_FOUND_W_COMPATIBLE_SECURITY)`. Rationale: scan confirms AP exists but STA authmode/threshold/PMF is incompatible; retrying with the same config is pointless.
- Credential errors (`WIFI_REASON_AUTH_FAIL`, `WIFI_REASON_4WAY_HANDSHAKE_TIMEOUT`, `WIFI_REASON_HANDSHAKE_TIMEOUT`, `WIFI_REASON_AUTH_EXPIRE`) still go to `FAILED` immediately (no retry).
- `ASSOC_LEAVE` (reason 8) is treated as deliberate disconnect → `DISCONNECTED`, no retry.
- STA config: `threshold.authmode = WIFI_AUTH_WPA_WPA2_PSK` (widest) to accept WPA/WPA2 mixed networks; `pmf_cfg.capable = true`, `pmf_cfg.required = false`; `scan_method = WIFI_ALL_CHANNEL_SCAN`. PMF remains optional for compatibility; no security downgrade (no forced OPEN).
- Non-sensitive logging added on connect attempt: `connecting to <ssid> (pass_len=...)` (password never logged). On `GOT_IP`: `connected, got IP (state=CONNECTED)`. On disconnect: reason strings include short names where appropriate.
- UI: Connect button disabled while `CONNECTING`; busy overlay ("Đang kết nối..."/"Đang quét mạng...") shown on relevant screens; keyboard hidden before navigating to Wi-Fi after connect; password textarea cleared after saving/connecting.
