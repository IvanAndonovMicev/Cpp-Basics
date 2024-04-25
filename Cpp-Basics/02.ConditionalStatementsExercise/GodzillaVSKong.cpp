#include <iostream>

using namespace std;

int main()
{
    double filmBudget;
    cin >> filmBudget;

    int numberOfStuntDoubles;
    cin >> numberOfStuntDoubles;

    double priceForOneClothing;
    cin >> priceForOneClothing;

    double priceForDecor = filmBudget * 0.1;
    double priceForClothes = priceForOneClothing * numberOfStuntDoubles;

    if (numberOfStuntDoubles > 150)
    {
        priceForClothes = priceForClothes - priceForClothes * 0.1;
    }

    double sumTotal = priceForDecor + priceForClothes;
    
    if (filmBudget >= sumTotal )
    {
        double left = filmBudget - sumTotal;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Action!" << endl
            << "Wingard starts filming with "
            << left << " leva left." << endl;
    }
    else
    {
        double left = sumTotal - filmBudget;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money!" << endl
            << "Wingard needs " 
            << left << " leva more." << endl;
    }
}