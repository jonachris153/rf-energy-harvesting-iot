// low_power_node.ino
#include <esp_sleep.h>
#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22
#define uS_TO_S_FACTOR 1000000ULL
#define SLEEP_TIME 300  // 5 minutes

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(1000);

  dht.begin();

  float temp = dht.readTemperature();
  float hum  = dht.readHumidity();

  if (!isnan(temp) && !isnan(hum)) {
    Serial.print("Temp: ");
    Serial.print(temp);
    Serial.print(" °C | Humidity: ");
    Serial.print(hum);
    Serial.println(" %");
  } else {
    Serial.println("Sensor error");
  }

  Serial.println("Entering deep sleep...");
  esp_sleep_enable_timer_wakeup(SLEEP_TIME * uS_TO_S_FACTOR);
  esp_deep_sleep_start();
}

void loop() {
  // never reached
}
