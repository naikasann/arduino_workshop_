#include "esp_system.h"

#define SERVO_PIN 16

int Min = 26;  // (26/1024)*20ms ≒ 0.5 ms  (-90°)
int Max = 123; // (123/1024)*20ms ≒ 2.4 ms (+90°)
int n = Min;

void setup() { 
  Serial.begin(115200);
  ledcSetup(0, 50, 10);  // 0ch 50 Hz 10bit resolution
  ledcAttachPin(SERVO_PIN, 0); // 15pin, 0ch
}

void loop() {
  ledcWrite(0, n);
  n+=5;
  if (n >Max) n = Min;
  delay(500);
}
