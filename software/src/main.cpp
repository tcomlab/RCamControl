

//#include "main.h"
#include <Arduino.h>
//#include <ModbusRTU.h>
#include <TFT_eSPI.h>
#include <lvgl.h>
#include <ui_build/ui.h>
#include <ui_build/ui_helpers.h>
#include "Adafruit_Keypad.h"
#include "main.h"
#include "bus.h"

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ 320 * 20 ];

TFT_eSPI tft = TFT_eSPI(240, 320); /* TFT instance */

uint32_t tmr1;
uint32_t tmr2;
uint32_t tmr3;
uint32_t tmr4;

const int led = LED_BUILTIN;

int cnt_inter = 0;
unsigned long timing; 

lv_group_t * g ;

uint8_t togle_screen;
lv_obj_t *active_screen;

// Keypad setting
const byte ROWS = 7; //four rows
const byte COLS = 4; //three columns

char keys[ROWS][COLS] = {
{240,           241,            242,            243             },
{0,             LV_KEY_UP,      LV_KEY_RIGHT,   LV_KEY_NEXT     },
{LV_KEY_LEFT,   LV_KEY_DOWN,    0,              LV_KEY_PREV     },
{'1',           '2',            '3',            LV_KEY_BACKSPACE},
{'4',           '5',            '6',            LV_KEY_END      },
{'7',           '8',            '9',            LV_KEY_HOME     },
{LV_KEY_ESC,    '0',            LV_KEY_ENTER,   LV_KEY_DEL}
};

byte rowPins[ROWS] = {9, 10, 11, 12, 13, 14, 15}; //{15, 14, 13, 12, 11, 10, 9}; //connect to the row pinouts of the kpd
byte colPins[COLS] = {28, 27, 26, 22}; //{22, 26, 27, 28}; //connect to the column pinouts of the kpd

//initialize an instance of class NewKeypad
Adafruit_Keypad Keypad = Adafruit_Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );
    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();
    lv_disp_flush_ready( disp );
}
 

void keyboard_read(lv_indev_drv_t * drv, lv_indev_data_t*data){
    if(Keypad.available()){
        keypadEvent e = Keypad.read();
        
        if(e.bit.EVENT == KEY_JUST_PRESSED) 
            data->state = LV_INDEV_STATE_PRESSED;
     
        if(e.bit.EVENT == KEY_JUST_RELEASED) 
            data->state = LV_INDEV_STATE_RELEASED;

        if (data->state == LV_INDEV_STATE_PRESSED){
            switch(e.bit.KEY)
            {
                case 240:
                    togle_screen = 1;
                    return;
                break;

                case 241:
                    togle_screen = 2;
                    return;
                break;

                case 242:
                    togle_screen = 3;
                    return;
                break;

                case 243:
                    togle_screen = 4;
                    return;
                break;
            }
        }
        data->key = e.bit.KEY; 
    }
}


void setup()
{
    pinMode(led, OUTPUT);
    pinMode(2, OUTPUT);
    Keypad.begin();
    lv_init();
    tft.begin();          
    tft.setRotation(1); 
    tft.fillScreen(TFT_ORANGE);
    digitalWrite(led,1);
    delay(400);
    digitalWrite(led,0);

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, 320 * 10 );

    //Initialize the display
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    disp_drv.hor_res = 320;//screenWidth;
    disp_drv.ver_res = 240;//screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );


    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv); //Basic initialization
    indev_drv.type = LV_INDEV_TYPE_KEYPAD;
    indev_drv.read_cb = keyboard_read;
    lv_indev_t * indev_keypad = lv_indev_drv_register(&indev_drv);

    g = lv_group_create();
    lv_indev_set_group(indev_keypad, g);
    lv_group_set_default(g);
    // Инициалізация интерфейса
    ui_init();
    // Иніциалізація шини обміну
    bus_init();
    active_screen = ui_Screen1;
}


void loop()
{   
    if (millis() - tmr1 >= 5) {  
        tmr1 = millis();                   
        lv_timer_handler();
    }

    if (millis() - tmr2 >= 100) {  
        tmr2 = millis();                  
        Keypad.tick();
    }

    if (millis() - tmr3 >= 100) {  
        tmr3 = millis();          
        // Автомат переклацвання скрінів         
        switch(togle_screen){

            case 0:
                togle_screen = 0;
            break;

            case 1:
                //lv_obj_del(lv_scr_act());
                //ui_Screen2_screen_init();
                lv_scr_load_anim(ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
                togle_screen = 0;
            break;

            case 2:
                //lv_obj_del(lv_scr_act());
                //ui_Screen3_screen_init();
                lv_scr_load_anim(ui_Screen3, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
                togle_screen = 0;
            break;

            case 3:
                //lv_obj_del(lv_scr_act());
                //ui_Screen4_screen_init();
                lv_scr_load_anim(ui_Screen4, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
                togle_screen = 0;
            break;

            case 4:
                //lv_obj_del(lv_scr_act());
                //ui_Screen5_screen_init();
                lv_scr_load_anim(ui_Screen5, LV_SCR_LOAD_ANIM_NONE, 0, 0, false);
                togle_screen = 0;
            break;
        }
    }

    if (millis() - tmr4 >= 100) {
        tmr4 = millis();
        bus_task();
    }
}