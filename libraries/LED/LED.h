//LED CLASS

#ifndef LED_h
#define LED_h

#include "Arduino.h"

class LED
{
	public:
		LED();
		void led(int x, int y, int z);
		char* map(int x, int y, int z);
	private:
};

#endif
