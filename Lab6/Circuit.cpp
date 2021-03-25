#include "Circuit.h"

void Circuit::Set_Length(float value)
{
	this->lung = value;
}

void Circuit::Set_Weather(Weather value)
{
	this->w = value;
}

void Circuit::Add_Car(Car* c)
{
	this->cars[this->car] = c;
	this->cars ++;
}

void Circuit::Race()
{
	for (int i = 0; i < this->cars; i++)
	{
		this->car[i]->Set_AvgSpeed(this->w);

		if (this->car[i]->fuel_cons * this->lung > car[i]->fuel_cap)
		{
			this->non_finalist[this->non_finalists] = this->car[i];
			this->non_finalists ++;
		}
		else
		{
			this->finalist[this->finalists] = this->car[i];
			this->finalists ++;
		}
	}

	for (int i = 1; i <= this->finalists; i++)
	{
		for (int j = i + 1; j < this->finalists; j++)
		{
			if (this->finalist[i]->avg_speed < this->finalist[j]->avg_speed)
			{
				swap(this->finalist[i], this->finalist[j]);
			}
		}
	}
		
}

void Circuit::ShowFinalRanks()
{
	cout << "Aceste masini au finalizat cursa:" << endl;

	for (int i = 0; i < this->finalists; i++)
	{
		this->finalist[i]->Print();
		cout << " in " << ((this->lung / this->finalist[i]->avg_speed) *3600)/60 << " minute" << endl;
	}

	cout << endl;
}

void Circuit::ShowWhoDidNotFinish()
{
	cout << "Aceste masini nu au finalizat cursa:" <<endl;

	for (int i = 0; i < this->non_finalists; i++)
	{
		this->non_finalist[i]->Print();
		cout << endl;
	}
}
