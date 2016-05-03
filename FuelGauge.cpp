#include "FuelGauge.h"

FuelGauge::FuelGauge() : MAX_FUEL(15)
{
	fuelLvl = 0;
}

int FuelGauge::getMaxFuel() const
{
	return MAX_FUEL;
}

int FuelGauge::getFuelLvl()
{
	return fuelLvl;
}

void FuelGauge::increment()
{
	if (fuelLvl < MAX_FUEL)
	{
		fuelLvl++;
	}
}

void FuelGauge::decrement()
{
	if (fuelLvl > 0)
	{
		fuelLvl--;
	}
}
