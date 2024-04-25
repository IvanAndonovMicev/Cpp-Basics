#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int endFirstNumber;
	cin >> endFirstNumber;

	int endSecondNumber;
	cin >> endSecondNumber;

	int endThirdNumber;
	cin >> endThirdNumber;

	for (int i1 = 1; i1 <= endFirstNumber; i1++)
	{
		if (i1 % 2 != 0)
		{
			continue;
		}
		for (int i2 = 1; i2 <= endSecondNumber; i2++)
		{
			if (i2 == 1)
			{
				continue;
			}
			else if (i2 == 4)
			{
				continue;
			}
			else if (i2 == 6)
			{
				continue;
			}
			else if (i2 == 8)
			{
				continue;
			}
			else if (i2 == 9)
			{
				continue;
			}
			for (int i3 = 1; i3 <= endThirdNumber; i3++)
			{
				if (i3 % 2 != 0)
				{
					continue;
				}

				cout << i1 << " " << i2 << " " << i3 << endl;
			}

		}

	}

	return 0;
}