#ifndef _WIFI_H_
#define _WIFI_H_

#include "include.h"
#include <WiFi.h>
#include <HTTPClient.h>

class WIFI{
  public:
    bool init();

  private:
    const char* ssid="Xiaomi Arthur";
    const char* pass="12345678";
    uint32_t last_T;
    #define TIME_OUT 20000
};

#endif
