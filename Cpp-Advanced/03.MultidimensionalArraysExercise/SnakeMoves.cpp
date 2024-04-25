#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int N, M;
	string snake;
	cin >> N >> M >> snake;

	char m[N][M + 1];

	size_t index = 0;
	int direction = 1;

	int c = 0;
	for (int r = 0; r < N; r++)
	{
		while (true)
		{
			m[r][c] = snake[index];

			index++;
			if (index >= snake.length())
				index = 0;

			c += direction;
			if (c < 0 || c >= M)
			{
				if (direction > 0)
				{
					c = M - 1;
					direction = -1;
				}
				else
				{
					c = 0;
					direction = 1;
				}
				break;
			}
		}
		m[r][M] = '\0';
	}

	for (size_t r = 0; r < N; r++)
	{
		cout << m[r] << endl;
	}

	return 0;
}