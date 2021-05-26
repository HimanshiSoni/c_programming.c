#include<stdio.h>
int main() 
{
   int i;
   printf("enter any number:");   
   scanf("%d",&i);  
   if(i<0)
     printf("\nnegative value");   
   else
     printf("\npositive value");
   return 0;
}
