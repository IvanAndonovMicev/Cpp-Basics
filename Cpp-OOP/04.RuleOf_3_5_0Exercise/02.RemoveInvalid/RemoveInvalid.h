#ifndef REMOVE_INVALID_H
#define REMOVE_INVALID_H

#include "Company.h"

#include <list>

void removeInvalid(std::list<Company*>& companies) {
	std::list<Company*>::iterator itL = companies.begin();

	for (; itL != companies.end();) {
		int curentNum = (*itL)->getId();

		if (curentNum < 0) {
			delete* itL;
			itL = companies.erase(itL);
		}
		else
			itL++;
	}
}

#endif // !REMOVE_INVALID_H