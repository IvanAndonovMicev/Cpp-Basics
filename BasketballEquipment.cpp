#include <iostream>

using namespace std;

int main()
{
	int yearlySubscription;
	cin >> yearlySubscription;

	double basketballShoos = yearlySubscription - yearlySubscription * 0.4;
	double basketballClothes = basketballShoos - basketballShoos * 0.2;
	double basketBall = basketballClothes * 1 / 4;
	double basketballAccessories = basketBall * 1 / 5;

	double sumPrice = yearlySubscription +
		basketballShoos + basketballClothes +
		basketBall + basketballAccessories;
	cout << sumPrice << endl;
}