#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double wczytaj(char *prompt)
{
    double b;
    printf(prompt);
    scanf("%lf", &b);
    return b;

}

void petla(double x, double y, double z)
{

    while (x <= y) {
	if (x >= 0) {
	    printf("%4f %4f \n", x, sqrt(x));
	} else {
	    printf("Nie ma pierwiastka z liczby: %lf \n", x);

	}
	x = x + z;
    }

}
