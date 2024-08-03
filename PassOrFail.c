/******************************************************************************

Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[3],i,total,sum=0;
    printf("Please enter the marks of three subjects(seperated by a space): ");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    total=sum/3;
    if(total>=40 && a[0]>=33 && a[1]>=33 && a[2]>=33)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
