#include <iostream>

using namespace std;

long numberToDigit(long number)
{
    int sumOddNumbers = 0;
    int sumEvenNumbers = 0;

    while (number)
    {
        int digitNumber = number % 10;

        if ((digitNumber % 2) == 0)
            sumEvenNumbers += digitNumber;
        else
            sumOddNumbers += digitNumber;

        number /= 10;
    }

    return sumEvenNumbers * sumOddNumbers;
}

int main()
{
    long number;

    cin >> number;

    cout << numberToDigit(number)  << endl;

    return 0;
}