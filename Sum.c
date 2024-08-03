/******************************************************************************
Write a program to sum first n natural numbers using while loop.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=0,i=0;
    printf("Enter the number n: ");
    scanf("%d",&n);
    while(i<n+1)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

