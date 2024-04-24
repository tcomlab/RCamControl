

#ifndef BUS_H
#define BUS_H

#include <Arduino.h>
#include <ModbusRTU.h>
#include <lvgl.h>
#include <ui_build/ui.h>
#include <ui_build/ui_helpers.h>

#ifdef __cplusplus
extern "C" {
#endif


#define REGN 10
#define SLAVE_ID 2
#define RXTX_PIN 2

extern ModbusRTU mb;

void bus_init(void);

void bus_task(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*BUS_H*/