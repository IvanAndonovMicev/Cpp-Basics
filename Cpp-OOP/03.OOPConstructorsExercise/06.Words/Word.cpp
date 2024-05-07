#include "Word.h"

std::map<std::string, size_t> Word::wordsCount;

size_t Word::getCount(void) const {
	size_t count = wordsCount[word];
	wordsCount.erase(word);
	return count;
}