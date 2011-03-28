/* Program ten dla dw.ch liczb wczytanych z klawiatury
   wypisuje, kt.ra z nich jest wi.ksza. */
#include <stdio.h>
int main()
{
   int licz1, licz2 ;

   printf("Podaj pierwsza liczbe: ");
   scanf("%d", &licz1);
   printf("Podaj druga liczbe: ");
   scanf("%d", &licz2);
   if (licz1>licz2)
     printf("Liczba %d jest wieksza\n",licz1);
   else
     printf("Liczba %d jest wieksza\n",licz2);
   return 0;
}
