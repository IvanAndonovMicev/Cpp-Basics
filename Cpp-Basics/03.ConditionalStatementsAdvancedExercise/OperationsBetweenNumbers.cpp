#include <iostream>

using namespace std;

int main()
{
	int numberA, numberB;
	string operation, oddOrEven;

	cin >> numberA >> numberB >> operation;

	if ((operation == "/" || operation == "%") && numberB == 0)
	{
		cout << "Cannot divide " << numberA << " by zero" << endl;
	}
	else if (operation == "/")
	{
		double result = 1.0 * numberA / numberB;
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << numberA << " / " << numberB << " = " << result << endl;
	}
	else
	{
		int operationResult;
		bool showParity = true;
		if (operation == "+")
		{
			operationResult = numberA + numberB;
		}
		else if (operation == "-")
		{
			operationResult = numberA - numberB;
		}
		else if (operation == "*")
		{
			operationResult = numberA * numberB;
		}
		else if (operation == "%")
		{
			operationResult = numberA % numberB;
			showParity = false;
		}

		cout << numberA << " " << operation << " " << numberB << " = " << operationResult;

		if (showParity)
		{
			cout << " - ";

			if (operationResult % 2 == 0) cout<< "even";
			else cout << "odd";
		}

		cout << endl;
	}
	
}