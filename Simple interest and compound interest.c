#include<stdio.h>
#include<math.h>
void main()
{
   int p,r,t,s,c;
   printf("enter principle, rate and time:");
   scanf("%d%d%d",&p,&r,&t);
   s=p*r*t;
   c=p*pow(1+r,t)-p;
   printf("\nsimple interest:%d",s);
   printf("\ncompound interest:%d",c);
   return 0;
}
