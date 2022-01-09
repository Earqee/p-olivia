
#include "Literal.h"

/* Decorator pattern. */

class LiteralEvaluator {

private:
	Literal literal;

public:

	LiteralEvaluator(Literal &literal) {
		this->literal = literal;
	}

	double evaluate() {
		this->literal.getProbability().getProbability();
	}

};