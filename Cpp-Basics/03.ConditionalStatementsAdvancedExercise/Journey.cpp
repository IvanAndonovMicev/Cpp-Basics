#include <iostream>

using namespace std;

int main()
{
    double buget = 0.00;
	double spentBuget = 0.00;
    string season, location, placeToSleep;
	cin >> buget >> season;

	if (buget <= 100)
	{
		location = "Bulgaria";
		if (season == "summer")
		{
			placeToSleep = "Camp";
			spentBuget = buget * 0.3;
		}
		else if (season == "winter")
		{
			placeToSleep = "Hotel";
			spentBuget = buget * 0.7;
		}
	}
	else if (buget <= 1'000)
	{
		location = "Balkans";
		if (season == "summer")
		{
			placeToSleep = "Camp";
			spentBuget = buget * 0.4;
		}
		else if (season == "winter")
		{
			placeToSleep = "Hotel";
			spentBuget = buget * 0.8;
		}
	}
	else
	{
		location = "Europe";
		placeToSleep = "Hotel";
		spentBuget = buget * 0.9;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << location << endl;
	cout << placeToSleep << " - " << spentBuget << endl;

	return 0;
}