#include<stdio.h>
struct bank{
    char name[100];
    int acc;
    int bal;
};
int main()
{
    struct bank a[3];
    int i;
    for(i=0;i<3;i++)
    {
    printf("enter name accountno and balance:",i+1);
    scanf("%s%d%d",a[i].name,&a[i].acc,&a[i].bal);
    }
    for(i=0;i<3;i++)
    {
       if(a[i].bal<100)
       {
         printf("name is %s \taccountno is %d \tbalance is %d:\n",a[i].name,a[i].acc,a[i].bal);
       }
    }
    return 0;



}