#include <iostream>

using namespace std;

int main()
{
	int number, lastNum, sumOne = 1, sumTwo = 0, testNumber;
	cin >> number;
	testNumber = number;

	while (number != 0)
	{
		
		lastNum = number % 10;
		number /= 10;

		for (int i = 1; i <= lastNum; i++)
		{
			sumOne *= i;
		}

		sumTwo += sumOne;
		sumOne = 1;
	}

	if (testNumber == sumTwo)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}