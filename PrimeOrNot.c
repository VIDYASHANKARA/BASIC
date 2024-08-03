/******************************************************************************
Write a program to check whether a given number is prime or not using loops
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,i=1;
    printf("Enter the number n: ");
    scanf("%d",&n);
    while(i<n+1)
    {
        if(n%i==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==n+1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    return 0;
}

