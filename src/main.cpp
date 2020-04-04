#include <Arduino.h>
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "ESgACXgZNSgNR3qQj2yA8Vbf1KrMW1yc";
char ssid[] = "Imran";
char pass[] = "11458900";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}