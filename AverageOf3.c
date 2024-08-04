/******************************************************************************

Write a program using function to find average of three numbers.
*******************************************************************************/
#include <stdio.h>
int avg(a,b,c)
{
    printf("The average of %d , %d and %d is %f",a,b,c,(a+b+c)/3.0);
}
int main()
{
   // printf("Hello World");
    avg(1,2,3);
    return 0;
}
