#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	for (int i1 = 1; i1 < 9; i1++)
	{
		if (num % i1 != 0)
		{
			continue;
		}
		for (int i2 = 1; i2 < 9; i2++)
		{
			if (num % i2 != 0)
			{
				continue;
			}
			for (int i3 = 1; i3 < 9; i3++)
			{
				if (num % i3 != 0)
				{
					continue;
				}
				for (int i4 = 1; i4 < 9; i4++)
				{
					if (num % i4 != 0)
					{
						continue;
					}

					cout << i1 << i2 << i3 << i4 << " ";
				}

			}

		}

	}

	return 0;
}