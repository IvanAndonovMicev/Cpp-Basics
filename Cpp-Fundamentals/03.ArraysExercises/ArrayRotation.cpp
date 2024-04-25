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

void printArr(int arr[], int length, string space = " ")
{
	for (int cnt = 0; cnt < length; cnt++)
	{
		cout << arr[cnt] << space;
	}
	cout << endl;
}

int main()
{
	int lengthOfArr, arr[MAX_SIZE], numberOfRotations, rotationsToIndex;
	cin >> lengthOfArr;

	writeArr(arr, lengthOfArr);

	cin >> numberOfRotations;

	for (int cnt = 0; cnt < numberOfRotations; cnt++)
	{
		int firstNumber = arr[0];

		for (int cntNewArr = 1; cntNewArr < lengthOfArr; cntNewArr++)
			arr[cntNewArr - 1] = arr[cntNewArr];

		arr[lengthOfArr - 1] = firstNumber;
	}

	printArr(arr, lengthOfArr);

	return 0;
}