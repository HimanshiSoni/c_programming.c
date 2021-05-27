#include<stdio.h>
int main() 
{
   int a,b,c;
   printf("enter \n1 for addition:\n2 for substraction:\n3 for multiplication:\n4 for division:");   
   scanf("%d",&c);
   printf("enter two numbers:");
   scanf("%d%d",&a,&b); 
   if(c==1)
     printf("\nanswer is %d",a+b);
   else
     if(c==2)
       printf("\nanswer is %d",a-b);
     else
       if(c==3)
         printf("\nanswer is %d",a*b);
       else
         if(c==4)
           printf("\nanswer is %d",a/b);
         else
           printf("\nInvalid input");
   return 0;
}
