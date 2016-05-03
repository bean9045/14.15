#include <iostream>

#include "Odometer.h"

using namespace std;

Odometer::Odometer() : MPG(24), MAX_MILES(999999), fuelGaugePtr(new FuelGauge)
{
	mileage = 999900;
}

Odometer::~Odometer()
{
	delete fuelGaugePtr;
}

void Odometer::fillUp()
{
	int fuelLvl = fuelGaugePtr->getFuelLvl();
	const int MAX_FUEL = fuelGaugePtr->getMaxFuel();

	for (int k = fuelLvl; k < MAX_FUEL; k++)
	{
		fuelGaugePtr->increment();
	}
}

void Odometer::drive()
{
	int fuelLvl = fuelGaugePtr->getFuelLvl();

	for (int k = 0; k < fuelLvl; k++)
	{
		for (int j = 0; j < MPG; j++)
		{
			if (mileage < MAX_MILES)
			{
				mileage++;

			} else
			{
				mileage = 0;
			}
			cout << "Current mileage: " << mileage << endl;
		}
		fuelGaugePtr->decrement();

		cout << "Current fuel level: " << fuelGaugePtr->getFuelLvl() << endl;
	}
}
