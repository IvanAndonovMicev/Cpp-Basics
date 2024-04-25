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

void swap(const unique_ptr<int[]>& ptr, const int& i1, const int& i2)
{
	int temp = ptr[i1];
	ptr[i1] = ptr[i2];
	ptr[i2] = temp;
}

int removeNumber(const unique_ptr<int[]>& buffer, const int& n, bool(*predicate)(const int&))
{
	int removeCounter = 0;

	for (int i = 0; i < n; i++)
	{
		if (predicate(buffer[i]))
		{
			removeCounter++;
			buffer[i] = 0;
		}
		else if (removeCounter > 0)
		{
			swap(buffer, i, i - removeCounter);
		}
	}

	return removeCounter;
}

void reverse(const unique_ptr<int[]>& buffer, const int& n)
{
	for (int i = 0; i < n / 2; i++) swap(buffer, i, n - (i + 1));
}

bool isNegative(const int& number)
{
	return number < 0;
}

int main()
{
	unique_ptr<int[]> buffer = make_unique<int[]>(maxLenght);
	int n = readNumbers(buffer);

	n -= removeNumber(buffer, n, isNegative);
	if (n == 0) cout << "empty" << endl;
	else
	{
		reverse(buffer, n);
		for (size_t i = 0; i < n; i++) cout << buffer[i] << ' ';

		cout << endl;
	}

	return 0;
}