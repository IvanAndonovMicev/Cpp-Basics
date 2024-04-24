#include <iostream>
#include <string>

using namespace std;

int main()
{
	int lenght, with, numberOfCackes;
	bool cackeLeft = false;
	string numberOfCackesInput;

	cin >> lenght >> with;

	int piecesOfCake = lenght * with;

	while (piecesOfCake > 0)
	{
		cin >> numberOfCackesInput;
		if (numberOfCackesInput == "STOP")
		{
			cackeLeft = true;
			break;
		}

		numberOfCackes = stoi(numberOfCackesInput);

		piecesOfCake -= numberOfCackes;
	}

	if (cackeLeft)
	{
		cout << piecesOfCake << " pieces are left." << endl;
	}
	else if (!cackeLeft)
	{

		cout << "No more cake left! You need " << abs(piecesOfCake) << " pieces more." << endl;
	}

	return 0;
}
