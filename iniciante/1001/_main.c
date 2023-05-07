#include <stdio.h>

int		wkh_sum(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 0;
	int b = 0;

	scanf("%i", &a);
	scanf("%i", &b);

	printf("X = %i\n", wkh_sum(a, b));
	return 0;
}
