#include<stdio.h>
#include<stdlib.h>
struct node
 {
    int data;
    struct node *next;
 };
 struct node *head=0;
 int count=0;
void delEnd()
{
    int data;
 struct node *temp,*newnode,*prevnode;
   temp=head;
   while(temp->next!=0)
   {
    prevnode=temp;
    temp=temp->next;
   }
  if(temp==head)
  {
    head=0;
  }
  else{
    prevnode->next=0;
  }
    free(temp);
   
  
}
void print(){
struct node *temp=head;
    while(temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
 int main()
{
  
 int choice;
  struct node *temp,*newnode;
 while(choice)
 {
   newnode= (struct node *)malloc(sizeof(struct node));
   printf("enter data:");
   scanf("%d",&newnode->data);
   newnode->next=0;
   if(head==0)
   {
    head=temp=newnode;
   }
   else
   {
    temp->next=newnode;
    temp=newnode;
   }
   printf("Do you want to continue(0,1)?:");
   scanf("%d",&choice);
 }
   print();
   printf("\n");
    delEnd();
    printf("\n");
    print();
    return 0;
}