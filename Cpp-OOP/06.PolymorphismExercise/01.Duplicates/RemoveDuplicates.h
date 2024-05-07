#ifndef REMOVE_DUPLICATES_H

#define REMOVE_DUPLICATES_H

#include "Company.h"
#include <list>
#include <set>

void removeDuplicates(std::list<Company*>::iterator it, std::list<Company*>& companies) {
	std::set<Company*> companiesToDelete;

	Company* theCompany = *it;
	std::string theName = theCompany->getName();

	it++;
	while (it != companies.end()) {
		if (*it == theCompany)
			it = companies.erase(it);
		else if ((*it)->getName() == theName) {
			companiesToDelete.insert(*it);
			it = companies.erase(it);
		}
		else
			it++;
	}

	for (auto company : companiesToDelete)
		delete company;
}

void removeDuplicates(std::list<Company*>& companies) {
	auto itCur = companies.begin();

	while (itCur != companies.end()) {
		removeDuplicates(itCur, companies);
		itCur++;
	}
}

#endif // !REMOVE_DUPLICATES_