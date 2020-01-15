#include <M5Stack.h>
#include "esp_system.h"

#define SERVO_PIN 16

int Min = 26;  // (26/1024)*20ms ≒ 0.5 ms  (-90°)
int Max = 123; // (123/1024)*20ms ≒ 2.4 ms (+90°)
int n = Min;

void setup() { 
    M5.begin();
    M5.Lcd.setTextSize(2);
    Serial.begin(115200);
    ledcSetup(0, 50, 10);  // 0ch 50 Hz 10bit resolution
    ledcAttachPin(SERVO_PIN, 0); // 15pin, 0ch
}

void loop() {
    M5.Lcd.setCursor(0, 0, 1);
    ledcWrite(0, n);
    n+=5;
    M5.Lcd.printf(n);
    if (n >Max) n = Min;
    delay(500);
}
