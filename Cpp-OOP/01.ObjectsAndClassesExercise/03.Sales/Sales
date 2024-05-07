#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <set>
#include <vector>

using namespace std;

class Sale
{
	string town;
	string product;
	double price;
	double quantity;
public:

	Sale() : price(0), quantity(0) {}

	Sale(istream& ist) {
		ist >> town >> product >> price >> quantity;
	}

	string getTown(void) { return town; }

	string getProduct(void) { return product; }

	double getPrice(void) { return price; }

	double getQuantity(void) { return quantity; }

	double getTotal(void) { return price * quantity; }
};

class Sales {
public:
	typedef vector<Sale> Data;

private:
	Data sales;

public:

	Sales(istream& istr);

	Data& getSales(void) { return sales; }
};

Sales::Sales(istream& istr) {
	int numOfSales;
	istr >> numOfSales;

	sales.reserve(numOfSales);
	while (numOfSales--)
		sales.push_back(Sale(istr));
}

class ReportPerCity {
	map< string, double> grossSales;

public:
	ReportPerCity(Sales& s);

	void print(ostream& ostr);
};

ReportPerCity::ReportPerCity(Sales& s) {
	Sales::Data data = s.getSales();

	for (Sale& sale : data) {
		grossSales[sale.getTown()] += sale.getTotal();
	}
}

void ReportPerCity::print(ostream& ostr) {
	ostr << fixed << setprecision(2);
	for (auto curCity : grossSales)
		ostr << curCity.first << "->" << curCity.second << endl;
}

int main()
{
	Sales s(cin);
	ReportPerCity r(s);

	r.print(cout);

	return 0;
}
