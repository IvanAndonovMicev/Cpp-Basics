#ifndef COW_H
#define COW_H

#include "animal.h"

#include <iostream>
#include <sstream>

class Cow : public Animal {
	unsigned milkPerDay;

public:

	Cow(std::istream& istr) : milkPerDay(0) {
		istr >> milkPerDay;
	}

	virtual unsigned getResult(unsigned weeks) const {
		return milkPerDay * weeks * 7;
	};

	virtual std::string getDescription() const { return "Cow"; }

	virtual std::string getInfo() const {
		std::ostringstream ostr;
		ostr << '<' << milkPerDay << ">";

		return ostr.str();
	}
};

#endif
