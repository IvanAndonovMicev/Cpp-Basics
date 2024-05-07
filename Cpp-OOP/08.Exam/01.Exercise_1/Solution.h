#ifndef Solution_h
#define Solution_h

#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <memory>
#include <algorithm>

#include "BaseStudent.h"

using namespace std;

class Student : public BaseStudent {
public:
	void init(std::istream& iS) override {
		iS >> name >> grade;
	}
};

bool readStudent(vector<shared_ptr<Student>>& data, string& buffer) {
	if (buffer == "end")
		return false;

	shared_ptr<Student> studentPtr = make_shared<Student>();
	istringstream iss(buffer);
	studentPtr->init(iss);
	data.push_back(studentPtr);

	return true;
}

vector<int> processStudents(vector<shared_ptr<Student>>& data) {
	sort(data.begin(), data.end(), [](const auto& a, const auto& b) {
		return a->getGrade() > b->getGrade();
		});

	map<int, int> gradeCount;

	for (const auto& student : data) {
		int grade = student->getGrade();
		int range = grade / 10;
		gradeCount[range]++;
	}

	vector<int> totals(10);

	for (auto it = gradeCount.begin(); it != gradeCount.end(); ++it) {
		int range = it->first;
		int count = it->second;
		totals[range] = count;
	}

	return totals;
}

#endif // !Solution_h
