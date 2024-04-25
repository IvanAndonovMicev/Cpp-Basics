#include <iostream>

using namespace std;

int main()
{
	int startHour, startMinute;
	cin >> startHour >> startMinute;

	int timeInMinutes = startHour * 60 + startMinute;

	int timePlusMinutes = timeInMinutes + 15;

	int newHour = timePlusMinutes / 60;
	int newMinutes = timePlusMinutes % 60;

	if (newHour >= 24 )
	{
		newHour =  newHour - 24;
	}

	cout << newHour << ":";
	if (newMinutes < 10)
	{
		cout << "0";
	}
	cout << newMinutes << endl;
}