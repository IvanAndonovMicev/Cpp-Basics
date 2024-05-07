#ifndef ORDERED_INSERTER_H
#define ORDERED_INSERTER_H

#include "Company.h"

#include <vector>
#include <algorithm>

class OrderedInserter {
	std::vector<const Company*>& compamies;

public:
	OrderedInserter(std::vector<const Company*>& compamies) : compamies(compamies) {}

	void insert(const Company* c) {
		struct findData
		{
			int searchId;
			findData(int searchId) : searchId(searchId) {}

			bool operator ()(const Company* other) { return other->getId() > searchId; }
		} finder(c->getId());

		std::vector<const Company*>::iterator itFound = std::find_if(compamies.begin(), compamies.end(), finder);

		compamies.insert(itFound, c);
	}
};

#endif // !ORDERED_INSERTER_H