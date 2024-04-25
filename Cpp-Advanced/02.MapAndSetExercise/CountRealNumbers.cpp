#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main()
{
	map<string, int> numbersCount;

	string buf;
	getline(cin, buf);
	istringstream istr(buf);

	string number;
	while (istr >> number)
		numbersCount[number]++;

	for (auto it = numbersCount.begin(); it != numbersCount.end(); it++)
		cout << it->first << " -> " << it->second << endl;

	return 0;
}
