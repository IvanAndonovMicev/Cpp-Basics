#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void readMAtrix(istream& input, vector< vector<int > >& m, int& rows, int& cols)
{
	input >> rows >> cols;

	m.resize(rows, vector<int>(cols, 0));

	for (size_t r = 0; r < rows; r++)
		for (size_t c = 0; c < cols; c++)
			cin >> m[r][c];
}

int main()
{
	int rows, cols;
	vector <vector <int > > m;
	readMAtrix(cin, m, rows, cols);

	int search;
	cin >> search;

	bool bFound = false;

	for (size_t r = 0; r < rows; r++)
	{
		for (size_t c = 0; c < cols; c++)
		{
			if (m[r][c] == search)
			{
				bFound = true;
				cout << r << ' ' << c << endl;
			}
		}
	}

	if (!bFound)
	{
		cout << "not found" << endl;
	}

	return 0;
}