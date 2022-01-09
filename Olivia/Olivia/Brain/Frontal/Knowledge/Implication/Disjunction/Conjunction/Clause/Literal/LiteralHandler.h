#pragma once

#include <string>
#include <vector>

#include "Literal.h"
#include "../../../../../../../../Utility/Log.h"


/* Decorator Pattern */

class LiteralHandler
{
private:
	Literal literal;

public:
	
	LiteralHandler(Literal &literal) {
		this->literal = literal;
	}

	/* 
		Purpose: Reads a description: "A a ...". 
		Returns if ")" or "|" is read. 
	*/
	std::pair<bool, Literal> process(std::istringstream& buffer, std::string& word) {
		Log log("Read", "Literal");
			
		do {

			if (word != ")" && word != "|") {

				log.print("Current word is: " + word);
				log.print("Appended to literal description: " + word);
				this->literal.appendDescription(word);

				buffer >> word;
				log.print("Current word is: " + word);

				if (buffer.eof()) {

					log.print("Appended to literal description: " + word);
					this->literal.appendDescription(word);
				}
			}

		} while (word != ")" && word != "|" && !buffer.eof());

		log.print("Returned literal.");
		return { true, this->literal };
	}



};




