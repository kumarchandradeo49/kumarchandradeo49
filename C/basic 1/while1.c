#include<stdio.h>
int main()
{
    int p=0,n=0,z=0 ,num,limit;
    printf("enter limit:");
    scanf("%d",&limit);
    printf("enter %d number :\n",limit);
   
    while(limit)
    {
        scanf("%d",&num);
        if(num>0)
        {
        p++;
        }
        else if(num==0)
        {
        z++;
        }
        else
        {
        n++;
        }
        limit--;
    }
    printf("number of positive integer is %d\n number of negative integer is %d\n number of zero is %d ",p,n,z);
    return 0;
}