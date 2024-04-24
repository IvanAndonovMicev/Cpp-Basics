#include <iostream>
#include <string>

using namespace std;

int main()
{
	string actorsName, academiPointsInput, numberOfJudgesInput;
	getline(cin, actorsName);

	getline(cin, academiPointsInput);
	double academiPoints = stod(academiPointsInput);

	getline(cin, numberOfJudgesInput);
	int numberOfJudges = stod(numberOfJudgesInput);

	for (int i = 0; i < numberOfJudges && academiPoints < 1250.5; i++)
	{
		string nameOfJudge;
		getline(cin, nameOfJudge);

		string pointsGivenByJudgeInput;
		getline(cin, pointsGivenByJudgeInput);
		double pointsGivenByJudge = stod(pointsGivenByJudgeInput);

		academiPoints = academiPoints + ((nameOfJudge.size() * pointsGivenByJudge) / 2);
	}

	cout.setf(ios::fixed);
	cout.precision(1);

	if (academiPoints > 1250.5)
	{
		cout << "Congratulations, " << actorsName << " got a nominee for leading role with " << academiPoints << "!" << endl;
	}
	else
	{
		cout << "Sorry, " << actorsName << " you need " << 1250.5 - academiPoints << " more!" << endl;
	}

	return 0;
}