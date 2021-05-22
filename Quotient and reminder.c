#include<stdio.h>
void main()
{
   int a,b,c,d;
   printf("enter two numbers:");
   scanf("%d%d",&a,&b);
   c=a/b;
   d=a%b;
   printf("\nquotient:%d",c);
   printf("\nreminder:%d",d);
   return 0;
}
