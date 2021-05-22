#include<stdio.h>
void main()
{
   float r,pi=22/7,area,per;
   printf("enter radius of circle:");
   scanf("%d",&r);
   area=pi*r*r;
   per=2*pi*r;
   printf("\narea of circle:%d",area);
   printf("\nperimeter of circle:%d",per);
   return 0;
}
