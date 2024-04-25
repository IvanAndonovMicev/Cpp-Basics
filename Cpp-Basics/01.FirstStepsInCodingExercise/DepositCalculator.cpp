#include <iostream>

using namespace std;

int main()
{
	double depositAmount;
	cin >> depositAmount;

	int depositLengthInMonths;
	cin >> depositLengthInMonths;

	double interestRate;	
	cin >> interestRate;

	double intresRatePercent = interestRate / 100;

	double accruedInterest = depositAmount * intresRatePercent;

	double intresForOneMonth = accruedInterest / 12;

	double sumAmount = depositAmount + depositLengthInMonths * intresForOneMonth;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << sumAmount << endl;

	return 0;
}
