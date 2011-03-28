#include <stdio.h>
#include <stdlib.h>
#include"definicje.h"

int main()
{
    double a;
    a = wczytaj("Podaj liczbe : ");
    pierwiastek(a);
    odwrotnosc(a);
    return EXIT_SUCCESS;
}

