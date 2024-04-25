#include <iostream>

using namespace std;

int main()
{
	int row;
	cin >> row;

	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	int p4 = 0;
	int p5 = 0;

	for (int rows = 1; rows <= row; rows++)
	{
		int number;
		cin >> number;

		if (number < 200)
		{
			p1++;
		}
		else if (number >= 200 && number < 400)
		{
			p2++;
		}
		else if (number >= 400 && number < 600)
		{
			p3++;
		}
		else if (number >= 600 && number < 800)
		{
			p4++;
		}
		else if (number >= 800)
		{
			p5++;
		}
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	
	double percentageP1 = (1.0 * p1) / row * 100;
	cout << percentageP1 << "%" << endl;

	double percentageP2 = (1.0 * p2) / row * 100;
	cout << percentageP2 << "%" << endl;

	double percentageP3 = (1.0 * p3) / row * 100;
	cout << percentageP3 << "%" << endl;

	double percentageP4 = (1.0 * p4) / row * 100;
	cout << percentageP4 << "%" << endl;

	double percentageP5 = (1.0 * p5) / row * 100;
	cout << percentageP5 << "%" << endl;

	return 0;
}

