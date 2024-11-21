#include <stdio.h>

int main(){
float a,r,v;

printf ("De o raio ");
scanf ("%f",&r);

printf ("De o altura ");
scanf ("%f",&a);

v = 1.14 * (r * r) * a;

printf ("volume %.2f",v);


}