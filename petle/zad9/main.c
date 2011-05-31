#include<stdio.h>
#include<stdlib.h>
#include"lib.h"

int main(int argc, char *argv[])
{
    FILE *in_handle;
    wczytaj_dane_z_pliku(&in_handle, argc, argv);
    pobierz_dane_z_pliku(in_handle, argv[1]);
    return EXIT_SUCCESS;
}
