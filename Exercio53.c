#include <stdio.h>

int main (){
float l,a,preso,valor,peri;

printf ("De o comprimeto ");
scanf ("%f",&l);

printf ("De a altura");
scanf ("%f",&a);

printf ("Preso da tela ");
scanf ("%f",&preso);

 peri = 2 *  (l + a );
 valor = peri * preso;

 printf  ("Valor a pagar %.2f",valor);


}