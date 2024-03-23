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
