



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