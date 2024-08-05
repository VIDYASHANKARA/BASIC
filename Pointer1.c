/******************************************************************************

Write a program to print the address of a variable. Use this address to get the
value of the variable.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=5;
    int* j=&i;
    
    printf("The address of the variable i is %p",j);
    printf("\nThe value of variable i is %u",*j);

    return 0;
}
