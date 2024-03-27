#ifndef __CONECTARWIFI_AIOT_H__
#define __CONECTARWIFI_AIOT_H__

#include <Arduino.h>
#include <WiFiManager.h>

class WiFi_AIoT
{
private:

public:
    WiFi_AIoT();
    ~WiFi_AIoT();
    void ICACHE_FLASH_ATTR ResetWiFi_AIoT(void);
    void ICACHE_FLASH_ATTR DisconnectWiFi_AIoT(void);
    void ICACHE_FLASH_ATTR ConectarWiFi_AIoT(void);

    String ICACHE_FLASH_ATTR AIoT_SSID_get(void);
    String ICACHE_FLASH_ATTR AIoT_PWD_get(void);

    String ICACHE_FLASH_ATTR AIoT_IP_get(void);
    String ICACHE_FLASH_ATTR AIoT_DNS_get(void);
    String ICACHE_FLASH_ATTR AIoT_MAC_get(void);

    wl_status_t ICACHE_FLASH_ATTR AIoT_status_get(void);
};

#endif // __CONECTARWIFI_AIOT_H__
