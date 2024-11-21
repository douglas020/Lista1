#include <stdio.h>
#include <math.h>

int main(){
float a,b,r;

printf ("De valor de a ");
scanf ("%f",&a);

printf ("De valor de b ");
scanf ("%f",&b);

r = (a*a) + (b*b);

r = sqrt (r);
printf ("A hipotenusa %.2f",r);
}