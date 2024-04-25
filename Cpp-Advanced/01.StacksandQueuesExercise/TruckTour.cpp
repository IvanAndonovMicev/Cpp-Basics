#include <iostream>
#include <queue>
#include <sstream>
#include <climits>

using namespace std;

bool isPossible(queue<long> distances, queue<long> amounts)
{
	long tank = 0;
	while (distances.size())
	{
		tank += amounts.front();
		amounts.pop();

		int distance = distances.front();
		distances.pop();

		if (tank < distance)
			return false;

		tank -= distance;
	}

	return true;
}

int main()
{
	size_t pumps;
	queue<long> distances;
	queue<long> amounts;

	cin >> pumps;
	for (size_t cnt = 0; cnt < pumps; cnt++)
	{
		int amount, distance;
		cin >> amount >> distance;
		distances.push(distance);
		amounts.push(amount);
	}

	for (size_t cnt = 0; cnt < pumps; cnt++)
	{
		if (isPossible(distances, amounts))
		{
			cout << cnt << endl;
			return 0;
		}

		int tmp = distances.front();
		distances.pop(); distances.push(tmp);
		tmp = amounts.front();
		amounts.pop(); amounts.push(tmp);
	}

	return 0;
}