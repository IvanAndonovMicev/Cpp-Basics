#include <iostream>
#include <string>

using namespace std;

int main()
{
	string numberOfJuryInput, nameOfPresentation, gradesInput;
	int numberOfJury, presentationCount = 0;
	double grades, totalSumOfGrades = 0;

	getline(cin, numberOfJuryInput);
	getline(cin, nameOfPresentation);

	numberOfJury = stoi(numberOfJuryInput);

	cout.setf(ios::fixed);
	cout.precision(2);
	
	while (nameOfPresentation != "Finish")
	{
		double curentSumGrades = 0;
		for (int i = 1; i <= numberOfJury; i++)
		{
			getline(cin, gradesInput);
			grades = stod(gradesInput);
			curentSumGrades += grades;
		}

		cout << nameOfPresentation << " - " << curentSumGrades / numberOfJury << "." << endl;

		totalSumOfGrades += curentSumGrades;
		presentationCount++;

		getline(cin, nameOfPresentation);
	}

	cout << "Student's final assessment is " << totalSumOfGrades / (presentationCount * numberOfJury) << "." << endl;

	return 0;
}