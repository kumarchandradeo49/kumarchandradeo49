#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
int count=0;
void insert_Beg()
{
    struct node *temp,*newnode;
     newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter data to insert at beg:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       newnode->prev=NULL;
     head->prev=newnode;
     newnode->next=head;
     head=newnode;
     count++;

}
void insert_End()
{
    struct node *temp,*newnode;
     newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter data to insert at end:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       newnode->prev=NULL;
       temp=head;
       while(temp->next!=NULL)
       {
        temp=temp->next;
       }
       temp->next=newnode;
       newnode->prev=temp;
       newnode->next=NULL;
       count++;
}
void insert_pos()
{  
       int pos,i=1;
       struct node *temp,*newnode;
       printf("enter position:");
       scanf("%d",&pos);
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter data to insert at this position:");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       newnode->prev=NULL;
       temp=head;
       while(i<pos-1)
       {
        temp=temp->next;
        i++;
       }
       newnode->prev=temp;
       newnode->next=temp->next;
       temp->next=newnode;
       newnode->next->prev=newnode;
       count++;

}
void delete_beg()
{
  struct node *temp;
  temp=head;
  head=temp->next;
  free(temp);
  count--;
}
void delete_end()
{
  struct node *temp,*tail;
  tail=head;
  while(tail->next!=NULL)
  {
    temp=tail;
    tail=tail->next;
  }
  tail->prev=NULL;
  temp->next=NULL;
  free(tail);
  count--;

}
void delete_pos()
{
   int i=1,pos;
   struct node *temp;
   temp=head;
   printf("enter position:");
   scanf("%d",&pos);
   while(i<pos)
   {
     temp=temp->next;
     i++;
   }
   temp->prev->next=temp->next;
   temp->next->prev=temp->prev;
   free(temp);
   count--;
}
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
       count++;
    }
    display();
    printf("\n");
    insert_Beg();
    display();
    printf("\n");
    insert_End();
    display();
    printf("\n");
    insert_pos();
    display();
    printf("\n");
    delete_beg();
    display();
    printf("\n");
    delete_end();
    display();
    printf("\n");
    delete_pos();
    display();
    printf("\n");
    printf("%d",count);

    return 0;
}