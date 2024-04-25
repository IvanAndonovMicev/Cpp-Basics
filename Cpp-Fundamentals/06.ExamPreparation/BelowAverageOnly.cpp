#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> numbers;
	numbers.reserve(N);

	int avarage = 0;
	for (int cnt = 0; cnt < N; cnt++)
	{
		int number;
		cin >> number;

		numbers.push_back(number);

		avarage += number;
	}

	avarage /= N;

	for (vector<int>::iterator itV = numbers.begin(); itV != numbers.end();)
	{
		if (*itV > avarage)
			itV = numbers.erase(itV);
		else
			itV++;
	}

	int oddSum = 0, evenSum = 0;

	for (int idx = 0; idx < numbers.size(); idx++)
	{
		if ((idx % 2) != 0)
			oddSum += numbers[idx];
		else
			evenSum += numbers[idx];
	}
	cout << evenSum * oddSum << endl;

	return 0;
}
