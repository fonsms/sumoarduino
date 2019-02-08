#include <DriverLed.h>

#define LED_R  9
#define LED_G  10
#define LED_B  11

DriverLed leds (LED_R,LED_G,LED_B);

void setup() {
}

void loop() {
    //leds.colorselec('P');
    leds.alarma();
}
