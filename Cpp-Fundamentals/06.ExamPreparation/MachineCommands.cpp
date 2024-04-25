#include <iostream>
#include <sstream>
#include <list>

using namespace std;

int main() {
	int currentValue = 0;
	int previousValue = 0;

	string input;
	getline(cin, input);
	istringstream iss(input);

	string element;
	while (iss >> element) {
		if (element == "+" || element == "*" || element == "-" || element == "/") {
			char operation = element[0];
			iss >> element;  // Read the next element, which is assumed to be a number
			int number = stoi(element);

			if (operation == '+') {
				previousValue = currentValue + number;
			}
			else if (operation == '*') {
				previousValue = currentValue * number;
			}
			else if (operation == '-') {
				previousValue = currentValue - number;
			}
			else if (operation == '/') {
				previousValue = currentValue / number;
			}
		}
		else {
			previousValue = currentValue;
			currentValue = stoi(element);
		}
	}

	cout << "current value = " << currentValue << ", previous value = " << previousValue << endl;

	return 0;
}