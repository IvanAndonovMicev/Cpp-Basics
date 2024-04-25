#include <iostream>
#include <string>

using namespace std;

int main()
{
	string favoriteBook, bookName;
	int counterBooks = 0;
	getline(cin, favoriteBook);

	getline(cin, bookName);

	while (bookName != "No More Books")
	{
		if (bookName == favoriteBook)
		{
			cout << "You checked " << counterBooks << " books and found it." << endl;
			return 0;
		}

		getline(cin, bookName);
		counterBooks++;
	}

	cout << "The book you search is not here!" << endl;
	cout << "You checked " << counterBooks << " books." << endl;

	return 0;
}