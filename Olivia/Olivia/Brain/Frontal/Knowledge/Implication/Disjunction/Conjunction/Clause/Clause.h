#pragma once

#include "Literal/Literal.h"

class Clause {

private:
	std::vector<Literal> literals;

public:
	std::vector<Literal> getLiterals() {
		return this->literals;
	}

	void setLiterals(std::vector<Literal> literals) {
		this->literals = literals;
	}

	void appendLiteral(Literal literal) {
		this->literals.push_back(literal);
	}

};
