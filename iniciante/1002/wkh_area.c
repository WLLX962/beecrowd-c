#include <math.h>

double		wkh_area(double radius)
{
	double pi = 3.14159;
	double area = pi * radius * radius;

	return round(area * 10000.0f) / 10000.0f;
}
