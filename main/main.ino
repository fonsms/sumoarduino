#include <DriverLed.h>
#include <DriverProxSensor.h>
//pins del sensor ultrasonido
#define Pin_echo  2
#define Pin_trig  12
//pins del led RGB
#define LED_R  9
#define LED_G  10
#define LED_B  11



DriverLed leds (LED_R,LED_G,LED_B);
DriverProxSensor prox(Pin_echo, Pin_trig);

void setup() {
 Serial.begin(9600);
}

void loop() {
    //leds.colorselec('P');
   // leds.alarma();
prox.getdistancia();
}
