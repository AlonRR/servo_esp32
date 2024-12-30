#include <Arduino.h>
#include <ESP32Servo.h>

#define SERVO_PIN 17

Servo servo1;

void setup()
{
    Serial.begin(115200);
    servo1.attach(SERVO_PIN);
}

void loop()
{
    for (int posDegrees = 0; posDegrees <= 180; posDegrees++)
    {
        servo1.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }

    for (int posDegrees = 180; posDegrees >= 0; posDegrees--)
    {
        servo1.write(posDegrees);
        Serial.println(posDegrees);
        delay(20);
    }
    // servo1.write(0);
}
