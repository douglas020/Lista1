#include <stdio.h>

int main (){
int n,c,d,u;
printf ("Digite N");
scanf ("%d",&n);

  u = n % 10; // Último dígito
    d = (n / 10) % 10; // Segundo dígito
    c = n / 100; // Primeiro dígito

  printf ("%d%d%d",u,d,c);

}