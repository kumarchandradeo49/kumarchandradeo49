#include<stdio.h>
int main()
{
int no,i=2,f=0,d;
printf("enter any number:");
scanf("%d",&no);
while(i<=no/2)
{
    if(no%i==0)
    f=f+1;
    i++;
}
if(f!=0)
{
    printf("not prime");
}
else
printf("p");
return 0;
}