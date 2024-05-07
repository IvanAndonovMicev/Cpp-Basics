#ifndef __WORD_H__
#define __WORD_H__

#include <string>
#include <map>

class Word {
	std::string  word;
	static std::map<std::string, size_t> wordsCount;

public:

	Word(const std::string& word) : word(word) {
		wordsCount[word]++;
	}

	const std::string& getWord(void) const { return word; }

	size_t getCount(void) const;

	bool operator <(const Word& other) const {
		return word < other.word;
	}
};

#endif // !__WORD_H__
