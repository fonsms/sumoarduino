#include "Arduino.h"
#include "DriverLed.h"

DriverLed::DriverLed(int LED_R, int LED_G, int LED_B) {
	pinMode(LED_R, OUTPUT);
	pinMode(LED_G, OUTPUT);
	pinMode(LED_B, OUTPUT);

	_LED_R = LED_R;
	_LED_G = LED_G;
	_LED_B = LED_B;
}

void DriverLed::alarma(){
	colorselec('R');
	delay(1000);
	colorselec('Y');
	delay(1000);
}

void DriverLed::colorselec(char color) {
	switch (color) { 
	case 'G'://verde
		analogWrite(_LED_R, 0);
		analogWrite(_LED_G, 230);
		analogWrite(_LED_B, 0 );
	break;
	case 'B'://azul
		analogWrite(_LED_R, 33);
		analogWrite(_LED_G, 97);
		analogWrite(_LED_B, 140);
	break;
	case 'Y'://amarillo
		analogWrite(_LED_R, 251);
		analogWrite(_LED_G, 255);
		analogWrite(_LED_B, 55);
	break;
	case 'P'://morado
		analogWrite(_LED_R, 186);
		analogWrite(_LED_G, 28);
		analogWrite(_LED_B, 242);
	break;
	case 'R'://rojo
		analogWrite(_LED_R, 200);
		analogWrite(_LED_G, 0);
		analogWrite(_LED_B, 0);
	break;
	case 'O'://naranaja
		analogWrite(_LED_R, 255);
		analogWrite(_LED_G, 128);
		analogWrite(_LED_B, 0);
	break;
	case 'N'://negro
		analogWrite(_LED_R, 13);
		analogWrite(_LED_G, 6);
		analogWrite(_LED_B, 0);
	break;
	case 'W'://blanco
		analogWrite(_LED_R, 255);
		analogWrite(_LED_G, 255);
		analogWrite(_LED_B, 255);
	break;
	}
	}
