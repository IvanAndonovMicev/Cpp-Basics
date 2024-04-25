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

int main()
{
	int lengthOfArr, arr[MAX_SIZE], magicSum;
	cin >> lengthOfArr;

	writeArr(arr, lengthOfArr);

	cin >> magicSum;

	for (int cnt1 = 0; cnt1 < lengthOfArr; cnt1++)
	{
		for (int cnt2= 1; cnt2< lengthOfArr; cnt2++)
		{
			if (cnt1 >= cnt2)
				continue;

			if ((arr[cnt1] + arr[cnt2]) == magicSum)
			{
				cout << arr[cnt1] << ' ' << arr[cnt2] << endl;
			}
		}
	}

	

	return 0;
}