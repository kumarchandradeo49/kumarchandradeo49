#include<stdio.h>
int main()
{
    int i,n,search;
    int a[100];
    int k=0;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements to search:");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("%d is at position %d",search,n);
    }
    else
    {
        printf("elements not present");
    }

    return 0;

}