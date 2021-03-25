#pragma once
#include "Weather.h"
#include <iostream>
using namespace std;

class Car
{

public:
	float fuel_cap, fuel_cons, avg_speed;

	virtual void Set_FuelCapacity() = 0;
	virtual void Set_FuelConsumption() = 0;
	virtual void Set_AvgSpeed(Weather value) = 0;
	virtual void Print() = 0;

};

