#pragma once

#include "../Utility/Log.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include <set>

class Database {

private:

public:
	Database() {
	}

	std::vector<std::string> load(std::string path) {
		Log log("Load", "File");

		/* Open file on path on mode read (in). */
		std::ifstream file(path);

		/* Create list of buffers to read rules. */
		std::vector<std::string> data;

		/* Check if file exists. */
		if (file.is_open()) {

			log.print("Opened file.");
			
			/* Check if is not the end of file*/
			while (!file.eof()) {

				log.print("Not eof!");

				/* Move line from file on disk to string on ram.*/
				std::string text;
				std::getline(file, text);

				/* Insert new buffer on list of buffer. */
				data.push_back(text);
			}
		}

		return data;
	}

};