#include <iostream>
#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <vector>

using namespace std;

int main()
{
	string buff;
	getline(cin, buff);
	istringstream istr(buff);

	double number;
	set<double, greater<double> > numbers;
	while (istr >> number)
	{
		numbers.insert(number);
	}

	int count = 3;

	for (double curent : numbers)
	{
		cout << curent << " ";
		count--;
		if (count == 0)
			break;
	}

	cout << endl;

	return 0;
}