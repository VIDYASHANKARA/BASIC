/******************************************************************************
Write a program to print multiplication table of a given number n.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number for which multiplication table t be written: ");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d X %d = %d\n",i,n,i*n);
    }
    return 0;
}

