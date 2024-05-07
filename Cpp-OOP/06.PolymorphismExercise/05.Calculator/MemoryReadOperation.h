#ifndef  MemoryReadOperation_h
#define MemoryReadOperation_h

#include <memory>
#include "MemorySetOperation.h"

class MemoryReadOperation : public Operation {
	std::shared_ptr<MemorySetOperation> ms;

public:

	MemoryReadOperation(std::shared_ptr<MemorySetOperation> ms) : ms(ms) {}

	virtual void addOperand(int operand)override {}
	virtual int getResult() override {
		return ms->getResult();
	}
	virtual bool isCompleted() override {
		return true;
	}
};

#endif // ! MemoryReadOperation_h
