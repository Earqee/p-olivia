#pragma once

#include <vector>
#include "Conjunction/Conjunction.h"
#include "../../../../../Utility/Log.h"

class Disjunction {

private:
	std::vector<Conjunction> conjunctions;

public:
	std::vector<Conjunction> getConjunctions() {
		return this->conjunctions;
	}

	void setConjunctions(std::vector<Conjunction> conjunctions) {
		this->conjunctions = conjunctions;
	}

	void appendConjunction(Conjunction conjunction) {
		this->conjunctions.push_back(conjunction);
	}

};
