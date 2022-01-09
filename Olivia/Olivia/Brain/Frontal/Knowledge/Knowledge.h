#pragma once

#include "Rule/Rule.h"


class Knowledge {

private:

	/* Unique identifier of this knowledge. */
	typedef long ID;
	ID id;

	/* Relevance of knowledge on a given context. */
	typedef long Relevance;
	Relevance relevance;

	/* Content of this knowledge. */
	Rule rule;

public:

	/* */

	ID getID() {
		return this->id;
	}

	void setID(ID id) {
		this->id = id;
	}
	
	/* */

	Relevance getRelevance() {
		return this->relevance;
	}

	void setRelevance(Relevance relevance) {
		this->relevance = relevance;
	}

	void increaseRelevance() {
		this->relevance++;
	}

	void resetRelevance(){
		this->relevance = 0;
	}
	
	/* */

	Rule getRule() {
		return this->rule;
	}

	void setRule(Rule rule) {
		this->rule = rule;
	}

};


