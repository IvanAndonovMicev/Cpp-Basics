#include <iostream>

using namespace std;

int main()
{
    int  daysSpendOrSaved = 0, countDaysSpend = 0;
    bool savedMoney = false;
    double moneyNeededForVacation, moneySaved, amountOfMoney;
    string spendOrSave;

    cin >> moneyNeededForVacation >> moneySaved;

    while (countDaysSpend < 5)
    {
        cin >> spendOrSave >> amountOfMoney;
        daysSpendOrSaved++;

        if (spendOrSave == "spend")
        {
            countDaysSpend++;
            moneySaved -= amountOfMoney;
            if (moneySaved <= 0)
            {
                moneySaved = 0;
            }
        }
        else if (spendOrSave == "save")
        {
            countDaysSpend = 0;
            moneySaved += amountOfMoney;
            if (moneySaved >= moneyNeededForVacation)
            {
                savedMoney = true;
                break;
            }
        }

    }

    if (savedMoney)
    {
        cout << "You saved the money for " << daysSpendOrSaved << " days." << endl;
    }
    else
    {
        cout << "You can't save the money." << endl;
        cout << daysSpendOrSaved << endl;
    }
   
    return 0;
}