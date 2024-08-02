/******************************************************************************

Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit)
*******************************************************************************/
#include <stdio.h>

int main()
{
	float c,f;
	printf("Enter the temperature in Celsius: ");
	scanf("%f",&c);
	f=(9*c/5)+32;
	printf("The temperature in Fahrenheit is %f",f);
	return 0;
}
