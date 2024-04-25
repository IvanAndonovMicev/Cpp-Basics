#include <iostream>

using namespace std;

int main()
{
	int numberOfPagesInCurentBook;
	cin >> numberOfPagesInCurentBook;

	int numberOfPagesRedInOneHoure;
	cin >> numberOfPagesRedInOneHoure;

	int numberOfDaysRequiredForReading;
	cin >> numberOfDaysRequiredForReading;

	int houresNeeded = numberOfPagesInCurentBook / numberOfPagesRedInOneHoure;

	int houresNeededInOneDay = houresNeeded / numberOfDaysRequiredForReading;

	cout << houresNeededInOneDay << endl;
}