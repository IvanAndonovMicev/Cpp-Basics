#ifndef OPERATORS_H
#define OPERATORS_H

#include <ostream>
#include <vector>
#include <string>
#include <sstream>
// Place your code here

std::vector<std::string>& operator<< (std::vector<std::string>& vector, const std::string& str) {
	vector.push_back(str);
	return vector;
}

std::string operator+ (const std::string& str1, int num) {
	std::string result;
	result = str1 + std::to_string(num);
	return result;
}

std::ostream& operator<< (std::ostream& ostr, const std::vector<std::string> vector) {
	for (size_t i = 0; i < vector.size(); i++)
		ostr << vector[i] << '\n';

	return ostr;
}

#endif // !OPERATORS_H