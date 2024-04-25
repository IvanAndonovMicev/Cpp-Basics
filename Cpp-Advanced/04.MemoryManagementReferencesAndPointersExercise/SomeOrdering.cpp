#include <iostream>
#include <string>

using namespace std;

char* transform(const char* ptr, const size_t& n, char(*transformFunc)(const char&))
{
	char* buffer = new char[n];

	for (size_t i = 0; i < n; i++)
	{
		buffer[i] = transformFunc(ptr[i]);
	}

	return buffer;
}

char toLower(const char& symbol)
{
	if (65 <= symbol && symbol <= 90) return symbol + 32;
	return symbol;
}
char toUpper(const char& symbol)
{
	if (97 <= symbol && symbol <= 122) return symbol - 32;
	return symbol;
}

int main()
{
	string input;
	getline(cin, input);

	char* output1 = transform(input.c_str(), input.length() + 1, toLower);
	cout << output1 << endl;
	delete[] output1;

	char* output2 = transform(input.c_str(), input.length() + 1, toUpper);
	cout << output2 << endl;
	delete[] output2;

	return 0;
}