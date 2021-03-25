#include "Dacia.h"

void Dacia::Set_FuelCapacity() 
{
	this->fuel_cap = 50;
}

void Dacia::Set_FuelConsumption()
{
	this->fuel_cons = 0.5;
}

void Dacia::Set_AvgSpeed(Weather value)
{
	Dacia::Set_FuelCapacity();

	Dacia::Set_FuelConsumption();

	if (value == Weather::Rain)
		this->avg_speed = 80;
	if (value == Weather::Snow)
		this->avg_speed = 50;
	if (value == Weather::Sunny)
		this->avg_speed = 90;
	else this->avg_speed = 95;
}

void Dacia::Print()
{
	cout << "Dacia";
}