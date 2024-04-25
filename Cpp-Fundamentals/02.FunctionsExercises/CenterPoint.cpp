#include <iostream>
#include <cmath>

using namespace std;

double calculateHypotenuse(double x, double y)
{
	return sqrt(x * x + y * y);
}

void prdoublePodoubles(double x, double y)
{
	cout << '(' << x << ", " << y << ')' << endl;
}

void closestPodoubleGiven(double x1, double y1, double x2, double y2)
{
	double hypotenuse1, hypotenuse2;


	hypotenuse1 = calculateHypotenuse(x1, y1);
	hypotenuse2 = calculateHypotenuse(x2, y2);

	if (hypotenuse1 <= hypotenuse2)
		prdoublePodoubles(x1, y1);
	else
		prdoublePodoubles(x2, y2);
}

int main()
{
	double x1, x2, y1, y2;

	cin >> x1 >> x2 >> y1 >> y2;

	closestPodoubleGiven(x1, x2, y1, y2);

	return 0;
}
