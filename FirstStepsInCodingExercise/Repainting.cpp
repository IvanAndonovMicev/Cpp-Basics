#include <iostream>

using namespace std;

int main()
{
	const double NYLON_PER_SQUARE_METRE = 1.50;
	const double PEINT_PER_LITRE = 14.50;
	const double PEINT_THINNER = 5.00;
	const double PRAICE_BAG = 0.40;

	int neededNylon, neededPeint, neededThinner, houresWorked;
	cin >> neededNylon >> neededPeint >> neededThinner >> houresWorked;

	double praiceNylon = (neededNylon + 2) * NYLON_PER_SQUARE_METRE;
//	cout << praiceNylon << endl;

	double praicePeint = (neededPeint + (neededPeint * 0.1)) * PEINT_PER_LITRE;
//	cout << praicePeint << endl;

	double praiceThinner = neededThinner * PEINT_THINNER;
//	cout << praiceThinner << endl;

	double sumPrice = praiceNylon + praicePeint + praiceThinner + PRAICE_BAG;
//	cout << sumPrice << endl;

	double sumWorker = (sumPrice * (30 * 0.01)) * houresWorked;
	double total = sumPrice + sumWorker;

	cout << total << endl;
}