#include <iostream>
#include <vector>
#include <sstream>
#include <set>

using namespace std;

vector<string> extractWords(const string& text)
{
	vector<string> result;

	string curentWord;
	for (size_t i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i]) || text[i] == '\'')
			curentWord.push_back(text[i]);
		else if (curentWord.length() > 0)
		{
			result.push_back(curentWord);
			curentWord.clear();
		}
	}
	if (curentWord.length() > 0)
		result.push_back(curentWord);

	return result;
}

int main()
{
	string input;
	getline(cin, input);

	vector<string> words = extractWords(input);

	char query;
	while (cin >> query && query != '.') {
		set<string> response;
		for (const string& w : words)
			for (const char& s : w)
				if (tolower(s) == tolower(query)) {
					response.insert(w);
					break;
				}

		if (response.size() == 0)
			cout << "---" << endl;
		else
			for (const string& curW : response)
				cout << curW << ' ';

		cout << endl;
	}

	return 0;
}
