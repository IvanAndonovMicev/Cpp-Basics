#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double recordInSeconds, distansInMetres, secondsInWithOneMeterIsSwimed;
	cin >> recordInSeconds >> distansInMetres >> secondsInWithOneMeterIsSwimed;

	double swimmingDistansInSeconds = distansInMetres * secondsInWithOneMeterIsSwimed;

	int slowDows = floor(distansInMetres / 15);
	swimmingDistansInSeconds = swimmingDistansInSeconds + slowDows * 12.5;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (recordInSeconds > swimmingDistansInSeconds)
	{
		cout << "Yes, he succeeded! The new world record is " << swimmingDistansInSeconds << " seconds." << endl;
	}
	else
	{
		double neededTime = swimmingDistansInSeconds - recordInSeconds;
		cout << "No, he failed! He was " << neededTime << " seconds slower." << endl;
	}
	return 0;
}