#include <Display.h>
#include <WifiConfigOrFallbackAccesspointManager.h>

Display display; 

void setup()
{
    display.setup();
    
    WiFi.mode(WIFI_AP);
    WifiConfigOrFallbackAccesspointManager foo(display);
}

void loop()
{
    // wifi established
}
