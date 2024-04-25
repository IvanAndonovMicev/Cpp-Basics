#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int numberOfDays;
	cin >> numberOfDays;
	int numberOfNights = numberOfDays - 1;
	cin.ignore();

	string typeOfRoom;
	getline(cin, typeOfRoom);

	string rating;
	cin >> rating;

	double priceForRoom;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (typeOfRoom == "room for one person")
	{
		priceForRoom = numberOfNights * 18.00;
	}
	else if (typeOfRoom == "apartment")
	{
		if (numberOfDays < 10)
		{
			priceForRoom = numberOfNights * 25.00;
			priceForRoom *= 0.70;
		}
		else if (numberOfDays <= 15)
		{
			priceForRoom = numberOfNights * 25.00;
			priceForRoom *= 0.65;
		}
		else if (numberOfDays >= 15)
		{
			priceForRoom = numberOfNights * 25.00;
			priceForRoom *= 0.50;
		}
	}
	else if (typeOfRoom == "president apartment")
	{
		if (numberOfDays < 10)
		{
			priceForRoom = numberOfNights * 35.00;
			priceForRoom *= 0.90;
		}
		else if (numberOfDays <= 15)
		{
			priceForRoom = numberOfNights * 35.00;
			priceForRoom *= 0.85;
		}
		else if (numberOfDays >= 15)
		{
			priceForRoom = numberOfNights * 35.00;
			priceForRoom *= 0.80;
		}
	}

	if (rating == "positive")
	{
		priceForRoom *= 1.25;
	}
	else if (rating == "negative")
	{
		priceForRoom *= 0.9;
	}

	cout << priceForRoom << endl;

	return 0;
}