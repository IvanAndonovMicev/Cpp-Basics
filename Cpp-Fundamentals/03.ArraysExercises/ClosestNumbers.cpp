#include <iostream>
#include <climits>
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
	int lengthOfArr;
	cin >> lengthOfArr;

	int arr[MAX_SIZE];

	writeArr(arr, lengthOfArr);

	int result = INT_MAX;

	if (lengthOfArr == 1)
	{
		cout << 0 << endl;
		return 1;
	}


	for (int cnt1 = 0; cnt1 < lengthOfArr; cnt1++)
	{
		for (int cnt2 = 0; cnt2 < lengthOfArr; cnt2++)
		{
			if (cnt1 == cnt2)
			{
				continue;
			}

			int check = abs(arr[cnt1] - arr[cnt2]);

			if (check <= result)
			{
				result = check;
			}
		}
		
	}
	cout << result << endl;

	return 0;
}