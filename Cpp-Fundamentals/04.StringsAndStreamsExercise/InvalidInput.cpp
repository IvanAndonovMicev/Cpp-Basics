#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	istringstream istr(input);

	int sum = 0;
	ostringstream incorrectInputs;

	string token;
	while (istr >> token)
	{
		istringstream istrConvert(token);

		int number;

		istrConvert >> number;

		if (istrConvert)
			sum += number;
		else
			incorrectInputs << token << ' ';
	}

	cout << sum << endl;
	cout << incorrectInputs.str() << endl;

	return 0;
}