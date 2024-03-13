#include "include/wifi_controller.hpp"
#include "include/secrets.hpp"

// The WiFiController instance
WiFiController wifiController();

void setup()
{
    Serial.begin(9600);
    // Connect to the WiFi network
    wifiController.connect_to(ssid, password);
}

void loop()
{
    // Nothing to do here
}