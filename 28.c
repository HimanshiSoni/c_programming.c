#include<stdio.h>
int main() 
{
   int i;
   printf("enter any number:");   
   scanf("%d",&i);  
   if(i<0)
     i*=-1;   
   printf("\nabsolute value:%d",i);
   return 0;
}
