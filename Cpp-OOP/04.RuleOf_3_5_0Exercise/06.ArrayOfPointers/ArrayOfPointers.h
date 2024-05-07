#ifndef __ARRAY_OF_POINTERS__
#define __ARRAY_OF_POINTERS__

#include "Company.h"
#include <vector>
#include <memory>

class ArrayOfPointers {
	std::vector<Company*> data;
public:
	void add(Company* c) { data.push_back(c); }

	size_t getSize(void) const { return data.size(); }

	Company* get(size_t idx) { return data[idx]; }

	~ArrayOfPointers() {
		for (Company* cur : data)
			delete cur;
	}
};

#endif // !__ARRAY_OF_POINTERS__
