#include "PhoneDisplay.h"

PhoneDisplay::PhoneDisplay(WeatherStation* obj) {
	//this.station = obj;

	weather_obj = obj;
}

void PhoneDisplay::update() {
	//this.station.gettemperature();
	int temperature = weather_obj->updateTemperature();
	printf("temprature %d \n", temperature);
}