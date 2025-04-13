#include <stdio.h>
#include <stdlib.h>
#include "BasicGeekForGeek.h"

int main()
{
	EvenOddUtilities             testEvenOdd;
	MultiplicationTableUtilities testMultTable;

	int number_arr[] = { 51, 23, 35, 2, 6, 12, 96, 34 };
	int lenght;

	lenght = sizeof(number_arr) / sizeof(number_arr[0]);

//EVEN_ODD_PROBLEM

	for (int i = 0; i < lenght; i++)
	{
		printf("\n%d: %3d is %s", i, number_arr[i], testEvenOdd.bitwise_evenodd(number_arr[i]));
	}

//MULTIPLICATION_TALBLE_PROBLEM

	testMultTable.multiplication_table(lenght);

//SUM_OF_NATURALS_PROBLEM



	system("pause");
	return 0;
}