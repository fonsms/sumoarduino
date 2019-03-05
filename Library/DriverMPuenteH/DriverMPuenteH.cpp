#include "Arduino.h"
#include "DriverMPuenteH.h"
DriverMPuenteH::DriverMPuenteH(int M_ENABLE , int M_LEFT1,int M_LEFT2, int M_RIGHT1,int M_RIGHT2) {
	 pinMode(M_LEFT1, OUTPUT);
	 pinMode(M_LEFT2, OUTPUT);
	 pinMode(M_RIGHT1, OUTPUT);
	 pinMode(M_RIGHT2, OUTPUT);
	 pinMode(M_ENABLE, OUTPUT);
	 _M_ENABLE = M_ENABLE;
	 _M_LEFT1 = M_LEFT1;
	 _M_LEFT2 = M_LEFT2;
	 _M_RIGHT1 = M_RIGHT1;
	_M_RIGHT2 =  M_RIGHT2;
	_M_ENABLE = M_ENABLE;
}

void DriverMPuenteH::goright() {

	digitalWrite(_M_LEFT1,LOW);
	digitalWrite(_M_LEFT2,HIGH);
	digitalWrite(_M_RIGHT1,LOW);
	digitalWrite(_M_RIGHT2,HIGH);

}
void DriverMPuenteH::activamotor() {
	digitalWrite(_M_ENABLE,HIGH);

}
void DriverMPuenteH::goback() {
	digitalWrite(_M_LEFT1,HIGH);
	digitalWrite(_M_LEFT2,LOW);
	digitalWrite(_M_RIGHT1,HIGH);
	digitalWrite(_M_RIGHT2,LOW);


}
void DriverMPuenteH::atack() {
	// pendiente
	analogWrite(_M_LEFT1,0);
	analogWrite(_M_LEFT2,200);
	analogWrite(_M_RIGHT1,0);
	analogWrite(_M_RIGHT2,200);
}
void DriverMPuenteH::recognition() {
		activamotor();
		digitalWrite(_M_LEFT1,HIGH);
		digitalWrite(_M_LEFT2,LOW);
		digitalWrite(_M_RIGHT1,LOW);
		digitalWrite(_M_RIGHT2,HIGH);

}

