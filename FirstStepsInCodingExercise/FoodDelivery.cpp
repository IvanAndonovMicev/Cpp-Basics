#include <iostream>

using namespace std;

int main()
{
	const double CHIKEN_MENU = 10.35;
	const double FISH_MENU = 12.40;
	const double VEGETERIAN_MENU = 8.15;
	const double DELIVERY_FEE = 2.50;

	int numberOfChickenMenu, numberOfFishMenu, numberOfVegeterianMenu;
	cin >> numberOfChickenMenu >> numberOfFishMenu >> numberOfVegeterianMenu;

	double priceChicken = numberOfChickenMenu * CHIKEN_MENU;
	double priceFish = numberOfFishMenu * FISH_MENU;
	double priceVegeterian = numberOfVegeterianMenu * VEGETERIAN_MENU;

	double sumMenu = priceChicken + priceFish + priceVegeterian;

	double priceDessert = sumMenu * 0.2;

	double total = sumMenu + priceDessert + DELIVERY_FEE;
	cout << total << endl;
}