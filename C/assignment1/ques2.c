#include<stdio.h>
int main()
{
    int radius;
    float area,circumference;
    printf("enter radius:");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area is %f\n",area);
    printf("circumference is %f",circumference);
    return 0;
}