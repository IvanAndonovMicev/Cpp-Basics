#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dayInput, roomType, assessment;

    getline(cin, dayInput);
    getline(cin, roomType);
    getline(cin, assessment);

    int daysSpend = stoi(dayInput);
    int nightsSpend = daysSpend -= 1;
    double price = 0.00;
    double prceAfterAssessment = 0.00;

    if (nightsSpend < 10)
    {
        if (roomType == "room for one person")
        {
            price = nightsSpend * 18.00;
        }
        else if (roomType == "apartment")
        {
            price = nightsSpend * 25.00;
            price = price - price * 0.30;
        }
        else if (roomType == "president apartment")
        {
            price = nightsSpend * 35.00;
            price = price - price * 0.10;
        }
    }
    // ако не мине бахни 2 <= 
    else if (nightsSpend >= 10 && nightsSpend <= 15)
    {
        if (roomType == "room for one person")
        {
            price = nightsSpend * 18.00;
        }
        else if (roomType == "apartment")
        {
            price = nightsSpend * 25.00;
            price = price - price * 0.35;
        }
        else if (roomType == "president apartment")
        {
            price = nightsSpend * 35.00;
            price = price - price * 0.15;
        }
    }
    else if (nightsSpend > 15)
    {
        if (roomType == "room for one person")
        {
            price = nightsSpend * 18.00;
        }
        else if (roomType == "apartment")
        {
            price = nightsSpend * 25.00;
            price = price - price * 0.50;
        }
        else if (roomType == "president apartment")
        {
            price = nightsSpend * 35.00;
            price = price - price * 0.20;
        }
    }

    if (assessment == "positive")
    {
        prceAfterAssessment = price + price * 0.25;
    }
    else if (assessment == "negative")
    {
        prceAfterAssessment = price - price * 0.10;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << prceAfterAssessment << endl;

    return 0;
}