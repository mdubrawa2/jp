#include<stdio.h>

void main(){
int i;
int x=0;
int j;
for(i=0;i<=4;i++)
{
printf("\n");
x++;
for(i=0;i<x;i++){
putchar('*');
}
}
printf("\n");
for(i=0;i<=4;i++){
printf("\n");
x--;
for(j=x;j>=0;j--){
putchar('*');
}
}


