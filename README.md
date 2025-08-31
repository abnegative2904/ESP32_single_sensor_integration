# ESP32 + Soil Moisture + Bluetooth (HC-05)

This project uses ESP32 to read soil moisture sensor data and send it to Bluetooth module (HC-05).  
The data can be seen on computer using **PuTTY** or on mobile app that supports Bluetooth serial.

---

<img width="833" height="707" alt="Image" src="https://github.com/user-attachments/assets/2bccdc43-3486-469d-ac1a-f010168c4e74" />

## Hardware Used
- ESP32 board  
- Soil moisture sensor (analog output)  
- Bluetooth module HC-05  


---

## Circuit Connections

**Moisture Sensor**
- Sensor VCC → ESP32 3.3V  
- Sensor GND → ESP32 GND  
- Sensor OUT → ESP32 GPIO2 (analog input)

**Bluetooth (HC-05)**
- ESP32 GPIO17 (TX2) → HC-05 RX  
- ESP32 GPIO16 (RX2) → HC-05 TX  
- ESP32 GND → HC-05 GND  
- ESP32 5V → HC-05 VCC  

---

## How to Test
1. Upload the code to ESP32.
2. Pair HC05 and the PC via bluetooth.
3. One COM PORT will be created.
4. Open Putty Terminal , enter COM PORT and baud rate as 9600.

