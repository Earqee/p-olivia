

#include "Conjunction.h" 
#include "Clause/ClauseEvaluator.h"
#include <math>

class ConjunctionEvaluator {

private:
	Conjunction conjunction;

public:

	ConjunctionEvaluator(Conjunction &conjunction) {
		this->conjunction = conjunction;
	}

	double evaluate() {
		return arithmetic();
	}

	double harmonic() {
		double result = 0;

		for (Clause& clause : this->conjunction.getClauses()) {
			ClauseEvaluator clauseEvaluator(clause);
			result += 1.0 / clauseEvaluator.evaluate();
		}

		result = this->conjunction.getClauses().size() / result;

		return result;
	}

	double geometric() {
		double result = 1;

		for (Clause &clause : this->conjunction.getClauses()) {
			ClauseEvaluator clauseEvaluator(clause);
			result *= clauseEvaluator.evaluate());
		}

		result = pow(result, 1.0 / this->conjunction.getClauses().size());

		return result ;
	}

	double arithmetic() {
		double result = 0;

		for (Clause& clause : this->conjunction.getClauses()) {
			ClauseEvaluator clauseEvaluator(clause);
			result += clauseEvaluator.evaluate();
		}

		result = result / this->conjunction.getClauses().size();
	}

};