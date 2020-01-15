#include <M5Stack.h>
#define LED_PIN 16

#define SPI_SPEED 115200

//initialize method
void setup() {
    //for m5stack
    M5.begin();
    M5.Lcd.setTextSize(2);
    M5.Lcd.fillScreen(BLACK);
    
    // for serial terminal
    Serial.begin(SPI_SPEED);

    // setting pin mode
    pinMode(LED_PIN, OUTPUT);
}

//loop method
void loop() {
    M5.Lcd.setCursor(0, 0, 1);
    //LED ON
    M5.Lcd.printf("LED ON!");
    Serial.println("LED ON!");
    digitalWrite(LED_PIN, HIGH);
    
    //interval
    delay(1500);

    M5.Lcd.setCursor(0, 0, 1);
    //LED OFF
    M5.Lcd.printf("LED OFF!");
    Serial.println("LED OFF...");
    digitalWrite(LED_PIN, LOW);

    //interval
    delay(500);
}
