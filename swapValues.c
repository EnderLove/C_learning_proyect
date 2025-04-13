#include <stdio.h>
#include "swapValues.h"

int swapValuesThirdVariable(int a, int b)
{
	int store;

	store = a;
	a     = b;
	b     = store; 

	printf("\na = %d || b = %d", a, b);

	return 0;
}

int swapValuesWhioutThird(int a, int b)
{
	printf("a = %d b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d b = %d\n", a, b);

	return 0;
}