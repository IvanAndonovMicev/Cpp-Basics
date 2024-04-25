#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string text;
	getline(cin, text);

	string findString;
	getline(cin, findString);

	string replaceWith;
	getline(cin, replaceWith);

	int idxString = text.find(findString);

	while (idxString != string::npos)
	{
		int length = findString.length();

		text.replace(idxString, length, replaceWith);

		idxString = text.find(findString, idxString + replaceWith.length());
	}

	cout << text << endl;

	return 0;
}