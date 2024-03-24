#include <Arduino.h>
#include "soc/timer_group_struct.h"  //for wdt
#include "soc/timer_group_reg.h"     //for wdt
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
void ICACHE_FLASH_ATTR io_service::TestHWM(const char *taskName)
{
  UBaseType_t stack_HWM = uxTaskGetStackHighWaterMark(nullptr);
  BaseType_t portGCID = xPortGetCoreID();
  uint32_t dispGIT = lv_disp_get_inactive_time(NULL);

  Serial.println("\n================================================================================");
  Serial.printf("(%s).: \nTiene un máximo en la Pila (High Water Mark) de.: %u \nEn el núcleo (%u) \nTimer(%u)", taskName, stack_HWM, portGCID, dispGIT);
  Serial.println("\n================================================================================");
}

void ICACHE_FLASH_ATTR io_service::feedTheDog()
{
  // feed dog 0
  TIMERG0.wdt_wprotect=TIMG_WDT_WKEY_VALUE; // write enable
  TIMERG0.wdt_feed=1;                       // feed dog
  TIMERG0.wdt_wprotect=0;                   // write protect
  // feed dog 1
  TIMERG1.wdt_wprotect=TIMG_WDT_WKEY_VALUE; // write enable
  TIMERG1.wdt_feed=1;                       // feed dog
  TIMERG1.wdt_wprotect=0;                   // write protect
}
