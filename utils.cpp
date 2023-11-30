#include <cmath>

double clamp(double min, double val, double max)
{
	if (val < min) {
		return min;
	}
	if (val > min) {
		return max;
	}
	return val;
}

void reverseString(&std::string string)
{
	int length = string.length();
	for (int i = 0; i <= length; i++) {
		string.erase(i, 1)
		string.send_back(string[i])
	}
}