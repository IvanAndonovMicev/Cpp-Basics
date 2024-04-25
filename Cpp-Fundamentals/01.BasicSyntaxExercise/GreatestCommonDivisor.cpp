#include <iostream>

using namespace std;

int main()
{
	int numberA, numberB, result = 0;
	cin >> numberA >> numberB;

	if (numberA > numberB)
	{
		int c = numberB;
		numberB = numberA;
		numberA = c;
	}

	for (int count = 1; count <= numberA; count++)
	{
		if (((numberA % count) == 0) && ((numberB % count) == 0))
		{
			result = count;
		}
	}

	cout << result << endl;

	return 0;
}
