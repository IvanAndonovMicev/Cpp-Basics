#include <iostream>
#include <string>

using namespace std;

void incrementAdjacentCalls(int** matrix, const int& n, const int& m, const int& row, const int& col)
{
	for (int i = max(row - 1, 0); i <= min(row + 1, n - 1); i++)
	{
		for (int j = max(col - 1, 0); j <= min(col + 1, m - 1); j++)
		{
			matrix[i][j]++;
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m >> ws;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) matrix[i] = new int[m] {};

	for (int i = 0; i < n; i++)
	{
		string line;
		getline(cin, line);

		for (int j = 0; j < m; j++)
		{
			if (line[j] == '!')
				incrementAdjacentCalls(matrix, n, m, i, j);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) cout << matrix[i][j];

		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] matrix[i];

	delete[] matrix;

	return 0;
}