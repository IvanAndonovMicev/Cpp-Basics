#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define MAX_SIE 99

int main()
{
	string input;
	getline(cin, input);

	istringstream istr(input);

	vector<string> cattleCode;
	vector<int> cattleSize;

	ostringstream ostrCow;
	ostringstream ostrSheep;
	ostringstream ostrOther;

	string cattle;

	while (istr >> cattle)
	{
		cattleCode.push_back(cattle);
	}

	int countCow = 0;
	int countSheep = 0;
	int countOther = 0;

	int sumCow = 0;
	int sumSheep = 0;
	int sumOther = 0;

	double avgSizeCow;
	double avgSizeSheep;
	double avgSizeOther;

	for (int cnt = 0; cnt < cattleCode.size(); cnt++)
	{
		string curentCattleCode;
		curentCattleCode = cattleCode[cnt];

		if (curentCattleCode[0] == 'C')
		{
			countCow++;
			ostrCow << curentCattleCode << ' ';
			int curentNumber = (curentCattleCode[1] - '0');
			sumCow += curentNumber;
		}
		else if (curentCattleCode[0] == 'S')
		{
			countSheep++;
			ostrSheep << curentCattleCode << ' ';
			int curentNumber = (curentCattleCode[1] - '0');
			sumSheep += curentNumber;
		}
		else
		{
			countOther++;
			ostrOther << curentCattleCode << ' ';
			int curentNumber = (curentCattleCode[1] - '0');
			sumOther += curentNumber;
		}
	}

	avgSizeCow = (sumCow * 1.00) / countCow;
	avgSizeSheep = (sumSheep * 1.00) / countSheep;
	avgSizeOther = (sumOther * 1.00) / countOther;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (countCow > 0)
		cout << countCow << " cows: " << ostrCow.str() << "with avg. size " << avgSizeCow << endl;
	else
		cout << "no cows!" << endl;

	if (countSheep > 0)
		cout << countSheep << " sheep: " << ostrSheep.str() << "with avg. size " << avgSizeSheep << endl;
	else
		cout << "no sheep!" << endl;
	if (countOther > 0)
		cout << countOther << " others: " << ostrOther.str() << "with avg. size " << avgSizeOther << endl;
	else
		cout << "no others!" << endl;

	return 0;
}