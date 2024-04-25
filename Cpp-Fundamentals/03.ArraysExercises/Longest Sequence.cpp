#include <iostream>
#include <climits>
using namespace std;

#define MAX_SIZE 99

void enterArr(int arr[], int length, string space = " ")
{
	for (size_t cnt = 0; cnt < length; cnt++)
	{
		cin >> arr[cnt];
	}
}

int main()
{
	int lengthOfArr;
	cin >> lengthOfArr;

	int arr[MAX_SIZE];

	enterArr(arr, lengthOfArr);

	size_t seqLenght = 1;
	int longestElement = arr[0];

	size_t curentLenght = 1;
	int curentLongestElement = arr[0];

	

	for (int cnt = 1; cnt < lengthOfArr; cnt++)
	{
		if (arr[cnt] == curentLongestElement)
			curentLenght ++ ;
		else
		{
			curentLongestElement = arr[cnt];
			curentLenght = 1;
		}

		if (curentLenght >= seqLenght)
		{
			longestElement = curentLongestElement;
			seqLenght = curentLenght;
		}
	}

	for (int i = 1; i <= seqLenght; i++)
	{
		cout << longestElement << ' ';
	}
	cout << endl;

	return 0;
}