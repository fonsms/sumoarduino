#include <DriverLed.h>
#include <DriverProxSensor.h>
#include <DriverMPuenteH.h>
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
DriverProxSensor prox (Pin_echo, Pin_trig);
DriverMPuenteH motor (M_ENABLE, M_LEFT1,M_LEFT2,M_RIGHT1,M_RIGHT2);

void setup() {
 Serial.begin(9600);
}

void loop() {
    //leds.colorselec('P');
   // leds.alarma();
//prox.getdistancia();
motor.goright();
delay(1000);
motor.goback();
delay(1000);
motor.recognition();
delay(1000);

}
