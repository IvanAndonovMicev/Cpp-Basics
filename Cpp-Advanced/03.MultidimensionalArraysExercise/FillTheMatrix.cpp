#include <iostream>
#include <sstream>
#include <vector>
#include <array>

using namespace std;

int main()
{
	int N;
	string buff;
	getline(cin, buff, ',');
	N = stoi(buff);

	char alg;
	cin >> alg;

	vector < vector < int > > m(N, vector<int >(N));

	int r = 0, c = 0;
	int direction = 1;
	for (int cur = 1; cur <= N * N; cur++)
	{
		m[r][c] = cur;

		r += direction;

		if (alg == 'A')
		{
			if (r >= N)
			{
				c++;
				r = 0;
			}
		}
		else
		{
			if (r < 0 || r >= N)
			{
				c++;
				if (direction > 0)
					r = N - 1;
				else
					r = 0;

				direction = -direction;
			}
		}
	}

	for (size_t r = 0; r < N; r++)
	{
		for (size_t c = 0; c < N; c++)
		{
			cout << m[r][c] << ' ';
		}
		cout << endl;
	}

	return 0;
}