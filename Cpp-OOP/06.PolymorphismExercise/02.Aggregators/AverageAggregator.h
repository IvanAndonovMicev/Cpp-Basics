#ifndef AverageAggregator_h
#define AverageAggregator_h

#include "Aggregator.h"

class AverageAggregator : public StreamAggregator {
	int sum;

public:

	AverageAggregator(std::istringstream& istr) : StreamAggregator(istr), sum(0) { }

	virtual void aggregate(int next) override {
		StreamAggregator::aggregate(next);

		sum += next;
		aggregationResult = sum / getNumAggregated();
	}
};

#endif // !AverageAggregator_h
