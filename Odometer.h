#ifndef ODOMETER_H_
#define ODOMETER_H_

#include "FuelGauge.h"

class Odometer
{
  private:
	int mileage;
	const int MPG;
	const int MAX_MILES;

	FuelGauge* fuelGaugePtr;

  public:
	Odometer();
	~Odometer();

	void fillUp();
	void drive();

};

#endif
