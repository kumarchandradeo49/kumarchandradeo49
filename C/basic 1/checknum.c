#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    switch(num>=0)
    case 1:
    {
        switch(num==0)
        {
        case 1:
        printf("number is zero");
        break;
        default:
        printf("number is positive");
        break;
        }
        break;
        case 0:
        printf("number is negative");
        break;
    }
 return 0;
}
