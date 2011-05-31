#include <stdio.h>
#include <stdlib.h>

#include "lib.h"
int main()
{
    double a, b, c;
    a = wczytaj("Podaj poczatek: ");
    b = wczytaj("Podaj koniec: ");
    c = wczytaj("Podaj krok: ");
    petla(a, b, c);

    return EXIT_SUCCESS;
}
