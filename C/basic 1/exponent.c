#include<stdio.h>
int main()
{
    int i,number,exponent;
   long power=1;
    
    printf("\n please enter your number:");
    scanf("%d",&number);
    printf("/n please enter your exponent value:");
    scanf("%d",&exponent);
    for(i=1;i<=exponent;i++)
    {
        power=power*number;
    }
        printf("\n the final result of %d power %d =%ld",number,exponent,power);
        return 0;
    

}