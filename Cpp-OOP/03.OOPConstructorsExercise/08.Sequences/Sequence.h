#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <vector>
#include <climits>

template<typename T, typename Generator>
class Sequence {
	typedef std::vector<T> Data;
	Data data;
	Generator gen;

public:

	class Iterator {
		Data& data;
		unsigned long index;
	public:

		Iterator(Data& theData, unsigned long index) : data(theData), index(index) {}

		static Iterator getBegin(Data& theData) { return Iterator(theData, 0); }
		static Iterator getEnd(Data& theData) { return Iterator(theData, ULONG_MAX); }

		bool operator == (const Iterator& other) {
			bool areContainersTheSame = (&data) == (&other.data);
			bool areBothEnd = (isAtEnd() && other.isAtEnd());
			bool areIndexTheSame = (index == other.index);

			return areContainersTheSame && (areBothEnd || areIndexTheSame);
		}

		bool operator != (const Iterator& other) { return !(*this == other); }

		Iterator& operator++ () {
			index++;
			return *this;
		}

		T& operator* () {
			return data[index];
		}

	private:
		bool isAtEnd() const { return index >= data.size(); }
	};

	Sequence() {}

	void generateNext(int numberToGenerate) {
		while (numberToGenerate--)
			data.push_back(gen());
	}

	Iterator begin() { return Iterator::getBegin(data); }
	Iterator end() { return Iterator::getEnd(data); }
};

#endif