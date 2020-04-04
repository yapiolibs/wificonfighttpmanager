#include <Display.h>
#include <WifiConfigOrFallbackAccesspointManager.h>

Display display; 

void setup()
{
    display.setup();
    
    WiFi.mode(WIFI_AP);
    WifiConfigOrFallbackAccesspointManager foo(display);
    // wifi connection to AP established
}

void loop()
{
    
}
