#include<stdio.h>
int main()
{
    int i,even=0,odd=0;
    int a[5];
    printf("enter elements of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("no of even elements are %d:\n",even);
    printf("no of odd elements are %d:\n",odd);
    return 0;
}