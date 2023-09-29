#include<stdio.h>
#include<stdlib.h>
 struct node
 {
    int data;
    struct node *next;
 };
 struct node *temp,*newnode,*tail;
 int main()
{
 int choice;
 tail=0;
 int count=0;
 while(choice)
 {
   newnode= (struct node *)malloc(sizeof(struct node));
   printf("enter data:");
   scanf("%d",&newnode->data);
   newnode->next=0;
   if(tail==0)
   {
       tail=newnode;
       tail->next=newnode;
   }
   else
   {
      newnode->next=tail->next;
      tail->next=newnode;
      tail=newnode;
   }
   printf("Do you want to continue(0,1)?:");
   scanf("%d",&choice);
 }
     temp=tail->next;
    while(temp->next!=tail->next)
    {
        printf("%d->",temp->data);
        temp=temp->next;
        count++;
    }
    printf("%d",temp->data);
    count++;


    printf("\n%d",count);
    return 0;
}