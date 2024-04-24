#include <iostream>

using namespace std;  

int main()
{
    int start, end;
    cin >> start >> end;

	for (int i = start; i <= end; i++)
	{
		int currentNumber = i, evenSum = 0, oddSum = 0;
		bool isEvenPsition = true;

		while (currentNumber != 0)
		{
			int lastDigit = currentNumber % 10;
			if (isEvenPsition)
			{
				evenSum += lastDigit;
			}
			else
			{
				oddSum += lastDigit;
			}

			isEvenPsition = !isEvenPsition;
			currentNumber /= 10;
		}

		if (evenSum == oddSum)
		{
			cout << i << " ";
		}
	}
}