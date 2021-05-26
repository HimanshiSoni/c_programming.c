#include<stdio.h>
int main() 
{
   int a,b,c;
   printf("enter any three number:");   
   scanf("%d%d%d",&a,&b,&c);  
   if((a<b)&&(c<b))
     printf("\nmaximum is b:%d",b);   
   else 
     if((b<a)&&(c<a))
       printf("\nmaximum is a:%d",a);
     else
       if((a<c)&&(b<c)) 
         printf("nmaximum is c:%d",c);
       else
         printf("\nthey are same");
   return 0;
}
