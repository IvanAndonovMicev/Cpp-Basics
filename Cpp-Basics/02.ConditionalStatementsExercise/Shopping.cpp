#include <iostream>

using namespace std;

int main()
{
    double buget, sumTotal;
    cin >> buget;

    int numberVideocards, numberCPU, numberRAM;
    cin >> numberVideocards >> numberCPU >> numberRAM;

    double sumVideocards = numberVideocards * 250;

    double priceCPU = sumVideocards * 0.35;
    double sumCPU = priceCPU * numberCPU;

    double priceRAM = sumVideocards * 0.1;
    double sumRAM = priceRAM * numberRAM;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (numberVideocards > numberCPU)
    {
        sumTotal = sumVideocards + sumCPU + sumRAM;
        sumTotal = sumTotal - sumTotal * 0.15;
    }
    else
    {
        sumTotal = sumVideocards + sumCPU + sumRAM;
    }

    if (sumTotal <= buget)
    {
        double left = buget - sumTotal;
        cout << "You have " << left << " leva left!" << endl;
    }
    else
    {
        double needed = sumTotal - buget;
        cout << "Not enough money! You need " << needed << " leva more!" << endl;
    }
}