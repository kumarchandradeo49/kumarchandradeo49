#include<stdio.h>
struct bank{
    char name[100];
    int acc;
    int bal;
};
int main()
{
    struct bank a[3];
    int i,ch,amount;
    struct bank *p=a;
    for(i=0;i<3;i++)
    {
      printf("enter name accountno and balance:",i+1);
      scanf("%s%d%d",(p+i)->name,&(p+i)->acc,&(p+i)->bal);
    }
    for(i=0;i<3;i++)
    {
     printf("enter 1 for deposit or 0 for withdrawl:",i+1);
     scanf("%d",&ch);
     if(ch==1)
     {
       printf("name is %s\t accountno is %d\t balance is %d\n",(p+i)->name,(p+i)->acc,(p+i)->bal);
     }
     else
     {
       printf("enter amount to withdraw:");
       scanf("%d",&amount);
       if((p+i)->bal>amount)
       {
        printf("name is %s\t accountno is %d\t balance is %d\n",(p+i)->name,(p+i)->acc,(p+i)->bal);
       }
       else
       {
         printf(" sorry your balance is low\n");
       }
     }
}
return 0;
}