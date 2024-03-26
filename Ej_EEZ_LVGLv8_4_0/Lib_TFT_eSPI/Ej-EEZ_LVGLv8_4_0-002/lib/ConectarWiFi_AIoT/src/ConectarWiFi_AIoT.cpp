#include <Arduino.h>
/** 
* @brief : Función Similar a cout << de C++, Debe estar despues de #include <Arduino.h> para que funcione.
* @param : T.
* @return : obj.
*/
template<class T>
inline Print &operator <<(Print &obj, T arg) { 
    obj.print(arg); 
    return obj; 
}

#include <ConectarWiFi_AIoT.h>
#include <WiFi.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <WiFiManager.h>

//Instancia de la Clase WiFiManager.
WiFiManager wifiManager;

bool Conecto;

    WiFi_AIoT::WiFi_AIoT(){};
    WiFi_AIoT::~WiFi_AIoT(){};

void ICACHE_FLASH_ATTR WiFi_AIoT::ResetWiFi_AIoT(void) {
    Serial << "\r\n";
    //Resetear Configuración.
    wifiManager.resetSettings();
    Serial << "\r\n\n\n\nReseteo de Redes WiFi Guardadas.... ";
    // Consultar SSID y contraseña guardados - Imprimir SSID y contraseña
    Serial << "\r\nSSID guardado: " << wifiManager.getWiFiSSID();
    Serial << "\r\nContraseña guardada: " << wifiManager.getWiFiPass();
    Serial << "\r\n\n";
    //wifiManager.
}

void ICACHE_FLASH_ATTR WiFi_AIoT::DisconnectWiFi_AIoT(void) {
    Serial << "\r\n";
    //Desconectar Configuración.
    wifiManager.disconnect();
    Serial << "\r\n\n\n\nDesconección de La Red WiFi.... ";
    // Consultar SSID y contraseña guardados - Imprimir SSID y contraseña
    Serial << "\r\nSSID guardado: " << wifiManager.getWiFiSSID();
    Serial << "\r\nContraseña guardada: " << wifiManager.getWiFiPass();
    Serial << "\r\n\n";
}

void ICACHE_FLASH_ATTR WiFi_AIoT::ConectarWiFi_AIoT(void) {
    if (WiFi.status() != WL_CONNECTED) {
        //---------------------------Monitor serial-----------------------------//
        Serial << "\r\n";
        Serial << "\r\n=========================================================";
        Serial << "\r\nUniversidad Distrital Francisco José de Caldas";
        Serial << "\r\nFacultad Tecnológica | Maestría en Ingeniería Civil";
        Serial << "\r\nMonitoreo AIoT | @2024";
        Serial << "\r\nErnesto Jose Guerrero Gonzalez, IC, MSc(C), Esp.";
        Serial << "\r\n=========================================================";
        Serial << "\r\n\n";
        Serial << "\r\nPor favor, conecte el celular a la red (.:: AIoT_NodeESP32 ::.) y configure WiFi.... ";
        Serial << "\r\n\n\n";
        WiFi.mode(WIFI_STA);
        //Crear AP y Portal Cautivo.
        Conecto = wifiManager.autoConnect(".:: AIoT_NodeESP32 ::.");
        
        if (!Conecto) {
            Serial << "\r\nFallo la Conección (timeout - NOK)";
            // ESP.restart();
            // delay(1000);
        }
        // 266:	    WL_NO_SHIELD
        // 0:	  	WL_IDLE_STATUS 
        // 1:	  	WL_NO_SSID_AVAIL
        // 2:	  	WL_SCAN_COMPLETED
        // 3:	  	WL_CONNECTED
        // 4:	  	WL_CONNECT_FAILED
        // 5:   	WL_CONNECTION_LOST
        // 6:	  	WL_DISCONNECTED
        // if(WiFi.status == something)
        Serial << "\r\n\n\n\nYa esta conectado.... ";

        if (WiFi.status() == WL_CONNECTED) {
            // Consultar SSID y contraseña guardados - Imprimir SSID y contraseña           
            Serial << "\r\nSSID guardado: " << wifiManager.getWiFiSSID();
            Serial << "\r\nContraseña guardada: " << wifiManager.getWiFiPass();
            Serial << "\r\n\n";
            Serial << "\r\nConectado a WiFi (OK).: ";
            Serial << "\r\nConectado a la Red WiFi (SSID).: " << String(WiFi.SSID());
            Serial << "\r\nDirección IP .: " << WiFi.localIP().toString();
            Serial << "\r\nDirección DNS.: " << WiFi.dnsIP().toString();
            Serial << "\r\nDirección MAC.: " << WiFi.macAddress();
            Serial << "\r\n";
        }
    }
}

String ICACHE_FLASH_ATTR WiFi_AIoT::AIoT_SSID(void)
{
    return wifiManager.getWiFiSSID();
}

String ICACHE_FLASH_ATTR WiFi_AIoT::AIoT_PWD(void)
{
    return wifiManager.getWiFiPass();
}

String ICACHE_FLASH_ATTR WiFi_AIoT::AIoT_IP(void)
{
    return WiFi.localIP().toString();
}

String ICACHE_FLASH_ATTR WiFi_AIoT::AIoT_DNS(void)
{
    return WiFi.dnsIP().toString();
}

String ICACHE_FLASH_ATTR WiFi_AIoT::AIoT_MAC(void)
{
    return WiFi.macAddress();
}
