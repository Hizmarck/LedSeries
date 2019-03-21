/*
  LedSeries.h - Library for turn on/off led of Compax.
  Created by Hizmarck, Daniel Pinzon 21/12/2018.
  Released into the public domain.
*/
#ifndef LedSeries_h
#define LedSeries_h
#include "Arduino.h"

class LedSeries {
	
  public:
    LedSeries(int pin1, int pin2, int pin3);
    /**
    * Turn on all leds (3 leds)
    */
    void turnOnAll(); 
    /**
    * Turn off all leds (3 leds)
    */
    void turnOffAll(); 
    /**
    * Turn on the Red Led
    */
    void red();
    /**
    * Turn on the Green Led
    */
    void green();
    /**
    * Turn on the Blue Led
    */
    void blue();
    /**
    * Get next led in the counter.
    */
    void next();

  private:
    int _pin1, _pin2, _pin3;
    int led;

};
#endif