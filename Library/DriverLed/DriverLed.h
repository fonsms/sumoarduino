#ifndef DriverLed_h
#define DriverLed_h
#include "Arduino.h" 
class DriverLed
{
 public :
 DriverLed (int LED_R, int LED_G, int LED_B);// constructor
 void colorselec(char color);
 void alarma();
  private :
    int _LED_R;
    int _LED_G;
	int _LED_B;
	
};
#endif
