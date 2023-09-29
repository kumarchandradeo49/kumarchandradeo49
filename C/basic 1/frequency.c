#include<stdio.h>
int main()
{
    int i;
    int a[20]={1,2,3,4,3,2,4,5,6,7,5,4,7,7,5,7,8,9,0,8};
    int b[15];
    for(i=0;i<15;i++)
    { 
        b[i]=0;
    }
    for(i=0;i<15;i++)
    {
     b[a[i]]++;
    }
    for(i=0;i<15;i++)
    {
   printf("%d is %d times\n",i,b[i]);
    }
    return 0;
}