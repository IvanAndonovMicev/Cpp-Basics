#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
	int N, S, X;
	int min = INT_MAX;
	cin >> N >> S >> X;

	stack <int> numbers;

	for (int cnt = 0; cnt < N; cnt++)
	{
		int curentNumber;
		cin >> curentNumber;

		numbers.push(curentNumber);
	}

	if (N == S)
	{
		cout << 0 << endl;
		return 0;
	}
	else
		for (int cnt = 0; cnt < S; cnt++)
			numbers.pop();

	while (numbers.size())
	{
		int curentNumber = numbers.top(); numbers.pop();
		if (curentNumber == X)
		{
			cout << "true" << endl;
			return 0;
		}
		else
		{
			if (min > curentNumber)
				min = curentNumber;
		}
	}

	cout << min << endl;

	return 0;
}