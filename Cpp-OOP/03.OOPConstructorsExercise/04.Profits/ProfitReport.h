#ifndef PROFIT_REPORT_H

#define PROFIT_REPORT_H

#include "Company.h"
#include "ProfitCalculator.h"

#include <sstream>
#include <map>

std::string getProfitReport(Company* fromInclusive, Company* toInclusive, std::map<int, ProfitCalculator>& profitCalculatorsByCompany) {
	std::ostringstream ostr;

	while (true) {
		ostr << fromInclusive->getName() << " = "
			<< profitCalculatorsByCompany[fromInclusive->getId()].calculateProfit(*fromInclusive) << std::endl;

		if (fromInclusive == toInclusive)
			break;
		else
			fromInclusive++;
	}

	return ostr.str();
}

#endif // !PROFIT_REPORT_H