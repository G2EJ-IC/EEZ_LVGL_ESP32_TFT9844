#include <Arduino.h>
#include "config.h"
#include "tp_service.h"

tp_service::tp_service() {}
tp_service::~tp_service() {}

/* =============================icache functions========================= */
void ICACHE_FLASH_ATTR tp_service::setup()
{
    
} // end tp setup

void ICACHE_FLASH_ATTR tp_service::loop()
{
    lv_no_sleep(60);
} // end tp loop

inline void tp_service::lv_no_sleep(uint32_t lv_sleep)
{
    /*Normal operation (no sleep) in < 1 sec inactivity*/
    if (lv_disp_get_inactive_time(NULL) < (1000 * lv_sleep))
    {
        lv_task_handler();
    }
    /*Sleep after 1 sec inactivity*/
    else
    {
        Serial.println();
        Serial.print(lv_disp_get_inactive_time(NULL));
        Serial.println();
    }
    //my_delay_ms(5);
}