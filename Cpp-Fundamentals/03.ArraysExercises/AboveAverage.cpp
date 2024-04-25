#include <iostream>
using namespace std;

#define MAX_SIZE 99

void enterArr(int arr[], int length)
{
	for (size_t cnt = 0; cnt < length; cnt++)
	{
		cin >> arr[cnt];
	}
}

int sumArray(int arr[], int length, int sum = 0)
{
	for (size_t cnt = 0; cnt < length; cnt++)
	{
		sum += arr[cnt];
	}

	return sum;
}

int main()
{
	int lengthOfArr;
	cin >> lengthOfArr;

	int arr[MAX_SIZE];

	enterArr(arr, lengthOfArr);

	for (int cnt = 0; cnt < lengthOfArr; cnt++)
	{
		if (arr[cnt] >= (sumArray(arr, lengthOfArr) / lengthOfArr))
		{
			cout << arr[cnt] << ' ';
		}
	}

	cout << endl;

	return 0;
}
