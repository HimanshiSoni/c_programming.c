#include<stdio.h>
int main() 
{
   int i;
   printf("enter any number:");   
   scanf("%d",&i);  
   if(i%2==0)
     printf("\neven"); 
   else
     printf("\nodd");   
   return 0;
}
