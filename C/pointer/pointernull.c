#include<stdio.h>
void main()
{
  int *ptr1=NULL;
  int *ptr2;
  printf("%d\n",ptr1);
  printf("%d",ptr2);/*it mat show garbage value or null so
  always check it by if(*ptr1==*ptr2)*/  
}