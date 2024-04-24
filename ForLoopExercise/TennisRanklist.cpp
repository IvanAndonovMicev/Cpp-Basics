#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int numberOfTurnaments, initialPoint ,points = 0, winCounter = 0;

	cin >> numberOfTurnaments >> initialPoint;

	for (int i = 1; i <= numberOfTurnaments; i++)
	{
		string result;
		cin >> result;

		if (result == "W")
		{
			points += 2000;
			winCounter++;

		}
		else if (result == "F")
		{
			points += 1200;
		}
		else if (result == "SF")
		{
			points += 720;
		}
	}

	cout << "Final points: " << points + initialPoint << endl;
	double avarage = floor(1.0 * points / numberOfTurnaments);
	cout << "Average points: " << avarage << endl;
	double persent = ((1.0 * winCounter) / numberOfTurnaments) * 100;
	cout.setf(ios::fixed);
	cout.precision(2);
	cout << persent << "%" << endl;

	return 0;
}