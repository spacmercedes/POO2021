#include "BMW.h"

void BMW::Set_FuelCapacity()
{
	this->fuel_cap = 60;
}

void BMW::Set_FuelConsumption()
{
	this->fuel_cons = 0.6;
}

void BMW::Set_AvgSpeed(Weather value)
{
	BMW::Set_FuelCapacity();

	BMW::Set_FuelConsumption();


	if (value == Weather::Rain)
		this->avg_speed = 70;
	if (value == Weather::Snow)
		this->avg_speed = 50;
	if (value == Weather::Sunny)
		this->avg_speed = 80;
	else this->avg_speed = 120;
}

void BMW::Print()
{
	cout << "BMW";
}
