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

void printArr(int arr[], int length, string spece = " ")
{
	for (int cnt = 0; cnt < length; cnt++)
	{
		cout << arr[cnt] << spece;
	}
	cout << endl;
}

int main()
{
	int lengthOfArr, cnt = 0;
	cin >> lengthOfArr;
	
	int arr[MAX_SIZE];
	int arrProduct[MAX_SIZE];

	writeArr(arr, lengthOfArr);

	
	for (int i = 0; i < lengthOfArr; i++) 
	{
		for (int j = 0; j < lengthOfArr; j++)
		{
			arrProduct[cnt] = arr[i] * arr[j];
			cnt++;
		}
	}

	printArr(arrProduct, lengthOfArr * lengthOfArr);

	return 0;
}