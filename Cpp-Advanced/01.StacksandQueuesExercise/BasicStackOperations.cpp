#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
	int toAdd, toRemove, toSearch;
	cin >> toAdd >> toRemove >> toSearch;

	stack <int> theStack;

	while (toAdd--)
	{
		int element;
		cin >> element;
		theStack.push(element);
	}

	while (toRemove--)
	{
		theStack.pop();
	}

	if (theStack.size() == 0)
		cout << 0 << endl;
	else
	{
		int minElement = INT_MAX;

		{
			int topElement = theStack.top(); theStack.pop();

			if (topElement == toSearch)
			{
				cout << "true" << endl;
				return 0;
			}
			else if (minElement > topElement)
			{
				minElement = topElement;
			}
		}

		cout << minElement << endl;
	}

	return 0;
}