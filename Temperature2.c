/******************************************************************************

Write a function to convert Celsius temperature into Fahrenheit
*******************************************************************************/
#include <stdio.h>
float CtoF(float c)
{
    float f;
    f=(9*c/5)+32;
    printf("The %f degree celsius is %f Fahrenheit",c,f);
    
}
int main()
{
    float c;
    scanf("%f",&c);
   // printf("Hello World");
    CtoF(c);
    return 0;
}
