#include<stdio.h>
int main()
{
    int x,a,b,c=0;
    printf("enter number");
    scanf("%d",&a);
    x=a;
    while(x>0)
    {
      b=x%10;
      x=x/10;
      c=c*10+b;
    }
    if(c==a)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}