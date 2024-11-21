#include <stdio.h>

int main (){
int n,uni,dez,cen,milha;

printf ("Digite n ");
scanf ("%d",&n);

  uni = n % 10;
  dez = (n/10) %10;
  cen = (n/100) % 10;
  milha = n / 1000;
 
 printf ("%d \n",uni);
 printf ("%d \n",dez);
 printf ("%d \n",cen);
 printf ("%d \n",milha);
}