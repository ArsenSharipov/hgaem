#include "DHT.h"

#define DHTPIN 2 //pin
#define DHTTYPE DHT22 //typr

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(A1, INPUT);
  analogWrite(A1, LOW);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int light = analogRead(A1);
  Serial.print("Освещенность = ");
  Serial.println(light);
  Serial.print("Влажность: ");
  Serial.println(h);
  Serial.print("Температура : ");
  Serial.println(t);

  delay(5000); //5000 = 5 sec
}
