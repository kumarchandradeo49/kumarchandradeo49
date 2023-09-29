#include<stdio.h>
int main()
{
    int i,j,n,temp;
    int a[100];
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=a[i];
        }
    }
  }
    printf("array elements in ascending order are\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    return 0;

}