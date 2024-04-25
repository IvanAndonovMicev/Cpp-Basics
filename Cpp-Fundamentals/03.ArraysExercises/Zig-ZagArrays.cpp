#include <iostream>

using namespace std;

#define MAX_SIZE 99

void printArray(int arr[], int size, string separator = " ")
{
	for (int cnt = 0; cnt < size; cnt++)
	{
		cout << arr[cnt] << ' ';
	}
	cout << endl;
}

int main()
{
	int numberOfArrays;
	cin >> numberOfArrays;

	int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];

	int* first = arr1;
	int* second = arr2;

	for (int cnt = 0; cnt < numberOfArrays; cnt++)
	{
		int number1, number2;

		cin >> number1 >> number2;

		first[cnt] = number1;
		second[cnt] = number2;
		
		int *temp = first;
		first = second;
		second = temp;
	}

	printArray(arr1, numberOfArrays);
	printArray(arr2, numberOfArrays);

	return 0;
}