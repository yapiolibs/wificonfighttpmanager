#include <WifiConfigOrFallbackAccesspointManager.h>

void setup()
{
    WiFi.mode(WIFI_AP);
    WifiConfigOrFallbackAccesspointManager foo(display);
}

void loop()
{
    // wifi established
}
