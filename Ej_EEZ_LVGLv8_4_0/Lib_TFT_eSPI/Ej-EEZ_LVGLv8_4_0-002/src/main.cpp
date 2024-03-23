#include "Arduino.h"
// #include <lvgl.h>
#include "soc/timer_group_struct.h"  //for wdt
#include "soc/timer_group_reg.h"     //for wdt
// #include "TFT_eSPI.h"
// #include <ui.h>
#include "display_service.h"
#include "io_service.h"
#include "tp_service.h"
// #include "screens.h"

TaskHandle_t Task1 = NULL;
TaskHandle_t Task2 = NULL;
TaskHandle_t Task3 = NULL;
SemaphoreHandle_t cuentaMutex;

io_service io;            // load IO control service
display_service display;  // load display service
tp_service tp;            // load touchpad

inline void feedTheDog(){
  // feed dog 0
  TIMERG0.wdt_wprotect=TIMG_WDT_WKEY_VALUE; // write enable
  TIMERG0.wdt_feed=1;                       // feed dog
  TIMERG0.wdt_wprotect=0;                   // write protect
  // feed dog 1
  TIMERG1.wdt_wprotect=TIMG_WDT_WKEY_VALUE; // write enable
  TIMERG1.wdt_feed=1;                       // feed dog
  TIMERG1.wdt_wprotect=0;                   // write protect
}

//************************************************************************************************
inline void loop_Task1(void);
inline void loop_Task2(void);
inline void loop_Task3(void);
//************************************************************************************************
void loop1(void *);
void loop2(void *);
void loop3(void *);
//************************************************************************************************

#define LVGL_REFRESH_TIME (5u) // 5 milliseconds

unsigned long asyncDelay0 = 0;
int delayLength0 = 5000;

void setup()
{
  // Segundo Siclo en el Núcleo Secundario.
  // Núcleo Principal  -> 1. APP
  // Núcleo Secundario -> 0. PRO
  /************************************Begin FreeRTOS*******************************************/
  BaseType_t taskCreationResult;  
  taskCreationResult = xTaskCreatePinnedToCore(
      loop1,
      "Task_1",
      10000,
      NULL,
      1,
      &Task1,
      0);
  if (taskCreationResult != pdPASS)
  {
    Serial.println("Error al crear Task1");
    while (true)
      ;
  }
  
  taskCreationResult = xTaskCreatePinnedToCore(
      loop2,
      "Task_2",
      12000,
      NULL,
      1,
      &Task2,
      1);
  if (taskCreationResult != pdPASS)
  {
    Serial.println("Error al crear Task2");
    while (true)
      ;
  }

  taskCreationResult = xTaskCreatePinnedToCore(
      loop3,
      "Task_3",
      10000,
      NULL,
      1,
      &Task3,
      0);
  if (taskCreationResult != pdPASS)
  {
    Serial.println("Error al crear Task3");
    while (true)
      ;
  }
  cuentaMutex = xSemaphoreCreateMutex();
  if (cuentaMutex == NULL)
  {
    Serial.println("Error al crear semáforo");
    while (true)
      ;
  }
  /******************************************End FreeRTOS***************************************/
}

void loop()
{
  feedTheDog();
  if (millis() > asyncDelay0)
  {
    asyncDelay0 += delayLength0;
    io.ParpadeoLED();
    io.TestHwm("loop");
  }
}
//************************************************************************************************

inline void loop_Task1(void)
{
  io.loop();
}

inline void loop_Task2(void)
{
  display.loop();
}

inline void loop_Task3(void)
{
  tp.loop();
}

void loop1(void *parameter)
{
  int delayLength1 = 5000;
  unsigned long asyncDelay1 = 0;
  io.setup();
  for (;;)
  {
    loop_Task1();
    if (millis() > asyncDelay1)
    {
      asyncDelay1 += delayLength1;
      io.TestHwm("loop1");
    }
  }
}
void loop2(void *parameter)
{
  int delayLength2 = 5000;
  unsigned long asyncDelay2 = 0;
  display.setup();
  for (;;)
  {
    loop_Task2();
    if (millis() > asyncDelay2)
    {
      asyncDelay2 += delayLength2;
      io.TestHwm("loop2");
    }
  }
}

void loop3(void *parameter)
{
  int delayLength3 = 5000;
  unsigned long asyncDelay3 = 0;
  tp.setup();
  for (;;)
  {
    loop_Task3();
    if (millis() > asyncDelay3)
    {
      asyncDelay3 += delayLength3;
      io.TestHwm("loop3");
    }
  }
}
