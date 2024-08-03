/******************************************************************************
Write a program to calculate the factorial of a given number using a for loop
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum=1,i=1;
    printf("Enter the number n: ");
    scanf("%d",&n);
    while(i<n+1)
    {
        sum*=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

