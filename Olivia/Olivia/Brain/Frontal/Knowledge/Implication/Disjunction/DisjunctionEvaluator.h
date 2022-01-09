

#include "Disjunction.h" 
#include "Conjunction/ConjunctionEvaluator.h"

class DisjunctionEvaluator {

private:
	Disjunction disjunction;

public:

	DisjunctionEvaluator(Disjunction& disjunction) {
		this->clause = clause;
	}

	double evaluate() {
		double or = 0;
		for (Conjunction& conjunction : this->disjunction.getConjunctions()) {
			ConjunctionEvaluator conjunctionEvaluator(conjunction);
			or = max(or , conjunctionEvaluator.evaluate());
		}
		return or ;
	}


};