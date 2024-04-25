#include <iostream>
#include <queue>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
	int toAdd, toRemove, toSearch;
	cin >> toAdd >> toRemove >> toSearch;

	queue <int> theQueue;

	while (toAdd--)
	{
		int element;
		cin >> element;
		theQueue.push(element);
	}

	while (toRemove--)
	{
		theQueue.pop();
	}

	if (theQueue.size() == 0)
		cout << 0 << endl;
	else
	{
		int minElement = INT_MAX;

		while (theQueue.size())
		{
			int frontElement = theQueue.front(); theQueue.pop();

			if (frontElement == toSearch)
			{
				cout << "true" << endl;
				return 0;
			}
			else if (minElement > frontElement)
			{
				minElement = frontElement;
			}
		}

		cout << minElement << endl;
	}

	return 0;
}