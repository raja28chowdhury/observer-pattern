#include "PhoneDisplay.h"

PhoneDisplay::PhoneDisplay(WeatherStation& obj):weather_obj(obj) {
	//this.station = obj;

}

void PhoneDisplay::update() {
	//this.station.gettemperature();
	int temperature = weather_obj.updateTemperature();
	printf("temprature %d \n", temperature);
}