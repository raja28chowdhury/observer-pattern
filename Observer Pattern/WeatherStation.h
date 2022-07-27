#pragma once
#include "IObserver.h"
#include "IObservabe.h"
#include <vector>
#include <iostream>

using namespace std;

class WeatherStation:public IObservabe
{
	vector<IObserver*> list_of_observers;
public:

	void add(IObserver* obj);
	void remove(IObserver* obj);
	void notify();
	int updateTemperature();
};

