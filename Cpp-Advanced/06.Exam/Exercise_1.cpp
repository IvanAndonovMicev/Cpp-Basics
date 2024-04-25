#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>

using namespace std;

void distributeKids(const vector<pair<string, int>>& kids, map<int, vector<string>>& rooms) {
	for (const auto& kid : kids) {
		rooms[kid.second].push_back(kid.first);
	}
}

void printKidLocations(const map<int, vector<string>>& rooms, const string& name) {
	bool found = false;
	cout << name << ": ";
	for (const auto& room : rooms) {
		for (const auto& kid : room.second) {
			if (kid == name) {
				cout << room.first << " ";
				found = true;
				break;
			}
		}
	}
	if (!found) {
		cout << "Not found!";
	}
	cout << endl;
}

int main() {
	vector<pair<string, int>> kids;
	map<int, vector<string>> rooms;

	string input;
	while (getline(cin, input)) {
		if (input == "END") {
			break;
		}
		istringstream iss(input);
		string name;
		int room;
		iss >> name >> room;
		kids.push_back({ name, room });
	}

	distributeKids(kids, rooms);

	while (getline(cin, input)) {
		if (input == "END") {
			break;
		}
		printKidLocations(rooms, input);
	}

	return 0;
}
