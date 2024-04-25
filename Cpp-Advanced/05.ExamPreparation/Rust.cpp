#include <iostream>
#include <vector>

using namespace std;

const int n = 10;

void trySpread(const int& row, const int& col, char(&matrix)[n][n], vector<pair< int, int>>& rustCells)
{
	if (row < 0 || row >= n || col < 0 || col >= n)
		return;
	if (matrix[row][col] == '#' || matrix[row][col] == '!')
		return;

	matrix[row][col] = '!';
	rustCells.push_back(make_pair(row, col));
}

void spread(char(&matrix)[n][n], vector<pair<int, int>>& rustCells)
{
	vector<pair<int, int >> next;
	for (const pair<int, int>& p : rustCells)
	{
		trySpread(p.first - 1, p.second, matrix, next);
		trySpread(p.first + 1, p.second, matrix, next);

		trySpread(p.first, p.second - 1, matrix, next);
		trySpread(p.first, p.second + 1, matrix, next);
	}

	for (const pair<int, int>& nextCell : next)
		rustCells.push_back(nextCell);
}

void print(const char(&matrix)[n][n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char matrix[n][n]{ };

	vector< pair <int, int>> resultCells;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];

			if (matrix[i][j] == '!')
				resultCells.push_back(make_pair(i, j));
		}
	}
	int time;
	cin >> time;

	for (int i = 0; i < time; i++)
		spread(matrix, resultCells);

	print(matrix);

	return 0;
}