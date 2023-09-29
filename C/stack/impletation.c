#include<stdio.h>
int N;
#define N 5
int stack[N];
int top=-1;
void push();
void pop();
void peek();
void display();
int main()
{
    int ch;
    do
    {
        printf("press 1:push press 2:pop press 3:peek press 4:display:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            default:printf("invalid choice");
        }
    }
    while(ch!=0);
    return 0;

}
void push()
{
    int x;
    printf("enter data:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("underflow\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
   int y;
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        y=stack[top];
        top--;
        printf("popped item is %d\n",y);
    } 
}
void peek()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else{
        printf("peeked value is %d\n",stack[top]);
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
      printf("%d\n",stack[i]);
    }
}