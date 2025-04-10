#include <stdio.h>
#include <stdbool.h>
#include "average_note.h"

bool better_than_average(const int class_points[], int class_size, int your_points)
{
	int sum = your_points;
	int average = 0;

	for (int i = 0; i < class_size; i++)
	{
		sum += class_points[i];
	}

	return your_points > average / class_size;
}