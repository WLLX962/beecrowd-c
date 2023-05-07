#include <stdio.h>
#include <math.h>

double		wkh_area(double radius)
{
	double pi = 3.14159;
	double area = pi * radius * radius;

	return round(area * 10000.0f) / 10000.0f;
}

int main()
{
	double radius = 0;
	scanf("%lf", &radius);
	
	printf("A=%.4lf\n", wkh_area(radius));
	return 0;
}
