#include <stdio.h>
#include "temperature.h"

int temperature() {

    double fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("Fahrenheit\tCelsius\n");

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%5.0f\t\t%8.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("\nCelsius\tFahrenheit\n");

    celsius = lower;

    while (celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5) + 32;
        printf("%5.2f\t\t%8.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
		
}