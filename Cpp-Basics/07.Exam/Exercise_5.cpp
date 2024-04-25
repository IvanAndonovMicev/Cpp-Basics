#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const int PRICE_MOUNTAIN_TRIP = 499;
	const int PRICE_SEA_TRIP = 680;

	int numberOfMountainTrips;
	cin >> numberOfMountainTrips;

	int numberOfSeaTrips;
	cin >> numberOfSeaTrips;

	double totalPrice = 0;

	string typeOfTrip;

	while ((numberOfMountainTrips > 0 || numberOfSeaTrips > 0) && cin >> typeOfTrip && typeOfTrip != "Stop" )
	{
		if (typeOfTrip == "mountain")
		{
			if (numberOfMountainTrips > 0)
			{
				totalPrice += PRICE_MOUNTAIN_TRIP;
			}
			else
			{
				totalPrice += 0;
			}
			numberOfMountainTrips--;
		}
		else if (typeOfTrip == "sea")
		{
			if (numberOfSeaTrips > 0)
			{
				totalPrice += PRICE_SEA_TRIP;
			}
			else
			{
				totalPrice += 0;
			}
			numberOfSeaTrips--;
		}
	}

	if (numberOfMountainTrips <= 0 && numberOfSeaTrips <= 0)
	{
		cout << " Good job! Everything is sold." << endl;
	}
	cout << "Profit: " << totalPrice << " leva." << endl;

	return 0;
}