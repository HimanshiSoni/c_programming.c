#include<stdio.h>
#include<math.h>
int main() 
{
   int a,b,c,ans1,ans2,d;
   printf("enter coefficient of x^2 x and x^0:");   
   scanf("%d%d%d",&a,&b,&c);
   d=(b*b)-(4*a*c); 
   ans1=(-b+sqrt(d))/(2*a);
   ans2=(-b-sqrt(d))/(2*a);
   printf("\n answer is %d and %d",ans1,ans2);
   return 0;
}
