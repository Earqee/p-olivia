

#include "Clause.h" 
#include "Literal/LiteralEvaluator.h"

class ClauseEvaluator {

private:
	Clause clause;

public:

	ClauseEvaluator(Clause &clause) {
		this->clause = clause;
	}

	double evaluate() {
		double or = 0;
		for (Literal &literal : this->clause.getLiterals()) {
			LiteralEvaluator literalEvaluator(literal);
			or = max(or , literalEvaluator.evaluate());
		}
		return or;
	}


};