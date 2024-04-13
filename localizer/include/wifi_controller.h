#ifndef WIFI_CONTROLLER_HPP
#define WIFI_CONTROLLER_HPP

#include <WiFi.h>
#include <WebServer.h>

class WiFiController
{
    private:
        WebServer server;   // The web server to handle requests from the client

    public:
        /**
         * @brief Connect to the WiFi network using the given credentials
         *
         * @param ssid The SSID of the WiFi network to connect to
         * @param password The password of the WiFi network to connect to
         *
         * @return void
         */
        void connect_to_wifi(const char *ssid, const char *password);
};

#endif