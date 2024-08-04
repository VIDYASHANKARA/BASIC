/******************************************************************************
Write a program using recursion to calculate nth element of Fibonacci series.

*******************************************************************************/
/***
 first=1
 second=1
 third=first+second;
 first=second;
 second=third;
 
 
  
  ***/
#include <stdio.h>
int fib(int n)
{
    int first=1,second=1,third,i;
    printf("%d ",first);
    printf("%d ",second);
    for(i=0;i<n-2;i++)
    {
        third=first+second;
        printf("%d ",third);
        first=second;
        second=third;
    }
    printf("\n Therefore the %d element in the Fibonacci series is %d",n,third);
}
int main()
{
    int n;
    printf("Enter the value n: ");
    scanf("%d",&n);
   // printf("Hello World");
    fib(n);
    return 0;
}
