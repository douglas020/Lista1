#include <stdio.h>

int main (){
float v,d;

printf ("De o valor ");
scanf ("%f",&v);

d = (v * 12 ) / 100;

printf ("Valor do desconto %.2f valor final %.2f ",d,v-d);


}