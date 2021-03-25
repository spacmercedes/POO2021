#include "Toyota.h"


void Toyota::Set_FuelCapacity()
{
	this->fuel_cap = 45;
}

void Toyota::Set_FuelConsumption()
{
	this->fuel_cons = 0.7;
}

void Toyota::Set_AvgSpeed(Weather value)
{
	Toyota::Set_FuelCapacity();
	Toyota::Set_FuelConsumption();

	if (value == Weather::Rain)
		this->avg_speed = 70;
	if (value == Weather::Snow)
		this->avg_speed = 60;
	if (value == Weather::Sunny)
		this->avg_speed = 85;
	else this->avg_speed = 100;
}

void Toyota::Print()
{
	cout << "Toyota";
}