#include<stdio.h>
int *returnpointer(int[]);
void main()
{
    int *p;
    int a[]={1,2,3,4,5,6};
    p=returnpointer(a);
    printf("%d",*p);
}
int *returnpointer(int a[])
{
    a=a+3;
    return a;
}