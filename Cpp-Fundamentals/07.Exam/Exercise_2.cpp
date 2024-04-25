#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string bigNumber1, bigNumber2;
	getline(cin, bigNumber1);
	getline(cin, bigNumber2);

	string divider = " ";

	istringstream istr1(bigNumber1);
	istringstream istr2(bigNumber2);

	string number1ToComper;
	string number2ToComper;

	while (true)
	{
		bool empty1 = false, empty2 = false;
		if (!(istr1 >> number1ToComper))
			empty1 = true;

		if (!(istr2 >> number2ToComper))
			empty2 = true;

		if (empty1 && empty2)
			break;

		if (empty1)
		{
			cout << '-';
		}
		else if (empty2)
		{
			cout << '+';
		}
		else if (number1ToComper == number2ToComper)
		{
			cout << '=';
		}
		else if (number1ToComper.length() < number2ToComper.length())
		{
			cout << '>';
		}
		else if (number1ToComper.length() > number2ToComper.length())
		{
			cout << '<';
		}
		else if (number1ToComper < number2ToComper)
		{
			cout << '>';
		}
		else if (number1ToComper > number2ToComper)
		{
			cout << '<';
		}
	}

	return 0;
}