#include "Arduino.h"
#include "DriverMPuenteH.h"
long duracion, distancia;
DriverMPuenteH::DriverMPuenteH(int M_ENABLE , int M_LEFT1,int M_LEFT2, int M_RIGHT1,int M_RIGHT2) {
	 pinMode(M_LEFT1, OUTPUT);
	 pinMode(M_LEFT2, OUTPUT);
	 pinMode(M_RIGHT1, OUTPUT);
	 pinMode(M_RIGHT2, OUTPUT);
	 pinMode(M_ENABLE, OUTPUT);
	 _M_ENABLE = M_ENABLE;
	 _M_LEFT2 = M_LEFT2;
	 _M_RIGHT1 = M_RIGHT1;
	_M_RIGHT2 =  M_RIGHT2;
	_M_ENABLE = M_ENABLE;
}

void DriverMPuenteH::goright() {
	actvivamotor();
	analogWrite(M_LEFT1,105);
	analogWrite(M_LEFT2,105);
	analogWrite(M_RIGHT1,105);
	analogWrite(M_RIGHT2,105);

}
void DriverMPuenteH::activamotor() {
	digitalWrite(M_ENABLE,HIGH);

}
void DriverMPuenteH::goback() {
	actvivamotor();
	analogWrite(M_LEFT1,105);
	analogWrite(M_LEFT2,105);
	analogWrite(M_RIGHT1,105);
	analogWrite(M_RIGHT2,105);

}

