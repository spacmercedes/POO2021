#pragma once
#include <iostream>
#include "Car.h"
#include "Dacia.h"
#include "BMW.h"
#include "Toyota.h"
#include "Weather.h"

using namespace std;

class Circuit
{
public:

	float lung;
	Weather w;
	int cars=0, non_finalists=0, finalists=0;
	Car* car[20];
	Car* finalist[20];
	Car* non_finalist[20];

	void Set_Length(float value);
	void Set_Weather(Weather value);
	void Add_Car(Car* c);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};

