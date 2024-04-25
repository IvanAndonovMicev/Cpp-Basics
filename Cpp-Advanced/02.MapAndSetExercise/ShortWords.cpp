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
	transform(buff.cbegin(), buff.cend(), buff.begin(), ::tolower);
	istringstream istr(buff);

	set<string> words;

	string word;
	while (istr >> word)
	{
		words.insert(word);
	}

	bool bFirst = true;
	for (string word : words)
	{
		if (word.size() >= 5)
			continue;

		if (bFirst)
			bFirst = false;
		else
			cout << ", ";
		cout << word;
	}

	cout << endl;

	return 0;
}