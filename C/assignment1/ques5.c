#include<stdio.h>
int main()
{
    int u,v,t,a;
    float s;
    printf("enter u,a,t:");
    scanf("%d%d%d",&u,&a,&t);
    v=u+a*t;
    s=u*t+0.5*a*t*t;
    printf("v=%d\n",v);
    printf("s=%f",s);
    return 0;
}