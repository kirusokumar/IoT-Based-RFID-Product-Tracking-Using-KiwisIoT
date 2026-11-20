# IoT-Based RFID Product Tracking Using KiwisIoT

An IoT-based product tracking prototype using **NodeMCU ESP8266**, an RFID reader, and KiwisIoT to detect RFID-tagged products and send tracking information to a cloud dashboard.

## About the Project

Tracking products efficiently is useful in warehouses, inventory systems, storage facilities, and logistics environments. RFID technology makes it possible to identify tagged products without manually entering product information.

In this project, an RFID reader is connected to a NodeMCU ESP8266 to detect RFID tags. When a tag is scanned, the ESP8266 processes the tag information and sends the tracking data to KiwisIoT through Wi-Fi.

The KiwisIoT dashboard provides a simple way to monitor RFID detection and tracking information remotely.

## Hardware Components

- NodeMCU ESP8266
- RFID Reader Module (MFRC522)
- RFID Cards or Tags
- Jumper Wires
- USB Power Supply

## Circuit Connections

| MFRC522 RFID | NodeMCU ESP8266 |
|---|---|
| SDA / SS | D2 |
| SCK | D5 |
| MOSI | D7 |
| MISO | D6 |
| RST | D1 |
| 3.3V | 3.3V |
| GND | GND |

The MFRC522 RFID module uses SPI communication to connect with the ESP8266. The RFID module should be powered using 3.3V.

## Features

- RFID tag detection
- Product identification using RFID tags
- Wireless data transmission
- ESP8266 Wi-Fi connectivity
- Cloud dashboard monitoring
- Remote RFID tracking visualization

## KiwisIoT Dashboard

RFID-related information is transmitted to KiwisIoT using configured data channels.

The dashboard can be configured to display tag detection information, scanned tag IDs, and tracking status using appropriate widgets.

## Software Used

- Arduino IDE
- ESP8266 Board Package
- MFRC522 RFID Library
- SPI Library
- KiwisIoT Arduino Library

## Working Principle

The RFID reader continuously waits for an RFID card or tag.

When a tag is placed near the reader, the MFRC522 reads the tag's identification information and sends it to the NodeMCU ESP8266.

The ESP8266 processes the tag data and transmits the information to KiwisIoT through Wi-Fi.

The cloud dashboard can then be used to monitor RFID scanning and product identification information remotely.

## Project Tutorial

Explore the complete project and implementation details on Hackster.io:

[IoT-Based RFID Product Tracking Using KiwisIoT](https://www.hackster.io/kirusokumar/iot-based-rfid-product-tracking-using-kiwisiot-f7806f)

## Explore KiwisIoT

I used **KiwisIoT** for cloud connectivity and dashboard visualization in this project.

🌐 **KiwisIoT Platform:** https://www.kiwisiot.in/

📚 **KiwisIoT Arduino Library:** https://github.com/Kiwistron/KiwisIoT

💡 **KiwisIoT Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

These resources are helpful for exploring the platform, understanding the Arduino library, and learning how to build more IoT projects.

## About the Author

I'm an IoT enthusiast who enjoys building practical projects using microcontrollers, sensors, cloud platforms, and real-world automation ideas.

I share my projects to document what I build, what I learn, and to help others exploring IoT discover new ideas and develop their own projects.

If you find this project interesting, feel free to explore it, modify it for your own applications, or share your feedback. If you're exploring IoT cloud platforms for hardware connectivity and dashboard visualization, you can also check out KiwisIoT and its Arduino library.

---

*Built with curiosity, RFID, and IoT.*
