#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool isSpecial(char c)
{
	return c == 'a' ||
		c == 'e' ||
		c == 'i' ||
		c == 'o' ||
		c == 'u';
}

int main()
{
	string input;
	getline(cin, input);

	ostringstream ostr;

	char previousChar = 0;

	for (int idx = 0; idx < input.size(); idx++)
	{
		char cur = input[idx];
		if (isSpecial(cur))
		{
			previousChar = cur;
			ostr << cur;
		}
		else
			if (previousChar != cur)
			{
				previousChar = cur;
				ostr << cur;
			}
	}

	cout << ostr.str() << endl;

	return 0;
}