#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <vector>

using namespace std;

int main()
{
	string buff;
	getline(cin, buff);
	transform(buff.cbegin(), buff.cend(), buff.begin(), ::tolower);
	istringstream istr(buff);

	vector<string> wordsOrder;
	map<string, size_t> wordsCount;

	string word;
	while (istr >> word)
	{
		auto result = wordsCount.insert({ word, 1 });
		if (result.second == true)
			wordsOrder.push_back(word);
		else
		{
			map<string, size_t>::iterator& it = result.first;
			it->second++;
			//result.first->second++;
		}
	}

	bool bFirst = true;
	for (const string& word : wordsOrder)
	{
		if (wordsCount[word] % 2)
		{
			if (!bFirst)
				cout << ", ";
			else
				bFirst = false;

			cout << word;
		}
	}

	cout << endl;

	return 0;
}