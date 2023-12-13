#include <iostream>
#include <vector>

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
double pi = 3.1415926535897932384;

double circumference(double d){
	return d*3.1415926535897932384;
}

double circleArea(double r){
	return 3.1415926535897932384 * r * r;
}