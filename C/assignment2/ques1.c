#include<stdio.h>
int main()
{ int a,b,c,big;
  printf("enter a,b,c:");
  scanf("%d%d%d",&a,&b,&c);
  big=a>b?(a>c?a:c):(b>c?b:c);
  printf("biggest number among a,b and c is %d",big);

 return 0;
}