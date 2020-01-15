#include "DHT12.h"
#include <Wire.h>
#include "Adafruit_Sensor.h"
#include <Adafruit_BMP280.h>

DHT12 dht12;
Adafruit_BMP280 bme;

void setup() {
    Serial.begin(115200);

    Wire.begin();               // I2Cを初期化する
    while (!bme.begin(0x76)) {  // BMP280を初期化する
        Serial.println("BMP280 init fail");
    }
}

void loop() {
    float tmp = dht12.readTemperature();
    float hum = dht12.readHumidity();
    float pressure = bme.readPressure();

    Serial.print("temp:");
    Serial.println(tmp);
    Serial.print("humid:");
    Serial.println(hum);
    Serial.print("press:");
    Serial.println(pressure / 100);
    delay(1000);
}
