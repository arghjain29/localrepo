#include "DHT.h"
#define DHTTYPE DHT22
int DHTPin = 2;

DHT dht(DHTPin,DHTTYPE);
float temp;
float humidity;
float temp_F;

void setup() {
  Serial.begin(9600);
  pinMode(DHTPin, INPUT);
  dht.begin();
}

void loop() {
  humidity = dht.readHumidity();
  
  // celsius is default
  temp = dht.readTemperature();
  temp_F = dht.readTemperature(true);

  if (isnan(humidity) || isnan(temp) || isnan(temp_F)) {
    Serial.println(F("Failed to read from DHT sensor "));
  return;
  }
else{
  Serial.print("humidity: ");
  Serial.print(humidity);
  Serial.print("%   Temperature: ");
  Serial.print(temp);
  Serial.print("*C ");
  Serial.print("  Temp_Farenhite: ");
  Serial.print(temp_F);
  Serial.print(" *F ");  }

  Serial.print("\n\n\n\n");
}
