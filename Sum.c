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

/*****

Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8.

#include <stdio.h>

int main()
{
    int n,sum=0,i=0;
    printf("Enter the number n: ");
    scanf("%d",&n);
    while(i<n+1)
    {
        i*=8;
        sum+=i;
        i/=8;
        i++;
    }
    printf("%d",sum);
    return 0;
}


*****/
