#include<stdio.h>
#include<stdlib.h>
void main()
{
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*newnode,*temp;
    head=0;
    int choice,count;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0; 
          //*next=head;head=newnode(for begnning)
          //next=0;temp=head;
        
        
          
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue(0,1)?");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
        count++;
    }
    getch(1);

}
