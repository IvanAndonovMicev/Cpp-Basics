#ifndef MinAggregator_h
#define MinAggregator_h

#include "Aggregator.h"
#include <climits>

class MinAggregator : public StreamAggregator {
	int minNum;

public:

	MinAggregator(std::istringstream& istr) : StreamAggregator(istr), minNum(INT_MAX) {
	}

	virtual void aggregate(int next) override {
		StreamAggregator::aggregate(next);
		if (minNum > next) {
			minNum = next;
			aggregationResult = minNum;
		}
	}
};

#endif // !MinAggregator_h