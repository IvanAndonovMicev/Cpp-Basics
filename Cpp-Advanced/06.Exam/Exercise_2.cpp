#include <iostream>
#include <sstream>
#include <stack>
#include <map>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

void printBagReverse(const stack<string>& bag) {
	if (bag.size() == 0) {
		cout << "<empty>" << endl;
		return;
	}
	stack<string> temp = bag;
	vector<string> reversedContents;
	while (!temp.empty()) {
		reversedContents.push_back(temp.top());
		temp.pop();
	}
	bool isFirst = true;
	for (auto it = reversedContents.rbegin(); it != reversedContents.rend(); ++it) {
		if (isFirst) {
			cout << *it;
			isFirst = false;
		}
		else {
			cout << ", " << *it;
		}
	}
	cout << endl;
}

void insertAllFishInMap(map<string, int>& allFish, stack<string>& bag1, stack<string>& bag2, stack<string>& bag3) {
	while (bag1.size() != 0) {
		allFish[bag1.top()]++;
		bag1.pop();
	}

	while (bag2.size() != 0) {
		allFish[bag2.top()]++;
		bag2.pop();
	}

	while (bag3.size() != 0) {
		allFish[bag3.top()]++;
		bag3.pop();
	}
}

int main() {
	stack<string> bag1;
	stack<string> bag2;
	stack<string> bag3;

	while (true) {
		string input;
		getline(cin, input);
		if (input == "END")	break;
		istringstream iss(input);

		int operationToBag;
		iss >> operationToBag;

		string fishName;
		fishName = input.erase(0, 2);

		if (fishName == "THROW") {
			switch (operationToBag) {
			case 1:
				if (bag1.size() == 0) break;
				bag1.pop(); break;
			case 2:
				if (bag2.size() == 0) break;
				bag2.pop(); break;
			case 3:
				if (bag3.size() == 0) break;
				bag3.pop(); break;
			}
		}
		else {
			switch (operationToBag) {
			case 1: bag1.push(fishName); break;
			case 2: bag2.push(fishName); break;
			case 3: bag3.push(fishName); break;
			}
		}
	}

	cout << "1: "; printBagReverse(bag1);
	cout << "2: "; printBagReverse(bag2);
	cout << "3: "; printBagReverse(bag3);

	vector<string> neededFish;

	while (true) {
		string inputFish;
		getline(cin, inputFish);
		istringstream issFish(inputFish);

		if (inputFish == "END")
			break;
		neededFish.push_back(inputFish);
	}

	map<string, int> allFish;
	insertAllFishInMap(allFish, bag1, bag2, bag3);

	map<string, int> restaurantInventory;
	map<string, int> pateInventory;

	for (const auto& fish : allFish) {
		if (find(neededFish.begin(), neededFish.end(), fish.first) != neededFish.end()) {
			restaurantInventory[fish.first] = fish.second;
		}
		else {
			pateInventory[fish.first] = fish.second;
		}
	}

	cout << "Restaurant: ";
	if (restaurantInventory.empty()) {
		cout << "<nothing>";
	}
	else {
		auto it = restaurantInventory.begin();
		cout << it->first << ": " << it->second;
		++it;
		for (; it != restaurantInventory.end(); ++it) {
			cout << ", " << it->first << ": " << it->second;
		}
	}
	cout << endl;

	cout << "Pate: ";
	if (pateInventory.empty()) {
		cout << "<nothing>";
	}
	else {
		auto it = pateInventory.begin();
		cout << it->first << ": " << it->second;
		++it;
		for (; it != pateInventory.end(); ++it) {
			cout << ", " << it->first << ": " << it->second;
		}
	}
	cout << endl;

	return 0;
}
