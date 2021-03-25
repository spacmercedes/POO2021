#include "Circuit.h"

int main()
{
	Circuit c;

	c.Set_Length(100);

	c.Set_Weather(Weather::Rain);

	c.Add_Car(new Dacia());

	c.Add_Car(new Toyota());

	c.Add_Car(new BMW());

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;
}