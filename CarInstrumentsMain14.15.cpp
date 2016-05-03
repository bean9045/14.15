#include <iostream>

#include "Odometer.h"

using namespace std;

int main()
{
	bool wantsExit;

	do
	{
		Odometer odometer;

		odometer.fillUp();
		odometer.drive();

		char answer;
		cout << "Would you like to try again? (y/n): " << endl;
		cin >> answer;

		if (answer == 'Y' || answer == 'y')
		{
			wantsExit = true;

		} else
		{
			wantsExit = false;
		}

	} while (wantsExit);

	return 0;
}
