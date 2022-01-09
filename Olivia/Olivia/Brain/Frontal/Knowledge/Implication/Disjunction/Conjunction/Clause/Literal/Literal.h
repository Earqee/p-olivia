#pragma once

#include "Probability/Probability.h"
#include "Description/Description.h"

class Literal
{
private:
	Probability probability;

	Description description;

public:
	Probability getProbability() {
		return this->probability;
	}

	void setProbability(Probability probability) {
		this->probability = probability;
	}	

	Description getDescription() {
		return this->description;
	}

	void setDescription(Description description) {
		this->description = description;
	}

	void appendDescription(Description description) {
		this->description.appendDescription(description);
	}

};




 