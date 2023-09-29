#include<stdio.h>
int main()
{
    int i,n;
    int a[100];
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are\n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
    
    return 0;

}