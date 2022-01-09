

#include "Implication.h" 
#include "Disjunction/DisjunctionEvaluator.h"
#include <math>

class ImplicationEvaluator {

private:
	Implication implication;

public:

	ImplicationEvaluator(Implication& implication) {
		this->implication = implication;
	}

	double evaluate() {
		double result = 0;

		DisjunctionEvaluator disjunctionEvaluator(this->implication.getDisjunction());
		LiteralEvaluator literalEvaluator(this->implication.getLiteral());

		result = max(disjunctionEvaluator.evaluate(), literalEvaluator.evaluate());

		return result;
	}

};