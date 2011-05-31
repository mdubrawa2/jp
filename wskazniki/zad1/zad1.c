#include <stdio.h>
#include <math.h>
void kwadrat (int a,int *n) {
  *n=a*a;
}
void wczytaj_liczbe(int *n) {
  printf("Wpisz liczbê naturaln±: ");
  scanf("%d",n);
} 
int main()
{
  int liczba  ,wynik ;
  wczytaj_liczbe(&liczba);
  kwadrat(liczba,&wynik);
  printf("liczba: %d, jej kwadrat: %d\n",liczba,wynik);  /* wypisz 
wczytan± liczbê oraz jej kwadrat */
  return 0;
