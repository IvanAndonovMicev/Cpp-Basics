#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int length, sum = 0;

	string buffer1, buffer2;
	cin >> buffer1 >> buffer2;

	length = buffer1.length() >= buffer2.length() ? buffer1.length() : buffer2.length();

	for (int idx = 0; idx < length; idx++)
	{
		int bufferI1, bufferI2;

		if (idx < buffer1.length())
			bufferI1 = buffer1[idx];
		else
			bufferI1 = 1;

		if (idx < buffer2.length())
			bufferI2 = buffer2[idx];
		else
			bufferI2 = 1;

		sum += bufferI1 * bufferI2;
	}
	cout << sum << endl;

	return 0;
}