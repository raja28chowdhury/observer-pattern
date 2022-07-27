// Observer Pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IObservabe.h"
#include "IObserver.h"
#include "WeatherStation.h"
#include "PhoneDisplay.h"

int main()
{
    printf("code start\n");
    //observable is something we can observe like weatherstation
    //observer is sommething that observes weatherstation like phonedisaplay

    WeatherStation mumbai_weather_station;

    PhoneDisplay xiomi_phone(mumbai_weather_station);
    PhoneDisplay asus_phone(mumbai_weather_station);
    PhoneDisplay samsung_phone(mumbai_weather_station);

    mumbai_weather_station.add(xiomi_phone);
    mumbai_weather_station.add(asus_phone);
    mumbai_weather_station.add(samsung_phone);

    mumbai_weather_station.notify();








}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
