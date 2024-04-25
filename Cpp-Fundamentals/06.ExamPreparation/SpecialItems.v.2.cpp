#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

bool isValid(char c)
{
	return  (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
	string input;
	getline(cin, input);

	ostringstream output;
	char prevChar = 0;
	for (char c : input)
	{
		if (c != prevChar || isValid(c))
			output << c;

		prevChar = c;
	}

	cout << output.str() << endl;

	return 0;
}