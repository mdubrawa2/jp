#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double wczytaj(char *prompt)
{
    double b;
    printf(prompt);
    scanf("%lf", &b);
    return b;
}


void odwrotnosc(double c)
{
    if (c == 0) {
	printf("Nie istnieje liczba odwrotna tej liczby\n");
    } else {
	printf("Odwrotnosc tej liczby wynosi: %lf\n", 1 / c);
    }

}

void pierwiastek(double a)
{

    if (a < 0) {
	printf("Nie ma pierwiastka z tej liczby\n");
    } else {
	printf("Pierwiastek z tej liczby wynosi: %lf\n", sqrt(a));
    }

}
