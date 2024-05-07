#ifndef _TYPED_STREAM_H_
#define _TYPED_STREAM_H_

#include <sstream>
#include <vector>

template<typename T>
class TypedStream {
protected:

	std::istringstream stream;

public:

	TypedStream(const std::string& input) : stream(input) {}

	virtual ~TypedStream() = default;

	virtual TypedStream<T>& operator>>(T& i) {
		return *this;
	}

	std::vector<T> readToEnd() {
		std::vector<T> result;

		T curr;
		while (true) {
			*this >> curr;
			if ((bool)stream == false)
				break;

			result.push_back(curr);
		}

		return result;
	}
};

#endif // !_TYPED_STREAM_H_
