#include "LedSeries.h"

LedSeries::LedSeries(int pin1, int pin2, int pin3) {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  _pin1 = pin1;
  _pin2 = pin2;
  _pin3 = pin3;
}                            


void LedSeries::turnOnAll() {
	digitalWrite(_pin1, HIGH);
	digitalWrite(_pin2, HIGH);
	digitalWrite(_pin3, HIGH);
}

 
void LedSeries::turnOffAll() {
	digitalWrite(_pin1, LOW);
  	digitalWrite(_pin2, LOW);
  	digitalWrite(_pin3, LOW);
}

void LedSeries::red() {
	digitalWrite(_pin1, HIGH);
  	digitalWrite(_pin2, LOW);
  	digitalWrite(_pin3, LOW);
}

void LedSeries::green() {
	digitalWrite(_pin1, LOW);
  	digitalWrite(_pin2, HIGH);
  	digitalWrite(_pin3, LOW);
}

void LedSeries::blue() {
	digitalWrite(_pin1, LOW);
  	digitalWrite(_pin2, LOW);
  	digitalWrite(_pin3, HIGH);
}

void LedSeries::next() {
	led++;
	switch(led) {
		case 0:
			turnOnAll();
			break;
		case 1:
			red();
			break;
		case 2:
			green();
			break;
		case 3:
			blue();
			break;
		default:
			turnOffAll();
			led = -1;
	}

}