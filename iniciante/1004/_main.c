#include <stdio.h>

int		wkh_multiply(int a, int b)
{
	return a * b;
}

int main()
{
	int a = 0;
	int b = 0;

	scanf("%i", &a);
	scanf("%i", &b);

	printf("PROD = %i\n", wkh_multiply(a, b));
	return 0;
}
