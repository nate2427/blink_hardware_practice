#include <Arduino.h>
// Set LED_BUILTIN if it is not defined by Arduino framework
#define LED_BUILTIN 13
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // turn LED on
  digitalWrite(LED_BUILTIN, HIGH);

  // wait a sec
  delay(10000);

  // turn LED off
  digitalWrite(LED_BUILTIN, LOW);

  // wait a sec
  delay(10000);
}