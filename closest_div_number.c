#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "closest_div_number.h"

int closestNumberBase(int n, int m)
{
	int d = n / m;
	int r1 = (d * m);
	int r2 = (d * m) + ((d > 0) ? m : -m);

	if (n - r1 < r2 - n) 
		return abs(r1);
	else
		return abs(r2);
}

int closestNumberDetailed(int n, int m)
{
	int d = n / m;
	int r1 = (d * m);
	int r2 = (d * m) + ((d > 0) ? m : -m);

	printf("\nR1 = %d\nR2 = %d\n\n", r1, r2);

	if (n - r1 < r2 - n)
	{
		for (int i = r1; i <= r2; i++)
		{
			printf("%d, ", i);
		}
		return abs(r1);
	}
	else 
	{
		for (int i = r2; i <= r1; i++)
		{
			printf("%d, ", i);
		}
		return abs(r2);
	}
}