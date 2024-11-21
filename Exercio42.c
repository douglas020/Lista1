#include <stdio.h>

int main (){
float s,sb,imposto;

printf ("Qual seu salario  ");
scanf ("%f",&s);

sb = (s * 5) /100;
sb = sb+s;
imposto = (sb * 7) / 100;

printf ("Seu salario bruto %.2f \n",sb);
printf ("Imposto %.2f \n seu salrio %.2f",imposto,sb-imposto);


}