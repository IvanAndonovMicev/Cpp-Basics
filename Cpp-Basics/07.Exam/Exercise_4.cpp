#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int numberOfStudents;
	cin >> numberOfStudents;

	double grade, sumGrades = 0;

	int counterGrade2 = 0, counterGrade3 = 0, counterGrade4 = 0, counterGrade6 = 0;

	cout.setf(ios::fixed);
	cout.precision(2);

	for (int student = 1; student <= numberOfStudents; student++)
	{
		cin >> grade;

		if (grade <= 2.99)
		{
			counterGrade2++;
			sumGrades += grade;
		}
		else if (grade <= 3.99)
		{
			counterGrade3++;
			sumGrades += grade;
		}
		else if (grade <= 4.99)
		{
			counterGrade4++;
			sumGrades += grade;
		}
		else if (grade >= 5)
		{

			counterGrade6++;
			sumGrades += grade;
		}
	}

	double grupe1 = ((counterGrade2 * 1.0) / numberOfStudents) * 100;
	double grupe2 = ((counterGrade3 * 1.0) / numberOfStudents) * 100;
	double grupe3 = ((counterGrade4 * 1.0) / numberOfStudents) * 100;
	double grupe4 = ((counterGrade6 * 1.0) / numberOfStudents) * 100;

	double avarageGrade = sumGrades / numberOfStudents;

	cout << "Top students: " << grupe4 << "%" << endl;
	cout << "Between 4.00 and 4.99: " << grupe3 << "%" << endl;
	cout << "Between 3.00 and 3.99: " << grupe2 << "%" << endl;
	cout << "Fail: " << grupe1 << "%" << endl;
	cout << "Average: " << avarageGrade << endl;

	return 0;
}