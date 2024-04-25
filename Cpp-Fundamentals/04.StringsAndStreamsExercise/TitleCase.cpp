#include <iostream>
#include <sstream>
using namespace std;

#define  CAP_LET 32

string capitalizeLetter(const string& input)
{
	ostringstream oStr;
	bool capitalize = true;

	for (size_t idx = 0; idx < input.length(); idx++)
	{
		char c = input[idx];

		bool isLowerCaseLetters = (c >= 'a' && c <= 'z');
		bool iuCapitalCaseLetter = (c >= 'A' && c <= 'Z');

		if (isLowerCaseLetters || iuCapitalCaseLetter)
		{
			if (capitalize)
			{
				if (isLowerCaseLetters)
				{
					c -= CAP_LET;
				}
				capitalize = false;
			}
		}
		else
			capitalize = true;

		oStr << c;
	}

	return oStr.str();
}

int main()
{
	string buffer;
	getline(cin, buffer);

	cout << capitalizeLetter(buffer) << endl;

	return 0;
}