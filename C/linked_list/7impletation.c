#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct node *temp,*newnode;
    head=NULL;
    int choice;
    while(choice)
    {
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter data:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       newnode->prev=NULL;
       if(head==NULL)
       {
         head=temp=newnode;
       }
       else
       {
          temp->next=newnode;
          newnode->prev=temp;
          temp=newnode;
       }
       printf("do you want to continue(0,1)?:");
       scanf("%d",&choice);
    }
    display();
}