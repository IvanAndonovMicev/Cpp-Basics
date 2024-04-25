#include <iostream>
#include <stack>
#include <sstream>
#include <climits>

using namespace std;

int main()
{
	stack<int> clothes;

	string buf;
	getline(cin, buf);
	istringstream istr(buf);

	int curCloth;
	while (istr >> curCloth)
		clothes.push(curCloth);

	int capacity;
	cin >> capacity;

	int total = 1;
	int curRack = 0;

	while (clothes.size())
	{
		curCloth = clothes.top(); clothes.pop();

		if (curCloth + curRack > capacity)
		{
			total++;
			curRack = curCloth;
		}
		else
		{
			curRack += curCloth;
		}
	}

	cout << total << endl;

	return 0;
}