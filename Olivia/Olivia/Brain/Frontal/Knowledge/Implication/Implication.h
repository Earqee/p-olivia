#pragma once

#include <string>
#include <vector>

#include "Disjunction/Disjunction.h"
#include "Disjunction/Conjunction/Clause/Literal/Literal.h"

class Implication {

private:
	Disjunction disjunction;
	Literal literal;

public:
	Disjunction getDisjunction() {
		return this->disjunction;
	}

	void setDisjunction(Disjunction disjunction) {
		this->disjunction = disjunction;
	}

	Literal getLiteral() {
		return this->literal;
	}

	void setLiteral(Literal lit) {
		this->literal = literal;
	}
	
};
