#include <Arduino.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(PIN5, OUTPUT);
    pinMode(PIN3, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(PIN5, HIGH);
    digitalWrite(PIN3, LOW);

    delay(1000);
    digitalWrite(PIN5, LOW);
    digitalWrite(PIN3, HIGH);
    delay(1000);
}