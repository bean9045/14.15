#ifndef FUELGAUGE_H_
#define FUELGAUGE_H_

class FuelGauge
{
  private:
	int fuelLvl;
	const int MAX_FUEL;

  public:
	FuelGauge();

	int getMaxFuel() const;
	int getFuelLvl();

	void increment();
	void decrement();
};

#endif
