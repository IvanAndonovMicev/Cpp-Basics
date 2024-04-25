#include <iostream>

using namespace std;

int main()
{
	const double USD_TO_BGN_CONVERTION_RATE = 1.79549;

	double usd;
	cin >> usd;

	double bgn = usd * USD_TO_BGN_CONVERTION_RATE;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << bgn << endl;
}