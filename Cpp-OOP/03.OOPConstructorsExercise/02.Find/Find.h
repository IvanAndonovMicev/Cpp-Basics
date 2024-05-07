#ifndef FIND_H

#define FIND_H

#include "Company.h"

Company* find(const std::vector<Company*>& companies, int searchId) {
	auto it = companies.begin();

	for (; it != companies.end(); it++)
		if ((*it)->getId() == searchId)
			return *it;

	return nullptr;
}

#endif // !FIND_H