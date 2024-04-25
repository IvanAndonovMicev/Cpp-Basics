#include <iostream>
#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	string buff;
	getline(cin, buff);
	istringstream istr(buff);

	int number;
	multiset<int, greater<int> >numbers;

	while (istr >> number)
	{
		double sq = sqrt(number);
		if (trunc(sq) == sq)
			numbers.insert(number);
	}

	for (int number : numbers)
	{
		cout << number << ' ';
	}

	cout << endl;

	return 0;
}