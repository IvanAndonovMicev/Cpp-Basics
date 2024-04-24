#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	int row = 1, numberToDisplay = 1;

	bool shouldContinue = true;

	while (shouldContinue)
	{
		
		for (int i = 0; i < row; i++)
		{
			cout << numberToDisplay << " ";
			
			if (numberToDisplay == num)
		{
			shouldContinue = false;
			break;
		}

			numberToDisplay++;
		}
		cout << endl;
		row++;
	}

	return 0;
}