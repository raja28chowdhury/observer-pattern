#pragma once
#include "IObserver.h"
#include <vector>
#include <iostream>




class IObservabe
{

public:
	virtual void add(IObserver & obj) = 0;
	virtual void remove(IObserver& obj) = 0;
	virtual void notify() = 0;
};



