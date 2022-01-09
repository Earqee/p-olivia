#pragma once

class Description
{
private:
	std::string description;

public:
	Description() {}

	Description(std::string description) {
		this->description = description;
	}

	std::string getString() const {
		return this->description;
	}

	void setDescription(Description description) {
		this->description = description.getString();
	}

	void appendDescription(const std::string description) {
		this->description += description;
	}

	void appendDescription(Description description) {
		this->description += description.getString();
	}

};
