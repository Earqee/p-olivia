#pragma once

#include <iostream>
#include <string>

class Log {

private:
	std::string verb, action;

public:
	Log(std::string verb, std::string action) {
		this->verb = verb;
		this->action = action;
		start();
	}

	~Log() {
		end();
	}

	std::string format() {
		return verb + "-ing of " + action;
	}

	void start() {
		std::cout << std::endl << "[Started] " << format() << std::endl;
	}

	void end() {
		std::cout << std::endl << "[Ended] " << format() << std::endl;
	}

	void print(std::string text) {
		std::cout << std::endl << "[Processing (" << format() << ")] " << text << std::endl;
	}

	void error() {
		std::cout << std::endl << "[Error] Couldn't finish  " << format() << std::endl;
	}
};
