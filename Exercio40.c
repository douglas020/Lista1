#include <stdio.h>

int main(){
int d;
float s,sl;
printf ("Quando dias trabalhou Mario ");
scanf ("%d",&d);

s =(float) d * 30;

sl = (s * 8)/100;

printf ("Seu salario bruto %f \n",s);
printf ("O imposto %.2f \n",sl);
printf ("Seu salario liquido %.2f",s-sl);




}