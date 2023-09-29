#include<stdio.h>
int main()
{ int a,b,c=1;
  printf("enter a:");
  scanf("%d",&a);
  printf("enter b:");
  scanf("%d",&b);
  while(b!=0)
  {
    c=c*a;
    b--;
  }
 printf("a raise to the power b is %d",c);


    return 0;
}