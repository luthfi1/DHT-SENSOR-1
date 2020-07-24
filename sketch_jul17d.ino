
#include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT11

DHT  dht(DHTPIN.DHTTYPE);
void setup() {
Serial.begin(9600);
Serial.println(F("DHT11 test!"));
dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if(isnan(h)||isnan(t)){
  Serial.println(F("Failed to read from DHT sensor"));
  return;  
  }
  Serial.print(F("Humidity:"));
  Serial.print(h);
  Serial.print(F("%Terperature:"));
  Serial.print(t);
  Serial.print(F("C"));
  
}
