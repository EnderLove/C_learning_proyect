#include <stdio.h>
#include <stdlib.h>
#include "BasicGeekForGeek.h"

int main()
{
	SwapTwoValuesUtilities       testSwapNumber;
	SumNaturalNumbersUtilities   testSumNatural;
	MultiplicationTableUtilities testMultTable;
	EvenOddUtilities             testEvenOdd;
	ClosestDivNumberUtilities    testClosestDiv;
	OppositeFaceDiceUtilities    testOppositeFace;

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
	
	printf("\n");
	testMultTable.message(lenght);
	testMultTable.multiplication_table(lenght);
	printf("\n");

//SUM_OF_NATURALS_PROBLEM

	printf("\n");
	testSumNatural.sum_first_natural_numbers(lenght);
	printf("\n");

//SWAP_TWO_NUMBERS_PROBLEM

	printf("\n");
	testSwapNumber.message(a, b);
	testSwapNumber.swap_values_without_third(a, b);
	printf("\n");

//CLOSEST_DIV_NUMBER_PROBLEM

	printf("\n");
	testClosestDiv.closest_number_detailed(a + 40, b);
	printf("\n");
	
//OPPOSITE_FACE_DICE_PROBLEM

	int dice_face01 = testOppositeFace.opposite_face_dice_if  ( 8 );
	int dice_face02 = testOppositeFace.opposite_face_dice_sum ( 3 );
	
	printf("%d", dice_face02);

//---------------------------------------------------------------------------	

	printf("\n");
	system("pause");
	return 0;
}