#include <stdio.h>

int main (){
float P=780000,p,s,t;

p = (P * 46) /100;
s = (P * 32) /100;
t = P -p -s;

printf ("Primeiro ganhou %.2f \n",p);
printf ("Segundo ganhou %.2f \n",s);
printf ("Terceiro ganhou %.2f \n",t);


}