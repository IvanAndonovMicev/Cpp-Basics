#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<char>& input)
{
	size_t bracket0count = 0; // '( )'
	size_t bracket1count = 0; // '[ ]'
	size_t bracket2count = 0; // '{ }'

	vector<char>::iterator itV;

	for (itV = input.begin(); itV != input.end(); itV++)
	{
		switch (*itV)
		{
			//case for ' { } '
		case '{':
			if (bracket1count || bracket0count)
				return false;

			bracket2count++;
			break;

		case '}':
			if (bracket1count || bracket0count)
				return false;
			if (bracket2count == 0)
				return false;

			bracket2count--;
			break;

			//case for ' [ ] '
		case '[':
			if (bracket0count)
				return false; \

				bracket1count++;
			break;

		case ']':
			if (bracket0count)
				return false;
			if (bracket1count == 0)
				return false;

			bracket1count--;
			break;

			//case for ' ( ) '
		case '(':

			bracket0count++;
			break;

		case ')':
			if (bracket0count == 0)
				return false;

			bracket0count--;
			break;
		}
	}

	return bracket0count == 0 && bracket1count == 0 && bracket2count == 0;
}

int main()
{
	string buffer;
	cin >> buffer;

	vector<char> input;
	input.reserve(buffer.size());
	for (char c : buffer)
		input.push_back(c);

	if (isValid(input))
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;

	return 0;
}
