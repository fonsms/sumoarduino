#include <DriverLed.h>
#include <DriverProxSensor.h>
//pins del sensor ultrasonido
#define Pin_echo  2
#define Pin_trig  12
//pins del led RGB
#define LED_R  9
#define LED_G  10
#define LED_B  11
// pins del puente H y motores
#define M_ENABLE 8
#define M_LEFT1 5
#define M_LEFT2 4
#define M_RIGHT1 6
#define M_RIGHT2 7



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
