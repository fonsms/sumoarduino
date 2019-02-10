#ifndef DriverProxSensor_h
#define DriverProxSensor_h
#include "Arduino.h" 
class DriverProxSensor
{
public:
	DriverProxSensor(int Pin_echo, int Pin_trig);// constructor
	long getdistancia();
	
private:
	int _Pin_echo;
	int _Pin_trig;
};
#endif
