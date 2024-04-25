#include <iostream>

using namespace std;

int main()
{
    const int BONUS_POINTS_UNDER_HUNDRED = 5;
    const double BONUS_POINTS_OVER_HUNDRED = 0.20;
    const double BONUS_POINTS_OVER_THOUSAND = 0.10;
    const int BONUS_POINTS_EVEN_NUMBER = 1;
    const int BONUS_POINTS_DIVIDABLE_BY_FIVE = 2;

    int score;
    cin >> score;

    double bonusScore = 0.0;


    if (score <= 100)
    {
        bonusScore = BONUS_POINTS_UNDER_HUNDRED;
    }
    else if (score <= 1000)
    {
        bonusScore = score * BONUS_POINTS_OVER_HUNDRED;
    }
    else /*if (score > 1000)*/
    {
        bonusScore = score * BONUS_POINTS_OVER_THOUSAND;
    }

    if (score % 2 == 0)
    {
        bonusScore = bonusScore + BONUS_POINTS_EVEN_NUMBER;
    }
    else if (score % 5 == 0)
    {
        bonusScore = bonusScore + BONUS_POINTS_DIVIDABLE_BY_FIVE;
    }

    cout << bonusScore << endl;
    cout << score + bonusScore << endl;
}
