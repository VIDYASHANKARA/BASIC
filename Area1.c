/******************************************************************************

Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int radius,height;
    float area,carea;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("The area of the circle is: %f",area);
    printf("\nEnter the height of the cylinder: ");
    scanf("%d",&height);
    carea=area*height;
    printf("The area of hte cylinder is %f",carea);
    return 0;
}
