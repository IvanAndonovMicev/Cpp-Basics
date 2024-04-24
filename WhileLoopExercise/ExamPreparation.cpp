#include <iostream>
#include <string>

using namespace std;

int main()
{
	int numberOfMAxBadExercises, grade, numOfProblems = 0, countNumberOfBadExercises = 0;
	bool faile = false;
	double sumGrades = 0;

	string nameExercise, gradeInput, lastExercise, numberOfMAxBadExercisesInput;

	getline(cin, numberOfMAxBadExercisesInput);
	numberOfMAxBadExercises = stoi(numberOfMAxBadExercisesInput);

	getline(cin, nameExercise);

	while (nameExercise != "Enough")
	{
		getline(cin, gradeInput);
		grade = stoi(gradeInput);

		if (grade <= 4)
		{
			countNumberOfBadExercises++;
			if (countNumberOfBadExercises == numberOfMAxBadExercises)
			{
				faile = true;
				break;
			}

		}
		sumGrades += grade;
		numOfProblems++;

		lastExercise = nameExercise;

		getline(cin, nameExercise);
	}

	if (!faile)
	{
		double avar = sumGrades / numOfProblems;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "Average score: " << avar << endl;
		cout << "Number of problems: " << numOfProblems << endl;
		cout << "Last problem: " << lastExercise << endl;
	}
	else if (faile)
	{
		cout << "You need a break, " << numberOfMAxBadExercises << " poor grades." << endl;
	}
}