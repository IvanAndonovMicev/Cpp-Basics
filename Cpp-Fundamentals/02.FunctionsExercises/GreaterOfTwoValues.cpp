#include <iostream>
#include <string>
using namespace std;

int compareIntegers(int number1, int number2)
{
	if (number1 > number2)
	{
		return number1;
	}
	return number2;
}

char compareChares(char char1, char char2)
{
	if (char1 > char2)
	{
		return char1;
	}
	return char2;
}

string comapreStrings(string string1, string string2)
{
	if (string1 > string2)
	{
		return string1;
	}
	return string2;
}

int main()
{
	string input;
	cin >> input;

	if (input == "int")
	{
		int number1, number2;
		cin >> number1 >> number2;
		cout << compareIntegers(number1, number2) << endl;
	}
	else if (input == "char")
	{
		char char1, char2;
		cin >> char1 >> char2;
		cout << compareChares(char1, char2) << endl;
	}
	else if (input == "string")
	{
		string string1, string2;
		cin.ignore();
		getline(cin, string1);
		getline(cin, string2);
		cout << comapreStrings(string1, string2) << endl;
	}

	return 0;
}