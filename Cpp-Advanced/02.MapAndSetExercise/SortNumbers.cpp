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

	int number;
	multiset<int> numbers;

	while (istr >> number)
		numbers.insert(number);

	bool bFirst = true;
	for (int number : numbers)
	{
		if (bFirst)
			bFirst = false;
		else
			cout << " <= ";
		cout << number;
	}

	cout << endl;

	return 0;
}