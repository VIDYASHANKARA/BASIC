/******************************************************************************
Write a program to find greatest of four numbers entered by the user.
*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,b,c,d,big;
   printf("Enter the four numbers: ");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   big=a;
   if(b>a && b>c && b>d)
   {
       big=b;
   }
   else if(c>b && c>a && c>d)
   {
       big=c;
   }
   else if(d>a && d>b && d>c)
   {
       big=d;
   }
   else
   {
       big=a;
   }
   printf("The greatest of four numbers is: %d",big);
   
    return 0;
}

