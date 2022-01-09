#pragma once

#include <string>
#include <utility>

#include "Implication.h"

#include "Disjunction/Disjunction.h"
#include "Disjunction/DisjunctionHandler.h"

class ImplicationHandler {

private:
	Implication implication;

public:

	/* Purpose: Reads " Disjunction '=>' Literal " */
	std::pair<bool, Implication> process(std::istringstream& buffer, std::string& word) {
		Log log("Read", "Implication");

		/* Reads disjunction. */
		DisjunctionHandler disjunctionHandler;
		std::pair<bool, Disjunction> resultLeft = disjunctionHandler.process(buffer, word);

		this->implication.setDisjunction(resultLeft.second);

		/* Check if reads '=>' */
		if (word != "=>") {
			log.error();
			log.print("Current word is: " + word + ". Expected: '=>'. ");
			return { false, this->implication };
		}
		else {
			/* Consumes '=>' */
			buffer >> word;
		}
		
		/* Reads literal. */
		LiteralHandler literalHandler;
		std::pair<bool, Literal> resultRight = literalHandler.process(buffer, word);
		this->implication.setLiteral(resultRight.second);

		return { true, this->implication };
	}
};
