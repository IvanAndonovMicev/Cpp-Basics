#ifndef  Array_h
#define Array_h

#include <vector>

template<typename T>
class Array : public std::vector<T> {
public:
	Array(size_t size) : std::vector<T>(size) {}

	size_t getSize(void) const { return this->size(); }
};

#endif // ! Array_h
