#include<stdio.h>
#define N 8
  int stack[N];
  int top=-1;
  void push()
  { int x;
    printf("enter data:");
       scanf("%d",&x);
    if(top==N-1)
    {
        printf("overflow");
    }
    else
    { 
       top++;
       
       stack[top]=x;
    }
  }
  void pop()
  {
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    {
      int item;
      item=stack[top];
      top--;
      printf("popped item is :%d\n",item);
    }
  }
  void peek()
  {
     if(top==-1)
     {
        printf("no items");
     }
     else
     {
       printf("peeked item is: %d\n",stack[top]);
     }
  }
  void display()
  {
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
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