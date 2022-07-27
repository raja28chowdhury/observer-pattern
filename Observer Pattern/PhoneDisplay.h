#pragma once
#include "IObserver.h"
#include "WeatherStation.h"

class PhoneDisplay: public IObserver
{
	WeatherStation* weather_obj;
public:

	PhoneDisplay(WeatherStation* obj);

	void update();
};

