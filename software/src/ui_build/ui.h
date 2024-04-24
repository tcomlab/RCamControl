// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_Screen2;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label2;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Label1;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Button4;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_XDSOlabel;
extern lv_obj_t * ui_YDSOlabel;
extern lv_obj_t * ui_Roller1;
void ui_event_Switch3(lv_event_t * e);
extern lv_obj_t * ui_Switch3;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Label5;
void ui_event_Checkbox1(lv_event_t * e);
extern lv_obj_t * ui_Checkbox1;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_Screen3;
extern lv_obj_t * ui_TextArea1;
extern lv_obj_t * ui_TextArea2;
extern lv_obj_t * ui_TextArea3;
extern lv_obj_t * ui_TextArea4;
extern lv_obj_t * ui_TextArea5;
extern lv_obj_t * ui_TextArea6;
extern lv_obj_t * ui_TextArea7;
extern lv_obj_t * ui_TextArea8;
extern lv_obj_t * ui_TextArea9;
extern lv_obj_t * ui_TextArea10;
extern lv_obj_t * ui_TextArea11;
extern lv_obj_t * ui_TextArea12;
extern lv_obj_t * ui_TextArea13;
extern lv_obj_t * ui_TextArea14;
extern lv_obj_t * ui_TextArea15;
extern lv_obj_t * ui_Screen4;
extern lv_obj_t * ui_Screen5;

void x_minus_long(lv_event_t * e);
void x_plus(lv_event_t * e);
void y_pluss(lv_event_t * e);
void auto_setup(lv_event_t * e);
void checked_btn_ctl(lv_event_t * e);

LV_IMG_DECLARE(ui_img_loadingscreen_png);    // assets\LoadingScreen.png
LV_IMG_DECLARE(ui_img_link_png);    // assets\link.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
