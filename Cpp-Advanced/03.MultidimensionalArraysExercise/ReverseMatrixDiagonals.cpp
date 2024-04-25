#include <iostream>
#include <sstream>
#include <vector>
#include <climits>

using namespace std;

void readMAtrix(istream& input, vector< vector<int > >& m, int& rows, int& cols)
{
	input >> rows >> cols;

	m.resize(rows, vector<int>(cols, 0));

	for (size_t r = 0; r < rows; r++)
		for (size_t c = 0; c < cols; c++)
			cin >> m[r][c];
}

void printReverseDiagonal(const vector< vector < int >>& m, int startRow, int startCol)
{
	while (startRow >= 0 && startCol < m[0].size())
	{
		cout << m[startRow][startCol] << ' ';
		startRow--; startCol++;
	}
	cout << endl;
}
int main()
{
	int rows, cols;
	vector <vector <int>> m;
	readMAtrix(cin, m, rows, cols);

	for (int c = cols - 1; c >= 0; c--)
	{
		printReverseDiagonal(m, rows - 1, c);
	}

	for (int r = rows - 2; r >= 0; r--)
	{
		printReverseDiagonal(m, r, 0);
	}

	return 0;
}