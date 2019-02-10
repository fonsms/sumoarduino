#include "Arduino.h"
#include "DriverProxSensor.h"
long duracion, distancia;
DriverProxSensor::DriverProxSensor(int Pin_echo, int Pin_trig) {
	pinMode(Pin_echo, INPUT);
	pinMode(Pin_trig, OUTPUT);

	_Pin_echo = Pin_echo;
	_Pin_trig = Pin_trig;
}

long DriverProxSensor::getdistancia() {
	
	digitalWrite(_Pin_trig, LOW);
	delayMicroseconds(2);
	digitalWrite(_Pin_trig, HIGH);
	delayMicroseconds(10);
	digitalWrite(_Pin_trig, LOW);

	duracion = pulseIn(_Pin_echo, HIGH);//comando que indica cuando tiempo ha estado en HIGH una señal
	distancia = (duracion / 2) / 29;
	Serial.print(distancia);
	Serial.println("cm");
	return distancia;
	
}
