#include <iostream>

using namespace std;

int main()
{
    const double PREMIERE = 12.00;
    const double NORMAL = 7.50;
    const double DISCOUNT = 5.00;

    string tipeMovie = " ";
    int rol, col;
    cin >> tipeMovie >> rol >> col;
    double prince;

    if (tipeMovie == "Premiere")
    {
        prince = rol * col * PREMIERE;
    }
    else if (tipeMovie == "Normal")
    {
        prince = rol * col * NORMAL;
    }
    else if (tipeMovie == "Discount")
    {
        prince = rol * col * DISCOUNT;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << prince << " leva" << endl;

    return 0;
}
