#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

void passwordValidation(string input)
{
	int cntDigits = 0;
	bool posswordValid = true;

	if (input.length() < 6 || input.length() > 10)
	{
		cout << "Password must be between 6 and 10 characters" << endl;
		posswordValid = false;
	}

	for (int cnt = 0; cnt < input.length(); cnt++)
	{
		if (!isalnum(input[cnt]))
		{
			cout << "Password must consist only of letters and digits" << endl;
			posswordValid = false;
			break;
		}
		if (isdigit(input[cnt]))
		{
			cntDigits++;
		}
	}

	if (cntDigits < 2)
	{
		cout << "Password must have at least 2 digits" << endl;
		posswordValid = false;
	}

	if (posswordValid)
	{
		cout << "Password is valid" << endl;
	}
}

int main()
{
	string password;
	cin >> password;

	passwordValidation(password);

	return 0;
}