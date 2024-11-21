#include <stdio.h>

int main (){
float valor,desconto,parcela,comisaod,comisaot;

printf ("Qual valor total ");
scanf ("%f",&valor);

desconto = (valor * 10)/100;
desconto = valor - desconto;

parcela = valor/3;

printf ("Parcelas %.2f em 3x\n",parcela);

comisaod = (desconto * 5)/100;
comisaot = (valor *5)/100;

printf ("Comisao com desconto %.2f \n",comisaod);
printf ("Comissao sem desconto %.2f",comisaot);

}