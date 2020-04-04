#pragma once

#include <Display.h>
#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

struct WifiConfigOrFallbackAccesspointManager
{
    explicit WifiConfigOrFallbackAccesspointManager(Display &display);

protected:
    Display &display;

    void printConnection(const char *ssid, const char *address);
};
