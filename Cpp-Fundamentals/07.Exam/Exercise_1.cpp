#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>
using namespace std;

#define MAX_SIE 99

int maxValuoAtOddPos(int arr[], int size)
{
	int maxNumber = INT_MIN;

	for (int cnt = 0; cnt < size; cnt++)
	{
		if (!(cnt % 2 == 0))
		{
			if (maxNumber < arr[cnt])
				maxNumber = arr[cnt];
		}
	}
	return maxNumber;
}

int minValuoAtEvenPos(int arr[], int size)
{
	int minNumber = INT_MAX;

	for (int cnt = 0; cnt < size; cnt++)
	{
		if (cnt % 2 == 0)
		{
			if (minNumber > arr[cnt])
				minNumber = arr[cnt];
		}
	}
	return minNumber;
}

double avarage(int arr[], int size)
{
	int sum = 0;

	for (int cnt = 0; cnt < size; cnt++)
	{
		sum += arr[cnt];
	}

	return (sum * 1.0) / size;
}

void print(int arr[], int size)
{
	for (int cnt = size - 1; cnt >= 0; cnt--)
	{
		cout << arr[cnt] << ' ';
	}
	cout << endl;
}

int main()
{
	int N;
	cin >> N;

	int arr[MAX_SIE];

	for (int cnt = 0; cnt < N; cnt++)
	{
		cin >> arr[cnt];
	}

	cout << fixed << setprecision(2)
		<< maxValuoAtOddPos(arr, N) * 1.00 << ' ' << minValuoAtEvenPos(arr, N) * 1.00 << ' ' << avarage(arr, N) << endl;
	print(arr, N);

	return 0;
}
