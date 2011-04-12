#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void oblicz_wynik(unsigned int u, double xx, double yy)
{
    double srednia;
    srednia = (xx * 100) / u;
    printf("Dla kilometrow=%d, litrow=%.2lf oraz ceny=%.2lf\n", u, xx, 
yy);
    printf("Na 100 km przejechales srednio: %.4lf litrow paliwa\n",
	   srednia);
    printf("100 km kosztuje cie srednio: %.2lf zl\n", srednia * yy);
    printf("-------------------------------------------------------\n");
}

void pobierz_dane_z_pliku(FILE * plik, char *nazw)
{
    char bufor[BUFSIZ];
    short wartosc_scanf;
    unsigned int kilometry;
    double litry, cena;
    plik = fopen(nazw, "r");
    while (fgets(bufor, BUFSIZ, plik) != NULL) {
	wartosc_scanf =
	    sscanf(bufor, "%u %lf %lf", &kilometry, &litry, &cena);
	if (wartosc_scanf == 3) {
	    oblicz_wynik(kilometry, litry, cena);
	}
    }
    fclose(plik);
}




void wczytaj_dane_z_pliku(FILE ** plik, int argc, char *argv[],
			  char *nazw[])
{
    char *prog = argv[1];	/*nazwa podana z stdin */
    if (argc == 1) {		/*jesli brak argumentow zakoncz program 
*/
	printf("Nie podales nazwy pliku. Koncze program\n");

	exit(1);
    }

    if ((*plik = fopen(prog, "r")) == NULL) {
	fprintf(stderr, "%s:Nie ma takiego pliku \n", prog);
	exit(1);
    } else {

    }
    fclose(*plik);
}
