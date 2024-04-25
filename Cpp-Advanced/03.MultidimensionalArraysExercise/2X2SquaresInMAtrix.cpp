#include <iostream>
#include <sstream>
#include <vector>
#include <array>

using namespace std;

bool is2X2Square(const vector < vector < char > >& m, size_t startRow, size_t startCol)
{
	return
		m[startRow][startCol] == m[startRow][startCol + 1] &&
		m[startRow][startCol] == m[startRow + 1][startCol] &&
		m[startRow][startCol] == m[startRow + 1][startCol + 1];
}

int main()
{
	int rows, cols;
	cin >> rows >> cols;

	vector < vector < char > > m(rows, vector<char>(cols));

	for (size_t r = 0; r < rows; r++)
		for (size_t c = 0; c < cols; c++)
			cin >> m[r][c];

	size_t found2X2Squares = 0;

	for (size_t r = 0; r < rows - 1; r++)
		for (size_t c = 0; c < cols - 1; c++)
			if (is2X2Square(m, r, c))
				found2X2Squares++;

	cout << found2X2Squares << endl;

	return 0;
}
