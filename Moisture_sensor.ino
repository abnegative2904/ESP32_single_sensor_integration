#include <HardwareSerial.h>

#define MOISTURE_PIN 2          // Soil moisture sensor ADC pin (random)
HardwareSerial BT(2);      // 1 used for flashing code

#define TIME_TO_SLEEP 60000000ULL  

RTC_DATA_ATTR int bootCount = 0;  // sleep time maintained variable  

void setup() {
  Serial.begin(115200);
  BT.begin(9600, SERIAL_8N1, 16, 17);   // UARTpins  8 bit formaat 8N1 with one stop bit

  bootCount++;

  uint16_t rawValue = analogRead(MOISTURE_PIN);  //can go to 4095
  uint8_t moisture = map(rawValue, 0, 4095, 100, 0);

  BT.print("Moisture Level: ");
  BT.print(moisture);
  BT.println(" %");
  BT.println(" No of times booted");
  BT.println(bootCount);
  esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP);
  esp_deep_sleep_start();
}

void loop() {
  // not used, setup is itself working as a loop
}
