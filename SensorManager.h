#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include "DHT.h"
#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void initSensor() {
  dht.begin();
}

void sendDHTData() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(t) || isnan(h)) {
    Serial.println(F("❌ DHT read failed"));
    return;
  }

  Serial.print(F("🌡 Temperature: ")); Serial.print(t); Serial.print(" °C ");
  Serial.print(F("💧 Humidity: ")); Serial.print(h); Serial.println(" %");

  Blynk.virtualWrite(V1, t);
  Blynk.virtualWrite(V2, h);
}

#endif
