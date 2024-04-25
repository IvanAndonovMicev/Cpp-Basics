#include <iostream>
#include <sstream>
#include <list>

using namespace std;

int main()
{
	list<int> sequence;

	string operation;
	while (cin >> operation && operation != "end")
	{
		if (operation == "sum")
		{
			int b = sequence.back();
			sequence.pop_back();
			int a = sequence.back();
			sequence.pop_back();
			sequence.push_back(a + b);
		}
		else if (operation == "subtract")
		{
			int b = sequence.back();
			sequence.pop_back();
			int a = sequence.back();
			sequence.pop_back();
			sequence.push_back(abs(a - b));
		}
		else if (operation == "concat")
		{
			int b = sequence.back();
			sequence.pop_back();
			int a = sequence.back();
			sequence.pop_back();

			stringstream ss;
			ss << a << b;
			int result;
			ss >> result;

			sequence.push_back(result);
		}
		else if (operation == "discard")
		{
			if (!sequence.empty())
			{
				sequence.pop_back();
			}
		}
		else
		{
			int number = stoi(operation);
			sequence.push_back(number);
		}
	}

	for (auto it = sequence.begin(); it != sequence.end(); ++it)
	{
		cout << *it << endl;
	}

	return 0;
}