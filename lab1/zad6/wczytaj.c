#include <stdio.h>
#include <stdlib.h>

double wczytaj()
{
    double b;
    printf("Podaj liczbe: \n");
    scanf("%lf", &b);
    if (b < 0) {
	printf("Nie ma pierwiastka z tej liczby.Koncze program \n");
	return -1;
    } else {
	return b;
    }
}
