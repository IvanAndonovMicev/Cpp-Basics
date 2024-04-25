#include <iostream>

using namespace std;

int main()
{
    int buget, numberOfFisherman = 0;
    string season = " ";
    double cost = 0.00;
    double left = 0.00;

    cin >> buget >> season >> numberOfFisherman;

    if (season == "Spring")
    {
        cost = 3000;
        if (numberOfFisherman <= 6)
        {
            cost = cost - cost * 0.10;
        }
        else if (numberOfFisherman >= 7 && numberOfFisherman <=11)
        {
            cost = cost - cost * 0.15;
        }
        else if (numberOfFisherman >= 12 )
        {
            cost = cost - cost * 0.25;
        }

    }
    else if (season == "Summer")
    {
        cost = 4200;
        if (numberOfFisherman <= 6)
        {
            cost = cost - cost * 0.10;
        }
        else if (numberOfFisherman >= 7 && numberOfFisherman <= 11)
        {
            cost = cost - cost * 0.15;
        }
        else if (numberOfFisherman >= 12)
        {
            cost = cost - cost * 0.25;
        }
    }
    else if (season == "Autumn")
    {
        cost = 4200;
        if (numberOfFisherman <= 6)
        {
            cost = cost - cost * 0.10;
        }
        else if (numberOfFisherman >= 7 && numberOfFisherman <= 11)
        {
            cost = cost - cost * 0.15;
        }
        else if (numberOfFisherman >= 12)
        {
            cost = cost - cost * 0.25;
        }
    }
    else if (season == "Winter")
    {
        cost = 2600;
        if (numberOfFisherman <= 6)
        {
            cost = cost - cost * 0.10;
        }
        else if (numberOfFisherman >= 7 && numberOfFisherman <= 11)
        {
            cost = cost - cost * 0.15;
        }
        else if (numberOfFisherman >= 12)
        {
            cost = cost - cost * 0.25;
        }
    }

    if ((numberOfFisherman % 2 == 0) && (season == "Spring" || season == "Summer" || season == "Winter"))
    {
        cost = cost - cost * 0.05;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (buget >= cost)
    {
        left = buget - cost;
        cout << "Yes! You have " << left << " leva left." << endl;
    }
    else if (buget < cost)
    {
        left = cost - buget;
        cout << "Not enough money! You need " << left << " leva." << endl;
    }

    return 0;
}