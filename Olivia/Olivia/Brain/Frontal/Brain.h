#pragma once

#include <map>

#include "Knowledge/Knowledge.h"


class Brain {

private:
	/* All known knowledges. */
	std::vector<Knowledge> knowledges;

	/* Associates a given text (description) to a knowledge (ID). */
	std::map<std::string, std::vector<long> > association;

public:
	
	/* */

	std::vector<Knowledge> getKnowledges() {
		return this->knowledges;
	}

	void setKnowledges(std::vector<Knowledge> knowledges) {
		this->knowledges = knowledges;
	}

	void insertKnowledge(Knowledge knowledge) {
		/* */
		knowledge.setID(this->knowledges.size());
		/* */
		this->knowledges.push_back(knowledge);
	}

};



