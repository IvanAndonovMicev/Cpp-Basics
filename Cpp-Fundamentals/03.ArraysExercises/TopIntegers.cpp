#include <iostream>
using namespace std;

#define MAX_SIZE 99

void writeArr(int arr[], int length)
{
	for (int cnt = 0; cnt < length; cnt++)
	{
		cin >> arr[cnt];
	}
}

bool isTopInteger(int number, int arr[], int length, int startFrom = 0 )
{
	for (int cnt = startFrom; cnt < length; cnt++)
	{
		if (number <= arr[cnt])
			return false;
	}
	return true;
}


int main()
{
	int lengthOfArr, arr[MAX_SIZE];
	cin >> lengthOfArr;

	writeArr(arr, lengthOfArr);

	for (int cnt = 0; cnt < lengthOfArr; cnt++)
	{
		if (isTopInteger(arr[cnt], arr, lengthOfArr, cnt + 1))
		{
			cout << arr[cnt] << ' ';
		}
	}

	cout << endl;
	

	return 0;
}