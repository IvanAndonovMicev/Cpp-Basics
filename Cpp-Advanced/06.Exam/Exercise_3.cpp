#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void addCurrency(map<string, double>& accounts, const string& currency, double amount) {
	accounts[currency] += amount;
}

void subtractCurrency(map<string, double>& accounts, const string& currency, double amount) {
	accounts[currency] -= amount;
}

void exchangeCurrency(map<string, double>& accounts, const string& fromCurrency, double amount, const string& toCurrency, double exchangeRate) {
	subtractCurrency(accounts, fromCurrency, amount);
	addCurrency(accounts, toCurrency, amount * exchangeRate);
}

void printAllBalances(const vector<string>& currencies, const map<string, double>& accounts) {
	for (const auto& currency : currencies) {
		cout << currency << ": " << fixed << setprecision(2) << accounts.at(currency) << endl;
	}
}

void printInitialBalances(const vector<string>& currencies, const map<string, double>& initialAccounts) {
	for (const auto& currency : currencies) {
		cout << currency << ": " << fixed << setprecision(2) << initialAccounts.at(currency) << endl;
	}
}

int main() {
	vector<string> currencies;
	map<string, double> initialAccounts;
	map<string, double> accounts;

	string input;
	while (getline(cin, input)) {
		if (input == "END") {
			break;
		}
		stringstream ss(input);
		string currency;
		double amount;
		ss >> currency >> amount;
		currencies.push_back(currency);
		initialAccounts[currency] = amount;
		accounts[currency] = amount;
	}

	while (getline(cin, input)) {
		if (input == "END") {
			break;
		}
		stringstream ss(input);
		char command;
		ss >> command;
		if (command == '+') {
			string currency;
			double amount;
			ss >> currency >> amount;
			addCurrency(accounts, currency, amount);
		}
		else if (command == '-') {
			string currency;
			double amount;
			ss >> currency >> amount;
			subtractCurrency(accounts, currency, amount);
		}
		else if (command == 'X') {
			string fromCurrency, toCurrency;
			double amount, exchangeRate;
			ss >> fromCurrency >> amount >> toCurrency >> exchangeRate;
			exchangeCurrency(accounts, fromCurrency, amount, toCurrency, exchangeRate);
		}
		else if (command == 'P') {
			printAllBalances(currencies, accounts);
		}
		else if (command == 'E') {
			break;
		}
	}

	return 0;
}
