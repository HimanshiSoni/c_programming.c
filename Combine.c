#include<stdio.h>
int main()
{
   int a,b,c,d,e,f;
   printf("enter two values:");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("addition:%d",c);
   printf("enter two values:");
   scanf("%d %d",&a,&b);
   c=a-b;
   printf("substraction:%d",c);
   printf("enter two values:");
   scanf("%d %d",&a,&b);
   c=a*b;
   printf("multiplication:%d",c);
   printf("enter two values:");
   scanf("%d %d",&a,&b);
   c=a/b;
   printf("division:%d",c);
   printf("enter five values:");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   f=(a+b+c+d+e)/5;
   printf("average:%d",f);
   return 0;
}
