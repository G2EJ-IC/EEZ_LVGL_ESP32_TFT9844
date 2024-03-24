#ifndef __IO_SERVICE_H__
#define __IO_SERVICE_H__

#define ICACHE_FLASH_ATTR

class io_service
{
private:
    friend class display_service;
    // friend class io_service;
    friend class tp_service;

public:
    io_service();
    ~io_service();

    void ICACHE_FLASH_ATTR ParpadeoLED(void);
    void ICACHE_FLASH_ATTR TestHWM(const char *);
    void ICACHE_FLASH_ATTR feedTheDog();
    void ICACHE_FLASH_ATTR setup();
    void ICACHE_FLASH_ATTR loop();    
};

#endif // __IO_SERVICE_H__