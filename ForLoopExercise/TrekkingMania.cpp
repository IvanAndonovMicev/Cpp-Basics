#include <iostream>

using namespace std;

int main()
{
	int numberOfGrups, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
	cin >> numberOfGrups;

	for (int i = 1; i <= numberOfGrups; i++)
	{
		int numberOfPeople;
		cin >> numberOfPeople;

		if (numberOfPeople <= 5)
		{
			sum1 += numberOfPeople;
		}
		else if (numberOfPeople > 5 && numberOfPeople <= 12)
		{
			sum2 += numberOfPeople;
		}
		else if (numberOfPeople > 12 && numberOfPeople <= 25)
		{
			sum3 += numberOfPeople;
		}
		else if (numberOfPeople > 25 && numberOfPeople <= 40)
		{
			sum4 += numberOfPeople;
		}
		else if (numberOfPeople > 40)
		{
			sum5 += numberOfPeople;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	int sum = sum1 + sum2 + sum3 + sum4 + sum5;

	double persent1 = 1.0 * sum1 / sum * 100;
	cout << persent1 << "%" << endl;

	double persent2 = 1.0 * sum2 / sum * 100;
	cout << persent2 << "%" << endl;

	double persent3 = 1.0 * sum3 / sum * 100;
	cout << persent3 << "%" << endl;

	double persent4 = 1.0 * sum4 / sum * 100;
	cout << persent4 << "%" << endl;

	double persent5 = 1.0 * sum5 / sum * 100;
	cout << persent5 << "%" << endl;

	return 0;
}