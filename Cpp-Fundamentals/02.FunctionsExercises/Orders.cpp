#include <iostream>
#include <iomanip>
using namespace std;

double endPrice(string order, int quantity)
{
	if (order == "coffee")
	{
		return 1.50 * quantity;
	}
	else if (order == "water")
	{
		return 1.00 * quantity;
	}
	else if (order == "coke")
	{
		return 1.40 * quantity;
	}
	else if (order == "snacks")
	{
		return 2.00 * quantity;
	}
}

int main()
{
	string order;
	int quantity;

	cin >> order >> quantity;

	cout << fixed << setprecision(2) << endPrice(order, quantity) << endl;

	return 0;
}