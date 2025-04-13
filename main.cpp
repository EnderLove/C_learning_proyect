#include <stdio.h>
#include <stdlib.h>
#include "BasicGeekForGeek.h"

int main()
{
	SwapTwoValuesUtilities       testSwapNumber;
	SumNaturalNumbersUtilities   testSumNatural;
	MultiplicationTableUtilities testMultTable;
	EvenOddUtilities             testEvenOdd;
	
	int a = 10;
	int b =  5;

	int number_arr[] = { 51, 23, 35, 2, 6, 12, 96, 34 };
	int lenght;

	lenght = sizeof(number_arr) / sizeof(number_arr[0]);

//EVEN_ODD_PROBLEM

	for (int i = 0; i < lenght; i++)
	{
		printf("\n%d: %3d is %s", i, number_arr[i], testEvenOdd.bitwise_evenodd(number_arr[i]));
	}
	printf("\n");

//MULTIPLICATION_TALBLE_PROBLEM

	testMultTable.message(lenght);
	testMultTable.multiplication_table(lenght);
	printf("\n");

//SUM_OF_NATURALS_PROBLEM

	printf("\n");
	testSumNatural.sum_first_natural_numbers(lenght);

//SWAP_TWO_NUMBERS_PROBLEM

	printf("\n");
	testSwapNumber.message(a, b);
	testSwapNumber.swap_values_without_third(a, b);

	system("pause");
	return 0;
}