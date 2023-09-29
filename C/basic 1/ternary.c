#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    big=a>b?(a>c?a:c):(b>c?b:c);
    printf("greatest number is %d",big);
    return 0;
}