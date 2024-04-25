#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c, resultOne = 0, resultTwo = 0;

	cin >> a >> b >> c;

	double discriminant = (b * b) - (4 * a * c);

	if (discriminant < 0)
	{
		cout << "no roots" << endl;
		return 0;
	}
	

	if (discriminant == 0)
	{
		resultOne = (-1 * b) / (2 * a);
		cout << resultOne << endl;
		return 0;
	}
	else
	{
		double sqrtDiscriminant = sqrt(discriminant);
		resultOne = ((-1 * b) + sqrtDiscriminant) / (2 * a);
		resultTwo = ((-1 * b) - sqrtDiscriminant) / (2 * a);
		cout << resultOne << ' ' << resultTwo << endl;
		return 0;
	}

	return 0;
}