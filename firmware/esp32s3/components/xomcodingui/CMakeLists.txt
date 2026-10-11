set(XOM_UI_ROOT "${CMAKE_CURRENT_LIST_DIR}/../../../..")

file(GLOB_RECURSE XOM_UI_SCREEN_SOURCES CONFIGURE_DEPENDS
    "${XOM_UI_ROOT}/screens/*/*_gen.c"
)

file(GLOB XOM_UI_FONT_SOURCES CONFIGURE_DEPENDS
    "${XOM_UI_ROOT}/fonts/*_data.c"
)

file(GLOB XOM_UI_IMAGE_SOURCES CONFIGURE_DEPENDS
    "${XOM_UI_ROOT}/images/*_data.c"
)

idf_component_register(
    SRCS
        "${XOM_UI_ROOT}/xomcodingui.c"
        "${XOM_UI_ROOT}/xomcodingui_gen.c"
        ${XOM_UI_SCREEN_SOURCES}
        ${XOM_UI_FONT_SOURCES}
        ${XOM_UI_IMAGE_SOURCES}
    INCLUDE_DIRS
        "${XOM_UI_ROOT}"
    REQUIRES
        lvgl
)

target_compile_definitions(${COMPONENT_LIB} PUBLIC LV_LVGL_H_INCLUDE_SIMPLE)
