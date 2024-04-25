#include <iostream>
using namespace std;

int main()
{
	size_t counts[10] = {};
	int length;
	cin >> length;

	for (size_t cntArr = 0; cntArr < length; cntArr++)
	{
		int curentNumber;
		cin >> curentNumber;

		counts[curentNumber]++;
	}

	int  maxValue = counts[0];

	for (size_t cnt = 0; cnt < 10; cnt++)
	{
		if (counts[cnt] > maxValue)
		{
			maxValue = counts[cnt];
		}
	}

	for (size_t cnt = 0; cnt < 10; cnt++)
	{
		if (maxValue == counts[cnt])
		{
			cout << cnt << ' ';
		}
	}

	cout << endl;

	return 0;
}