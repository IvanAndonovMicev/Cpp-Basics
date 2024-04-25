#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	int inputNum, primeSum = 0, nonPrimeSum = 0;
	string input;
	cin >> input;

	while (input != "stop")
	{
		inputNum = stoi(input);

		if (inputNum < 0)
		{
			cout << "Number is negative." << endl;
		}
		else
		{
			bool isPrime = true;
			double inputNumSqrt = sqrt(inputNum);

			for (int i = 2; i <= inputNumSqrt; i++)
			{
				if (inputNum % i == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime)
			{
				primeSum += inputNum;
			}
			else
			{
				nonPrimeSum += inputNum;
			}
		}

		cin >> input;
	}

	cout << "Sum of all prime numbers is: " << primeSum << endl;
	cout << "Sum of all non prime numbers is: " << nonPrimeSum << endl;

	return 0;
}