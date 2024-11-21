#include <stdio.h>

int main(){
float in1,in2,in3,premio,totalinv;
float ganho;

printf ("Valor do intesmento 1");
scanf ("%f",&in1);

printf ("Valor do intesmento 2 ");
scanf ("%f",&in2);

printf ("Valor do intesmento 3 ");
scanf ("%f",&in3);

printf ("qual valor do premio ");
scanf ("%f",&premio);

totalinv = in1+in2+in3;

ganho  = (in1/totalinv) * premio;

printf ("investidor 1 ganhou %.2f \n",ganho);

ganho  = (in2/totalinv) * premio;

printf ("investidor 2 ganhou %.2f \n",ganho);

ganho  = (in3/totalinv) * premio;

printf ("investidor 3 ganhou %.2f \n",ganho);
}