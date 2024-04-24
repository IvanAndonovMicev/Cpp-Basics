#include <iostream>

using namespace std;

int main()
{
    string flower = " ";
    int numberOfFlower = 0;
    double buget = 0.00;
    double prise = 0.00;
    double left = 0.00;
    cin >> flower >> numberOfFlower >> buget;


    if ( flower == "Roses")
    {
        prise = numberOfFlower * 5;
        if (numberOfFlower > 80)
        {
            prise = prise - prise * 0.10;
        }
    }
    else if (flower == "Dahlias")
    {
        prise = numberOfFlower * 3.80;
        if (numberOfFlower > 90)
        {
            prise = prise - prise * 0.15;
        }
    }
    else if (flower == "Tulips")
    {
        prise = numberOfFlower * 2.80;
        if (numberOfFlower > 80)
        {
            prise = prise - prise * 0.15;
        }
    }
    else if (flower == "Narcissus")
    {
        prise = numberOfFlower * 3;
        if (numberOfFlower < 120)
        {
            prise = prise + prise * 0.15;
        }
    }
    else if (flower == "Gladiolus")
    {
        prise = numberOfFlower * 2.50;
        if (numberOfFlower < 80)
        {
            prise = prise + prise * 0.20;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (buget >= prise)
    {
        left = buget - prise;
        cout << "Hey, you have a great garden with "
            << numberOfFlower << " " << flower << " and "
            << left << " leva left." << endl;
    }
    else if ( buget < prise)
    {
        left = prise - buget;
        cout << "Not enough money, you need " << left << " leva more." << endl;
    }

    return 0;
}