#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a > b)
	{
		int c = b;
		b = a;
		a = c;
	}

	cout << a << ' ' << b << endl;

	return 0;
}