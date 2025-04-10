#include <stdbool.h>
#include "even_odd.h"

bool even_odd(int n)
{
	return (n % 2 == 0);
}

const char* even_odd_char(int n)
{
	return n % 2 ? "Odd" : "Even";
}

const char* bitwise_evenodd(int n)
{
	return n & 1 ? "Odd" : "Even";
}

const char* pushpop_evenodd(int n)
{
	int n_pop  = n     >> 1;
	int n_push = n_pop << 1;
	
	return n_push == n ? "Even" : "Odd";
}

const char* geekpushpop(int n)
{
	return n == (n >> 1) << 1 ? "Even" : "Odd";
}