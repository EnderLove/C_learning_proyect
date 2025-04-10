#include <stdio.h>

int multable(int n)
{
	int multiplication;

	for (int i = 0; i <= 10; i++)
	{
		multiplication = n * i;

		printf("\n%d x %2d = %3d", n, i, multiplication);
	}
}	

int printTable(int n, int i)
{
	if (i == 11) return;

	printf("\n%d x %2d = %3d", n, i, n * i);
	i++;
	printTable(n, i);
}