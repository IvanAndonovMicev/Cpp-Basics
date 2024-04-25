#include <iostream>

using namespace std;

string onesToWord(int number)
{
	number %= 10;

	switch (number)
	{
	//case 0: return "zero";
	case 1: return "one";
	case 2: return "two";
	case 3: return "three";
	case 4: return "four";
	case 5: return "five";
	case 6: return "six";
	case 7: return "seven";
	case 8: return "eight";
	case 9: return "nine";
	}

	return "";
}

string tensToWord(int number)
{
	number %= 10;

	switch (number)
	{
	case 2: return "twenty";
	case 3: return "thirty";
	case 4: return "forty";
	case 5: return "fifty";
	case 6: return "sixty";
	case 7: return "seventy";
	case 8: return "eighty";
	case 9: return "ninety";
	}

	return "";
}

string hundredthsToWord(int number)
{
	number %= 10;

	switch (number)
	{
	case 1: return "one";
	case 2: return "two";
	case 3: return "three";
	case 4: return "four";
	case 5: return "five";
	case 6: return "six";
	case 7: return "seven";
	case 8: return "eight";
	case 9: return "nine";
	}

	return "";
}

string thousandthsToWord(int number)
{
	number %= 10;

	switch (number)
	{
	case 1: return "one";
	case 2: return "two";
	case 3: return "three";
	case 4: return "four";
	case 5: return "five";
	case 6: return "six";
	case 7: return "seven";
	case 8: return "eight";
	case 9: return "nine";
	}

	return "";
}

string teensToWord(int number)
{
	switch (number)
	{
	case 10: return "ten";
	case 11: return "eleven";
	case 12: return "twelve";
	case 13: return "thirteen";
	case 14: return "fourteen";
	case 15: return "fifteen";
	case 16: return "sixteen";
	case 17: return "seventeen";
	case 18: return "eighteen";
	case 19: return "nineteen";
	}

	return "";
}

void pringNumber(int number)
{

	if (!number)
	{
		cout << "zero" << endl;
		return;
	}

	int number1 = number % 10; //edinici
	int number2 = (number / 10) % 10; //desetici
	int number3 = (number / 100) % 10; //stotici
	int number4 = (number / 1000); //hiladni

	if (number4)
	{
		cout << thousandthsToWord(number4) << " thousand ";
	}

	if (number3)
	{
		cout << hundredthsToWord(number3) << " hundred ";
	}

	if (number2 >= 2)
	{
		cout << tensToWord(number2) << ' ';
	}

	if (number2 == 1)
	{
		cout << teensToWord((number2 * 10) + number1);
	}
	else
	{
		if (number1)
		{
			cout << onesToWord(number1);
		}
		
	}
	cout << endl;
}

int main()
{
	int number;
	cin >> number;

	pringNumber(number);
	
	return 0;
}