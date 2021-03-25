#pragma once
#include "Car.h"



class Toyota: public Car
{
public:
	void Set_FuelCapacity();
	void Set_FuelConsumption();
	void Set_AvgSpeed(Weather value);
	void Print();
};

