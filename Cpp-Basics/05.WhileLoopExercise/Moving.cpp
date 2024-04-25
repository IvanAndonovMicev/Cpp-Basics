#include <iostream>
#include <string>

using namespace std;

int main()
{
	int length, width, height, area, numberOfBoxes;
	bool leftSpace = false;
	string numberOfBoxesInput;
	cin >> length >> width >> height;

	area = length * width * height;

	while (area > 0)
	{
		cin >> numberOfBoxesInput;
		if (numberOfBoxesInput == "Done")
		{
			leftSpace = true;
			break;
		}

		numberOfBoxes = stoi(numberOfBoxesInput);

		area -= numberOfBoxes;
	}

	if (leftSpace)
	{
		cout << area << " Cubic meters left." << endl;
	}
	else if (!leftSpace)
	{
		cout << "No more free space! You need " << abs(area) << " Cubic meters more." << endl;
	}

	return 0;
}