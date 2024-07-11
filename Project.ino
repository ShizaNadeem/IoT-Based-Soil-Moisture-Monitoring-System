#define BLYNK_TEMPLATE_ID "TMPL68xrbh8me"
#define BLYNK_TEMPLATE_NAME "Embedded Lab"
#define BLYNK_AUTH_TOKEN "sw-HWJFo3qyKe98jpGkOuHRlnQ5qn-NM"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

int _moisture, sensor_analog;
const int sensor_pin = 34;
const int pump_pin = 2;
int pumpStatus = 0;

char ssid[] = "usman";
char pass[] = "12345678";

BlynkTimer timer;

void myTimerEvent() {
  Blynk.virtualWrite(V0, _moisture);
  Blynk.virtualWrite(V1, pumpStatus);
}

void setup() {
  Serial.begin(115200);
  pinMode(pump_pin, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(1000L, myTimerEvent);
}

void loop() {
  Blynk.run();
  timer.run();

  sensor_analog = analogRead(sensor_pin);
  _moisture = (100 - ((sensor_analog / 4095.00) * 100));
  Serial.print("Moisture = ");
  Serial.print(_moisture);
  Serial.println("%");

  if (_moisture < 50) {
    digitalWrite(pump_pin, LOW);
    Serial.println("Turning on the pump!");
    pumpStatus = 1;
  } else {
    digitalWrite(pump_pin, HIGH);
    Serial.println("Moisture level is okay, pump is off.");
    pumpStatus = 0;
  }
}