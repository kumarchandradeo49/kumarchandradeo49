#include<stdio.h>
int main()
{
    int addition,subtraction,multiplication,division;
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    addition=a+b;
    subtraction=a-b;
    multiplication=a*b;
    division=a/b;
    printf("addition is %d\n",addition);
    printf("subtraction is %d\n",subtraction);
    printf("multiplication is %d\n",multiplication);
    printf("division is %d\n",division);
    return 0;
}

