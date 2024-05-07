#ifndef PARSE_COMPANIES_H

#define PARSE_COMPANIES_H

#include "Company.h"

#include <string>
#include <set>
#include <sstream>
#include <vector>

Company* parseUniqueCompanies(const std::string& input, int& numCompanies, std::string(*uniqueGen)(const Company& c)) {
	std::vector<Company> companies;
	std::set<std::string> uniqueIds;
	std::istringstream istr(input);
	numCompanies = 0;

	int id = 0;
	while (istr >> id) {
		std::string name;
		istr >> name;

		Company c(id, name);
		std::string uniqueId = uniqueGen(c);

		if (uniqueIds.find(uniqueId) == uniqueIds.end()) {
			uniqueIds.insert(uniqueId);
			companies.push_back(c);
			numCompanies++;
		}
	}

	Company* returnArr = new Company[companies.size()];

	for (size_t idx = 0; idx < companies.size(); idx++)
		returnArr[idx] = companies[idx];

	return returnArr;
}

#endif // !PARSE_COMPANIES_H