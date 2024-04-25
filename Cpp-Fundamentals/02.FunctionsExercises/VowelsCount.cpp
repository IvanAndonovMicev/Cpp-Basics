#include <iostream>
#include <cctype>

using namespace std;

bool isVowel(char c)
{
	switch (tolower(c))
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return true;
	default:
		return false;
	}
}

int countVowel(string word)
{
	int cnt = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (isVowel(word[i]))
			cnt++;
	}
	return cnt;
}
int main()
{
	string word;
	cin >> word;

	cout << countVowel(word) << endl;

	return 0;
}