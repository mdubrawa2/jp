#include<stdio.h>

void wczt(int *tab, int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Podaj  liczbe ");
scanf("%d",& tab[i]);
printf("\n");
}
}


int max(int *tab, int n)
{

int i;
int y=0;

for (i=0;i<n;i++)
{
if (tab[i]>y)
y=tab[i];

}
return y;
}



int min(int *tab, int n)
{
int i;
int x;

for(i=0;i<n;i++)
{
if (tab[i]<x)
x=tab[i];
}
return x;
}

