#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

#define MAX_NUM 10

int writeMatrixAndCols(int rows, int(&matrix)[MAX_NUM][MAX_NUM])
{
	int col = 0;
	for (int row = 0; row < rows; row++)
	{
		string rowStringToInt;
		getline(cin, rowStringToInt);
		istringstream istr(rowStringToInt);

		int curentNum;
		while (istr >> curentNum)
		{
			matrix[row][col] = curentNum;
			col++;
		}
	}

	return col;
}

bool isEqual(int row1, int col1, int row2, int col2,
	const int(&matrix1)[MAX_NUM][MAX_NUM],
	const int(&matrix2)[MAX_NUM][MAX_NUM])
{
	if (row1 != row2 || col1 != col2)
		return 0;

	for (int cntRow = 0; cntRow < row1; cntRow++)
	{
		for (int cntCol = 0; cntCol < col1; cntCol++)
		{
			if (!(matrix1[cntRow][cntCol] == matrix2[cntRow][cntCol]))
				return false;
		}
	}

	return true;
}

int main()
{
	int matrix1[MAX_NUM][MAX_NUM]{ 0 };
	int matrix2[MAX_NUM][MAX_NUM]{ 0 };

	int rows1, cols1;
	cin >> rows1;
	cin.ignore();
	cols1 = writeMatrixAndCols(rows1, matrix1);

	int rows2, cols2;
	cin >> rows2;
	cin.ignore();
	cols2 = writeMatrixAndCols(rows2, matrix2);

	if (isEqual(rows1, cols1, rows2, cols2, matrix1, matrix2))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;

	return 0;
}

// read matrix with arr
/*
void readMAtrix(istringstream& input, array< array < int, 10>, 10 >& m, int& rows, int& cols)
{
	input >> rows; cin.ignore();

	for (size_t r = 0; r < rows; r++)
	{
		string buffer;
		getline(cin, buffer);
		istringstream istr(buffer);

		cols = 0;
		while (istr >> m[r][cols])
			cols++;
	}
}
*/

// read matrix with vector
/*
void readMAtrix(istringstream& input, vector< vector<int > >& m, int& rows, int& cols)
{
	input >> rows >> cols;

	m.resize(rows, vector<int>(cols, 0));

	for (size_t r = 0; r < rows; r++)
		for (size_t c = 0; c < cols; c++)
			cin >> m[r][c];
}
*/