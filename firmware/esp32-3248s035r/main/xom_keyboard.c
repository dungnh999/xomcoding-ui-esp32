#include "xom_keyboard.h"

#include "board_esp32_3248s035r.h"

/* Keyboard footprint (portrait): full width, ~190 px tall above the bottom. */
#define XOM_KB_HEIGHT 190
#define XOM_KB_MARGIN 6

static lv_obj_t * s_kb;      /* shared keyboard instance (top layer) */
static lv_obj_t * s_ta;      /* currently bound textarea */
static lv_obj_t * s_moved;   /* textarea whose y we changed */
static lv_coord_t s_moved_y; /* its original y */

static void keyboard_ensure(void);
static void show_for(lv_obj_t * ta);
static void ta_event_cb(lv_event_t * event);
static void kb_event_cb(lv_event_t * event);

static void restore_moved(void)
{
    if (s_moved != NULL) {
        lv_obj_set_y(s_moved, s_moved_y);
        s_moved = NULL;
    }
}

static void keyboard_ensure(void)
{
    if (s_kb != NULL) {
        return;
    }

    s_kb = lv_keyboard_create(lv_layer_top());
    lv_obj_set_size(s_kb, XOM_LCD_H_RES, XOM_KB_HEIGHT);
    lv_obj_align(s_kb, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_add_flag(s_kb, LV_OBJ_FLAG_HIDDEN);
    lv_obj_remove_flag(s_kb, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_event_cb(s_kb, kb_event_cb, LV_EVENT_ALL, NULL);
}

static void show_for(lv_obj_t * ta)
{
    keyboard_ensure();

    if (s_moved != NULL && s_moved != ta) {
        restore_moved();
    }
    s_ta = ta;

    lv_keyboard_set_textarea(s_kb, ta);
    lv_obj_remove_flag(s_kb, LV_OBJ_FLAG_HIDDEN);
    lv_obj_move_foreground(s_kb);

    /* Lift the textarea above the keyboard when it would be covered. */
    lv_coord_t kb_top = XOM_LCD_V_RES - XOM_KB_HEIGHT;
    lv_area_t coords;
    lv_obj_get_coords(ta, &coords);
    if (coords.y2 > kb_top) {
        s_moved = ta;
        s_moved_y = lv_obj_get_y(ta);
        lv_obj_set_y(ta, kb_top - lv_obj_get_height(ta) - XOM_KB_MARGIN);
    }
}

static void ta_event_cb(lv_event_t * event)
{
    lv_event_code_t code = lv_event_get_code(event);
    lv_obj_t * ta = lv_event_get_target(event);

    if (code == LV_EVENT_FOCUSED || code == LV_EVENT_CLICKED) {
        show_for(ta);
    } else if ((code == LV_EVENT_DEFOCUSED || code == LV_EVENT_CANCEL) && s_ta == ta) {
        xom_keyboard_hide();
    }
}

static void kb_event_cb(lv_event_t * event)
{
    lv_event_code_t code = lv_event_get_code(event);
    if (code == LV_EVENT_READY || code == LV_EVENT_CANCEL) {
        xom_keyboard_hide();
    }
}

static lv_obj_tree_walk_res_t attach_cb(lv_obj_t * obj, void * user_data)
{
    (void)user_data;
    if (lv_obj_check_type(obj, &lv_textarea_class)) {
        lv_obj_add_event_cb(obj, ta_event_cb, LV_EVENT_ALL, NULL);
    }
    return LV_OBJ_TREE_WALK_NEXT;
}

void xom_keyboard_attach(lv_obj_t * screen)
{
    if (screen == NULL) {
        return;
    }
    lv_obj_tree_walk(screen, attach_cb, NULL);
}

void xom_keyboard_hide(void)
{
    /* Clear the binding before touching focus: removing FOCUSED emits
     * LV_EVENT_DEFOCUSED, which re-enters ta_event_cb. */
    lv_obj_t * ta = s_ta;
    s_ta = NULL;
    if (ta != NULL) {
        lv_obj_remove_state(ta, LV_STATE_FOCUSED);
    }
    if (s_kb != NULL) {
        lv_keyboard_set_textarea(s_kb, NULL);
        lv_obj_add_flag(s_kb, LV_OBJ_FLAG_HIDDEN);
    }
    restore_moved();
}

bool xom_keyboard_is_visible(void)
{
    return s_kb != NULL && !lv_obj_has_flag(s_kb, LV_OBJ_FLAG_HIDDEN);
}
