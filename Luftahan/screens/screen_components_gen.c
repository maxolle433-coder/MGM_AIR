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
        lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
        lv_obj_set_align(lv_obj_1, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_obj_1, 0);
        lv_obj_set_y(lv_obj_1, 0);
        lv_obj_set_width(lv_obj_1, 240);
        lv_obj_set_height(lv_obj_1, 112);
        lv_obj_set_style_bg_opa(lv_obj_1, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_1, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
        lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, true);
        lv_obj_set_scroll_snap_x(lv_obj_1, LV_SCROLL_SNAP_START);
        lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
        lv_obj_set_align(lv_obj_2, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_obj_2, 0);
        lv_obj_set_y(lv_obj_2, 0);
        lv_obj_set_width(lv_obj_2, 480);
        lv_obj_set_height(lv_obj_2, 112);
        lv_obj_set_style_bg_opa(lv_obj_2, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_2, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_2, 0, 0);
        lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
        lv_obj_set_align(lv_obj_3, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_obj_3, 0);
        lv_obj_set_y(lv_obj_3, 0);
        lv_obj_set_width(lv_obj_3, 240);
        lv_obj_set_height(lv_obj_3, 112);
        lv_obj_set_style_bg_opa(lv_obj_3, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_3, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
        lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SNAPPABLE, true);
        lv_obj_t * lv_image_0 = lv_image_create(lv_obj_3);
        lv_image_set_src(lv_image_0, wheels2_display);
        lv_obj_set_align(lv_image_0, LV_ALIGN_TOP_LEFT);
        lv_obj_set_flag(lv_image_0, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_t * lv_image_1 = lv_image_create(lv_obj_3);
        lv_image_set_src(lv_image_1, body2_display);
        lv_obj_set_align(lv_image_1, LV_ALIGN_TOP_LEFT);
        lv_obj_set_flag(lv_image_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_bind_style_prop(lv_image_1, LV_STYLE_TRANSLATE_Y, 0, &subject_body_offset);

        lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_2);
        lv_obj_set_align(lv_obj_4, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_obj_4, 240);
        lv_obj_set_y(lv_obj_4, 0);
        lv_obj_set_width(lv_obj_4, 240);
        lv_obj_set_height(lv_obj_4, 112);
        lv_obj_set_style_bg_opa(lv_obj_4, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_obj_4, 0, 0);
        lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
        lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SNAPPABLE, true);
        lv_obj_t * lv_label_0 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
        lv_obj_set_y(lv_label_0, 2);
        lv_obj_set_width(lv_label_0, 200);
        lv_label_set_text(lv_label_0, "TRYCK");
        lv_obj_set_style_text_font(lv_label_0, font_h4, 0);
        lv_obj_set_style_text_color(lv_label_0, COLOR_ACCENT, 0);
        lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_1 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_1, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_1, 20);
        lv_obj_set_y(lv_label_1, 38);
        lv_obj_set_width(lv_label_1, 30);
        lv_label_set_text(lv_label_1, "FL");
        lv_obj_set_style_text_font(lv_label_1, font_h5, 0);
        lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_2 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_2, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_2, 50);
        lv_obj_set_y(lv_label_2, 34);
        lv_obj_set_width(lv_label_2, 50);
        lv_label_bind_text(lv_label_2, &subject_air_fl, NULL);
        lv_obj_set_style_text_font(lv_label_2, font_h4, 0);
        lv_obj_set_style_text_color(lv_label_2, COLOR_ACCENT, 0);
        lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_LEFT, 0);

        lv_obj_t * lv_label_3 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_3, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_3, 126);
        lv_obj_set_y(lv_label_3, 38);
        lv_obj_set_width(lv_label_3, 34);
        lv_label_set_text(lv_label_3, "FR");
        lv_obj_set_style_text_font(lv_label_3, font_h5, 0);
        lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_4 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_4, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_4, 160);
        lv_obj_set_y(lv_label_4, 34);
        lv_obj_set_width(lv_label_4, 50);
        lv_label_bind_text(lv_label_4, &subject_air_fr, NULL);
        lv_obj_set_style_text_font(lv_label_4, font_h4, 0);
        lv_obj_set_style_text_color(lv_label_4, COLOR_ACCENT, 0);
        lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_LEFT, 0);

        lv_obj_t * lv_label_5 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_5, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_5, 20);
        lv_obj_set_y(lv_label_5, 78);
        lv_obj_set_width(lv_label_5, 30);
        lv_label_set_text(lv_label_5, "RL");
        lv_obj_set_style_text_font(lv_label_5, font_h5, 0);
        lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_6 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_6, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_6, 50);
        lv_obj_set_y(lv_label_6, 74);
        lv_obj_set_width(lv_label_6, 50);
        lv_label_bind_text(lv_label_6, &subject_air_rl, NULL);
        lv_obj_set_style_text_font(lv_label_6, font_h4, 0);
        lv_obj_set_style_text_color(lv_label_6, COLOR_ACCENT, 0);
        lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_LEFT, 0);

        lv_obj_t * lv_label_7 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_7, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_7, 126);
        lv_obj_set_y(lv_label_7, 78);
        lv_obj_set_width(lv_label_7, 34);
        lv_label_set_text(lv_label_7, "RR");
        lv_obj_set_style_text_font(lv_label_7, font_h5, 0);
        lv_obj_set_style_text_align(lv_label_7, LV_TEXT_ALIGN_CENTER, 0);

        lv_obj_t * lv_label_8 = lv_label_create(lv_obj_4);
        lv_obj_set_align(lv_label_8, LV_ALIGN_TOP_LEFT);
        lv_obj_set_x(lv_label_8, 160);
        lv_obj_set_y(lv_label_8, 74);
        lv_obj_set_width(lv_label_8, 50);
        lv_label_bind_text(lv_label_8, &subject_air_rr, NULL);
        lv_obj_set_style_text_font(lv_label_8, font_h4, 0);
        lv_obj_set_style_text_color(lv_label_8, COLOR_ACCENT, 0);
        lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_LEFT, 0);

        lv_obj_t * lv_image_2 = lv_image_create(lv_obj_0);
        lv_image_set_src(lv_image_2, Knapparv1);
        lv_obj_set_align(lv_image_2, LV_ALIGN_CENTER);
        lv_obj_set_flag(lv_image_2, LV_OBJ_FLAG_SCROLLABLE, false);

        lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
        lv_obj_set_align(lv_button_0, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_button_0, 0);
        lv_obj_set_y(lv_button_0, -9);
        lv_obj_set_width(lv_button_0, 80);
        lv_obj_set_height(lv_button_0, 72);
        lv_obj_set_style_bg_opa(lv_button_0, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_button_0, 0, 0);
        lv_obj_set_style_outline_width(lv_button_0, 0, 0);
        lv_obj_set_style_shadow_width(lv_button_0, 0, 0);
        lv_obj_set_flag(lv_button_0, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_subject_increment_dsc_t * subject_increment_event_0 = lv_obj_add_subject_increment_event(lv_button_0, &subject_body_offset, LV_EVENT_CLICKED, -2);
        lv_obj_set_subject_increment_event_min_value(lv_button_0, subject_increment_event_0, 0);
        lv_obj_set_subject_increment_event_max_value(lv_button_0, subject_increment_event_0, 10);

        lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
        lv_obj_set_align(lv_button_1, LV_ALIGN_CENTER);
        lv_obj_set_x(lv_button_1, 0);
        lv_obj_set_y(lv_button_1, 108);
        lv_obj_set_width(lv_button_1, 80);
        lv_obj_set_height(lv_button_1, 72);
        lv_obj_set_style_bg_opa(lv_button_1, (255 * 0 / 100), 0);
        lv_obj_set_style_border_width(lv_button_1, 0, 0);
        lv_obj_set_style_outline_width(lv_button_1, 0, 0);
        lv_obj_set_style_shadow_width(lv_button_1, 0, 0);
        lv_obj_set_flag(lv_button_1, LV_OBJ_FLAG_SCROLLABLE, false);
        lv_subject_increment_dsc_t * subject_increment_event_1 = lv_obj_add_subject_increment_event(lv_button_1, &subject_body_offset, LV_EVENT_CLICKED, 2);
        lv_obj_set_subject_increment_event_min_value(lv_button_1, subject_increment_event_1, 0);
        lv_obj_set_subject_increment_event_max_value(lv_button_1, subject_increment_event_1, 10);

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

