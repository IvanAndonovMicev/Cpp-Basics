#include <iostream>

using namespace std;

int operationAddition(int a, int b)
{
	return a + b;
}

int operationSubtraction(int a, int b)
{
	return a - b;
}

int operationMultiplication(int a, int b)
{
	return a * b;
}

int operationDivision(int a, int b)
{
	return a / b;
}




int main()
{
	int a, b;
	char symbol;

	cin >> a >> b >> symbol;

	switch (symbol)
	{
	case '+':
		cout << operationAddition(a, b) << endl;
		break;
	case '-':
		cout << operationSubtraction(a, b) << endl;
		break;
	case '*':
		cout << operationMultiplication(a, b) << endl;
		break;
	case '/':
		cout << operationDivision(a, b) << endl;
		break;
	}

	return 0;
}