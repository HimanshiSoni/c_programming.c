#include<stdio.h>
int main() 
{
   int a;
   printf("enter any year:");   
   scanf("%d",&a);  
   if(a%4==0)
     printf("\nit is a leap year");   
   else 
     printf("\nit is not a leap year");
   return 0;
}
