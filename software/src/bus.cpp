
#include "bus.h"

ModbusRTU mb;

void y_pluss(lv_event_t * e)
{
    static bool b = false;
	b = !b;
	mb.Coil(0,b);
}

void x_minus_long(lv_event_t * e)
{
	static bool b = false;
	b = !b;
	mb.Coil(0,b);
}

void auto_setup(lv_event_t * e)
{
	static bool b = false;
	b = !b;
	mb.Coil(0,b);
}

static void event_cb(lv_event_t * e)
{
    lv_obj_t * obj = lv_event_get_current_target(e);
    LV_LOG_USER("Button %s clicked", lv_msgbox_get_active_btn_text(obj));
}


uint16_t cb(TRegister* reg, uint16_t val) {
  uint8_t offset = reg->address.address;
  switch(offset)
  {
    case 0:
      lv_label_set_text_fmt(ui_XDSOlabel,"X:%.3f",(((float)((short)val)) / 100));
      break;
    case 1:
      lv_label_set_text_fmt(ui_YDSOlabel,"Y:%.3f",(((float)((short)val)) / 100));
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      break;
    case 7:
      break;
  }
  return val;
}

void checked_btn_ctl(lv_event_t * e)
{ 
	
}

void bus_init(void)
{
    Serial1.begin(115200, SERIAL_8N1);
    mb.begin(&Serial1);
    mb.begin(&Serial1, RXTX_PIN);  //or use RX/TX direction control pin (if required)
    mb.setBaudrate(115200);
    mb.slave(SLAVE_ID);
    mb.addHreg(0,0,8);
    mb.addCoil(0,0,8);
    mb.onSetHreg(0,cb,8);
}

void bus_task(void)
{
    mb.task();
}