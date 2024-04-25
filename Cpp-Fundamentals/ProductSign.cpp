#include <iostream>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0 || b == 0 || c == 0)
	{
		cout << "+" << endl;
		return 0;
	}

	if (a > 0 && b > 0 && c > 0)
	{
		cout << "+" << endl;
		return 0;
	}

	if ((a < 0 && b < 0) || (a < 0 && c < 0) || (c < 0 && b < 0))
	{
		if (a < 0 && b < 0 && c < 0)
		{
			cout << "-" << endl;
			return 0;
		}

		cout << "+" << endl;
		return 0;
	}
	else
	{
		cout << "-" << endl;
	}

	return 0;
}