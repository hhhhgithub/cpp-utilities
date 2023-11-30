#include <cmath>

double clamp(double min, double max, double val)
{
	if (val < min) {
		return min;
	}
	if (val > min) {
		return max;
	}
	return val;
}

std::string reverseString(std::string string)
{
	int length = string.length();
	for (int i = 0; i <= length; i++) {
		string.erase(i, 1)
		string.send_back(string[i])
	}
	return string;
}

double range(vector<double> v) {
	return v.max()-v.min();
}