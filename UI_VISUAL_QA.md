# UI Visual QA - Xom Coding ESP32-S3 Dashboard

Ngay cap nhat: 2026-10-11

## Pham vi

- Chi kiem tra va sua giao dien.
- Khong tich hop API, Wi-Fi logic, NVS, OTA, backend quota hoac firmware logic.
- Khong tao man hinh moi.
- Khong sua generated C/H thu cong.

## Nguon kiem tra

- XML source: `screens/**/*.xml`
- Screenshot: `ui-preview/*.png`
- Contact sheet:
  - `ui-preview/_contact_landscape.png`
  - `ui-preview/_contact_portrait.png`
- Bao cao nen: `UI_SCREEN_VALIDATION.md`

## Ket qua review screenshot

Da ra soat 62 PNG va hai contact sheet.

Khong thay loi nghiem trong o muc screenshot overview:

- Khong co man hinh trong/trang/den.
- Khong co man sai kich thuoc.
- Khong thay layout vuot khung tong the.
- Khong thay text chong nghiem trong.
- Khong thay clipping lon o header, nut bam, card chinh.
- Dark mode, card, border va mau primary nhin chung dong bo.
- Font tieng Viet render du dau trong cac screenshot.

Gioi han:

- Day khong phai pixel-level QA.
- Chua kiem thu tuong tac tung widget.
- Contact sheet co the bo sot loi rat nho o text phu.

## Loi visual co bang chung

### AI Quota TabView bi lech design system

Man hinh:

- `screens/ai/quota_portrait.xml`
- `screens/ai/quota_landscape.xml`

Bang chung:

- Trong screenshot/contact sheet, TabView that hien thi tab bar mac dinh mau xam sang.
- Mau nay lech voi dark mode `#0b111b`, card `#172332`, border `#29394d` va primary Xom Coding `#a52a26`.
- Yeu cau Task 8 uu tien doi TabView active/indicator sang mau primary bang co che style duoc LVGL Editor ho tro.

## File XML da sua

### `screens/ai/quota_portrait.xml`

Da them style:

- `quota_tab_main`
- `quota_tab_items`
- `quota_tab_items_checked`
- `quota_tab_indicator`

Da gan vao `lv_tabview` bang selectors:

- `main`
- `items`
- `items|checked`
- `indicator`

Muc tieu:

- Nen TabView dong bo dark mode.
- Tab inactive dung card/dim text.
- Tab active dung primary `#a52a26`.
- Indicator dung primary `#a52a26`.

### `screens/ai/quota_landscape.xml`

Da them style tuong tu:

- `quota_land_tab_main`
- `quota_land_tab_items`
- `quota_land_tab_items_checked`
- `quota_land_tab_indicator`

Da gan vao `lv_tabview` bang selectors:

- `main`
- `items`
- `items|checked`
- `indicator`

## Kiem tra sau sua XML

Da chay:

```sh
xmllint --noout screens/ai/quota_portrait.xml screens/ai/quota_landscape.xml
xmllint --noout project.xml globals.xml translations.xml
find screens -type f -name '*.xml' -print0 | xargs -0 -n1 xmllint --noout
```

Ket qua:

- `quota_portrait.xml`: XML well-formed.
- `quota_landscape.xml`: XML well-formed.
- Toan bo XML project: PASS.

## Codegen/export

Trang thai hien tai:

- 62/62 generated C/H van ton tai tu lan Build GUI truoc.
- Sau khi sua `quota_portrait.xml` va `quota_landscape.xml`, generated C cho 2 man quota da cu hon XML nguon.
- Khong duoc danh dau codegen PASS cho thay doi TabView moi cho den khi Build GUI lai trong LVGL Pro Editor.

Can thuc hien trong LVGL Pro Editor:

1. Open project `/Users/dungndev/Developer/xomcodingui`.
2. Chay Build/Export GUI chinh thuc.
3. Xac nhan `screens/ai/quota_portrait_gen.c` va `screens/ai/quota_landscape_gen.c` duoc cap nhat moi hon XML source.

## Build/render

Da chay lai build hien co:

```sh
cmake --build preview-build --target lib-ui -j 8
cmake --build preview-build --target lved-runtime -j 8
cmake --build build -j
```

Ket qua:

- `lib-ui`: PASS voi generated C hien co.
- `lved-runtime`: PASS voi generated C hien co.
- Desktop simulator: PASS voi generated C hien co.

Gioi han quan trong:

- Build tren khong xac minh thay doi TabView moi vi LVGL Editor chua export lai XML da sua.
- Screenshot moi sau polish chua the xuat dung thay doi cho den khi codegen GUI duoc chay lai.

## Trang thai Visual QA

| Hang muc | Trang thai |
|---|---|
| Screenshot review truoc polish | PASS overview 62/62 |
| Loi visual thuc su tim thay | AI Quota TabView default gray |
| XML polish | DONE cho 2 quota XML |
| XML validation | PASS 62/62 |
| Codegen cho thay doi moi | PENDING GUI export |
| Build sau thay doi moi | PENDING sau GUI export |
| Render screenshot sau thay doi moi | PENDING sau GUI export |
| Pixel-level QA | Chua thuc hien |

## Khac biet UI chap nhan

- Mot so man co mat do thong tin cao, dac biet dashboard landscape, nhung khong thay loi nghiem trong o contact sheet.
- Mot so mau trang thai dung cyan/green/red de phan biet trang thai; chap nhan neu khong tranh voi primary action.
- Cac man settings portrait co nut cao 34-38 px; phu hop voi kich thuoc 320x480 va da duoc dung nhat quan trong bo UI.

## Man can kiem tra thu cong sau export

Uu tien:

- `quota_portrait`
- `quota_landscape`

Can xac nhan:

- TabView van la widget that.
- Tab active/inactive dung mau moi.
- Indicator khong con xanh/xam mac dinh.
- Claude/ChatGPT tab van hien thi dung.
- Progress bar, reset time va nut `Lam moi du lieu` khong bi doi layout.

Sau do nen chay lai:

```sh
./build/bin/lvgl_simulator --screen quota_portrait --screenshot ui-preview/quota_portrait.png
./build/bin/lvgl_simulator --screen quota_landscape --screenshot ui-preview/quota_landscape.png
```

---

# Task 9 - LVGL Switch Styling & UI Consistency

Ngay cap nhat: 2026-10-11

Pham vi:

- Chi sua XML giao dien.
- Khong sua generated C/H thu cong.
- Khong them man moi.
- Khong tich hop API, Wi-Fi logic, NVS, OTA, backend hoac firmware logic.

## Tong ket switch

Da quet toan bo `screens/**/*.xml`.

| Hang muc | Ket qua |
|---|---:|
| Tong so `lv_switch` tim thay | 19 |
| So switch da kiem tra | 19 |
| So switch da dat pattern style | 17 |
| So switch can sua | 2 |
| So switch con thieu selector sau sua | 0 |

Pattern kiem tra:

- Track/main co `selector="main"`.
- Indicator ON co `selector="indicator|checked"`.
- Knob co `selector="knob"`.
- Cac style switch co `radius="999"` de tao dang vien thuoc/knob tron.
- Track OFF dung nen dark theme.
- Indicator ON dung primary `0xa52a26`.
- Knob dung mau trang va khong co border vuong.

## Loi tim thay

### `screens/settings/wifi_landscape.xml`

Widget:

- `wifi_enabled_landscape`

Loi:

- `style_sw` chi co mau nen, khong co `radius`, `pad_all`, `border_width`.
- `style_sw` duoc gan khong co selector, generated C cu gan style vao selector `0`.
- `style_sw_on` dung selector `checked|indicator`, khac pattern dang dung o cac switch con lai.
- `style_knob` khong co radius nen knob co nguy co vuong/cat goc.
- OFF track dung mau sang `0xcbd5e1`, lech voi dark theme.

Da sua:

- `style_sw`: doi OFF track sang `0x344256`, them `radius="999"`, `pad_all="3"`, `border_width="0"`.
- `style_sw_on`: giu primary `0xa52a26`, them `bg_opa="100%"`, `radius="999"`.
- `style_knob`: them `bg_opa="100%"`, `radius="999"`, `pad_all="0"`, `border_width="0"`, shadow nhe.
- Gan `style_sw` bang `selector="main"`.
- Doi ON selector thanh `indicator|checked`.

### `screens/settings/wifi_portrait.xml`

Widget:

- `wifi_enabled`

Loi:

- Switch khong gan style rieng, co nguy co dung default LVGL va khong dong bo mau/radius voi bo UI.

Da sua:

- Them style cuc bo `wifi_switch_main`, `wifi_switch_checked`, `wifi_switch_knob`.
- Gan selector `main`, `indicator|checked`, `knob`.
- Giu nguyen name, vi tri, kich thuoc va default state cua widget.

## File XML da thay doi trong Task 9

- `screens/settings/wifi_landscape.xml`
- `screens/settings/wifi_portrait.xml`

## Ra soat widget lien quan

Kiem tra nhanh tu XML:

- Checkbox: co style checked/indicator rieng o cac man password/factory reset; khong thay bang chung mau xanh mac dinh trong XML da quet.
- Slider: cac slider hien co dung style main/indicator/knob rieng; khong thay loi mau xanh mac dinh ro rang tu XML.
- Progress bar: cac bar chinh dung fill primary/status color; khong sua hang loat.
- TabView AI Quota: `quota_portrait.xml` va `quota_landscape.xml` van la `lv_tabview` that, co style `main`, `items`, `items|checked`, `indicator` da them tu Task 8.

Khong thuc hien thay doi hang loat vi khong co bang chung loi ro rang ngoai 2 switch Wi-Fi.

## Validation

Da chay:

```sh
xmllint --noout screens/settings/wifi_landscape.xml screens/settings/wifi_portrait.xml
xmllint --noout project.xml globals.xml translations.xml
find screens -type f -name '*.xml' -print0 | xargs -0 -n1 xmllint --noout
```

Ket qua:

- `wifi_landscape.xml`: PASS.
- `wifi_portrait.xml`: PASS.
- Toan bo XML project: PASS.

Da chay audit switch bang parser XML cuc bo:

- `TOTAL_SWITCHES`: 19.
- `ISSUES`: 0.

## Build

Da chay:

```sh
cmake --build preview-build --target lib-ui -j 8
cmake --build preview-build --target lved-runtime -j 8
cmake --build build -j
```

Ket qua voi generated C hien co:

- `lib-ui`: PASS.
- `lved-runtime`: PASS.
- Desktop simulator: PASS.

Gioi han quan trong:

- Build tren van dung generated C/H hien co.
- Chua duoc xem la xac minh render cho style switch moi vi LVGL Pro Editor GUI chua export lai XML sau Task 9.

## Codegen/export

Trang thai sau sua XML:

| Man | Trang thai generated |
|---|---|
| `wifi_landscape` | STALE - XML moi hon `_gen.c/_gen.h` |
| `wifi_portrait` | STALE - XML moi hon `_gen.c/_gen.h` |
| `quota_portrait` | STALE tu Task 8 - XML moi hon `_gen.c/_gen.h` |
| `quota_landscape` | STALE tu Task 8 - XML moi hon `_gen.c/_gen.h` |

Can thuc hien trong LVGL Pro Editor:

1. Open project `/Users/dungndev/Developer/xomcodingui`.
2. Chay Build/Export GUI chinh thuc.
3. Xac nhan 4 file generated sau duoc cap nhat:
   - `screens/settings/wifi_landscape_gen.c`
   - `screens/settings/wifi_portrait_gen.c`
   - `screens/ai/quota_portrait_gen.c`
   - `screens/ai/quota_landscape_gen.c`

## Screenshot/render

Chua xuat screenshot moi sau Task 9 vi generated C/H chua dong bo voi XML moi.

Sau khi GUI export xong, can render lai:

```sh
./build/bin/lvgl_simulator --screen wifi_landscape --screenshot ui-preview/wifi_landscape.png
./build/bin/lvgl_simulator --screen wifi_portrait --screenshot ui-preview/wifi_portrait.png
./build/bin/lvgl_simulator --screen quota_portrait --screenshot ui-preview/quota_portrait.png
./build/bin/lvgl_simulator --screen quota_landscape --screenshot ui-preview/quota_landscape.png
```

Can xac minh truc quan:

- Switch Wi-Fi landscape co dang vien thuoc, khong con goc vuong.
- Switch Wi-Fi portrait dong bo mau/radius voi landscape.
- Knob tron, nam dung tam theo chieu doc, khong bi cat.
- ON indicator dung primary `#a52a26`.
- OFF track dung dark theme.
- AI Quota TabView khong con mau xanh/xam mac dinh ngoai y muon sau export.

## Trang thai hien tai

| Hang muc | Trang thai |
|---|---|
| Switch audit XML | PASS 19/19 |
| XML validation | PASS 62/62 |
| XML source polish | DONE cho 2 Wi-Fi XML |
| Codegen cho thay doi moi | PENDING GUI export |
| Build generated hien co | PASS |
| Render sau thay doi switch | PENDING GUI export |
| Visual QA sau thay doi switch | PENDING screenshot moi |

---

# Task 10 - TabView Theme & Missing UI Screens

Ngay cap nhat: 2026-10-11

Pham vi:

- Chi xu ly XML giao dien.
- Khong sua generated C/H thu cong.
- Khong them logic API, Wi-Fi, NVS, OTA, backend hoac dieu huong firmware.

## AI Quota TabView

Nguyen nhan thuc te cua nen xam:

- Schema local LVGL Editor v9.5.0 cho `lv_tabview` ghi ro `main` chi style body/content.
- Tab bar la element rieng `tab_bar`.
- Tung nut tab la element rieng `tab_button`.
- Style `items`, `items|checked`, `indicator` gan truc tiep len `lv_tabview` khong style dung tab bar/tab button trong LVGL Pro Editor v2.0.4, nen Preview van co nen xam mac dinh.

Da sua:

- `screens/ai/quota_portrait.xml`
  - Dung `lv_tabview-tab_bar height="36"` cho tab bar.
  - Dung `lv_tabview-tab_button index="0"` va `index="1"` cho Claude/ChatGPT.
  - Inactive tab: `0x172332`, text `0x94a3b8`.
  - Active checked tab: `0xa52a26`, text trang.
  - Radius tab bar 9px, button 7px.
- `screens/ai/quota_landscape.xml`
  - Tuong tu portrait.
  - Tab bar height 32px.

Khong thay doi cac card quota ben duoi.

Gioi han:

- XML da validate nhung chua co screenshot sau sua vi can Build/Export lai bang LVGL Pro Editor GUI.
- Chua danh dau Visual PASS cho TabView moi.

## Wi-Fi Switch Task 9

Da kiem tra lai XML:

- `screens/settings/wifi_portrait.xml`
- `screens/settings/wifi_landscape.xml`

Trang thai XML:

- Track/main co `radius="999"`.
- Indicator checked dung `0xa52a26`.
- Knob co `radius="999"`.
- OFF track dung nen dark.

Gioi han:

- Generated C/H cua 2 man Wi-Fi van stale cho den khi GUI export lai.
- Chua danh dau render PASS cho switch moi.

## Man UI moi da them

Da them 14 XML moi, khong tao trung man co san:

| Nhom | Portrait | Landscape |
|---|---|---|
| Notifications | `screens/notifications/notifications_portrait.xml` | `screens/notifications/notifications_landscape.xml` |
| Notification Detail | `screens/notifications/detail_portrait.xml` | `screens/notifications/detail_landscape.xml` |
| Network Diagnostics | `screens/network/diagnostics_portrait.xml` | `screens/network/diagnostics_landscape.xml` |
| System Logs | `screens/system/logs_portrait.xml` | `screens/system/logs_landscape.xml` |
| Loading State | `screens/states/loading_portrait.xml` | `screens/states/loading_landscape.xml` |
| Empty State | `screens/states/empty_portrait.xml` | `screens/states/empty_landscape.xml` |
| Error / Offline State | `screens/states/offline_portrait.xml` | `screens/states/offline_landscape.xml` |

Tong XML:

- Truoc Task 10: 62.
- Sau Task 10: 76.
- XML moi: 14.

## Validation Task 10

Da chay:

```sh
xmllint --noout project.xml globals.xml translations.xml
find screens -type f -name '*.xml' -print0 | xargs -0 -n1 xmllint --noout
```

Ket qua:

- XML syntax: PASS 76/76.
- Font audit: PASS, khong con font chua dang ky.
- Image asset audit: PASS cho cac asset duoc tham chieu trong XML.

## Codegen/build/render Task 10

Trang thai hien tai:

| Hang muc | Trang thai |
|---|---|
| Generated C/H hien co | 62 man cu |
| Generated C/H cho 14 man moi | PENDING GUI export |
| Generated C/H cho quota/switch sua moi | STALE/PENDING GUI export |
| `lib-ui` build hien co | PASS |
| `lved-runtime` build hien co | PASS |
| Desktop simulator build hien co | PASS |
| Smoke render 14 man moi | PENDING GUI export |
| Screenshot truoc/sau TabView | PENDING GUI export |

Danh sach XML chua co generated C/H:

- `screens/network/diagnostics_landscape.xml`
- `screens/network/diagnostics_portrait.xml`
- `screens/notifications/detail_landscape.xml`
- `screens/notifications/detail_portrait.xml`
- `screens/notifications/notifications_landscape.xml`
- `screens/notifications/notifications_portrait.xml`
- `screens/states/empty_landscape.xml`
- `screens/states/empty_portrait.xml`
- `screens/states/loading_landscape.xml`
- `screens/states/loading_portrait.xml`
- `screens/states/offline_landscape.xml`
- `screens/states/offline_portrait.xml`
- `screens/system/logs_landscape.xml`
- `screens/system/logs_portrait.xml`

Can thuc hien tiep trong LVGL Pro Editor:

1. Open project `/Users/dungndev/Developer/xomcodingui`.
2. Chay Build/Export GUI chinh thuc.
3. Xac nhan generated C/H tang tu 62 len 76 man.
4. Build lai `lib-ui`, `lved-runtime`, desktop simulator.
5. Render screenshot cho quota, Wi-Fi switch va 14 man moi.

Khong danh dau Visual QA PASS cho cac man tren cho den khi da render screenshot moi.

---

# Task 11 - Export/Render Verification

Ngay cap nhat: 2026-10-11

## Ket qua codegen sau GUI Build moi nhat

Da kiem ke truc tiep:

| Hang muc | Ket qua |
|---|---:|
| XML source | 76 |
| `_gen.c` | 62 |
| `_gen.h` | 62 |
| `file_list_gen.cmake` screen entries | 62 |
| Simulator Gallery screens | 62 |

Ket luan:

- Chua co 76/76 codegen.
- 14 man moi Task 10 chua duoc export.
- Gallery tu generated headers chi nhan 62 man.

## Man moi chua co screenshot

Chua the xuat screenshot moi cho cac man sau vi thieu generated C/H:

- `diagnostics_landscape`
- `diagnostics_portrait`
- `detail_landscape`
- `detail_portrait`
- `notifications_landscape`
- `notifications_portrait`
- `empty_landscape`
- `empty_portrait`
- `loading_landscape`
- `loading_portrait`
- `offline_landscape`
- `offline_portrait`
- `logs_landscape`
- `logs_portrait`

## AI Quota TabView

Trang thai:

- XML da sua dung schema `lv_tabview-tab_bar` va `lv_tabview-tab_button`.
- Generated C/H hien tai stale, chua chua style moi.
- Chua the xac minh screenshot that cho nen TabView moi.

Bang chung stale:

- `quota_portrait.xml` moi hon `quota_portrait_gen.c`.
- `quota_landscape.xml` moi hon `quota_landscape_gen.c`.
- Generated C khong co `lv_tabview_get_tab_bar`, `lv_tabview_get_tab_button`, `quota_tab_button_checked`.

Visual QA:

- Khong PASS.
- Can export lai trong LVGL Pro Editor truoc khi so sanh screenshot.

## Wi-Fi Switch

Trang thai:

- XML Task 9 da sua track/indicator/knob bo tron.
- Generated C/H hien tai stale.
- `wifi_landscape_gen.c` van gan `style_sw` voi selector `0`, tuc la chua phan anh `selector="main"` va radius moi.

Visual QA:

- Khong PASS.
- Can export lai trong LVGL Pro Editor truoc khi render screenshot.

## Build va Smoke Render

Da build voi generated C/H hien co:

- `lib-ui`: PASS.
- `lved-runtime`: PASS.
- Desktop simulator: PASS.

Da smoke render 62 generated screens hien co:

- Thu muc: `ui-preview-task11/generated-62/`
- PNG: 62/62.
- Fail: 0.

Gioi han:

- Screenshot nay chi chung minh runtime 62 man cu van render duoc.
- Khong dung de ket luan TabView/Switch moi hoac 14 man moi dat Visual QA.

## Trang thai Visual QA Task 11

| Hang muc | Trang thai |
|---|---|
| Codegen 76/76 | FAIL - 62/76 |
| Build generated hien co | PASS |
| Smoke render generated hien co | PASS 62/62 |
| Screenshot 14 man moi | BLOCKED |
| Screenshot AI Quota moi | BLOCKED |
| Screenshot Wi-Fi Switch moi | BLOCKED |
| Visual QA PASS | NO |

Can thuc hien tiep:

1. Mo LVGL Pro Editor voi project `/Users/dungndev/Developer/xomcodingui`.
2. Bao dam Editor nhan cac folder XML moi: `notifications`, `states`, `network/diagnostics_*`, `system/logs_*`.
3. Chay Build/Export GUI.
4. Kiem tra `_gen.c/_gen.h` tang len 76/76 va `file_list_gen.cmake` co 76 screen entries.
5. Render lai `quota_*`, `wifi_*`, 14 man moi, roi moi danh dau Visual QA.

---

# Task 11.2 - Visual QA sau GUI Build/Export moi nhat

Ngay cap nhat: 2026-10-11

## Ket qua kiem tra codegen

Da kiem tra lai filesystem project `/Users/dungndev/Developer/xomcodingui` sau lan GUI Build/Export moi nhat.

| Hang muc | Ket qua |
|---|---:|
| XML source | 76 |
| `_gen.c` | 62 |
| `_gen.h` | 62 |
| `file_list_gen.cmake` screen entries | 62 |

Ket luan:

- Chua co codegen 76/76.
- 14 man Task 10 van chua co `_gen.c/_gen.h`.
- `quota_portrait`, `quota_landscape`, `wifi_portrait`, `wifi_landscape` van stale.

## AI Quota TabView

Chua the Visual QA bang screenshot moi.

Ly do:

- `quota_portrait.xml` moi hon `quota_portrait_gen.c`.
- `quota_landscape.xml` moi hon `quota_landscape_gen.c`.
- Generated C hien tai van la output cu, nen screenshot simulator neu render se khong chung minh mau TabView moi.

Trang thai: BLOCKED - can export/codegen moi.

## Wi-Fi Switch

Chua the Visual QA bang screenshot moi.

Ly do:

- `wifi_portrait.xml` moi hon `wifi_portrait_gen.c`.
- `wifi_landscape.xml` moi hon `wifi_landscape_gen.c`.
- Generated C hien tai van la output cu, nen screenshot simulator neu render se khong chung minh switch bo goc moi.

Trang thai: BLOCKED - can export/codegen moi.

## Screenshot va smoke render

Khong xuat screenshot moi trong lan nay.

Ly do:

- Chua co generated C/H moi.
- Build/render lai luc nay chi kiem tra 62 man cu, khong kiem chung duoc 14 man Task 10 hoac 4 man style moi.

## Trang thai Visual QA

| Hang muc | Trang thai |
|---|---|
| Codegen 76/76 | FAIL - 62/76 |
| 14 man Task 10 co screenshot | BLOCKED |
| AI Quota TabView mau primary | BLOCKED |
| Wi-Fi Switch bo goc | BLOCKED |
| Visual QA moi | NOT PASS |

Can export/codegen thanh cong 76/76 truoc khi tiep tuc build, smoke render va so sanh screenshot.
