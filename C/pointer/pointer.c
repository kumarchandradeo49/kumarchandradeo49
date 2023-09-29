#include<stdio.h>
int main()
{
    int num1,num2;
    int *ptr1=&num1,*ptr2=&num2;
    printf("pointer:TO FIND THE MAXIMUM OF TWO NUMBERS:\n");
    printf("enter first number:\n");
    scanf("%d",ptr1);
    printf("enter second number:\n");
    scanf("%d",ptr2);
if(*ptr1>*ptr2)
{
    printf("%d is maximum number",*ptr1);
}
else{
    printf("%d is maximum number",*ptr2);
}
return 0;
}