#include<stdio.h>
int main()
{
   int a,b,c,s;
   printf("enter 4bit number:");
   scanf("%d",&a);
   b=a/1000;
   printf("\nfirst digit:%d",b);
   c=a%10;
   printf("\nlast digit:%d",c);
   s=b+c;
   printf("\nsum:%d",s);
   return 0;
}
