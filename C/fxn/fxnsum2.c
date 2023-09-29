#include<stdio.h>
void sum();//fxn declaration
void main() 
{
    sum();  //fxn calling
    printf("\n");
    sum();
}
void sum()  //fxn definition
{
    int a,b,sum=0;
 printf("enter two numbers:");
 scanf("%d%d",&a,&b);
 sum=a+b;
 printf("sum is %d",sum);
}