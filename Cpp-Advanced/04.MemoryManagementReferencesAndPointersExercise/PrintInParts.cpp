#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int tottalCells = n * m;
	int* faltMatrix = new int[tottalCells];

	for (int i = 0; i < tottalCells; i++) cin >> faltMatrix[i];

	int r, c;
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cout << faltMatrix[i * m + j] << ' ';
		cout << endl;
	}

	delete[]faltMatrix;
	return 0;
}