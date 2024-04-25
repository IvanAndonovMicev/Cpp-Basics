#include <iostream>
#include <memory>
#include <string>
#include <sstream>

using namespace std;

const int maxLenght = 1000;

int readNumbers(unique_ptr<int[]>& buffer)
{
	string input;
	getline(cin, input);
	istringstream ss(input);

	int number, index = 0;
	while (ss >> number)
	{
		buffer[index] = number;
		index++;

		if (index == maxLenght) throw logic_error("Too many numbers were entered. Our buffer is small!");
	}

	return index;
}

int main()
{
	//int* buffer = new int[maxLenght];
	unique_ptr<int[]> buffer = make_unique<int[]>(maxLenght);
	int n = readNumbers(buffer);

	for (int i = 0; i < n / 2; i++)
	{
		buffer[i] += buffer[n - (i + 1)];
	}

	for (int i = 0; i < n / 2; i++)
		cout << buffer[i] << ' ';

	if (n % 2 != 0) cout << buffer[(n - 1) / 2];

	cout << endl;

	//delete[] buffer;
}