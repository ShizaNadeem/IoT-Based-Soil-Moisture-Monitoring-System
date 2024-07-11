# IoT-Based-Soil-Moisture-Monitoring-System
## About

This project implements a smart irrigation system using an ESP32 microcontroller and Blynk platform. It monitors soil moisture levels using a moisture sensor and controls a water pump to maintain optimal moisture levels. The system also sends real-time data to a Blynk dashboard, allowing remote monitoring and control.

## Features
- **Soil Moisture Monitoring:**
  - Continuously monitors soil moisture levels using an analog moisture sensor.

- **Automated Pump Control:**
  - Automatically turns the water pump on or off based on the soil moisture level.

- **Real-Time Data Transmission:**
  - Sends soil moisture and pump status data to the Blynk dashboard for remote monitoring.

- **Blynk Integration:**
  - Utilizes the Blynk platform for IoT connectivity, enabling remote control and data visualization.

## Requirements

- ESP32 microcontroller
- Soil moisture sensor
- Water pump
- Blynk app (iOS/Android)
- Wi-Fi network

## Instructions
1. **Clone the Repository:**
   ```
   git clone https://github.com/yourusername/smart-irrigation-system.git
   ```
2. **Open the Project:**
   - Open the project in your preferred Arduino IDE.

3. **Configure Wi-Fi Credentials:**
   - Update the `ssid` and `pass` variables with your Wi-Fi credentials.

4. **Blynk Authentication:**
   - Update the `BLYNK_AUTH_TOKEN` with your Blynk authentication token.

5. **Upload the Code:**
   - Connect your ESP32 to your computer and upload the code.

6. **Setup Blynk Dashboard:**
   - Open the Blynk app and create a new project.
   - Add two widgets: a Value Display (connected to Virtual Pin V0) for moisture level and an LED (connected to Virtual Pin V1) for pump status.
   - Use the authentication token from the Blynk app in your code.

7. **Run the System:**
   - After uploading, the ESP32 will connect to your Wi-Fi and start sending data to the Blynk dashboard.
   - The system will monitor soil moisture and control the pump automatically.

## Output
The output includes real-time soil moisture levels and pump status displayed on the Blynk dashboard, allowing you to monitor and control the irrigation system remotely.
