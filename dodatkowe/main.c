#include <stdlib.h>
#include <stdio.h>
#include"lib.h"

/* Program liczy proste rownanie postaci ax +b =0  */

int main()
{
    wczytaj_dane("Podaj liczby a,b: \n");
    oblicz_wynik();
    wypisz_wynik();

    return EXIT_SUCCESS;
}
