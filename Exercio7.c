#include <stdio.h>

int main (){
 int c,f;

 printf ("De a temperatura em Fahrenheit ");
 scanf ("%d",&f);

 f = f -32;
 c = f * 5 /9;

 printf ("Em celcius %d",c);


}