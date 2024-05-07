#ifndef _EXPRESIONS_H_
#define _EXPRESIONS_H_

#include <memory>

#include "CalculationEngine.h"
#include "AdvancedInterpreter.h"

std::shared_ptr<InputInterpreter> buildInterpreter(CalculationEngine& engine) {
	return std::make_shared<AdvancedInterpreter>(engine);
}

#endif // !_EXPRESIONS_H_
