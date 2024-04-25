#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string buffer;
	cin >> buffer;

	for (int cnt = 0; cnt < buffer.length(); cnt++)
	{
		if (buffer[cnt] != buffer[cnt + 1])
		{
			cout << buffer[cnt];
		}
	}
	cout << endl;

	return 0;
}