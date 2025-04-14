#include <stdlib.h>
#include <stdio.h>
#include "BasicGeekForGeek.h"

using SNU = SumNaturalNumbersUtilities;
using MTU = MultiplicationTableUtilities;
using SWU = SwapTwoValuesUtilities;
using EOU = EvenOddUtilities;

//EVEN_ODD_UTILITIES

bool EOU::even_odd(int n)
{
	return (n % 2 == 0);
}
const char* EOU::geekpushpop(int n)
{
    return (n == (n >> 1) << 1) ? "Even" : "Odd";
}
const char* EOU::even_odd_char(int n)
{
	return n % 2 ? "Odd" : "Even";
}
const char* EOU::bitwise_evenodd(int n)
{
	return n & 1 ? "Odd" : "Even";
}
const char* EOU::pushpop_evenodd(int n)
{
	int n_pop = n >> 1;
	int n_push = n_pop << 1;
	return n_push == n ? "Even" : "Odd";
}

//MULTIPLICATION_TABLE_UTILITES

void MTU::message(int n)
{
	printf("\nThe multiplication table of %d is: \n", n);
}
int MTU::multiplication_table(int n)
{
	int multiplication;

	for (int i = 0; i <= 10; i++)
	{
		multiplication = n * i;

		printf("\n%d x %2d = %3d", n, i, multiplication);
	}
	return 0;
}
void MTU::print_table(int n, int i)
{
	if (i == 11)
		return;
	printf("%d * %d = %d\n", n, i, n * i);
	i++;
	print_table(n, i);
}

//SUM_NATURAL_NUMBERS_UTILITIES

int SNU::sum_first_natural_numbers(int n)
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
int SNU::natural_formula_sum_numbers(int n)
{
	return (n * (n + 1)) / 2;
}
int SNU::anti_over_flow_sum_numbers(int n)
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

//SWAP_TO_VALUES_UTILITIES

void SWU::message(int a, int b)
{
	printf("\nLet's swap the values %d and %d of position!\n", a, b);
}
int SWU::swap_values_thrid_variable(int a, int b)
{
	int store;

	store = a;
	a = b;
	b = store;

	printf("\na = %d || b = %d", a, b);

	return 0;
}
int SWU::swap_values_without_third(int a, int b)
{
	printf("a = %d b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d b = %d\n", a, b);

	return 0;
}
