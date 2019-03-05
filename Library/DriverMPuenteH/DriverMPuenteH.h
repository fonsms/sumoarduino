#ifndef DriverMPuenteH_h
#define DriverMPuenteH_h
#include "Arduino.h" 
class DriverMPuenteH
{
public:
	DriverMPuenteH(int M_ENABLE , int M_LEFT1,int M_LEFT2, int M_RIGHT1,int M_RIGHT2);// constructor
	void goright();
	void activamotor();
	void goback();
	void atack();
	void recognition();
	
private:
	int _M_ENABLE;
	int _M_LEFT1;
	int _M_LEFT2;
	int _M_RIGHT1;
	int _M_RIGHT2;
};
#endif
