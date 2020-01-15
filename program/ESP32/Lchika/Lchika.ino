#define LED_PIN 15

#define SPI_SPEED 115200

//initialize method
void setup() {
    // for serial terminal
    Serial.begin(SPI_SPEED);

    // setting pin mode
    pinMode(LED_PIN, OUTPUT);
}

//loop method
void loop() {
    //LED ON
    Serial.println("LED ON!");
    digitalWrite(LED_PIN, HIGH);
    
    //interval
    delay(500);
    
    //LED OFF
    Serial.println("LED OFF...");
    digitalWrite(LED_PIN, LOW);

    //interval
    delay(500);
}
