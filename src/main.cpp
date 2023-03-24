#include <Arduino.h>

#define LED LED_BUILTIN

void setup() {
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
    Serial.println("Hellooooo");
}