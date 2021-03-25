#pragma once
#include "Car.h"



class Dacia: public Car
{
public:
	void Set_FuelCapacity();
	void Set_FuelConsumption();
	void Set_AvgSpeed(Weather value);
	void Print();
};

