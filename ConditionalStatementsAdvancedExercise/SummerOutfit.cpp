#include <iostream>

using namespace std;

int main()
{
    int temp;
    string timeOfTheDay, outfit, shoes = " ";

    cin >> temp >> timeOfTheDay;

    if ( temp >= 10 && temp <=18)
    {
        if (timeOfTheDay == "Morning")
        {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        }
        else if (timeOfTheDay == "Afternoon")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (timeOfTheDay == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (temp >= 18 && temp <= 24)
    {
        if (timeOfTheDay == "Morning")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
        else if (timeOfTheDay == "Afternoon")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (timeOfTheDay == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }
    else if (temp >= 25 )
    {
        if (timeOfTheDay == "Morning")
        {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
        else if (timeOfTheDay == "Afternoon")
        {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
        else if (timeOfTheDay == "Evening")
        {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << temp <<" degrees, get your " << outfit <<" and " << shoes <<"." << endl;

    return 0;
}