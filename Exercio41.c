#include <stdio.h> 

int main (){
float valorh,horas,s,imposto;


printf ("Qual valor hora");
scanf ("%f",&valorh);

printf ("Quantas horas trabalhou ");
scanf ("%f",&horas);

s = 25 * horas * valorh;
imposto = (s * 10)/100;
printf ("Seu salario %.2f bruto \n",s);
printf ("O imposto %.2f \n",imposto);
printf ("Seu salario %.2f bruto \n",s-imposto);

}