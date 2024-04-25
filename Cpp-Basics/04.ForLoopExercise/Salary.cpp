#include <iostream>

using namespace std;

int main()
{
	int openTabs, salary;
	cin >> openTabs >> salary;

	for (int sites = 0; sites < openTabs && !(salary == 0); sites++)
	{
		string nameOfSite;
		cin >> nameOfSite;

		if (nameOfSite == "Facebook")
		{
			salary -= 150;
		}
		else if (nameOfSite == "Instagram")
		{
			salary -= 100;
		}
		else if (nameOfSite == "Reddit")
		{
			salary -= 50;
		}
	}

	if (salary <= 0)
	{
		cout << "You have lost your salary." << endl;
	}
	else
	{
		cout << salary << endl;
	}

	return 0;
}