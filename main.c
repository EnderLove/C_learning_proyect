#include <stdio.h>
#include <stdlib.h>
#include "even_odd.h"
#include "mulTable.h"
#include "sumFirstNaturalNumbers.h"
#include "swapValues.h"
#include "closest_div_number.h"

int main()
{
	int lenght;
	int number_arr[] = { 51, 23, 35, 2, 6, 12, 96, 34 };

	lenght = sizeof(number_arr) / sizeof(number_arr[0]);

	for (int i = 0; i < lenght; i++)
	{
		//printf("\n%d: %3d is %s", i, number_arr[i], geekpushpop(number_arr[i]));
		printf("\n%d: %3d is %s", i, number_arr[i], bitwise_evenodd(number_arr[i]));
	}

	printf("\n--------------------------------------------------\n");
	multable(lenght);
	//printTable(lenght, 1);
	printf("\n--------------------------------------------------\n");
	for (int i = 1; i <= lenght; i++)
	{
		sumFirstNaturalNumbers(i);
		printf("\n%d", naturalFormulaSumNumbers(i));
		//printf("\n%d", antiOverFlowSumNumbers(i));
	}
	printf("\n--------------------------------------------------\n");

	int a = 13;
	int b = 4;

	//swapValuesThirdVariable(a, b);

	int answer_first  = closestNumberDetailed( 13, 4);
	printf("\n\nThe closest greater absolute number to %d, divisible by %d is %d\n\n",  13, 4, answer_first );
	//int answer_second = closestNumberBase(-15, 6);
	//printf("\n\nThe closest greater absolute number to %d, divisible by %d is %d\n\n", -15, 6, answer_second);

	system("pause");
	return 0;
}