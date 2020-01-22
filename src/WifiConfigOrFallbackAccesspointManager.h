#pragma once

#include <Display.h>

struct WifiConfigOrFallbackAccesspointManager
{
    explicit WifiConfigOrFallbackAccesspointManager(Display &display);

protected:
    Display &display;

    void printConnection(const char *ssid, const char *address);
};
