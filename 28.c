#include<stdio.h>
int main() 
{
   int a,b;
   printf("enter any two number:");   
   scanf("%d%d",&a,&b);  
   if(a<b)
     printf("\nmaximum is b:%d",b);   
   else 
     if(b<a)
       printf("\nmaximum is a:%d",a);
     else 
       printf("\nboth are same");
   return 0;
}
