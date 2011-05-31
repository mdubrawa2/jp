#include <stdio.h>
#include <stdlib.h>
#include"definicje.h"



int main()
{
    double a;
    a = wczytaj();
    if (a > 0)
	printf("Pierwiastek z tej liczby wynosi: %lf\n", 
pierwiastek(a));
    return EXIT_SUCCESS;
}
