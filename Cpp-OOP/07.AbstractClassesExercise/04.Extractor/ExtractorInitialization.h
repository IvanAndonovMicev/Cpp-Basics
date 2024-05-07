#ifndef  ExtractorInitialization_h
#define ExtractorInitialization_h

#include <memory>
#include <istream>

#include "Extractor.h"
#include "BufferedExtractor.h"

class DigitsExtractor : public Extractor {
public:

	DigitsExtractor(std::istream& istr) : Extractor(istr) {}

	virtual bool process(char symbol, std::string& output) {
		if (symbol >= '0' && symbol <= '9') {
			output = std::string(1, symbol);
			return true;
		}

		return false;
	}
};

class NumbersExtractor : public BufferedExtractor {
public:

	NumbersExtractor(std::istream& istr) : BufferedExtractor(istr) {}

protected:

	virtual bool shouldBuffer(char symbol) {
		return (symbol >= '0' && symbol <= '9');
	}
};

class QuotesExtractor : public BufferedExtractor {
	bool extracting;

public:

	QuotesExtractor(std::istream& istr) : BufferedExtractor(istr) {}

protected:

	virtual bool shouldBuffer(char symbol) {
		if (symbol == '"') {
			if (extracting) {
				extracting = false;
				return false;
			}
			else {
				extracting = true;
				return false;
			}
		}
		else {
			return extracting;
		}
	}
};

std::shared_ptr<Extractor> getExtractor(const std::string& extractType, std::istream& lineIn) {
	if (extractType == "digits")
		return  std::shared_ptr<Extractor>(new DigitsExtractor(lineIn));
	else if (extractType == "numbers") {
		return  std::shared_ptr<Extractor>(new NumbersExtractor(lineIn));
	}
	else {
		return  std::shared_ptr<Extractor>(new QuotesExtractor(lineIn));
	}

	std::shared_ptr<Extractor>(nullptr);

	return std::shared_ptr<Extractor>(nullptr);
}

#endif // ! ExtractorInitialization_h
