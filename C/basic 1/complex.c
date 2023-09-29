#include<stdio.h>
struct complex {
    int realpart;
    int imgpart;
};
int main()
{
      struct complex N[2];
      int i;
      for(i=0;i<2;i++)
      {
        printf("enter realpart and imgpart of N%d:",i);
        scanf("%d%d",&N[i].realpart,&N[i].imgpart);
      }  
        int real_sum;
        int img_sum;
        real_sum=N[0].realpart+N[1].realpart;
        img_sum=N[0].imgpart+N[1].imgpart;
        printf("sum is %d+%dj",real_sum,img_sum);
    
    return 0;
}