#ifndef  FilterFactory_h
#define FilterFactory_h

#include <string>

#include "Filter.h"

class NumberFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return symbol >= '0' && symbol <= '9';
	}
};

class AllCapsFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return symbol >= 'A' && symbol <= 'Z';
	}
};

class AllLowerFilter : public Filter {
protected:
	virtual bool shouldFilterOut(char symbol) const {
		return symbol >= 'a' && symbol <= 'z';
	}
};

class FilterFactory {
public:

	Filter* buildFilter(const std::string& filterDef) const {
		if (filterDef == "0-9")
			return new NumberFilter();
		else if (filterDef == "A-Z")
			return new AllCapsFilter();
		else
			return new AllLowerFilter();
		return nullptr;
	}
};

#endif // ! FilterFactory_h
