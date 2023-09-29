#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;
void push()
{
    int x;
    struct node *newnode;
    printf("enter data to push:");
    scanf("%d",&x);
   newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void pop()
{  
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is underflow");
    }
    else
    {
       printf("popped value is %d\n",top->data);
       top=top->link;
       free(temp);
    }
}
void peek()
{
    if(top==0)
    {
        printf("stack is underflow");
    }
    else{
        printf("peek value is %d\n",top->data);
    }
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty");
    }
    else{
        while(temp!=0)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
    printf("\n");
}
int main()
{
    int ch=1;
    while(ch!=0)
    {
        printf("enter choice:1:push:2;pop:3:peek:4:display:");
        int v;
        scanf("%d",&v);
    switch(v)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        default:printf("invalid choice\n");
    }
    printf("do you want to continue(0,1)?:");
  
    scanf("%d",&ch);

    }
}