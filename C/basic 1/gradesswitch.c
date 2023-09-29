#include<stdio.h>
int main()
{
    int a,b,product=1,i=1;
    printf("enter value a");
    scanf("%d",&a);
    printf("enter value b");
    scanf("%d",&b);
    while(i<=b)
    {
    product=product*a;
    i++;
    }
    printf("%d",product);
    return 0;








}
