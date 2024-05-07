#include "TryParse.h"

#include <sstream>

bool tryParse(const std::string& str, int& number) {
	std::istringstream istr(str);

	bool result = (bool)(istr >> number);

	return result;
}