#include<stdio.h>
int main()
{
    int i;
    int a[6];
    float avg,sum=0;
    
    printf("enter elements:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is %f\n",sum);
    printf("avg is %f",sum/6);
    return 0;
}