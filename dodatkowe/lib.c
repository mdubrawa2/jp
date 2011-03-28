#include <stdio.h>

double a, b, x;
int wynik = 0;			/* sluzy do okreslenia typu rownania 0 
oznacza ze rowanie ma jedno rozwiazanie */

void wczytaj_dane(char *prompt)
{
    printf(prompt);
    scanf("%lf", &a);
    scanf("%lf", &b);
}

void oblicz_wynik()
{
    if (a == 0 && b == 0) {
	wynik = 1;		/* 1 oznacza rowanie tozsamosciowe */
    }
    if (a == 0 && b != 0) {
	wynik = 2;		/* 2 oznacza rowanie sprzeczne */
    }

}

void wypisz_wynik()
{
    if (wynik == 1) {
	printf("Rownanie ma nieskonczenie wiele rozwiazan\n");
    }

    if (wynik == 2) {
	printf("Rownanie sprzeczne brak rozwiazan\n");
    }

    if (wynik == 0) {
	printf("Rozwiazanie rownania: x=%0.4lf\n", -b / a);
    }





}
