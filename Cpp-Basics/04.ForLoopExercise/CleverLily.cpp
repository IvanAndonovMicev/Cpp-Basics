#include <iostream>

using namespace std;

int main()
{
	int numberOfYears, priceOfOneToy;
	double priceOfWachingmachine;
	cin >> numberOfYears >> priceOfWachingmachine >> priceOfOneToy;

	int counterNumberOfEvenYears = 0;
	int counterForMoneyEvenYears = 0;
	int counterNumberOfToys = 0;
	int birthdayMoney = 0;

	for (int years = 1; years <= numberOfYears; years++)
	{
		if (years % 2 == 0)
		{
			counterNumberOfEvenYears += 1;
			counterForMoneyEvenYears += 10;
			birthdayMoney += counterForMoneyEvenYears;
		}
		else
		{
			counterNumberOfToys += 1;
		}
	}

	double soldToys = priceOfOneToy * counterNumberOfToys;
	int moneyLost = counterNumberOfEvenYears * 1;

	double total = (birthdayMoney + soldToys) - moneyLost;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (total >= priceOfWachingmachine )
	{
		cout << "Yes! " << total - priceOfWachingmachine << endl;
	}
	else
	{
		cout << "No! " << priceOfWachingmachine - total << endl;
	}

	return 0;
}
