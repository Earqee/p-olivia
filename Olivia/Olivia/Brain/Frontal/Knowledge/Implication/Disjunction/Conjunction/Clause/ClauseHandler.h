#pragma once

#include <utility>

#include "Clause.h"
#include "Literal/Literal.h"
#include "Literal/LiteralHandler.h"

class ClauseHandler {

private:
	Clause clause;

public:
	ClauseHandler(Clause &clause) {
		this->clause = clause;
	}

	/* 
		Purpose: Reads a list of literals: ( Lit1 | Lit2 | ... | LitN ). 
		Returns if ")" is read.
	*/
	std::pair<bool, Clause> process(std::istringstream& buffer, std::string &word) {
		Log log("Read", "Clause");

		/* Check if reads '(' */
		if (word != "(") {

			log.error();
			log.print("Current word is: " + word + ". Expected: '('. ");
			return { false, this->clause };
		}
		else {

			/* Consumes '(' */
			buffer >> word;
		}

		/* Read list of clauses. */
		do {

			if (word != "|" ) {

				LiteralHandler literalHandler;
				std::pair<bool, Literal> result = literalHandler.process(buffer, word);

				/* Insert clause on expression */
				log.print("Inserted literal.");

				this->clause.appendLiteral(result.second);

			} 
			
			if (word == "|") {

				/* Reads "|". */
				buffer >> word;
			}
				
		} while (word != ")" && !buffer.eof());

		/* Check if reads ')' */
		if (word != ")") {

			log.error();
			log.print("Current word is: " + word + ". Expected: ')'. ");
			return { false, this->clause };
		} else {

			/* Consumes ')' */
			buffer >> word;	
		}

		log.print("Returned clause.");
		return { true, this->clause };
	}

};
