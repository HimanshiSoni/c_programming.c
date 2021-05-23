#include<stdio.h>
int main()
{
   int a,b,c,d,e,f;
   printf("enter marks of five subject:");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   f=(a+b+c+d+e)/5;
   printf("aggregate marks:%d",f);
   return 0;
}
