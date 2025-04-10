#include <stdio.h>
#include "sumFirstNaturalNumbers.h"

int sumFirstNaturalNumbers(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i != n)
			printf("%d + ", i);
		else
			printf("%d", i);
		sum = sum + i;
	}
	printf(" = %d\n", sum);

	return sum;
}

int naturalFormulaSumNumbers(int n)
{
	return (n * (n + 1)) / 2;
}

int antiOverFlowSumNumbers(int n)
{
	if (n % 2 == 0)

		// Here multiplying by 1LL help to 
		// perform calculations in long long, 
		// so that answer should not be overflowed
		return (n / 2) * 1LL * (n + 1);

	// If n is odd, (n+1) must be even
	else

		// Here multiplying by 1LL help to 
		// perform calculations in long long, 
		// so that answer should not be overflowed
		return  ((n + 1) / 2) * 1LL * n;
}