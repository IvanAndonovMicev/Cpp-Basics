#include <iostream>
#include <iomanip>

using namespace std;

double factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}


int main()
{
    int number1, number2;
    cin >> number1 >> number2;

    cout << fixed << setprecision(2) << factorial(number1) / factorial(number2) << endl;

    return 0;
}