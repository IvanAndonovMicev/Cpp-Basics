#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int endNumber, number;
	cin >> endNumber;

	int min = INT_MAX;
	int max = INT_MIN;

	for (int count = 1; count <= endNumber ; count++)
	{
		cin >> number;

		if (number < min)
		{
			min = number;
		}

		if (number > max)
		{
			max = number;
		}
		
		
	}

	cout << min << ' ' << max << endl;

	return 0;
}