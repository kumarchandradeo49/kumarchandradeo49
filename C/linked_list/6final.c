#include<stdio.h>
#include<stdlib.h>
struct node
{   
    int data;
    struct node *next;
};
    
//  struct node *head=NULL;
  int count=0;
void display(struct node* head)
{  
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
struct node* insert_Beg(struct node *head)
{
    struct node *temp,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to add in beg:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    return head;
}

void insert_End(struct node *head)
{
    struct node *temp,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data to end in end:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insert_Pos(struct node *head)
{
    int pos,i=1;
     struct node *temp,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter position:");
    scanf("%d",&pos);
      temp=head;
      while(i<(pos-1))
      {
        temp=temp->next;
        i++;
      }
      printf("enter data to add at this position:");
      scanf("%d",&newnode->data);
      newnode->next=temp->next;
      temp->next=newnode;
}

struct node* delete_Beg(struct node *head)
{
    struct node *temp;
    temp=head;
    head=temp->next;//head=temp->next
    free(temp);
    return head;
}

void delete_End(struct node *head)
{
     struct node *temp,*prevnode;
     temp=head;
     while(temp->next!=NULL)
     {
        prevnode=temp;
        temp=temp->next;
     }
     if(temp==head)
     {
       head=NULL;
     }
     else
     {
        prevnode->next=NULL;
     }
     free(temp);
}

void delete_Pos(struct node *head)
{
    int pos,i=1;
     struct node *temp,*nextnode;
    printf("enter position:");
    scanf("%d",&pos);
    temp=head;
    while(i<(pos-1))
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(temp);
    display(head);
}



int main()
{
    struct node *temp,*newnode;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    int choice;
    printf("Do you want to continue(0,1)?:");
        scanf("%d",&choice);
    while(choice)
    {
    
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
          temp=head=newnode;
        }
        else
        {
          temp->next=newnode;
          temp=newnode;
        }
        printf("Do you want to continue(0,1)?:");
        scanf("%d",&choice);
    }
    
    display(head);
    printf("\n");
    head=insert_Beg(head);
    display(head);
    printf("\n");
    insert_End(head);
    display(head);
    printf("\n");
    insert_Pos(head);
    display(head);
    printf("\n");
    head=delete_Beg(head);
    display(head);
    printf("\n");
    delete_End(head);
    display(head);
    printf("\n");
    delete_Pos(head);
    
   return 0;
}