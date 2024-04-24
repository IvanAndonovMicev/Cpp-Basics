#include <iostream>

using namespace std;

int main()
{
	int length, width, height;
	cin >> length >> width >> height;

	double percent;
	cin >> percent;

	double volumeFishTank = length * width * height;
//	cout << volumeFishTank << endl;

	double volumeInLiters = volumeFishTank * 0.001;
//	cout << volumeInLiters << endl;

	double occupiedSpace = percent * 0.01;
//	cout << occupiedSpace << endl;

	long double neededLiters = volumeInLiters * (1.0 - occupiedSpace);
//	double neededLiters = volumeInLiters - volumeInLiters * occupiedSpace;

	cout << neededLiters << endl;
}
