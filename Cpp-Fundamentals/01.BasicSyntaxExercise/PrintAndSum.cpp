#include <iostream>

using namespace std;

int main()
{
	int start, end, sum = 0;
	cin >> start >> end;

	for (int count = start; count <= end; count++)
	{
		sum += count;
		cout << count << ' ';
	}
	

	cout << endl << "Sum: " << sum << endl;

	return 0;
}