#include<stdio.h>
int main()
{
    int i;
    int a[5],b[5],c[5];
    printf("enter elements of array a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter elements of array b:\n");
     for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
  
  for(i=0;i<5;i++)
  {
    c[i]=a[i]+b[i];
   printf("sum of array at index %d is %d\n",i,c[i]);
   printf("\n");
  }
  return 0;
}