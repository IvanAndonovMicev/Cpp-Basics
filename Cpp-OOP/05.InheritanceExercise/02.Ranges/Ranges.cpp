#include <iostream>
#include <map>
#include <functional>
#include <sstream>
#include <memory>

using namespace std;

class Range {
	int from, to;

public:

	Range(istream& istr) { istr >> *this; }

	int getFrom(void) const { return from; }
	int getTo(void) const { return to; }

	friend istream& operator >> (istream& istr, Range& range);
};

istream& operator >> (istream& istr, Range& range) {
	istr >> range.from >> range.to;
	return istr;
}

class Data {
protected:
	map<int, shared_ptr<Range> > data;
public:

	void addRange(shared_ptr<Range> r) {
		data[r->getFrom()] = r;
	}
};

class Processor : public Data {
public:
	void go(std::function<void(istream&) > doer) {
		while (true) {
			string buff;
			getline(cin, buff);
			if (buff == ".")
				break;
			istringstream istr(buff);
			doer(istr);
		}
	}
};

class IsInRangeProcessor : public Processor {
public:

	bool isInRange(int i) {
		auto itStart = data.upper_bound(i);
		if (itStart == data.begin())
			return false;
		else
			itStart--;

		return i <= itStart->second->getTo();
	}
};

int main()
{
	IsInRangeProcessor proc;

	proc.go([&](istream& istr) { proc.addRange(make_shared<Range>(istr)); });

	proc.go([&](istream& istr) {
		int i;
		istr >> i;

		cout << (proc.isInRange(i) ? "in" : "out") << endl;
		});

	return 0;
}
