#include "include/wifi_controller.h"

void WiFiController::connect_to_wifi(const char *ssid, const char *password)
{
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");
}

// void WiFiController::server_setup()
// {
//     server.on("/start", HTTP_GET, [this]()
//               {
//             // Start the mapping process but include coordinates
//             server.send(200, "text/plain", "Starting to build map..."); });
// }