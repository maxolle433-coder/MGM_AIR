/**
 * @file screen_components_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_components_gen.h"
#include "../Luftahan.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_components_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static bool screen_created = false;
    if (screen_created) {
        LV_LOG_WARN("`screen_components` is already initialized as a permanent screen. Returning with no change.");
        return screen_components;
    }


    lv_obj_t * the_root = NULL;

    #if LUFTAHAN_CHECK_COMPILE_TARGET(LUFTAHAN_TARGET_ALL)
    if (Luftahan_check_target(LUFTAHAN_TARGET_ALL)) {
        screen_components = lv_obj_create(NULL);
        lv_obj_t * lv_obj_0 = screen_components;
        lv_obj_set_name_static(lv_obj_0, "screen_components_#");
        lv_obj_set_width(lv_obj_0, lv_pct(100));
        lv_obj_set_height(lv_obj_0, lv_pct(100));
        lv_obj_set_style_bg_color(lv_obj_0, COLOR_DARK_BG, 0);

        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_0);
        lv_image_set_src(lv_image_0, wheels2_display);
        lv_obj_set_align(lv_image_0, LV_ALIGN_CENTER);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_0);
        lv_image_set_src(lv_image_1, body2_display);
        lv_obj_set_align(lv_image_1, LV_ALIGN_CENTER);
        lv_obj_bind_style_prop(lv_image_1, LV_STYLE_TRANSLATE_Y, 0, &subject_body_offset);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_align(lv_button_0, LV_ALIGN_BOTTOM_LEFT);
        lv_obj_set_x(lv_button_0, 12);
        lv_obj_set_y(lv_button_0, -12);
        lv_obj_set_width(lv_button_0, 100);
        lv_obj_set_height(lv_button_0, 48);
        lv_obj_set_style_bg_color(lv_button_0, COLOR_DARK_PANEL, 0);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 90 / 100), 0);
        lv_obj_set_style_text_color(lv_button_0, COLOR_ACCENT_TEXT, 0);
        lv_obj_set_style_radius(lv_button_0, 8, 0);
        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_0, &subject_body_offset, LV_EVENT_CLICKED, -2);
        lv_obj_set_subject_increment_event_min_value(lv_button_0, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(lv_button_0, subject_increment_event_0, 10);
        lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
        lv_label_set_text(lv_label_0, "RAISE");
        lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);

        lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
        lv_obj_set_align(lv_button_1, LV_ALIGN_BOTTOM_RIGHT);
        lv_obj_set_x(lv_button_1, -12);
        lv_obj_set_y(lv_button_1, -12);
        lv_obj_set_width(lv_button_1, 100);
        lv_obj_set_height(lv_button_1, 48);
        lv_obj_set_style_bg_color(lv_button_1, COLOR_ACCENT, 0);
        lv_obj_set_style_bg_opa(lv_button_1, (255 * 95 / 100), 0);
        lv_obj_set_style_text_color(lv_button_1, COLOR_ACCENT_TEXT, 0);
        lv_obj_set_style_radius(lv_button_1, 8, 0);
        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(lv_button_1, &subject_body_offset, LV_EVENT_CLICKED, 2);
        lv_obj_set_subject_increment_event_min_value(lv_button_1, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(lv_button_1, subject_increment_event_1, 10);
        lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
        lv_label_set_text(lv_label_1, "LOWER");
        lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);

        the_root = lv_obj_0;
    }
    #endif

    if (the_root) screen_created = true;

    LV_TRACE_OBJ_CREATE("finished");

    return the_root;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

