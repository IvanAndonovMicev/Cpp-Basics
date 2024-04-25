#include <iostream>
#include <sstream>
#include <list>
#include <string>
using namespace std;

void readList(istream& istr, list<int>& output)
{
	int buf;
	while (istr >> buf)
	{
		output.push_back(buf);
	}
}

void readList(const string& buffer, list<int>& output)
{
	istringstream istr(buffer);
	readList(istr, output);
}

void readTrain(istream& istr, list<int>& train)
{
	string trainStr;
	getline(istr, trainStr);
	readList(trainStr, train);
}

void megeFrom(list<int>& finalTrain, list<int>::iterator& it, string& mergeRes, char train)
{
	mergeRes.insert(mergeRes.begin(), train);
	finalTrain.push_back(*it);
	it++;
}

int main()
{
	list<int> trainA, trainB;

	readTrain(cin, trainA);
	readTrain(cin, trainB);

	string mergeRes;
	list<int> finalTrain;

	list<int>::iterator itA = trainA.begin(), itB = trainB.begin();

	while (itA != trainA.end() || itB != trainB.end())
	{
		if (itA == trainA.end())
			megeFrom(finalTrain, itB, mergeRes, 'B');
		else if (itB == trainB.end())
			megeFrom(finalTrain, itA, mergeRes, 'A');
		else
		{
			if (*itA > *itB)
				megeFrom(finalTrain, itA, mergeRes, 'A');
			else
				megeFrom(finalTrain, itB, mergeRes, 'B');
		}
	}

	cout << mergeRes << endl;
	for (int i : finalTrain)
	{
		cout << i << ' ';
	}
	cout << endl;

	return 0;
}