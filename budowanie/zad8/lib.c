#include <stdio.h>
#include <stdlib.h>

double tab[2];

void wczytaj(char *prompt)
{

    int i;
    printf(prompt);
    for (i = 0; i < 3; i++) {
	scanf("%lf", &tab[i]);
    }

}


void iloczyn()
{
    printf("Iloczyn: %lf\n", tab[0] * tab[1] * tab[2]);
}

void maksimum()
{
    double temp;
    int i;
    temp = tab[0];
    for (i = 1; i < 3; i++) {
	if (tab[i] > temp)
	    temp = tab[i];
    }
    printf("Najwieksza: %lf\n", temp);
}

void minimum()
{
    double temp;
    int i;
    temp = tab[0];
    for (i = 1; i < 3; i++) {
	if (tab[i] < temp)
	    temp = tab[i];
    }
    printf("Najmniejszy: %lf\n", temp);
}

void suma()
{
    printf("Suma wynosi : %lf\n", tab[0] + tab[1] + tab[2]);
}
