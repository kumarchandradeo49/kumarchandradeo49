#include<stdio.h>
void main()
{
int year;

    printf("enter any year:");
    scanf("%d",&year);
    if((year%4==0) && (year%100==0) && (year%400==0))
    {
        printf("is leap year");
    }
    else
    {
        printf("is not a leap year");
    }
}