#include <stdio.h>
#include <math.h>
#include "sqr.h"

int main () 
{
	float a, b, c, d, x1, x2;

	printf("input coefficients:\n");

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);

	d = (b * b) - (4 * a * c);

	int result = quad(a, b, d, &x1, &x2);

	if (result == FOUND_2_ROOTS) 
	{
		printf("x1 = %2.2f, x2 = %2.2f", x1, x2);
	}

	if (result == FOUND_1_ROOT) 
	{
		printf("x1 = x2 = %2.2f", x1);
	}

	if (result == ROOT_NOT_FOUND) 
	{
		printf("no roots");
	}

	return 0;
}
