#ifndef MemorySetOperation_h
#define MemorySetOperation_h

#include "Operation.h"

#include <stack>

class MemorySetOperation : public Operation {
	std::stack<int> memory;

public:
	virtual void addOperand(int operand) override {
		memory.push(operand);
	}
	virtual int getResult() override {
		int memoryTop = memory.top();
		memory.pop();
		return memoryTop;
	}
	virtual bool isCompleted() override {
		return false;
	}
};

#endif // !MemorySetOperation.h
