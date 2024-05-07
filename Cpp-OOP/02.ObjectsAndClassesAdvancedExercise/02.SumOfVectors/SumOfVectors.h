#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <string>
#include <vector>

//using namespace std;

std::vector<std::string> operator+ (const std::vector<std::string>& vector1, const std::vector<std::string>& vector2) {
	std::vector<std::string> newVector;

	newVector.resize(vector1.size());

	for (size_t i = 0; i < vector1.size(); i++) {
		newVector[i] = vector1[i] + " " + vector2[i];
	}

	return newVector;
}

#endif // !SUMOFVECTORS_H