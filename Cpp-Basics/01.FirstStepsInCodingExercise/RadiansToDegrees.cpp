#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double PIE = 3.14;
	const int FULL = 180;

	double radians;
	cin >> radians;

	double degrees = radians * FULL / PIE;

	cout << round(degrees) << endl;
}