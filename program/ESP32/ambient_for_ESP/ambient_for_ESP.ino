#include <M5Stack.h>
#include "DHT12.h"
#include <Wire.h>
#include "Adafruit_Sensor.h"
#include <Adafruit_BMP280.h>
#include "Ambient.h"

DHT12 dht12;
Adafruit_BMP280 bme;

WiFiClient client;
Ambient ambient;

const char* ssid = "";
const char* password = "";

unsigned int channelId = ; // AmbientのチャネルID
const char* writeKey = ""; // ライトキー

float tmp;
float hum;
float pressure;
int count = 0;

void setup() {
    Serial.begin(115200);
    Serial.println("ambient test...");

    Wire.begin();               // I2Cを初期化する
    while (!bme.begin(0x76)) {  // BMP280を初期化する
        Serial.println("BMP280 init fail");
    }
    WiFi.begin(ssid, password);  //  Wi-Fi APに接続 ----A
    ambient.begin(channelId, writeKey, &client); // チャネルIDとライトキーを指定してAmbientの初期化
}

void loop() {
    count += 1;
    tmp = dht12.readTemperature();
    hum = dht12.readHumidity();
    pressure = bme.readPressure();

    delay(1000);
    
    Serial.print("temp : ");
    Serial.println(tmp);
    Serial.print("humid : ");
    Serial.println(hum);
    Serial.print("press : ");
    Serial.println(pressure / 100);
    Serial.print("count : ");
    Serial.println(count);
    
    while (WiFi.status() != WL_CONNECTED) {  //  Wi-Fi AP接続待ち
        delay(500);
        Serial.print(".");
    }
    Serial.print("WiFi connected\r\nIP address: ");
    Serial.println(WiFi.localIP());

    // 温度、湿度、気圧、バッテリー電圧の値をAmbientに送信する ----B
    ambient.set(1, tmp);
    ambient.set(2, hum);
    ambient.set(3, pressure / 100);
    ambient.set(4, count);

    ambient.send();

    delay(1000);
}
