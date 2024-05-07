#include "IndexedSet.h"

IndexedSet::IndexedSet() : valuesArray(nullptr) {}

IndexedSet::IndexedSet(const IndexedSet& other) : valuesArray(nullptr) {
	*this = other;
}

void IndexedSet::add(const Value& v) {
	if (valuesSet.insert(v).second);
	clearIndex();
}

size_t IndexedSet::size() const { return valuesSet.size(); }

const Value& IndexedSet::operator[](size_t index) {
	if (valuesArray == nullptr)
		buildIndex();
	return valuesArray[index];
}

IndexedSet& IndexedSet::operator=(const IndexedSet& other) {
	if (this != &other) {
		clearIndex();
		valuesSet = other.valuesSet;
	}

	return *this;
}

IndexedSet::~IndexedSet() {
	clearIndex();
}

void IndexedSet::buildIndex() {
	clearIndex();

	valuesArray = new Value[valuesSet.size()];
	size_t cur = 0;
	for (auto c : valuesSet)
		valuesArray[cur++] = c;
}

void IndexedSet::clearIndex() {
	if (valuesArray != nullptr)
		delete[] valuesArray;
	valuesArray = nullptr;
}