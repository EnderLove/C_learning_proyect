#include <stdlib.h>
#include <stdio.h>
#include "BasicGeekForGeek.h"

//EVEN_ODD_UTILITIES
const char* EvenOddUtilities::geekpushpop(int n)
{
    return (n == (n >> 1) << 1) ? "Even" : "Odd";
}
bool EvenOddUtilities::even_odd(int n)
{
	return (n % 2 == 0);
}
const char* EvenOddUtilities::even_odd_char(int n)
{
	return n % 2 ? "Odd" : "Even";
}
const char* EvenOddUtilities::bitwise_evenodd(int n)
{
	return n & 1 ? "Odd" : "Even";
}
const char* EvenOddUtilities::pushpop_evenodd(int n)
{
	int n_pop = n >> 1;
	int n_push = n_pop << 1;
	return n_push == n ? "Even" : "Odd";
}

//MULTIPLICATION_TABLE_UTILITES
int MultiplicationTableUtilities::multiplication_table(int n)
{
	int multiplication;

	for (int i = 0; i <= 10; i++)
	{
		multiplication = n * i;

		printf("\n%d x %2d = %3d", n, i, multiplication);
	}
	return 0;
}
void MultiplicationTableUtilities::print_table(int n, int i)
{
	if (i == 11)
		return;
	printf("%d * %d = %d\n", n, i, n * i);
	i++;
	print_table(n, i);
}

