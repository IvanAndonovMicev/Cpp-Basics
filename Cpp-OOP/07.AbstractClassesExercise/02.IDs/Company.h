#ifndef  Company_h
#define Company_h

#include "Company.h"
#include <exception>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

struct HasInfo {
	virtual std::string  getInfo() const = 0;
	virtual ~HasInfo() = default;
};

struct HasId {
	virtual int getId() const = 0;
	virtual ~HasId() = default;
};

class Company : public HasInfo, public HasId {
protected:

	int  id;
	std::string name;
	std::vector<std::pair<char, char> > employees;
public:

	Company();

	Company(int id, std::string name, std::vector<std::pair<char, char> > employees);

	virtual int getId() const override;

	std::string getName() const;

	std::vector<std::pair<char, char> > getEmployees() const;

	std::string getInfo() const;

	friend std::ostream& operator<<(std::ostream& stream, const Company& c);

	friend std::istream& operator>>(std::istream& stream, Company& c);
};

#endif // ! Company_h
