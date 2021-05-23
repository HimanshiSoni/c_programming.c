#include<stdio.h>
void main()
{
   float km,m,f,i;
   printf("enter distance between two cities in km:");
   scanf("%f",&km);
   m=km*1000;
   printf("\nmeter:%f",m);
   f=m*3;
   printf("\nfoot:%f",f);
   i=f*2.54;
   printf("\ninches:%f",i);
   return 0;
}
