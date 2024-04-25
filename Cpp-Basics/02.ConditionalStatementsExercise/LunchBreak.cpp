#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string nameOfShow = " ";
    getline(cin, nameOfShow);
     
    double showDuration, breakDuration;
    cin >> showDuration >> breakDuration;

    double lunchDuration = breakDuration * 0.125;
    double breakTime = breakDuration * 0.25;

    double leftTime = breakDuration - lunchDuration - breakTime;

    //trqbwa li =?
    if (leftTime >= showDuration)
    {
        double leftTimeAfterShow =(leftTime - showDuration);
        cout << "You have enough time to watch " 
            << nameOfShow << " and left with " 
            << ceil(leftTimeAfterShow) << " minutes free time." << endl;
    }
    else
    {
        double leftTimeAfterShow = showDuration - leftTime;
        cout << "You don't have enough time to watch " 
            << nameOfShow << ", you need " 
            << ceil(leftTimeAfterShow) << " more minutes." << endl;
    }
}