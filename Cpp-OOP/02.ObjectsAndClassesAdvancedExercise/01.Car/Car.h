#ifndef CAR_H
#define CAR_H
#include <sstream>
//#include<>

using namespace std;

class Car {
	string brand;
	string model;
	int year;

public:

	Car(const string& brand, const string& model, int year) : brand(brand), model(model), year(year) {}

	const string& GetBrand(void) const { return brand; }

	const string& GetModel(void) const { return model; }

	int GetYear(void) const { return year; }
};

#endif // !CAR_H