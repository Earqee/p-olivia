#pragma once

#include <string>
#include <utility>

#include "Disjunction.h"
#include "Conjunction/Conjunction.h"
#include "Conjunction/ConjunctionHandler.h"

#include "../../../../../Utility/Log.h"

class DisjunctionHandler {

private:
	Disjunction disjunction;

public:

	/* 
		Purpose: Reads Conj1 | Conj2 | ... | ConjN.
		Starts reading Conj(X), but reads Conj(X+1) if "|" is read. 
		Returns if "=>" is read. 
	*/
	std::pair<bool, Disjunction> process(std::istringstream& buffer, std::string &word) {
		/* Read disjunction */
		Log log("Read", "Disjunction");

		do {

			if (word != "|") {

				ConjunctionHandler conjunctionHandler;
				std::pair<bool, Conjunction> result = conjunctionHandler.process(buffer, word);

				log.print("Inserted conjunction on disjunction");
				this->disjunction.appendConjunction(result.second);
			}

			if (word == "|") {
				/* Reads "|". */
				buffer >> word;
			}

		} while (word != "=>" && !buffer.eof());

		log.print("Returned disjunction.");
		return { true, this->disjunction };
	}
};
