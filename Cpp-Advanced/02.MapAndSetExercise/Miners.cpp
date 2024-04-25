#include <iostream>
#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <queue>
#include <cmath>

using namespace std;

int main()
{
	queue < string> resourceOrder;
	map<string, int> resources;

	string resource;
	while (cin >> resource)
	{
		if (resource == "stop")
			break;

		int quantity;
		cin >> quantity;

		auto result = resources.insert({ resource, quantity });
		if (result.second)
		{
			resourceOrder.push(resource);
		}
		else
			result.first->second += quantity;
	}

	while (resourceOrder.size())
	{
		string resource = resourceOrder.front(); resourceOrder.pop();
		cout << resource << " -> " << resources[resource] << endl;
	}

	return 0;
}