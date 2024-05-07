#ifndef DOG_H
#define DOG_H

#include "animal.h"

#include <iostream>
#include <sstream>

class Dog : public Animal {
	unsigned catsPerHour;
	unsigned activeHours;

public:

	Dog(std::istream& istr) : catsPerHour(0), activeHours(0) {
		istr >> catsPerHour >> activeHours;
	}

	virtual unsigned getResult(unsigned weeks) const {
		return catsPerHour * activeHours * weeks * 7;
	};

	virtual std::string getDescription() const { return "Dog"; }

	virtual std::string getInfo() const {
		std::ostringstream ostr;
		ostr << '<' << catsPerHour << ", " << activeHours << ">";

		return ostr.str();
	}
};

#endif
