#include "WeatherStation.h"

void WeatherStation::add(IObserver* obj) {
	list_of_observers.push_back(obj);

}
void WeatherStation::remove(IObserver* obj) {

}
void WeatherStation::notify() {
	//call update in listof observers
	for (auto itr : list_of_observers)
		itr->update();
}

int WeatherStation::updateTemperature() {
	static int temperature;

	return temperature++;
}