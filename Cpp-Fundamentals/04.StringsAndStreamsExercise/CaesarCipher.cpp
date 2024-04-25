#include <iostream>
#include <string>
#include <ostream>
#include <istream>
#include <sstream>
#include <cctype>

using namespace std;

int main()
{
	string text;
	getline(cin, text);

	for (char c : text)
		cout << (char)(c + 3);

	cout << endl;

	return 0;
}
