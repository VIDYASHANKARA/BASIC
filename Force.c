/******************************************************************************
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2

*******************************************************************************/
#include <stdio.h>
float force(float m)
{
    float f;
    f=m*9.8;
    printf("The froce on the body of mass %f is %f",m,f);
    
}
int main()
{
    float m;
    printf("Enter the mass of the body: ");
    scanf("%f",&m);
   // printf("Hello World");
    force(m);
    return 0;
}
