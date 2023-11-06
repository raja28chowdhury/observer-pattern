#include "PhoneDisplay.h"


void PhoneDisplay::update() {
	//this.station.gettemperature();
	int temperature = weather_obj->updateTemperature();
	printf("temprature %d \n", temperature);
}