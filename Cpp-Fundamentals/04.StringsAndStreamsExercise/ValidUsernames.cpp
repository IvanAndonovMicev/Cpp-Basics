#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidChar(char c)
{
	return isalnum(c) || c == '-' || c == '_';
}

bool isValidUserName(const string& userName)
{
	if (userName.length() < 3 || userName.length() > 16)
		return false;

	for (char c : userName)
	{
		if (!isValidChar(c))
			return false;
	}

	return true;
}

int main()
{
	string buffer;
	getline(cin, buffer);

	const string divider = ", ";

	while (buffer.length())
	{
		string userName;

		int divPos = buffer.find(divider);

		if (divPos != string::npos)
		{
			userName = buffer.substr(0, divPos);
			buffer.erase(0, divPos + divider.length());
		}
		else
		{
			userName = buffer;
			buffer.clear();
		}

		if (isValidUserName(userName))
			cout << userName << endl;
	}

	return 0;
}