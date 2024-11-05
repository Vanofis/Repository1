#include "LW9.h"
#define _USE_MATH_DEFINES
#include <cmath>

const double degreeToRad = M_PI / 180.0;

double CalculateA(double m, double t, double c)
{
	t *= degreeToRad;

	double cubicRoot = cbrt(m * tan(t) + abs(c * sin(t)));

	return cubicRoot + sin(92 * degreeToRad);
}

double CalculateB(double x, double y)
{
	double squareRoot = (x - 8 * y * y != 0) ? sqrt((abs(x - y) / (x + 8 * y * y))) : 0;
	double cubicRoot = (3 + y != 0) ? cbrt(pow(x, 5) + (x * y) / (pow((3 + y), 2))) : 0;

	return squareRoot + cubicRoot + pow(M_E, 5 * y);
}
