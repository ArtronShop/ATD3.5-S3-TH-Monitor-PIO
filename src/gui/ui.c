// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: LED

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Index
void ui_Index_screen_init(void);
lv_obj_t * ui_Index;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Container3;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Container1;
lv_obj_t * ui_temp_label;
lv_obj_t * ui_temp_status_badge;
lv_obj_t * ui_temp_status_label;
lv_obj_t * ui_temp_chart;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Container2;
lv_obj_t * ui_humi_label;
lv_obj_t * ui_humi_status_badge;
lv_obj_t * ui_humi_status_label;
lv_obj_t * ui_humi_chart;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Index_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Index);
}
