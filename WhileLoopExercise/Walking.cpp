#include <iostream>
#include <string>

using namespace std;

int main()
{
	int sumSteps = 0, steps;
	bool stepsFail = false;
	string stepsImput;

	while (sumSteps < 10'000)
	{
		getline(cin, stepsImput);
		if (stepsImput == "Going home")
		{
			getline(cin, stepsImput);
			steps = stoi(stepsImput);
			sumSteps += steps;
			if (sumSteps < 10'000)
			{
				stepsFail = true;
				break;
			}
		}
		
		steps = stoi(stepsImput);
		sumSteps += steps;
	}

	if (!stepsFail)
	{
		cout << "Goal reached! Good job!" << endl;
	}
	else
	{
		cout << 10'000 - sumSteps << " more steps to reach goal." << endl;
	}

	return 0;
}