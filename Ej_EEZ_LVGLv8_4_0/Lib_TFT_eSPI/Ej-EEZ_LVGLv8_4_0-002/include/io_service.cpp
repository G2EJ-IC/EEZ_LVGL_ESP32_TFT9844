#include <Arduino.h>
#include "config.h"
#include "io_service.h"
#include "screens.h"

#define PinLED 2               // LED_BUILTIN

io_service::io_service() {}
io_service::~io_service() {}

/* =============================icache functions========================= */
void ICACHE_FLASH_ATTR io_service::setup()
{
  Serial.begin(115200);
  pinMode(PinLED, OUTPUT);
  ParpadeoLED();
} // end io setup

void ICACHE_FLASH_ATTR io_service::loop()
{
  // ParpadeoLED();
} // end io loop

/**
 * @brief Breve descripción.
 * @param Parámetros.
 * @return Salida. 
 */
void io_service::ParpadeoLED(void) {
    digitalWrite(PinLED, !digitalRead(PinLED));
}

///////////////////////////////////////////////////////////////////////////////////////////
/**
 * @brief Breve descripción.
 * @param Parámetros.
 * @return Salida. 
 */
void ICACHE_FLASH_ATTR io_service::TestHwm(const char *taskName)
{
  int stack_hwm_temp = uxTaskGetStackHighWaterMark(nullptr);
  Serial.println("\n================================================================================\n");
  Serial.printf("%s Tiene un máximo en la Pila (High Water Mark) de.: %u\n", taskName, stack_hwm_temp);
  Serial.println("En núcleo -> " + String(xPortGetCoreID()));
  Serial.println("\n================================================================================\n");
}
