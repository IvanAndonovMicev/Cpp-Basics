#include <iostream>
#include <sstream>
#include <string>
#include "BigInt.h"

using namespace std;

istream& operator >> (istream& istr, BigInt& number) {
	string s;
	istr >> s;
	number = BigInt(s);
	return istr;
}

bool devisibleBy45(const BigInt& number) {
	string digits = number.getDigits();

	char lastDigit = digits.back();

	if (lastDigit != '5' && lastDigit != '0')
		return false;

	int sum = 0;
	for (size_t i = 0; i < digits.size(); i++) {
		int currNum = digits[i] - '0';

		if (currNum == 0) continue;

		sum += currNum;
	}

	if (sum % 9 != 0)
		return false;

	return true;
}

int main()
{
	BigInt s, e;

	cin >> s >> e;

	for (BigInt curr = s; curr < e; curr += 1) {
		if (devisibleBy45(curr))
			cout << curr << endl;
	}

	return 0;
}
