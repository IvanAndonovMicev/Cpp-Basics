#include <iostream>

using namespace std;

int main()
{
    const double PRICE_OF_PUZZLE = 2.6;
    const double PRICE_OF_DOLL = 3;
    const double PRICE_OF_BEAR = 4.1;
    const double PRICE_OO_MINION = 8.2;
    const double PRICE_OF_TRUCK = 2;

    double priceTrip;
    double discountPrice = 0;
    cin >> priceTrip;
    int numberOfPuzzles, numberOfDolls, numberOfBears, numberOfMinions, numberOfTrucks;
    cin>> numberOfPuzzles >> numberOfDolls >> numberOfBears >> numberOfMinions >> numberOfTrucks;

    double sumPrice = numberOfPuzzles * PRICE_OF_PUZZLE
        + numberOfDolls * PRICE_OF_DOLL
        + numberOfBears * PRICE_OF_BEAR
        + numberOfMinions * PRICE_OO_MINION
        + numberOfTrucks * PRICE_OF_TRUCK;

    int orderQuantity = numberOfPuzzles + numberOfDolls + numberOfBears + numberOfMinions + numberOfTrucks;

    if (orderQuantity >= 50)
    {
        discountPrice = sumPrice * 0.25;
    }

    double sumPriceWithDiscount = sumPrice - discountPrice;
    double rent = sumPriceWithDiscount * 0.1;
    double profit = sumPriceWithDiscount - rent;

    if (profit >= priceTrip)
    {
        double left = profit - priceTrip;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes! " << left << " lv left." << endl;
    }
    else
    {
        double left = priceTrip - profit;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! " << left << " lv needed.";
    }
}