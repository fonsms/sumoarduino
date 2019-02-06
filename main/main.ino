#include <DriverLed.h>

#define LED_R  9
#define LED_G  10
#define LED_B  11

DriverLed leds (LED_R,LED_G,LED_B);

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<8; i++){
    leds.colorselec(i);
    delay(1000);
    
  }
}