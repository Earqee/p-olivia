#pragma once

#include <vector>

#include "Clause/Clause.h"

class Conjunction {

private:
	std::vector<Clause> clauses;

public:
	std::vector<Clause> getClauses() {
		return this->clauses;
	}

	void setClauses(std::vector<Clause> clauses) {
		this->clauses = clauses;
	}

	void appendClause(Clause clause) {
		this->clauses.push_back(clause);
	}

};

