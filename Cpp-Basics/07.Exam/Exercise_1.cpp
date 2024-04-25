#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const double PRICE_RAPING_PAPER = 5.80;
	const double PRICE_CLOTH = 7.20;
	const double PRICE_GLUE = 1.20;

	int numberOfRapingPaper;
	cin >> numberOfRapingPaper;

	int numberOfCloth;
	cin >> numberOfCloth;

	double glueInLiters;
	cin >> glueInLiters;

	int percentOff;
	cin >> percentOff;

	cout.setf(ios::fixed);
	cout.precision(3);

	double priceTotalRapingPAper = numberOfRapingPaper * PRICE_RAPING_PAPER;
	double priceTotalCloth = numberOfCloth * PRICE_CLOTH;
	double priceTotalGlie = glueInLiters * PRICE_GLUE;

	double totalPrice = priceTotalRapingPAper + priceTotalCloth + priceTotalGlie;



	totalPrice = totalPrice - (totalPrice * ((percentOff * 1.0) / 100));

	cout << totalPrice << endl;

	return 0;
}
