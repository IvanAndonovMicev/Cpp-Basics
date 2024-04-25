#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

void querieOperationOne(stack<int>& curentStack, int number)
{
	curentStack.push(number);
}

void querieOperationTwo(stack<int>& curentStack)
{
	curentStack.pop();
}

void querieOperationThree(stack<int> curentStack)
{
	int maxNum = INT_MIN;

	while (curentStack.size())
	{
		int curentNumber = curentStack.top(); curentStack.pop();
		if (curentNumber > maxNum)
			maxNum = curentNumber;
	}

	cout << maxNum << endl;
}

void querieOperationFour(stack<int> curentStack)
{
	int minNum = INT_MAX;

	while (curentStack.size())
	{
		int curentNumber = curentStack.top(); curentStack.pop();
		if (curentNumber < minNum)
			minNum = curentNumber;
	}

	cout << minNum << endl;
}

int main()
{
	int toAddQueries;
	cin >> toAddQueries;

	stack<int> queries;

	while (toAddQueries--)
	{
		int curentQuerieOperation;
		cin >> curentQuerieOperation;

		switch (curentQuerieOperation)
		{
		case 1:
			int number;
			cin >> number;
			querieOperationOne(queries, number);
			break;
		case 2:
			if (queries.size())
				querieOperationTwo(queries);
			break;
		case 3:
			if (queries.size())
				querieOperationThree(queries);
			break;
		case 4:
			if (queries.size())
				querieOperationFour(queries);
			break;
		}
	}

	while (true)
	{
		cout << queries.top();
		queries.pop();
		if (!queries.size())
			break;

		cout << ", ";
	}
	cout << endl;

	return 0;
}