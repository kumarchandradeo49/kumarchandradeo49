#include<stdio.h>
int main()
{
    int side,volume;
    printf("enter side:");
    scanf("%d",&side);
    volume=side*side*side;
    printf("volume of cube is =%d",volume);
    return 0;
}