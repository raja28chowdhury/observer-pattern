#pragma once
#include "IObserver.h"
#include "WeatherStation.h"

class PhoneDisplay: public IObserver
{
	const std::shared_ptr<WeatherStation> weather_obj;
	
public:

	PhoneDisplay(std::shared_ptr<WeatherStation> obj) :weather_obj(obj) {}

	void update();
};

