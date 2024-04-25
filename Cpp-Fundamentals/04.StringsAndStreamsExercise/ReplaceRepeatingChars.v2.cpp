#include <iostream>
#include <sstream>

using namespace std;

string stripDuplication(const string& input)
{
	istringstream istr(input);

	char prevChar = 0;
	char curChar;

	ostringstream ostr;

	while (istr >> curChar)
	{
		if (prevChar != curChar)
		{
			ostr << curChar;
			prevChar = curChar;
		}
	}

	return ostr.str();
}

int main()
{
	string buffer;
	getline(cin, buffer);

	cout << stripDuplication(buffer);

	return 0;
}