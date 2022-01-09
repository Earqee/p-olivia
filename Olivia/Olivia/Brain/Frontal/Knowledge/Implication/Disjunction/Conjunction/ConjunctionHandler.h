#pragma once

#include <string>
#include <utility>

#include "Conjunction.h"
#include "Clause/Clause.h"
#include "Clause/ClauseHandler.h"

class ConjunctionHandler {

private:
	Conjunction conjunction;

public:

	/* 
		Purpose: Reads ( Clau1 & Clau2 & ...& ClauN ). 
		Starts reading Clau(X), but reads Clau(X+1) if "&" is read. 
		Returns if ")" is read. 
	*/
	std::pair<bool, Conjunction> process(std::istringstream& buffer, std::string &word) {
		Log log("Read", "Conjunction");

		/* Check if reads '(' */
		if (word != "(") {

			log.error();
			log.print("Current word is: " + word + ". Expected: '('. ");
			return { false, this->conjunction };
		}
		else {

			/* Consumes "(". */
			buffer >> word;
		}

		/* Read list of clauses. */
		do {

			if (word != "&") {

				ClauseHandler clauseHandler;
				std::pair<bool, Clause> result = clauseHandler.process(buffer, word);

				/* Insert clause on expression */
				log.print("Inserted clause on conjunction.");
				this->conjunction.appendClause(result.second);
			}

			if (word == "&") {
				/* Reads "&". */
				buffer >> word;
			}
		} while (word != ")" && !buffer.eof());

		/* Check if reads ')' */
		if (word != ")") {

			log.error();
			log.print("Current word is: " + word + ". Expected: ')'. ");
			return { false, this->conjunction };
		}
		else {

			/* Consumes ")". */
			buffer >> word;
		}

		log.print("Returned conjunction.");
		return { true, this->conjunction };
	}

};

