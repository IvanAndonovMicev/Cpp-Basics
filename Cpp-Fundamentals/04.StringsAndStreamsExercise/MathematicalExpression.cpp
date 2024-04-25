#include <iostream>
#include  <sstream>
using namespace std;

int main()
{
	int cntExternalBracket = 0;
	int cntInternalBracket = 0;

	string buffer;
	cin >> buffer;

	for (int cnt = 0; cnt < buffer.length(); cnt++)
	{
		if (buffer[cnt] == '(')
			cntExternalBracket++;

		if (buffer[cnt] == ')')
			cntInternalBracket++;
	}

	if (cntExternalBracket == cntInternalBracket)
		cout << "correct" << endl;
	else
		cout << "incorrect" << endl;

	return 0;
}