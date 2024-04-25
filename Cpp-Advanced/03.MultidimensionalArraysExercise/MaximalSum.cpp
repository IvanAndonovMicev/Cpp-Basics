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

int sum3X3(const vector< vector<int > >& m, int startRow, int startCol)
{
	int  sum = 0;

	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			sum += m[startRow + r][startCol + c];
		}
	}

	return sum;
}

int main()
{
	int rows, cols;
	vector <vector <int>> m;
	readMAtrix(cin, m, rows, cols);

	int maxSum = INT_MIN;
	int maxSumSartRow = 0, maxSumStartCol = 0;

	for (int r = 0; r < rows - 2; r++)
	{
		for (int c = 0; c < cols - 2; c++)
		{
			int curSum = sum3X3(m, r, c);
			if (curSum > maxSum)
			{
				maxSum = curSum;
				maxSumSartRow = r;
				maxSumStartCol = c;
			}
		}
	}

	cout << "Sum = " << maxSum << endl;

	for (int r = maxSumSartRow; r < maxSumSartRow + 3; r++)
	{
		for (int c = maxSumStartCol; c < maxSumStartCol + 3; c++)
		{
			cout << m[r][c] << ' ';
		}
		cout << endl;
	}

	return 0;
}