
# Indoor Localization using BLE Beacons

## Introduction

In this project, we aim to leverage the Bluetooth technology available in ESP32 boards to perform 2D indoor mapping. We will integrate three ESP32 boards whose locations are known and fixed, and a fourth board that will be mobile in a room.

To start off, we will set up the mobile board to act as a Bluetooth client (Observer), and the immobile boards to act as Bluetooth servers (Broadcasters). The broadcasters will continuously broadcast known information.

We will use the Received Signal Strength Indicator (RSSI) at the client to estimate its location with respect to the three reference locations. The client will then communicate this information to a server running on our laptop.

The server will perform triangulation based on the received data and plot the coordinates on the map.

Stay tuned for more updates on the implementation details!

## Requirements

- ESP32 boards (3 for broadcasting, 1 for observing)
- Arduino IDE
- IMU (optional)

## Installation

Go to the directory where you want to clone the repository and open a terminal window. Then, run the following command:

```bash
git clone https://github.com/pratimsadhu/Indoor-Localization-with-Mapping.git
```

After cloning, navigate to the `localizer` directory and open the `localizer.ino` file in Arduino IDE.

## Authors

- Gaurav Chandra

- Pratim Sadhu

- Sahima Srivastava

- Shreya Varma
