#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void readVector(istream& istr, vector<int>& output)
{
	int buf;
	while (istr >> buf)
		output.push_back(buf);
}

void readVector(const string& buffer, vector<int>& output)
{
	istringstream istr(buffer);
	readVector(istr, output);
}

void readPipe(istream& istr, vector<int>& pipe)
{
	string pipeStr;
	getline(istr, pipeStr);
	readVector(pipeStr, pipe);
}

int main()
{
	vector<int> installation, checkup;

	size_t pipe;
	cin >> pipe;
	cin.ignore();

	installation.reserve(pipe);
	checkup.reserve(pipe);

	readPipe(cin, checkup);
	readPipe(cin, installation);

	for (size_t curPipe = 0; curPipe < pipe; curPipe++)
	{
		int decay = installation[curPipe] - checkup[curPipe];

		cout << installation[curPipe] / decay << ' ';
	}
	cout << endl;

	return 0;
}