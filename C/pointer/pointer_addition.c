#include<stdio.h>
int main()
{
  int a[5]={2,3,4,5,2};
  int *p=&a[0];
  printf("value is %d:",*p);
  p=p+3;
  printf("value of p is %d:",*p);
  return 0;
}