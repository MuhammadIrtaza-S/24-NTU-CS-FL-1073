#include <ArduinoJson.h>

// Muhammad Irtaza
// 24-NTU-CS-FL-1073

#define LED_BUILTIN_PIN 2 

void setup() {
  
  pinMode(LED_BUILTIN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN_PIN, HIGH);
  delay(3000); 
  digitalWrite(LED_BUILTIN_PIN, LOW);
  delay(3000); 
}
