#pragma once

class Probability
{
private:
	double probability = 0;

	class DoubleToProbabilityAdapter {

	private:
		double probability;

	public:
		DoubleToProbabilityAdapter(double &x) {
			if (x < 0) {
				this->probability = 0;
			}
			else if (x > 1) {
				this->probability = 1;
			}
			else {
				this->probability = x;
			}
		}

		double getProbability() const {
			return this->probability;
		}
	};

public:

	double getProbability() const {
		return probability;
	}

	void setProbability(double &probability) {
		DoubleToProbabilityAdapter adapter(probability);
		this->probability = adapter.getProbability();
	}
};




