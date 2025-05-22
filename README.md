# TEMPERATURE MONITORING & FIRE PREVENTION DEVICE  
### For Electric Vehicle Battery Safety

## Project Overview

This project is a **temperature monitoring and warning device** designed for **electric vehicle (EV) battery packs** to help prevent **overheating and potential fire or explosion** incidents.

Using a **NodeMCU (ESP8266)** and **DHT11 sensor**, it continuously monitors the temperature and humidity in the battery environment. The data is sent to the **Blynk IoT platform**, allowing real-time remote monitoring via smartphone. If abnormal conditions are detected, immediate alerts can be sent.

---

## Features

- **Real-time temperature & humidity tracking**
- **Visual LED warnings**
- **WiFi-based remote monitoring via Blynk**
- **Modular and customizable**
- **OTA firmware updates supported**

---

## Hardware Requirements

| Component        | Description                    |
|------------------|--------------------------------|
| NodeMCU ESP8266  | Microcontroller with WiFi      |
| DHT11 Sensor     | Temperature & humidity sensor  |
| LED              | Visual alert indicator         |
| Power Supply     | 5V via USB or battery           |

---

## Software Requirements

- Arduino IDE (v1.8+)
- Blynk Library (Latest version)
- DHT Sensor Library by Adafruit
- ESP8266 Board Package

---

## How to Use

1. Configure your Blynk template ID and device name in `main.ino`.
2. Connect the hardware as per wiring diagram.
3. Flash the firmware using Arduino IDE.
4. Connect to WiFi via Blynk provisioning.
5. Monitor temperature/humidity on your phone.

---



