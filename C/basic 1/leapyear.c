//wrong
#include<stdio.h>
int main()
{
    int year;
    printf("enter year");
    scanf("%d",&year);
    if(year%4==0 && year%100==0 || year%400==0)
    printf("entered year is leap year");
    else
    printf("entered year is not leap year");
    return 0;
}