/******************************************************************************
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab     Tax
2.5 – 5.0L       5%
5.0L - 10.0L    20%
Above 10.0L     30%
Note that there is no tax below 2.5L. Take income amount as an input from the user

*******************************************************************************/
#include <stdio.h>

int main()
{
    float income;
    printf("Enter the income (in L): ");
    scanf("%f", &income);
    
    if (income > 2.5 && income <= 5.0) {
        printf("Tax is 5%%\n");
    } else if (income > 5.0 && income <= 10.0) {
        printf("Tax is 20%%\n");
    } else if (income > 10.0) {
        printf("Tax is 30%%\n");
    } else {
        printf("No tax\n");
    }
    
    return 0;
}

