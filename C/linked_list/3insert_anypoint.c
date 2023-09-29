#include<stdio.h>
#include<stdlib.h>
struct node
 {
    int data;
    struct node *next;
 };
 struct node *head=0;
 int count=0;
void insertPos(struct node *head)
{ int pos,i=1;
    int data;
 struct node *temp,*newnode;
   newnode= (struct node *)malloc(sizeof(struct node));
   printf("enter position:");
   scanf("%d",&pos);
   if(pos>count)
   {
    printf("invalid position");
   }
   else{
    temp=head;
     while(i<(pos-1))
     {
        temp=temp->next;
        i++;
     }
     printf("enter data:");
     scanf("%d",&newnode->data);
     newnode->next=temp->next;
     temp->next=newnode;
   }
   

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
 { count++;
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
    insertPos(head);
    printf("\n");
    print();
    return 0;
}