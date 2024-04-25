#include <iostream>
using namespace std;

int main()
{
    int secOne, secTwo, secThree;
    cin >> secOne >> secTwo >> secThree;

    int sum = secOne + secTwo + secThree;
    int minutes = sum / 60;
    int seconds = sum % 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds<< endl;
    }
    else
    {
        cout << minutes << ":" << seconds << endl;
    }
}