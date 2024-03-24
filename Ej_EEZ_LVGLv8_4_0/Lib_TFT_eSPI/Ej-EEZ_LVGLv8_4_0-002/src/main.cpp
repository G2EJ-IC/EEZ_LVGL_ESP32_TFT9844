#include "Arduino.h"
#include "display_service.h"
#include "io_service.h"
#include "tp_service.h"

TaskHandle_t Task1 = NULL;
TaskHandle_t Task2 = NULL;
TaskHandle_t Task3 = NULL;
SemaphoreHandle_t cuentaMutex;

io_service io;            // load IO control service
display_service display;  // load display service
tp_service tp;            // load touchpad

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
int delayLength0 = 3000;

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
      10500,
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
      27000,
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
      25000,
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
  io.feedTheDog();
  if (millis() > asyncDelay0)
  {
    asyncDelay0 += delayLength0;
    io.ParpadeoLED();
    io.TestHWM("loop");
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
  int delayLength1 = 5700;
  unsigned long asyncDelay1 = 0;
  io.setup();
  for (;;)
  {
    io.feedTheDog();
    loop_Task1();
    if (millis() > asyncDelay1)
    {
      asyncDelay1 += delayLength1;
      io.TestHWM("loop1");
    }
  }
}
void loop2(void *parameter)
{
  int delayLength2 = 5500;
  unsigned long asyncDelay2 = 0;
  display.setup();
  for (;;)
  {
    io.feedTheDog();
    loop_Task2();
    if (millis() > asyncDelay2)
    {
      asyncDelay2 += delayLength2;
      io.TestHWM("loop2");
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
    io.feedTheDog();
    loop_Task3();
    if (millis() > asyncDelay3)
    {
      asyncDelay3 += delayLength3;
      io.TestHWM("loop3");
    }
  }
}
