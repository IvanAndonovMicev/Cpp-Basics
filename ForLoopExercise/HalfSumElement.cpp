#include <iostream>

using namespace std;

int main()
{
	int maxNumber = INT_MIN;
	int sum = 0;

	int row;
	cin >> row;

	for (int  rows = 1; rows <= row; rows++)
	{
		int num;
		cin >> num;

		if (num > maxNumber)
		{
			maxNumber = num;
		}
		sum += num;
	}

	sum -= maxNumber;

	if (sum == maxNumber)
	{
		cout << "Yes" << endl;
		cout << "Sum = " << maxNumber << endl;
	}
	else
	{
		cout << "No" << endl;
		cout << "Diff = " << abs(sum - maxNumber) << endl;
	}

	return 0;
}