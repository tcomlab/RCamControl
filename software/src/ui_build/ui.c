// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Spinner1;
lv_obj_t * ui_Screen2;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label2;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label1;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label3;
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label4;
lv_obj_t * ui_XDSOlabel;
lv_obj_t * ui_YDSOlabel;
lv_obj_t * ui_Roller1;
void ui_event_Switch3(lv_event_t * e);
lv_obj_t * ui_Switch3;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label5;
void ui_event_Checkbox1(lv_event_t * e);
lv_obj_t * ui_Checkbox1;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Screen3;
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_TextArea2;
lv_obj_t * ui_TextArea3;
lv_obj_t * ui_TextArea4;
lv_obj_t * ui_TextArea5;
lv_obj_t * ui_TextArea6;
lv_obj_t * ui_TextArea7;
lv_obj_t * ui_TextArea8;
lv_obj_t * ui_TextArea9;
lv_obj_t * ui_TextArea10;
lv_obj_t * ui_TextArea11;
lv_obj_t * ui_TextArea12;
lv_obj_t * ui_TextArea13;
lv_obj_t * ui_TextArea14;
lv_obj_t * ui_TextArea15;
lv_obj_t * ui_Screen4;
lv_obj_t * ui_Screen5;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        x_minus_long(e);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_PRESSED) {
        x_plus(e);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        y_pluss(e);
    }
}
void ui_event_Switch3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        auto_setup(e);
    }
}
void ui_event_Checkbox1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        checked_btn_ctl(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0xF08706), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_loadingscreen_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Spinner1 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Spinner1, 100);
    lv_obj_set_height(ui_Spinner1, 100);
    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE);      /// Flags

    lv_obj_set_style_arc_color(ui_Spinner1, lv_color_hex(0x070FF7), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen2, lv_color_hex(0x1BF355), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button1, 50);
    lv_obj_set_height(ui_Button1, 30);
    lv_obj_set_x(ui_Button1, 5);
    lv_obj_set_y(ui_Button1, 54);
    lv_obj_set_align(ui_Button1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label2 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "-X");

    ui_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button2, 50);
    lv_obj_set_height(ui_Button2, 30);
    lv_obj_set_x(ui_Button2, 104);
    lv_obj_set_y(ui_Button2, 53);
    lv_obj_set_align(ui_Button2, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label1 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "X+");

    ui_Button3 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button3, 50);
    lv_obj_set_height(ui_Button3, 30);
    lv_obj_set_x(ui_Button3, 55);
    lv_obj_set_y(ui_Button3, 17);
    lv_obj_set_align(ui_Button3, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Y+");

    ui_Button4 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button4, 50);
    lv_obj_set_height(ui_Button4, 30);
    lv_obj_set_x(ui_Button4, 50);
    lv_obj_set_y(ui_Button4, 90);
    lv_obj_set_align(ui_Button4, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xAEA2D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Y-");

    ui_XDSOlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_XDSOlabel, 155);
    lv_obj_set_height(ui_XDSOlabel, 35);
    lv_obj_set_x(ui_XDSOlabel, -80);
    lv_obj_set_y(ui_XDSOlabel, -55);
    lv_obj_set_align(ui_XDSOlabel, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_XDSOlabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_XDSOlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_XDSOlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_XDSOlabel, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_XDSOlabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_XDSOlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_XDSOlabel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_YDSOlabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_YDSOlabel, 155);
    lv_obj_set_height(ui_YDSOlabel, 35);
    lv_obj_set_x(ui_YDSOlabel, 78);
    lv_obj_set_y(ui_YDSOlabel, -55);
    lv_obj_set_align(ui_YDSOlabel, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_YDSOlabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_YDSOlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_YDSOlabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_YDSOlabel, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_YDSOlabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_YDSOlabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_YDSOlabel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Roller1 = lv_roller_create(ui_Screen2);
    lv_roller_set_options(ui_Roller1, "0.1 mm\n1 mm\n10 mm\n100 mm", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller1, 48);
    lv_obj_set_width(ui_Roller1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller1, 89);
    lv_obj_set_y(ui_Roller1, -1);
    lv_obj_set_align(ui_Roller1, LV_ALIGN_CENTER);

    ui_Switch3 = lv_switch_create(ui_Screen2);
    lv_obj_set_width(ui_Switch3, 108);
    lv_obj_set_height(ui_Switch3, 25);
    lv_obj_set_x(ui_Switch3, 90);
    lv_obj_set_y(ui_Switch3, 89);
    lv_obj_set_align(ui_Switch3, LV_ALIGN_CENTER);

    ui_Label6 = lv_label_create(ui_Switch3);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 2);
    lv_obj_set_y(ui_Label6, 0);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "AUTO");

    ui_Button5 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button5, 83);
    lv_obj_set_height(ui_Button5, 28);
    lv_obj_set_x(ui_Button5, 89);
    lv_obj_set_y(ui_Button5, 51);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label5 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "1 Cycle");

    ui_Checkbox1 = lv_checkbox_create(ui_Screen2);
    lv_checkbox_set_text(ui_Checkbox1, "");
    lv_obj_set_width(ui_Checkbox1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Checkbox1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Checkbox1, -77);
    lv_obj_set_y(ui_Checkbox1, 52);
    lv_obj_set_align(ui_Checkbox1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags

    ui_Panel1 = lv_obj_create(ui_Screen2);
    lv_obj_set_width(ui_Panel1, 330);
    lv_obj_set_height(ui_Panel1, 31);
    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, -106);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image3 = lv_img_create(ui_Screen2);
    lv_img_set_src(ui_Image3, &ui_img_link_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_Image3, -144);
    lv_obj_set_y(ui_Image3, -106);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Switch3, ui_event_Switch3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Checkbox1, ui_event_Checkbox1, LV_EVENT_ALL, NULL);

}
void ui_Screen3_screen_init(void)
{
    ui_Screen3 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen3, lv_color_hex(0xF08706), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextArea1 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea1, 60);
    lv_obj_set_height(ui_TextArea1, 36);
    lv_obj_set_x(ui_TextArea1, 5);
    lv_obj_set_y(ui_TextArea1, 5);
    lv_textarea_set_placeholder_text(ui_TextArea1, "H0");
    lv_textarea_set_one_line(ui_TextArea1, true);

    ui_TextArea2 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea2, 60);
    lv_obj_set_height(ui_TextArea2, 36);
    lv_obj_set_x(ui_TextArea2, 5);
    lv_obj_set_y(ui_TextArea2, 45);
    lv_textarea_set_placeholder_text(ui_TextArea2, "H1");
    lv_textarea_set_one_line(ui_TextArea2, true);

    ui_TextArea3 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea3, 60);
    lv_obj_set_height(ui_TextArea3, 36);
    lv_obj_set_x(ui_TextArea3, 5);
    lv_obj_set_y(ui_TextArea3, 85);
    lv_textarea_set_placeholder_text(ui_TextArea3, "H2");
    lv_textarea_set_one_line(ui_TextArea3, true);

    ui_TextArea4 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea4, 60);
    lv_obj_set_height(ui_TextArea4, 36);
    lv_obj_set_x(ui_TextArea4, 5);
    lv_obj_set_y(ui_TextArea4, 125);
    lv_textarea_set_placeholder_text(ui_TextArea4, "H3");
    lv_textarea_set_one_line(ui_TextArea4, true);

    ui_TextArea5 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea5, 60);
    lv_obj_set_height(ui_TextArea5, 36);
    lv_obj_set_x(ui_TextArea5, 5);
    lv_obj_set_y(ui_TextArea5, 165);
    lv_textarea_set_placeholder_text(ui_TextArea5, "H4");
    lv_textarea_set_one_line(ui_TextArea5, true);

    ui_TextArea6 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea6, 60);
    lv_obj_set_height(ui_TextArea6, 36);
    lv_obj_set_x(ui_TextArea6, 110);
    lv_obj_set_y(ui_TextArea6, 5);
    lv_textarea_set_placeholder_text(ui_TextArea6, "H5");
    lv_textarea_set_one_line(ui_TextArea6, true);

    ui_TextArea7 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea7, 60);
    lv_obj_set_height(ui_TextArea7, 36);
    lv_obj_set_x(ui_TextArea7, 110);
    lv_obj_set_y(ui_TextArea7, 45);
    lv_textarea_set_placeholder_text(ui_TextArea7, "H6");
    lv_textarea_set_one_line(ui_TextArea7, true);

    ui_TextArea8 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea8, 60);
    lv_obj_set_height(ui_TextArea8, 36);
    lv_obj_set_x(ui_TextArea8, 110);
    lv_obj_set_y(ui_TextArea8, 85);
    lv_textarea_set_placeholder_text(ui_TextArea8, "H7");
    lv_textarea_set_one_line(ui_TextArea8, true);

    ui_TextArea9 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea9, 60);
    lv_obj_set_height(ui_TextArea9, 36);
    lv_obj_set_x(ui_TextArea9, 110);
    lv_obj_set_y(ui_TextArea9, 125);
    lv_textarea_set_placeholder_text(ui_TextArea9, "H8");
    lv_textarea_set_one_line(ui_TextArea9, true);

    ui_TextArea10 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea10, 60);
    lv_obj_set_height(ui_TextArea10, 36);
    lv_obj_set_x(ui_TextArea10, 110);
    lv_obj_set_y(ui_TextArea10, 165);
    lv_textarea_set_placeholder_text(ui_TextArea10, "H9");
    lv_textarea_set_one_line(ui_TextArea10, true);

    ui_TextArea11 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea11, 60);
    lv_obj_set_height(ui_TextArea11, 36);
    lv_obj_set_x(ui_TextArea11, 210);
    lv_obj_set_y(ui_TextArea11, 5);
    lv_textarea_set_placeholder_text(ui_TextArea11, "H10");
    lv_textarea_set_one_line(ui_TextArea11, true);

    ui_TextArea12 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea12, 60);
    lv_obj_set_height(ui_TextArea12, 36);
    lv_obj_set_x(ui_TextArea12, 210);
    lv_obj_set_y(ui_TextArea12, 45);
    lv_textarea_set_placeholder_text(ui_TextArea12, "H11");
    lv_textarea_set_one_line(ui_TextArea12, true);

    ui_TextArea13 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea13, 60);
    lv_obj_set_height(ui_TextArea13, 36);
    lv_obj_set_x(ui_TextArea13, 210);
    lv_obj_set_y(ui_TextArea13, 85);
    lv_textarea_set_placeholder_text(ui_TextArea13, "H12");
    lv_textarea_set_one_line(ui_TextArea13, true);

    ui_TextArea14 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea14, 60);
    lv_obj_set_height(ui_TextArea14, 36);
    lv_obj_set_x(ui_TextArea14, 210);
    lv_obj_set_y(ui_TextArea14, 125);
    lv_textarea_set_placeholder_text(ui_TextArea14, "H13");
    lv_textarea_set_one_line(ui_TextArea14, true);

    ui_TextArea15 = lv_textarea_create(ui_Screen3);
    lv_obj_set_width(ui_TextArea15, 60);
    lv_obj_set_height(ui_TextArea15, 36);
    lv_obj_set_x(ui_TextArea15, 210);
    lv_obj_set_y(ui_TextArea15, 165);
    lv_textarea_set_placeholder_text(ui_TextArea15, "H14");
    lv_textarea_set_one_line(ui_TextArea15, true);

}
void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen4, lv_color_hex(0xF08706), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_Screen5_screen_init(void)
{
    ui_Screen5 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen5, lv_color_hex(0xF08706), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    ui_Screen4_screen_init();
    ui_Screen5_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
