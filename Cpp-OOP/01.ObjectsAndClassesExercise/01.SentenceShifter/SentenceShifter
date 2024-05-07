#include <iostream>
#include <list>
#include <sstream>

using namespace std;

class SentenceShifter {
	list<string> words;
public:

	SentenceShifter(const string& initLine);

	void shiftByInt(int& numOfShifts);

	string getSentenceShifter(void);
};

SentenceShifter::SentenceShifter(const string& initLine) {
	istringstream istr(initLine);

	string word;
	while (istr >> word)
		words.push_back(word);
}

string SentenceShifter::getSentenceShifter(void) {
	for (string word : words)
		cout << word << endl;
}

void SentenceShifter::shiftByInt(int& numOfShifts) {
	while (numOfShifts--) {
		string temp = words.back();
		words.pop_back();
		words.push_front(temp);
	}
}

int main()
{
	string buffer;
	getline(cin, buffer);

	SentenceShifter ss(buffer);

	int numOfShifts;
	cin >> numOfShifts;

	ss.shiftByInt(numOfShifts);
	ss.getSentenceShifter();

	return 0;
}
