#include <iostream>
#include <queue>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
	int orderSize;

	cin >> orderSize;
	cin.ignore();

	queue<int> ordersOfTheDay;

	string str;
	getline(cin, str);
	istringstream istr(str);

	int curentOrder;
	int maxOrder = INT_MIN;
	while (istr >> curentOrder)
	{
		ordersOfTheDay.push(curentOrder);
		if (curentOrder > maxOrder)
			maxOrder = curentOrder;
	}

	cout << maxOrder << endl;

	while (ordersOfTheDay.size())
	{
		int orderServed = ordersOfTheDay.front();

		if (orderSize < orderServed)
		{
			cout << "Orders left: ";
			while (ordersOfTheDay.size())
			{
				cout << ordersOfTheDay.front();
				ordersOfTheDay.pop();
				if (ordersOfTheDay.size())
					cout << ' ';
				else
					break;
			}
			cout << endl;
			return 0;
		}

		ordersOfTheDay.pop();
		orderSize -= orderServed;
	}

	cout << "Orders complete" << endl;

	return 0;
}