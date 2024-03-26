#ifndef __CONECTARWIFI_AIOT_H__
#define __CONECTARWIFI_AIOT_H__

#include <Arduino.h>

class WiFi_AIoT
{
private:

public:
    WiFi_AIoT();
    ~WiFi_AIoT();
    void ICACHE_FLASH_ATTR ResetWiFi_AIoT(void);
    void ICACHE_FLASH_ATTR DisconnectWiFi_AIoT(void);
    void ICACHE_FLASH_ATTR ConectarWiFi_AIoT(void);

    String ICACHE_FLASH_ATTR AIoT_SSID(void);
    String ICACHE_FLASH_ATTR AIoT_PWD(void);

    String ICACHE_FLASH_ATTR AIoT_IP(void);
    String ICACHE_FLASH_ATTR AIoT_DNS(void);
    String ICACHE_FLASH_ATTR AIoT_MAC(void);
};

#endif // __CONECTARWIFI_AIOT_H__
