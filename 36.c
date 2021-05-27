#include<stdio.h>
int main() 
{
   int c;
   printf("enter number between 1-7:");   
   scanf("%d",&c);
   if(c==1)
     printf("\nSunday");
   else
     if(c==2)
       printf("\nMonday");
     else
       if(c==3)
         printf("\nTuesday");
       else
         if(c==4)
           printf("\nWednesday");
         else
           if(c==5)
             printf("\nThursday");
           else
             if(c==6)
               printf("\nFriday");
             else
               if(c==7)
                 printf("\nSaturday");
               else
                 printf("\nInvalid input");
   return 0;
}
