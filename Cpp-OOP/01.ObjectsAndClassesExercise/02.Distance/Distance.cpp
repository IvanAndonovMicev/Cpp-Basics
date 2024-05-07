#include <iostream>
#include <sstream>
#include <iomanip>
#include <istream>
#include <vector>
#include <cmath>

using namespace std;

class Distance
{
	double x1, y1, x2, y2;

public:

	Distance() : x1(0), y1(0), x2(0), y2(0) { }

	Distance(istream& ist) {
		ist >> this->x1 >> this->y1 >> this->x2 >> this->y2;
	}

	double getDistance(void);
};

double Distance::getDistance() {
	double result;
	result = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

	return sqrt(result);
}

int main()
{
	Distance d(cin);

	cout.setf(ios::fixed);
	cout.precision(3);
	cout << d.getDistance() << endl;

	return 0;
}
