#include "Register.h"

#include <algorithm>

Register::Register(size_t numCompanies) : numAdded(0), companiesArray(new Company[numCompanies]) { }

void Register::add(const Company& c) {
	companiesArray[numAdded] = c;
	numAdded++;
}

Company Register::get(int companyId) const {
	for (size_t cur = 0; cur < numAdded; cur++)
		if (companiesArray[cur].getId() == companyId)
			return companiesArray[cur];

	return Company(-1, "Invalid");
}

Register::~Register() {
	delete[] companiesArray;
}

Register& Register::operator=(const Register& other) {
	Company* newArray = new Company[other.numAdded];

	std::copy(other.companiesArray, other.companiesArray + other.numAdded, newArray);

	if (this->companiesArray)
		delete[] this->companiesArray;
	this->companiesArray = newArray;
	this->numAdded = other.numAdded;

	return *this;
}

Register::Register(const Register& other) : companiesArray(nullptr), numAdded(0) {
	*this = other;
}