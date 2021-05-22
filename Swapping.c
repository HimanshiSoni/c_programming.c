#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter two numbers:");
   scanf("%d%d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("\nValue of a:%d and b:%d",a,b);
   return 0;
}
