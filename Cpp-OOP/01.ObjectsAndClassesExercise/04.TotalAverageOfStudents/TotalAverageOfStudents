#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Student {
	string name, surName;
	double avarage;

public:

	Student() : avarage(0) { }

	Student(istream& istr);

	double getAvarage(void) { return avarage; }

	string asString(void);
};

Student::Student(istream& istr) {
	getline(istr, name);
	getline(istr, surName);
	istr >> avarage; cin.ignore();
}

string Student::asString(void) {
	ostringstream ostr;

	ostr << name << ' ' << surName << ' ' << avarage;

	return ostr.str();
}

typedef vector<Student> StudentData;

double calcTotalAvarage(StudentData& data) {
	double avarageSum = 0;

	for (Student& student : data)
		avarageSum += student.getAvarage();

	return avarageSum / data.size();
}

int main()
{
	int numOfStudents;
	cin >> numOfStudents;
	cin.ignore();

	if (numOfStudents <= 0) {
		cout << "Invalid input" << endl;
		return 1;
	}

	StudentData data;

	data.reserve(numOfStudents);

	while (numOfStudents--)
		data.push_back(Student(cin));

	for (Student& student : data)
		cout << student.asString() << endl;

	cout << calcTotalAvarage(data) << endl;

	return 0;
}
