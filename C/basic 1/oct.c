#include<stdio.h>
int main()
{
    int num,oct=0,rem=0,place=1;
    printf("enter decimal number");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%8;
        oct=oct+rem*place;
        num/=8;
        place*=10;
    }
    printf("octal equivalent is %d",oct);
    return 0;
    
}  