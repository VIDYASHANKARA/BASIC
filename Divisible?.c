/******************************************************************************

Write a program to check whether a number is divisible by 97 or not.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    printf("What is the number: ");
    scanf("%d",&n);
    if(n%97==0)
    {
        printf("It is divisible ");
    }
    else
    {
        printf("Its not divisible ");
    }

    return 0;
}
