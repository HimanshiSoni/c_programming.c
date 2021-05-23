#include<stdio.h>
#include<math.h>

int main () {
   double a,f,i;
   printf("enter any floating point value:");
   scanf("%lf",&a);
   f=modf(a,&i);
   printf("Integral part = %lf\n",i);
   printf("Fraction Part = %lf \n",f); 
   return 0;
}
