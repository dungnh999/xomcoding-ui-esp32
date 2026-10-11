# UI Screen Audit - ESP32-S3 LVGL Dashboard

Ngày audit: 2026-10-11

## Phạm vi

- Chỉ audit source UI hiện có, chưa sửa giao diện.
- Không triển khai API, firmware logic, networking, NVS, OTA hoặc kết nối dịch vụ thật.
- Không xóa, đổi tên hoặc ghi đè file.

## Kết luận nhanh

- Project là LVGL Pro / LVGL Editor XML project, có 2 target trong `project.xml`:
  - `portrait`: 320 x 480
  - `landscape`: 480 x 320
- Simulator dùng LVGL `v9.5.0` trong `sim/CMakeLists.txt`.
- Source không có số phiên bản LVGL Editor chính thức trong `project.xml`; chỉ có thể suy ra đang dùng LVGL Pro/LVGL Editor qua template, `preview-build`, `preview-bin/lved-runtime.*` và README.
- Có 62 file XML màn hình dưới `screens/`.
- Có 37 XML không rỗng và well-formed với root `<screen>`.
- Có 25 XML rỗng, làm validate XML thất bại.
- C export hiện chỉ include 12 màn generated trong `xomcodingui_gen.h`; nhiều XML có nội dung chưa được export/generate sang C.
- Không thấy `lv_tabview`/tab widget trong XML hiện tại, nên chưa có màn nào cần giữ Tab View thật ở thời điểm audit.

## Cấu trúc source

- `project.xml`: khai báo target portrait/landscape.
- `globals.xml`: khai báo image assets, font Be Vietnam Pro, một số global styles cho meter.
- `screens/`: toàn bộ XML màn hình theo nhóm `boot`, `home`, `weather`, `system`, `network`, `nas`, `settings`, `ai`.
- `images/`: icon PNG nguồn và C image data đã export.
- `fonts/`: TTF Be Vietnam Pro, một số Montserrat TTF/data còn tồn tại, và C font data đã export.
- `components/`, `widgets/`: hiện chỉ có README, chưa có custom XML component/widget.
- `sim/`: simulator LVGL 9.5.
- `preview-build/`, `preview-bin/`: môi trường preview/build của LVGL Editor.
- `weather/`: custom C animation/helper `weather_rain.*`.

## Asset, font, style hiện có

- 441 file image PNG/data trong `images/`.
- Nhóm asset chính:
  - boot logo/background
  - weather icons/backgrounds
  - system/resource icons
  - network/status/navigation icons
  - NAS/storage icons
- 44 file font TTF/data trong `fonts/`.
- Font global đang đăng ký trong `globals.xml`:
  - `be_regular_10`, `be_regular_12`, `be_regular_14`, `be_regular_16`, `be_regular_20`
  - `be_medium_10`, `be_medium_11`, `be_medium_12`, `be_medium_14`
  - `be_semibold_12`, `be_semibold_14`, `be_semibold_16`, `be_semibold_20`
- Font range đã bao gồm tiếng Việt: `0x1EA0-0x1EF9`, kèm Latin Extended.
- Global styles:
  - `meter_track`
  - `meter_cpu`
  - `meter_ram`
  - `meter_flash`
  - `meter_knob_hidden`
- Màu chủ đạo `0xa52a26` xuất hiện 61 lần trong XML/global styles.

## Widget đang dùng

- `lv_obj`
- `lv_label`
- `lv_image`
- `lv_button`
- `lv_arc`
- `lv_slider`
- `lv_switch`
- `lv_textarea`
- `lv_checkbox`

Không phát hiện `lv_tabview` hoặc tab widget trong source XML hiện tại.

## Kiểm tra validate/build

- `xmllint --noout` trên toàn bộ XML: không đạt vì 25 file XML rỗng.
- Các XML không rỗng đều có root `<screen>` và well-formed theo kiểm tra XML cơ bản.
- Build hiện tại:
  - `cmake --build preview-build --target lib-ui -j 8`: đạt.
  - `cmake --build preview-build --target lved-runtime -j 8`: đạt.
- Giới hạn: build hiện tại chỉ build generated C đã export. Nó không xác nhận các XML rỗng hoặc các XML chưa generate sang C.

## Lỗi phát hiện

1. 25 file XML rỗng, không hợp lệ với LVGL Editor/XML parser.
2. `screens/settings/nas_config_landscape.xml:340` dùng font `be_semibold_11`, nhưng font này không được đăng ký trong `globals.xml`.
3. Nhiều màn settings có XML nhưng chưa có `_gen.c/_gen.h`, chưa nằm trong `xomcodingui_gen.h` và `file_list_gen.cmake`.
4. `weather_landscape.xml` và `forecast_landscape.xml` có XML nhưng chưa có generated C/H tương ứng.
5. `device` chỉ có landscape có nội dung; portrait rỗng.
6. `security`, `factory_reset`, `ota_progress`, `sync_config` chỉ có portrait có nội dung; landscape rỗng.
7. Một số màn ưu tiên người dùng yêu cầu chưa tồn tại trong source: Notifications, Notification Detail, Wi-Fi Connection Status, Network Diagnostics, System Logs, Empty/Error States.
8. AI Quota Settings có file ở cả 2 hướng nhưng đều rỗng.

## Danh sách màn hình thực tế trong source

| Nhóm | Màn | Portrait XML | Landscape XML | Generated C/H | Trạng thái audit |
|---|---|---:|---:|---:|---|
| ai | quota | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| boot | boot | Có | Có | Có cả 2 | Đã export, cần visual QA |
| home | home | Có | Có | Có cả 2 | Đã export, cần visual QA |
| nas | nas | Có | Có | Có cả 2 | Đã export, cần visual QA |
| network | network | Có | Có | Có cả 2 | Đã export, cần visual QA |
| settings | api_config | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | change_pin | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | data | Có | Có | Không | Có XML, chưa export |
| settings | datetime | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | device | Rỗng | Có | Không | Thiếu portrait, chưa export |
| settings | display | Có | Có | Không | Có XML, chưa export |
| settings | display_timeout | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | factory_reset | Rỗng | Có | Không | Thiếu portrait, chưa export |
| settings | nas_config | Có | Có | Không | Có XML, chưa export; lỗi font ở landscape |
| settings | ota | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | ota_progress | Có | Rỗng | Không | Thiếu landscape, chưa export |
| settings | restart_confirm | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | security | Có | Rỗng | Không | Thiếu landscape, chưa export |
| settings | settings | Có | Có | Không | Có XML, chưa export |
| settings | sync_config | Có | Rỗng | Không | Thiếu landscape, chưa export |
| settings | sync_interval | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | timezone_select | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | weather_config | Có | Có | Không | Có XML, chưa export |
| settings | weather_interval | Rỗng | Rỗng | Không | Thiếu hoàn toàn nội dung |
| settings | wifi | Có | Có | Không | Có XML, chưa export |
| settings | wifi_password | Có | Có | Không | Có XML, chưa export |
| settings | wifi_scan | Có | Có | Không | Có XML, chưa export |
| settings | wifi_static_ip | Có | Có | Không | Có XML, chưa export |
| system | system | Có | Có | Có cả 2 | Đã export, cần visual QA |
| weather | forecast | Có | Có | Chỉ portrait | Landscape XML chưa export |
| weather | weather | Có | Có | Chỉ portrait | Landscape XML chưa export |

## File XML rỗng

- `screens/ai/quota_landscape.xml`
- `screens/ai/quota_portrait.xml`
- `screens/settings/api_config_landscape.xml`
- `screens/settings/api_config_portrait.xml`
- `screens/settings/change_pin_landscape.xml`
- `screens/settings/change_pin_portrait.xml`
- `screens/settings/datetime_landscape.xml`
- `screens/settings/datetime_portrait.xml`
- `screens/settings/device_portrait.xml`
- `screens/settings/display_timeout_landscape.xml`
- `screens/settings/display_timeout_portrait.xml`
- `screens/settings/factory_reset_portrait.xml`
- `screens/settings/ota_landscape.xml`
- `screens/settings/ota_portrait.xml`
- `screens/settings/ota_progress_landscape.xml`
- `screens/settings/restart_confirm_landscape.xml`
- `screens/settings/restart_confirm_portrait.xml`
- `screens/settings/security_landscape.xml`
- `screens/settings/sync_config_landscape.xml`
- `screens/settings/sync_interval_landscape.xml`
- `screens/settings/sync_interval_portrait.xml`
- `screens/settings/timezone_select_landscape.xml`
- `screens/settings/timezone_select_portrait.xml`
- `screens/settings/weather_interval_landscape.xml`
- `screens/settings/weather_interval_portrait.xml`

## Màn còn thiếu so với mục tiêu hiện tại

- AI Quota Settings: có file nhưng rỗng cả 2 hướng.
- Notifications: chưa thấy file XML tương ứng.
- Notification Detail: chưa thấy file XML tương ứng.
- Wi-Fi Connection Status: chưa thấy màn riêng; hiện chỉ có `wifi`, `wifi_scan`, `wifi_password`, `wifi_static_ip`.
- Network Diagnostics: chưa thấy màn riêng.
- System Logs: chưa thấy màn riêng.
- About Device: có thể lấy hướng từ `settings/device_landscape.xml`, nhưng chưa đủ 2 hướng vì `device_portrait.xml` rỗng.
- Empty/Error States: chưa thấy màn riêng hoặc component riêng.

## Thứ tự cần thực hiện

1. Sửa lỗi nền tảng XML/font:
   - thay `be_semibold_11` bằng font đã đăng ký hoặc bổ sung font trong `globals.xml`.
   - xử lý 25 XML rỗng bằng cách hoàn thiện hoặc tạm đánh dấu rõ là chưa dùng.
2. Hoàn thiện nhóm ưu tiên:
   - `screens/ai/quota_portrait.xml`
   - `screens/ai/quota_landscape.xml`
   - Notifications
   - Notification Detail
   - Wi-Fi Connection Status
   - Network Diagnostics
   - System Logs
   - About Device portrait/landscape
   - Empty/Error States
3. Hoàn thiện các màn settings đang thiếu một hướng:
   - `device_portrait`
   - `factory_reset_portrait`
   - `ota_progress_landscape`
   - `security_landscape`
   - `sync_config_landscape`
4. Hoàn thiện các màn settings rỗng nhưng đã có slot:
   - `api_config`
   - `change_pin`
   - `datetime`
   - `display_timeout`
   - `ota`
   - `restart_confirm`
   - `sync_interval`
   - `timezone_select`
   - `weather_interval`
5. Đồng bộ export/generate:
   - generate C/H cho các XML đã hoàn thiện.
   - đảm bảo `xomcodingui_gen.h` và `file_list_gen.cmake` có đầy đủ màn cần build.
6. Visual QA theo từng nhóm:
   - portrait 320 x 480
   - landscape 480 x 320
   - kiểm tra tiếng Việt, tràn chữ, chồng chữ, clipping, scrollbar không mong muốn, radius/border/color/typography.

## Ghi chú cho giai đoạn sửa UI

- Giữ Dark Mode, màu chủ đạo `#a52a26`, font Be Vietnam Pro.
- Dùng dữ liệu demo.
- Không thêm API key, credential hoặc logic kết nối thật.
- Ưu tiên reuse style, spacing, icon, typography từ các màn đã có như `settings`, `wifi`, `device_landscape`, `network`, `system`.
- Không dùng widget/thuộc tính ngoài phạm vi LVGL Pro/LVGL 9.5 hiện tại.

## Cập nhật sau Task 2

Ngày cập nhật: 2026-10-11

### File đã hoàn thiện trong Task 2

- `screens/settings/nas_config_landscape.xml`: thay font chưa đăng ký `be_semibold_11` bằng `be_semibold_12`.
- `screens/settings/device_portrait.xml`
- `screens/settings/factory_reset_portrait.xml`
- `screens/settings/ota_progress_landscape.xml`
- `screens/settings/security_landscape.xml`
- `screens/settings/sync_config_landscape.xml`
- `screens/ai/quota_portrait.xml`
- `screens/ai/quota_landscape.xml`
- `screens/settings/api_config_portrait.xml`
- `screens/settings/api_config_landscape.xml`
- `screens/settings/change_pin_portrait.xml`
- `screens/settings/change_pin_landscape.xml`
- `screens/settings/datetime_portrait.xml`
- `screens/settings/datetime_landscape.xml`
- `screens/settings/display_timeout_portrait.xml`
- `screens/settings/display_timeout_landscape.xml`
- `screens/settings/ota_portrait.xml`
- `screens/settings/ota_landscape.xml`
- `screens/settings/restart_confirm_portrait.xml`
- `screens/settings/restart_confirm_landscape.xml`
- `screens/settings/sync_interval_portrait.xml`
- `screens/settings/sync_interval_landscape.xml`
- `screens/settings/timezone_select_portrait.xml`
- `screens/settings/timezone_select_landscape.xml`
- `screens/settings/weather_interval_portrait.xml`
- `screens/settings/weather_interval_landscape.xml`

### Trạng thái XML

- Tổng số XML: 62.
- XML có nội dung: 62.
- XML còn rỗng: 0.
- `xmllint --noout` toàn bộ `screens/**/*.xml`: đạt.
- Kiểm tra font tham chiếu trong XML so với `globals.xml`: không còn font chưa đăng ký.
- Widget mới dùng trong Task 2 có schema local trong LVGL Editor/LVGL `v9.5.0`: `lv_bar`, `lv_tabview`, `lv_tabview-tab`, `lv_textarea`.

### Trạng thái AI Quota

- `quota_portrait.xml` và `quota_landscape.xml` đã có giao diện đầy đủ.
- Dùng Tab View thật: `lv_tabview` với hai tab `Claude` và `ChatGPT`.
- Có dữ liệu demo cho quota 5h, quota week, phần trăm đã dùng/còn lại, thanh tiến độ, thời gian reset và nút `Làm mới dữ liệu`.
- Không có API/backend/firmware logic.

### Trạng thái generate/export/build/preview

- Build hiện tại:
  - `cmake --build preview-build --target lib-ui -j 8`: đạt.
  - `cmake --build preview-build --target lved-runtime -j 8`: đạt.
- Giới hạn xác minh:
  - Chưa tìm thấy CLI export/codegen LVGL Editor trong project hoặc resource bundle để generate lại `_gen.c/_gen.h` tự động từ XML trong terminal.
  - Build trên vẫn là build của generated C hiện có; nó không chứng minh các XML mới đã được export sang C.
  - Chưa render preview trực quan được từ môi trường CLI hiện tại; cần mở LVGL Editor và export/preview để xác minh pixel-level cho các màn mới.

### Màn chưa thể xác minh bằng preview render

- Toàn bộ 25 màn vừa hoàn thiện từ file rỗng cần được mở trong LVGL Editor để kiểm tra render thực tế portrait/landscape.
- Các màn có XML nhưng chưa có generated C/H từ trước vẫn cần export lại bằng LVGL Editor workflow.

### Tổng kết Task 2

- Hoàn thiện XML: 62/62.
- File XML rỗng còn lại: 0.
- Lỗi font đã biết: 0.
- Validate XML cơ bản: đạt.
- Generate/export mới: chưa xác minh được bằng CLI.
- Preview render trực quan: chưa xác minh được bằng CLI.
