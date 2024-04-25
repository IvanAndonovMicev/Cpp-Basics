#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	const double LOVE_LETTER = 0.60;
	const double WAX_ROSE = 7.20;
	const double KEYCHAIN = 3.60;
	const double CARICATURE = 18.20;
	const double LUCKY_SUPRISE = 22.00;

	double priceForBacheloretteParty;
	cin >> priceForBacheloretteParty;

	int numberOfLoveLetters;
	cin >> numberOfLoveLetters;

	int numberOfWaxRoses;
	cin >> numberOfWaxRoses;

	int numberOfKeychains;
	cin >> numberOfKeychains;

	int numberOfCaricatures;
	cin >> numberOfCaricatures;

	int numberOfLuchySuprises;
	cin >> numberOfLuchySuprises;

	cout.setf(ios::fixed);
	cout.precision(2);

	double priceSumItems = (numberOfLoveLetters * LOVE_LETTER)
		+
		(numberOfWaxRoses * WAX_ROSE)
		+
		(numberOfKeychains * KEYCHAIN)
		+
		(numberOfCaricatures * CARICATURE)
		+
		(numberOfLuchySuprises * LUCKY_SUPRISE);

	int numberOFItems = numberOfLoveLetters + numberOfWaxRoses + numberOfKeychains + numberOfCaricatures + numberOfLuchySuprises;

	if (numberOFItems >= 25 )
	{
		priceSumItems *= 0.65;
	}

	priceSumItems *= 0.9;

	if (priceSumItems > priceForBacheloretteParty)
	{
		cout << "Yes! " << priceSumItems - priceForBacheloretteParty << " lv left." << endl;
	}
	else
	{
		cout << "Not enough money! " << priceForBacheloretteParty - priceSumItems << " lv needed." << endl;
	}

	return 0;
}