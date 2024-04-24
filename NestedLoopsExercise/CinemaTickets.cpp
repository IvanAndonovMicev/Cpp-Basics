#include <iostream>
#include <string>

using namespace std;

int main()
{
	string movieName, freeSeatsInput, tipeOfTicket;
	int freeSeats, curentCounterSeats, totalSumSeats = 0, studentTicketsCount = 0, standardTicketsCount = 0, kidTicketsCount = 0;
	double percentFull, percentStudent, percentStandard, percentKid;

	cout.setf(ios::fixed);
	cout.precision(2);

	while (getline(cin, movieName) && movieName != "Finish")
	{
		getline(cin, freeSeatsInput);
		freeSeats = stoi(freeSeatsInput);

		curentCounterSeats = 0;
		while (getline(cin, tipeOfTicket)  && tipeOfTicket != "End")
		{
			if (tipeOfTicket == "student")
			{
				studentTicketsCount++;
				curentCounterSeats++;
			}
			else if (tipeOfTicket == "standard")
			{
				standardTicketsCount++;
				curentCounterSeats++;
			}
			else if (tipeOfTicket == "kid")
			{
				kidTicketsCount++;
				curentCounterSeats++;
			}

			if (curentCounterSeats == freeSeats)
			{
				break;
			}
		}

		percentFull = (curentCounterSeats * 100.00) / (freeSeats * 1.0);
		cout << movieName << " - " << percentFull << "% full." << endl;

		totalSumSeats += curentCounterSeats;
	}

	cout << "Total tickets: " << totalSumSeats << endl;
	cout << (studentTicketsCount * 100.0) / (totalSumSeats * 1.0) << "% student tickets." << endl;
	cout << (standardTicketsCount * 100.0) / (totalSumSeats * 1.0) << "% standard tickets." << endl;
	cout << (kidTicketsCount * 100.0) / (totalSumSeats * 1.0) << "% kids tickets." << endl;

	return 0;
}
