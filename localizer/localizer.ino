#include "include/wifi_controller.h"
#include "include/secrets.h"

// The WiFiController instance
WiFiController wifiController;

void setup()
{
    Serial.begin(9600);
    // Connect to the WiFi network
    wifiController.connect_to_wifi(ssid, password);
}

void loop()
{
    // Nothing to do here
}