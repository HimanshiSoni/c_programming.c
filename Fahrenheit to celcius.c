#include<stdio.h>
void main()
{
   float f,c;
   printf("enter temperature in Fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("\ntemperature in celcius:%f",c);
   return 0;
}
